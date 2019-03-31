#include <stdio.h>
#include <string.h>
#include "proj2.h"
#include "proj3.h"
#include "table.h"

extern FILE *treelst;
extern tree root;
extern int error;

int output_check = 0;

void traverse();
void inorder(tree root);
void analyze_DeclOp(tree root);
void analyze_MethodOp(tree root);
void analyze_Arg(tree root);
void statement_semantic(tree root);
void analyze_AssignOp(tree root);
int analyze_Var(tree root);
void expression_semantic(tree root);
void analyze_SimpleExp(tree root);
void analyze_RoutineCallOp(tree root);
void analyze_Term(tree root);
void analyze_Factor(tree root);
void analyze_Array(tree root, int dimension, int arr);
void analyze_VarInt(tree root, int dimension, int arr);
void analyze_ArrayInit(tree root, int dimension, int arr);
void analyze_ArrayCreate(tree root, int dimension, int arr);
void return_semantic(tree root);
void loop_semantic(tree root);
void condition_semantic(tree root);
int count_Args(tree root);
void get_to_left(tree root);
void get_to_left2(tree root);
void topDownLeft(tree root);
void topDownRight(tree root);
int countDimension(tree root);
void method_semantic(tree root);
void get_to_right(tree T);

extern FILE *yyin;

int main() {
	FILE *f = fopen("src1","r");
	yyin = f; 
	treelst = stdout;
	yyparse();
	if (error != 1) 
	{
		STInit();//initial symbol tree
		traverse(); //start traversing the tree
		STPrint(); //print symbol table
		printtree(root, 0); //print Grammar tree
		return 0; //exit with code 0
	}
	printf("%s\n", "there is an erro in Grammar part, and Grammar tree is not built yet!");
	return 0;
}

void traverse() {
	get_to_left(root);
}

/*
*get_to_left(tree T) -- get to the letmost child, so later we can start coming back to top and check all the symbols from bottom to up
*@tree a tree structure
*return void
*/
void get_to_left(tree T) {
	if (IsNull(T)) 
		return;
	else
	{
		get_to_left(LeftChild(T)); //expand left child every time and recursively till we get to the bottom then analyze each node back from bottom to up
		semantic_analyze(T);	
	}
}


/*
*semantic_analyze(tree T) -- gets a node as a tree and check the node type to pass the node to the appropriate function for further analysis
*/
void semantic_analyze(tree T) {
	if(NodeKind(T)==EXPRNode)
	{
		if(NodeOp(T) == StmtOp)
			statement_semantic(T);
		if(NodeOp(T) == RArgTypeOp)
			analyze_Arg(T);
		if(NodeOp(T) == ClassOp)
		{
			//class-semantic part
			tree node = RightChild(T);
			if (NodeKind(node) == EXPRNode) {
				if (NodeOp(node) == ClassDefOp) {
					tree classname = RightChild(node);
					if (NodeKind(classname) == EXPRNode)
						return;
					int class_id = IntVal(classname);
					int symbol_num = InsertEntry(class_id);
					SetAttr(symbol_num, KIND_ATTR, CLASS);
					SetNodeKind(classname, STNode);
					SetIntVal(classname, symbol_num);
					tree body = LeftChild(node);
					OpenBlock();
					get_to_left(node);
					CloseBlock();
				}
			}
		}
		if(NodeOp(T) == CommaOp)
			expression_semantic(LeftChild(T));
		if (NodeOp(T) == BoundOp)
			expression_semantic(RightChild(T));
		if (NodeOp(T) == VArgTypeOp)
			analyze_Arg(T);
		if (NodeOp(T) == BodyOp)
		{
			//analyze_BodyOp(T);
			//bodyclass_semantic
			tree T2 = RightChild(T);
			if (NodeKind(T2) == EXPRNode) 
			{
				if(NodeOp(T2) == StmtOp)
					get_to_left(T2);
				if(NodeOp(T2) == DeclOp)
					get_to_left2(T2);
				if(NodeOp(T2) == MethodOp)
					method_semantic(T2);
			}
			else if (output_check == 0 && NodeKind(root) == STRINGNode) 
				error_msg(STRING_MIS,CONTINUE,IntVal(T),0);
		}
		if (NodeOp(T) == DeclOp)
		{
			//Declrataions_semantic
			int symbol_num;	
			int dimension = 0;
			tree T2 = LeftChild(RightChild(T));
			int id = IntVal(T2);
			symbol_num = InsertEntry(id) ;
			if (symbol_num== 0)
				return;
			SetAttr(symbol_num, KIND_ATTR, VAR);
			SetNodeKind(T2, STNode);
			SetIntVal(T2, symbol_num);
			tree T3 = LeftChild(RightChild(RightChild(T)));
			SetAttr(symbol_num, TYPE_ATTR, (uintptr_t)T3);
			tree T4 = LeftChild(T3);
			if (NodeKind(T4) == IDNode) 
			{
				int typeIndex = IntVal(T4);
				int typeSymInd = LookUp(typeIndex);
				SetNodeKind(T4, STNode);
				SetIntVal(T4, typeSymInd);
			}
			dimension = countDimensions(RightChild(T3));
			if (dimension != 0) 
			{
				SetAttr(symbol_num, KIND_ATTR, ARR);
				SetAttr(symbol_num, DIMEN_ATTR, dimension);
			}
			tree variable_init_tree = RightChild(RightChild(RightChild(T)));
			variable_init_semantic(variable_init_tree, dimension, symbol_num);
		}
		


	}
	else if (NodeKind(T) == STRINGNode && output_check == 0)
	{
		error_msg(STRING_MIS,CONTINUE,IntVal(T),0);
	}
}

// Analyze a DeclOp
// the DeclOp is passed in
void analyze_DeclOp2(tree root) {
	int id, nSymInd;	
	int dimension = 0;
	// Variable to declare
	tree name = LeftChild(RightChild(root));
	id = IntVal(name);
	nSymInd = InsertEntry(id);
	if (nSymInd == 0) {
		return;
	}
	SetAttr(nSymInd, KIND_ATTR, VAR);
	SetNodeKind(name, STNode);
	SetIntVal(name, nSymInd);
	// Type Stuff
	tree typeTree = LeftChild(RightChild(RightChild(root)));
	SetAttr(nSymInd, TYPE_ATTR, (uintptr_t)typeTree);
	tree type = LeftChild(typeTree);
	if (NodeKind(type) == IDNode) {
		int typeIndex = IntVal(type);
		int typeSymInd = LookUp(typeIndex);
		SetNodeKind(type, STNode);
		SetIntVal(type, typeSymInd);
	}
	// Array Stuff
	dimension = countDimensions(RightChild(typeTree));
	// Set the number of dimensions for arrays
	if (dimension != 0) {
		SetAttr(nSymInd, KIND_ATTR, ARR);
		SetAttr(nSymInd, DIMEN_ATTR, dimension);
	}
	tree varInt = RightChild(RightChild(RightChild(root)));
	// Analyze if the var's are being initialized
	analyze_VarInt(varInt, dimension, nSymInd);
}


// Analyze a Statement
void statement_semantic(tree T) {
	tree rightT = RightChild(T);//open right node of statement

	if (IsNull(rightT)) //return if this is the final term
		return;
	if (NodeKind(rightT) != EXPRNode &&  output_check == 0 && NodeKind(T) == STRINGNode ) 
		error_msg(STRING_MIS,CONTINUE,IntVal(T),0);

	//continue expanding the tree for subtree of statement
	switch (NodeOp(rightT)) 
	{
		case ReturnOp:
			return_semantic(rightT); break;
		case IfElseOp:
			condition_semantic(rightT); break;
		case LoopOp:
			expression_semantic(LeftChild(rightT)); get_to_left(RightChild(rightT)); break;
		case RoutineCallOp:
			analyze_RoutineCallOp(rightT); break;
		case AssignOp:
			analyze_AssignOp(rightT); break;
	}
}

/*
*return Semantic is a function that recieve a subtree with node "ReturnOp" and threat the subtree as an Expression for left-child of this subtree
*/
void return_semantic(tree T) {
	tree T2 = LeftChild(T);
	if (!IsNull(T2))
		expression_semantic(T2);
}

// Analyze an IfElse Construct
void condition_semantic(tree T) {
	if (IsNull(T))
		return;
	condition_semantic(LeftChild(T));

	tree T2 = RightChild(T);
	if (NodeOp(T2) == StmtOp) 
	{
		get_to_left(T2);
	}
	if (NodeOp(T2) == CommaOp) 
	{	
		expression_semantic(LeftChild(T2));
		get_to_left(RightChild(T2));
	}
	
}

/*
*
*/
void expression_semantic(tree T) {
	if (NodeKind(T) != EXPRNode &&  output_check == 0 && NodeKind(T) == STRINGNode) //throw an error
		error_msg(STRING_MIS,CONTINUE,IntVal(T),0);
	else if(NodeKind(T) == EXPRNode )
	{
		if(NodeOp(T) == GEOp || NodeOp(T) == LTOp || NodeOp(T) == NEOp || NodeOp(T) == EQOp || NodeOp(T) == GTOp || NodeOp(T) == LEOp)
		{
			analyze_SimpleExp(LeftChild(T));
			analyze_SimpleExp(RightChild(T));
		}
		else //non terminal expression
			analyze_SimpleExp(T);
	}
}




/*
*get_to_left2(tree T) -- get to the letmost child, but check the semantic before calling recurisvely
*@tree a tree structure
*return void
*/
void get_to_left2(tree T) {
	if (IsNull(T)) 
		return;
	else
	{
		semantic_analyze(T);
		get_to_left(LeftChild(T)); 
	}
}


void method_semantic(tree T) {	
	int symbol_num;
	tree T2 = LeftChild(LeftChild(T));
	symbol_num = InsertEntry(IntVal(T2));
	if (symbol_num == -1)
		return;
	SetNodeKind(T2, STNode);
	SetIntVal(T2,symbol_num);
	tree T3 = RightChild(RightChild(LeftChild(T)));
	if (IsNull(T3))
		SetAttr(symbol_num, KIND_ATTR, PROCE);	
	else 
	{
		SetAttr(symbol_num, KIND_ATTR, FUNC);	
		SetAttr(symbol_num, TYPE_ATTR, (uintptr_t)T3); 
	}
	OpenBlock();
	int args = count_Args(LeftChild(RightChild(LeftChild(root))));
	get_to_right(LeftChild(RightChild(LeftChild(T))));
	SetAttr(symbol_num, ARGNUM_ATTR, args);
	get_to_left(RightChild(T));
	CloseBlock();
}	

/*
*get_to_Right(tree T) -- get to the rightmost child, so later we can start coming back to top and check all the symbols from bottom to up
*@tree a tree structure
*return void
*/
void get_to_right(tree T) {
	if (IsNull(T)) 
		return;
	else
	{
		semantic_analyze(T);
		get_to_right(RightChild(T));
	}
}

int argument_num(tree T) {
	if(!IsNull(T))
		return argument_num(RightChild(root)) + 1;
	else
		return 0;	
}

void variable_init_semantic(tree T, int dimension, int arr) {
	if (IsNull(T))
		return;
	if (NodeKind(T) == EXPRNode && NodeOp(T) == ArrayTypeOp)
	{
		//array_semantic
		if (IsNull(LeftChild(T)))
			return;
		if (NodeOp(LeftChild(T)) == CommaOp)
			array_init_semantic(LeftChild(T), dimension, arr);
		else 
		{
			//array-semantic
			if (check_dim(T) != dimension)
				error_msg(INDX_MIS,CONTINUE,GetAttr(arr, NAME_ATTR),0);
			else
				get_to_left(T);
		}
	}
	else if (NodeKind(T) == EXPRNode && NodeOp(T) != ArrayTypeOp)
		expression_semantic(T);
	else if (NodeKind(T) != EXPRNode && output_check == 0 && NodeKind(T) == STRINGNode) 
	{
		error_msg(INDX_MIS,CONTINUE,IntVal(T),0);
	}
}



void array_init_semantic(tree T, int dimension, int arr) {
	if (!IsNull(T)) 
	{
		array_init_semantic(LeftChild(T), dimension, arr);
		variable_init_semantic(RightChild(T), dimension, arr);
	}
	else
		return;
}

int check_dim(tree T) {
	if (!IsNull(T))
		return check_dim(LeftChild(T)) + 1;
	return 0;
}




//------------------------------------------------------------------------------------------------------

// Analyze nodes using a left recursive strategy
// semantic_analyze the nodes on the way down
void topDownLeft(tree root) {
	if (IsNull(root)) {
		return;
	}
	semantic_analyze(root);
	topDownLeft(LeftChild(root));
}

// Analyze Nodes using a right recursive strategy
// semantic_analyze nodes on the way down
void topDownRight(tree root) {
	if (IsNull(root)) {
		return;
	}
	semantic_analyze(root);
	topDownRight(RightChild(root));
}



// Analyze a class in the program
void analyze_ClassOp(tree root) {
	int id, nSymInd;
	// Grab the ClassDefOp Node
	tree node = RightChild(root);
	if (NodeKind(node) == EXPRNode) {
		if (NodeOp(node) == ClassDefOp) {
			tree classname = RightChild(node);
			if (NodeKind(classname) == EXPRNode) {
				return;
			}
			id = IntVal(classname);
			// Look Up the class
			nSymInd = InsertEntry(id);
			// Insert class info
			SetAttr(nSymInd, KIND_ATTR, CLASS);
			// Transform the IDnode
			SetNodeKind(classname, STNode);
			SetIntVal(classname, nSymInd);
			tree body = LeftChild(node);
			// Open a new nesting level (scope)
			OpenBlock();
			// recursivly analyze what will be BodyOp Nodes
			get_to_left(node);
			// Close scope
			CloseBlock();
		}
	}
}

// Analyze a Body Node
void analyze_BodyOp(tree root) {
	tree node = RightChild(root);
	if (NodeKind(node) == EXPRNode) {
		switch(NodeOp(node))
		{
			case DeclOp:
				// Analyze all the Decls untill Dummy
				topDownLeft(node);
				break;
			case MethodOp:
				analyze_MethodOp(node);
				break;
			case StmtOp:
				// Analyze all Stmt recursivly
				get_to_left(node);
				break;
			default:
				break;
		}
	}
	else {
		if (NodeKind(root) == STRINGNode) {
			if (output_check == 0) {
				error_msg(
					STRING_MIS,
					CONTINUE,
					IntVal(root),
					0);
			}
		}
	}
}

// Analyze Method
// The node passed in is the MethodOp Node
void analyze_MethodOp(tree root) {	
	// Add the name
	tree name = LeftChild(LeftChild(root));
	int nSymInd = InsertEntry(IntVal(name));
	if (nSymInd == -1) {
		return;
	}
	// Transform the node
	SetNodeKind(name, STNode);
	SetIntVal(name, nSymInd);
	// fetch the type tree
	tree type = RightChild(RightChild(LeftChild(root)));
	if (IsNull(type)) {
		// If there is no type then it is void and a procedure
		SetAttr(nSymInd, KIND_ATTR, PROCE);	
	} else {
		// if there is a type it is a function and save the type
		SetAttr(nSymInd, KIND_ATTR, FUNC);	
		SetAttr(nSymInd, TYPE_ATTR, (uintptr_t)type); 
	}
	// Open a new scope
	OpenBlock();
	// Prase arguments
	// Count the number or arguments
	int numArgs = count_Args(LeftChild(RightChild(LeftChild(root))));
	// Analyze each argument
	topDownRight(LeftChild(RightChild(LeftChild(root))));
	// set the number or agrs
	SetAttr(nSymInd, ARGNUM_ATTR, numArgs);
	// analyze the statements
	get_to_left(RightChild(root));
	// close scope
	CloseBlock();
}	

// Count The number of args in the method
int count_Args(tree root) {
	if (IsNull(root)) {
		return 0;
	}
	//analyze_Arg(root);
	return count_Args(RightChild(root)) + 1;
}

// Analyze a VArgTypeOp or RArgType
// The node passed in is the R/VArgNode
void analyze_Arg(tree root) {
	tree name = LeftChild(LeftChild(root));
	tree type = RightChild(LeftChild(root));
	// Insert the arg
	int nSymInd = InsertEntry(IntVal(name));
	// Set it to a Value arg or reference arg
	if (NodeOp(root) == RArgTypeOp) {
		SetAttr(nSymInd, KIND_ATTR, REF_ARG);
	} else {
		SetAttr(nSymInd, KIND_ATTR, VALUE_ARG);
	} 
	// Set the type
	SetAttr(nSymInd, TYPE_ATTR, (uintptr_t)type);
	// Transform the node
	SetNodeKind(name, STNode);
	SetIntVal(name, nSymInd);
}

// Analyze a DeclOp
// the DeclOp is passed in
void analyze_DeclOp(tree root) {
	int id, nSymInd;	
	int dimension = 0;
	// Variable to declare
	tree name = LeftChild(RightChild(root));
	id = IntVal(name);
	nSymInd = InsertEntry(id);
	if (nSymInd == 0) {
		return;
	}
	SetAttr(nSymInd, KIND_ATTR, VAR);
	SetNodeKind(name, STNode);
	SetIntVal(name, nSymInd);
	// Type Stuff
	tree typeTree = LeftChild(RightChild(RightChild(root)));
	SetAttr(nSymInd, TYPE_ATTR, (uintptr_t)typeTree);
	tree type = LeftChild(typeTree);
	if (NodeKind(type) == IDNode) {
		int typeIndex = IntVal(type);
		int typeSymInd = LookUp(typeIndex);
		SetNodeKind(type, STNode);
		SetIntVal(type, typeSymInd);
	}
	// Array Stuff
	dimension = countDimensions(RightChild(typeTree));
	// Set the number of dimensions for arrays
	if (dimension != 0) {
		SetAttr(nSymInd, KIND_ATTR, ARR);
		SetAttr(nSymInd, DIMEN_ATTR, dimension);
	}
	tree varInt = RightChild(RightChild(RightChild(root)));
	// Analyze if the var's are being initialized
	//analyze_VarInt(varInt, dimension, nSymInd);
	variable_init_semantic(varInt, dimension, nSymInd);
}

// Analyze var initilizations
void analyze_VarInt(tree root, int dimension, int arr) {
	if (IsNull(root)) {
		return;
	}
	if (NodeKind(root) == EXPRNode) {
		// If it is an array check the bounds
		if (NodeOp(root) == ArrayTypeOp) {
			analyze_Array(root, dimension, arr);
		} else {
			// if it is a normal var it is just an expression
			expression_semantic(root);
		}
	}
	else {
		if (NodeKind(root) == STRINGNode) {
			if (output_check == 0) {
				error_msg(
					STRING_MIS,
					CONTINUE,
					IntVal(root),
					0);
			}
		}
	}
}

// Analyze if an array is initalized
void analyze_Array(tree root, int dimension, int arr) {
	tree start = LeftChild(root);
	if (IsNull(start)) {
		return;
	}
	// if there are Comma nodes it is an Array Initilization
	if (NodeOp(start) == CommaOp) {
		analyze_ArrayInit(start, dimension, arr);
	// else there itis an Array Creation
	} else {
		analyze_ArrayCreate(start, dimension, arr);
	}
}

// analyze an array initilization
void analyze_ArrayInit(tree root, int dimension, int arr) {
	if (IsNull(root)) {
		return;
	}
	// recurse to the last one
	analyze_ArrayInit(LeftChild(root), dimension, arr);
	// analyze the var initializeation
	analyze_VarInt(RightChild(root), dimension, arr);
}

// analyze the creation of an array
void analyze_ArrayCreate(tree root, int dimension, int arr) {
	int dimensions = countDimensionsLeft(root);
	// the dimensions are incorrect report error
	if (dimensions != dimension) {
		error_msg(
			INDX_MIS, 
			CONTINUE,
			GetAttr(arr, NAME_ATTR), 
			0);
	}
	get_to_left(root);
}

// recursivly count the number of nodes to the right before a Dummy
int countDimensions(tree root) {
	if (IsNull(root)) {
		return 0;
	}
	return countDimensions(RightChild(root)) + 1;
}

// recurisvly count the number of nodes to the left before a Dummy
int countDimensionsLeft(tree root) {
	if (IsNull(root)) {
		return 0;
	}
	return countDimensionsLeft(LeftChild(root)) + 1;
}







// Analyze a loop
void loop_semantic(tree root) {
	expression_semantic(LeftChild(root));
	get_to_left(RightChild(root));
}

// Analyze an Assignment
void analyze_AssignOp(tree root) {
	tree var = RightChild(LeftChild(root));
	analyze_Var(var);
	tree exp = RightChild(root);
	expression_semantic(exp);
	// For use when type checking
	/*
	int lhs = analyze_Var(var);
	int rhs = expression_semantic(exp);
	if (IsAttr(lhs, TYPE_ATTR) && IsAttr(rhs, TYPE_ATTR)) {
		check and compare types
		if not equal
			error_msg(
				TYPE_MIS,
				CONTINUE,
				rhs,
				lhs);		
	} */
}

/*
Currently the tree is like 
	select
	/		\
  index		select
			/	\...
			index

rather than
	select
	/		\
	index
	/	\
	Exp	 index
		 /   \
		Exp   Dum

I should fix this grammer
*/
// Returns the index of the var
int analyze_Var(tree root) {
	if (NodeKind(root) != EXPRNode) {
		return;
	}
	// Analyse the name of the var
	tree name = LeftChild(root);
	int nSymInd = LookUp(IntVal(name));
	if (nSymInd == 0) {
		return 0;
	}
	//int kind = GetAttr(nSymInd, KIND_ATTR);
	// Set it to a symbol table node
	SetNodeKind(name, STNode);
	SetIntVal(name, nSymInd);
	// Find if the var is a class (Directly like Test.field or 
	// indirectly like Test t; t.field
	int classIndex = findClass(nSymInd);
	int usedDim = 0;
	tree select = RightChild(root);
	// Iterate through the select sub tree
	while (!IsNull(select)) {
		if (NodeOp(LeftChild(select)) == IndexOp) {
			// Used in the correct parse tree
			// int usedDim = countDimensions(LeftChild(select));
			// topDownRight(LeftChild(select));
			
			// If there is an index node increment index count
			usedDim += 1;
			// If the variable or previous field is not an array 
			// then report an error
			if (IsAttr(nSymInd, KIND_ATTR)) {			
				if (GetAttr(nSymInd, KIND_ATTR) != ARR) {
					error_msg(
						ARR_TYPE_MIS, 
						CONTINUE, 
						GetAttr(nSymInd, NAME_ATTR),
						0);
					select = RightChild(select);
					continue;
				}
			}

			// Used in the correct parse tree
			//if (usedDim != GetAttr(element, DIMEN_ATTR)) {
			//	error_msg(
			//		ARR_DIME_MIS, 
			//		CONTINUE, 
			//		GetAttr(element, NAME_ATTR), 
			//		0);
			//}

			// Analyze the expression in the index
			expression_semantic(LeftChild(LeftChild(select)));
		} 
		if (NodeOp(LeftChild(select)) == FieldOp) {
			// If the previous var or field is not a class then 
			// report an error, it shouldn't have a field
			if (classIndex == -1) {
				error_msg(
					TYPE_MIS,
					CONTINUE,
					GetAttr(nSymInd, NAME_ATTR), 
					0);
				return 0;
			}

			// Move this up if I rewrite the grammer	
			// Check if the previous var matched the dimensions
			//if (GetAttr(element, KIND_ATTR) == ARR) {		
			//	if (usedDim != GetAttr(element, DIMEN_ATTR)) {
			//		error_msg(
			//			ARR_DIME_MIS, 
			//			CONTINUE, 
			//			GetAttr(element, NAME_ATTR), 
			//			0);
			//	}
			//}

			// Grab the field name node
			tree fieldName = LeftChild(LeftChild(select));
			// Look up and find the one in the right scope
			nSymInd = LookUpField(classIndex, IntVal(fieldName));
			if (nSymInd == 0) {
				return 0;
			}
			SetNodeKind(fieldName, STNode);
			SetIntVal(fieldName, nSymInd);
			// Find class index of the field
			classIndex = findClass(nSymInd);
			usedDim = 0;
		}
		// grab next node for loop
		select = RightChild(select);
	}  
	// Compare the number of index's with the number it had. This only
	// works on the last field because all fields should be classes 
	// because we can't have an array of classes
	if (IsAttr(nSymInd, KIND_ATTR)) {
		if (GetAttr(nSymInd, KIND_ATTR) == ARR) {
			if (usedDim != GetAttr(nSymInd, DIMEN_ATTR)) {
				error_msg(
					INDX_MIS, 
					CONTINUE, 
					GetAttr(nSymInd, NAME_ATTR), 
					0);
			}
		}
	}
	return nSymInd;
}



// Analyze a simple expression
void analyze_SimpleExp(tree root) {
	int last = 0;
	if (IsNull(root)) {
		return;
	}
	if (NodeKind(root) == EXPRNode) {
		switch (NodeOp(root)) {
			case AddOp:
			case SubOp:
			case OrOp:
				analyze_SimpleExp(LeftChild(root));
				break;
			case UnaryNegOp:
				last = 1;
				analyze_Term(LeftChild(root));
				break;
			default:
				last = 1;
				analyze_Term(root);
				break;
		}
		if (last == 0) {
			analyze_Term(RightChild(root));
		}
	}
	else {
		if (NodeKind(root) == STRINGNode) {
			if (output_check == 0) {
				error_msg(
					STRING_MIS,
					CONTINUE,
					IntVal(root),
					0);
			}
		}
	}
}

// Analyze a Term
void analyze_Term(tree root) {
	int last = 0;
	if (IsNull(root)) {
		return;
	}
	if (NodeKind(root) == EXPRNode) {
		switch (NodeOp(root)) {
			case MultOp:
			case DivOp:
			case AndOp:
				analyze_Term(LeftChild(root));
				break;
			default:
				last = 1;
				analyze_Factor(root);
				break;
		}
		if (last == 0) {
			analyze_Factor(RightChild(root));
		}
	}
	else {
		if (NodeKind(root) == STRINGNode) {
			if (output_check == 0) {
				error_msg(
					STRING_MIS,
					CONTINUE,
					IntVal(root),
					0);
			}
		}
	}
}

// Analyze a Factor
void analyze_Factor(tree root) {
	if (IsNull(root)) {
		return;
	}
	if (NodeKind(root) == EXPRNode) {
		switch (NodeOp(root)) {
			case VarOp:
				analyze_Var(root);
				break;
			case RoutineCallOp:
				analyze_RoutineCallOp(root);
				break;
			// Error?m
			default:
				expression_semantic(root);
				break;
		}
	}
	else {
		if (NodeKind(root) == STRINGNode) {
			if (output_check == 0) {
				error_msg(
					STRING_MIS,
					CONTINUE,
					IntVal(root),
					0);
			}
		}
	}
}

// Analyze a Rountine Call
// Add type checking?
void analyze_RoutineCallOp(tree root) {
	tree var = LeftChild(root);	
	int name = analyze_Var(var);
	if (name == 0) {
		return;
	}
	// Set a global to mark if we are currently using an output function
	if (!strcmp(getname(GetAttr(name, NAME_ATTR)), "println")) {
		output_check = 1;
	}
	// If this is not a procedure or function report error
	if (GetAttr(name, KIND_ATTR) != FUNC
			&& GetAttr(name, KIND_ATTR) != PROCE) {
		error_msg(
			PROCE_MISMATCH,
			CONTINUE,
			GetAttr(name, NAME_ATTR),
			0);
		return;
	}
	// check the argument numbers
	int args = countDimensions(RightChild(root));
	if (IsAttr(name, ARGNUM_ATTR)) { 
		if (args != GetAttr(name, ARGNUM_ATTR)) {
			error_msg(
				ARGUMENTS_NUM2,
				CONTINUE,
				GetAttr(name, NAME_ATTR),
				0);
			return;
		}
	}
	// Analyze the arguments
	topDownRight(RightChild(root));
	output_check = 0;
}
