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
void semantic_analyze(tree root);
void semantic_analyze_node(tree root);
void semantic_analyze_leaf(tree root);
void class_semantic(tree root);
void analyze_BodyOp(tree root);
void analyze_DeclOp(tree root);
void method_semantic(tree root);
void argument_semantic(tree root);
void statement_semantic(tree root);
void assignment_semantic(tree root);
int variable_semantic(tree root);
void expression_semantic(tree root);
void si_expression_semantic(tree root);
void routinecall_semantic(tree root);
void term_semantic(tree root);
void factor_semantic(tree root);
void analyze_Array(tree root, int dimension, int arr);
void variable_init_semantic(tree root, int dimension, int arr);
void array_init_semantic(tree root, int dimension, int arr);
void analyze_ArrayCreate(tree root, int dimension, int arr);
void return_semantic(tree root);
void loop_semantic(tree root);
void condition_semantic(tree root);
int argument_num(tree root);
void get_to_left(tree root);
void get_to_left2(tree root);
void get_to_right(tree root);
int countDimension(tree root);

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


/*
*semantic_analyze(tree T) -- gets a node as a tree and check the node type to pass the node to the appropriate function for further analysis
*/
void semantic_analyze(tree T) {
	if(NodeKind(T)==EXPRNode)
	{
		if(NodeOp(T) == StmtOp)
			statement_semantic(T);
		if(NodeOp(T) == RArgTypeOp)
			argument_semantic(T);
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
			argument_semantic(T);
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
			int id = IntVal(LeftChild(RightChild(T)));
			if (InsertEntry(id) == 0)
				return;
			else
				symbol_num = InsertEntry(id);

			SetAttr(symbol_num, KIND_ATTR, VAR);
			SetNodeKind(LeftChild(RightChild(T)), STNode);
			SetIntVal(LeftChild(RightChild(T)), symbol_num);
			tree typeTree = LeftChild(RightChild(RightChild(T)));
			SetAttr(symbol_num, TYPE_ATTR, (uintptr_t)typeTree);
			tree type = LeftChild(typeTree);
			if (NodeKind(type) == IDNode) 
			{
				int typeIndex = IntVal(type);
				int typeSymInd = LookUp(typeIndex);
				SetNodeKind(type, STNode);
				SetIntVal(type, typeSymInd);
			}
			dimension = countDimensions(RightChild(typeTree));
			if (dimension > 0) 
			{
				SetAttr(symbol_num, KIND_ATTR, ARR);
				SetAttr(symbol_num, DIMEN_ATTR, dimension);
			}
			tree varInt = RightChild(RightChild(RightChild(T)));
			variable_init_semantic(varInt, dimension, symbol_num);
		}
		


	}
	else if (NodeKind(T) == STRINGNode && output_check == 0)
	{
		error_msg(STRING_MIS,CONTINUE,IntVal(T),0);
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
				get_to_left2(node);
				break;
			case MethodOp:
				method_semantic(node);
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


// Analyze a Statement
void statement_semantic(tree T) {
	int arg_index = 0;
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

			//routinecallop_semantic part
			if (variable_semantic(LeftChild(rightT)) == 0) 
				return;
			else
				arg_index = variable_semantic(LeftChild(rightT)) ;
			if (!strcmp(getname(GetAttr(arg_index, NAME_ATTR)), "println"))
				output_check = 1;
			if (GetAttr(arg_index, KIND_ATTR) != FUNC && GetAttr(arg_index, KIND_ATTR) != PROCE) 
			{
				error_msg(PROCE_MISMATCH,CONTINUE,GetAttr(arg_index, NAME_ATTR),0);
				return;
			}
			if (IsAttr(arg_index, ARGNUM_ATTR)) 
				if (countDimensions(RightChild(rightT)) != GetAttr(arg_index, ARGNUM_ATTR)) 
				{
					error_msg(ARGUMENTS_NUM2,CONTINUE,GetAttr(arg_index, NAME_ATTR),0);
					return;
				}
			// Analyze the arguments
			get_to_right(RightChild(rightT));
			output_check = 0;
			break;
		case AssignOp:
			assignment_semantic(rightT); break;
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
			si_expression_semantic(LeftChild(T));
			si_expression_semantic(RightChild(T));
		}
		else //non terminal expression
			si_expression_semantic(T);
	}
}




void si_expression_semantic(tree T) {
	if(!IsNull(T) && NodeKind(T) == EXPRNode)
	{
		if(NodeOp(T) == AddOp || NodeOp(T) == OrOp || NodeOp(T) == SubOp)
		{
				si_expression_semantic(LeftChild(T));
				term_semantic(RightChild(T));
		}
		else if(NodeOp(T) == UnaryNegOp)
		{
				term_semantic(LeftChild(T));
		}
		else
			term_semantic(T);
	}
	if(!IsNull(T) && output_check == 0 && NodeKind(T) == STRINGNode)
	{
		error_msg(STRING_MIS,CONTINUE,IntVal(T),0);
	}
	if(IsNull(T))
		return;
}

void term_semantic(tree T) {
	int arg_index;
	if(!IsNull(T) && NodeKind(T) == EXPRNode)
	{
		if(NodeOp(T) == MultOp || NodeOp(T) == DivOp || NodeOp(T) == AndOp)
		{
				term_semantic(LeftChild(T));
				T = RightChild(T); //get rught child for expanding as factor_semantic
		}
		//Factor_semantic part
		if(!IsNull(T) && NodeKind(T) == EXPRNode)
		{
			if(NodeOp(T) == VarOp)
				variable_semantic(T);
			else if(NodeOp(T) == RoutineCallOp)
				{
					//routinecallop_semantic part
					if (variable_semantic(LeftChild(T)) == 0) 
						return;
					else
						arg_index = variable_semantic(LeftChild(T)) ;
					if (!strcmp(getname(GetAttr(arg_index, NAME_ATTR)), "println"))
						output_check = 1;
					if (GetAttr(arg_index, KIND_ATTR) != FUNC && GetAttr(arg_index, KIND_ATTR) != PROCE) 
					{
						error_msg(PROCE_MISMATCH,CONTINUE,GetAttr(arg_index, NAME_ATTR),0);
						return;
					}
					if (IsAttr(arg_index, ARGNUM_ATTR)) 
						if (countDimensions(RightChild(T)) != GetAttr(arg_index, ARGNUM_ATTR)) 
						{
							error_msg(ARGUMENTS_NUM2,CONTINUE,GetAttr(arg_index, NAME_ATTR),0);
							return;
						}
					// Analyze the arguments
					get_to_right(RightChild(T));
					output_check = 0;
				}
			else 
				expression_semantic(T);
		}
		if(!IsNull(T) && output_check == 0 && NodeKind(T) == STRINGNode)
		{
			error_msg(STRING_MIS,CONTINUE,IntVal(T),0);
		}
		if(IsNull(T))
			return;
	}
	if(!IsNull(T) && output_check == 0 && NodeKind(T) == STRINGNode)
	{
		error_msg(STRING_MIS,CONTINUE,IntVal(T),0);
	}
	if(IsNull(T))
		return;
}

int variable_semantic(tree T) {
	if (NodeKind(T) != EXPRNode)
		return;

	
	if (LookUp(IntVal(LeftChild(T))) == 0)
		return 0;

	int symbol_num = LookUp(IntVal(LeftChild(T)));
	int class_symbol_num = findClass(symbol_num);
	int dimension = 0;
	SetNodeKind(LeftChild(T), STNode);
	SetIntVal(LeftChild(T), symbol_num);
	
	tree subtree = RightChild(T);
	// Iterate through the subtree sub tree
	while (!IsNull(subtree)) {
		if (NodeOp(LeftChild(subtree)) == IndexOp) 
		{
			dimension += 1;
			if (IsAttr(symbol_num, KIND_ATTR) && GetAttr(symbol_num, KIND_ATTR) != ARR) 
			{			
				error_msg(ARR_TYPE_MIS,CONTINUE,GetAttr(symbol_num, NAME_ATTR),0);
				subtree = RightChild(subtree);
				continue;
			}
			expression_semantic(LeftChild(LeftChild(subtree)));
		} 
		if (NodeOp(LeftChild(subtree)) == FieldOp) {
			if (class_symbol_num == -1) 
			{
				error_msg(TYPE_MIS,CONTINUE,GetAttr(symbol_num, NAME_ATTR),0);
				return 0;
			}
			tree fieldName = LeftChild(LeftChild(subtree));
			symbol_num = LookUpField(class_symbol_num, IntVal(fieldName));
			if (symbol_num == 0) 
				return 0;
			SetNodeKind(fieldName, STNode);
			SetIntVal(fieldName, symbol_num);
			class_symbol_num = findClass(symbol_num);
			dimension = 0;
		}
		subtree = RightChild(subtree);
	}  
	if (IsAttr(symbol_num, KIND_ATTR) && GetAttr(symbol_num, KIND_ATTR) == ARR && dimension != GetAttr(symbol_num, DIMEN_ATTR)) 
	{
		error_msg(INDX_MIS,CONTINUE,GetAttr(symbol_num, NAME_ATTR),0);
	}
	return symbol_num;
}

void argument_semantic(tree T) {
	int symbol_num = InsertEntry(IntVal(LeftChild(LeftChild(T))));
	// Set it to a Value arg or reference arg
	if (NodeOp(T) == RArgTypeOp)
		SetAttr(symbol_num, KIND_ATTR, REF_ARG);
	if (NodeOp(T) != RArgTypeOp)
		SetAttr(symbol_num, KIND_ATTR, VALUE_ARG);
	SetAttr(symbol_num, TYPE_ATTR, (uintptr_t)RightChild(LeftChild(T)));
	SetNodeKind(LeftChild(LeftChild(T)), STNode);
	SetIntVal(LeftChild(LeftChild(T)), symbol_num);
}


void method_semantic(tree T) {	
	int symbol_num;
	if (InsertEntry(IntVal(LeftChild(LeftChild(T)))) == -1)
		return;
	else
		symbol_num = InsertEntry(IntVal(LeftChild(LeftChild(T))));
	
	SetNodeKind(LeftChild(LeftChild(T)), STNode);
	SetIntVal(LeftChild(LeftChild(T)), symbol_num);
	if (IsNull(RightChild(RightChild(LeftChild(T)))))
		SetAttr(symbol_num, KIND_ATTR, PROCE);	
	else 
	{
		SetAttr(symbol_num, KIND_ATTR, FUNC);	
		SetAttr(symbol_num, TYPE_ATTR, (uintptr_t)RightChild(RightChild(LeftChild(T)))); 
	}
	OpenBlock();
	
	get_to_right(LeftChild(RightChild(LeftChild(T))));
	SetAttr(symbol_num, ARGNUM_ATTR, argument_num(LeftChild(RightChild(LeftChild(T)))));
	get_to_left(RightChild(T));
	CloseBlock();
}	




int argument_num(tree T) {
	if(!IsNull(T))
		return argument_num(RightChild(root)) + 1;
	else
		return 0;	
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



int check_dim(tree T) {
	if (!IsNull(T))
		return check_dim(LeftChild(T)) + 1;
	return 0;
}

void loop_semantic(tree T) {
	expression_semantic(LeftChild(T));
	get_to_left(RightChild(T));
}

int countDimensions(tree T) {
	if (!IsNull(T))
		return countDimensions(LeftChild(T)) + 1;
	return 0;
}


void assignment_semantic(tree root) {
	tree var = RightChild(LeftChild(root));
	variable_semantic(var);
	tree exp = RightChild(root);
	expression_semantic(exp);
}









