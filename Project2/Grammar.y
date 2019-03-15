%{ /*Definition*/
#include "proj2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "tokens.h"
int lineNumber,columnNumber;
tree temp_tree1, temp_tree2, type_tree; /* defined two tree variable for temporary usage*/
%}


%token <intg> errIdentifier errComment errString errIntzero errOther COMMENT DECLARATIONnum ASSGNum PROGRAMnum IDnum SEMInum ANDnum DOTnum ENDDECLARATIONSnum EQUALnum GTnum INTnum LBRACnum LPARENnum METHODnum NEnum ORnum RBRACnum RPARENnum VALnum WHILEnum CLASSnum COMMAnum DIVIDEnum ELSEnum EQnum GEnum ICONSTnum IFnum LBRACEnum LEnum LTnum MINUSnum NOTnum PLUSnum RBRACEnum RETURNnum SCONSTnum TIMESnum VOIDnum malformedComment

%token<intg>EOFnum 0

%type  <tptr>  Program ClassDecl ClassDeclLoop ClassBody Decls FieldDeclLoop FieldDecl MethodDecl Type Block MethodDeclLoop FieldDeclLoop2 VariableDeclId VariableInitializer BrackLoop Expression ArrayIntializer ArrayCreationExpression VariableInitializerLoop ArrayCreationExpressionLoop FormalParameterListLoopNoVal FormalParameterListLoopWithVal ValLoop FormalParameterListNoType FormalParameterListWithType StatementList TypeList StatementLoop Statement AssignmentStatement ReturnStatement IfStatement  Variable SimpleExpression SimpleExpressionList Term FactorList Factor UnsignedConstant ExpressionLoop VariableLoop

%type <tptr> WhileStatement MethodCallStatement

%right  	GTnum GEnum LTnum LEnum EQnum NEnum   
%left  		PLUSnum MINUSnum ORnum TIMESnum DIVIDEnum ANDnum




%% /*yacc specification */
Program : PROGRAMnum IDnum SEMInum ClassDeclLoop
{
	$$ = MakeTree(ProgramOp,$4,MakeLeaf(IDNode,$2));
	printtree($$,0);
};

ClassDeclLoop: ClassDecl
{
	$$ = MakeTree(ClassOp,NullExp(),$1);
}
			| ClassDeclLoop ClassDecl
{
	$$ = MakeTree(ClassOp,$1,$2);	
}
;

ClassDecl: CLASSnum IDnum ClassBody
{
	$$ = MakeTree(ClassOp,$3,MakeLeaf(IDNode,$2));
	/*$$ = MakeTree(ClassOp,$2,MakeLeaf(IDNode,$2));*/
}
;

ClassBody: LBRACEnum RBRACEnum
{
	$$ = NullExp();
   /*$$ = MakeTree(BodyOp,NullExp(),MakeLeaf(DUMMYNode,0));	*/
}
		| LBRACEnum Decls RBRACEnum
{
	/*$$ = MakeTree(BodyOp,$2);*/
	$$ = $2; /*return Decls as output */
}
		| LBRACEnum MethodDeclLoop RBRACEnum
{
	$$ = MakeTree(BodyOp,NullExp(),$2);
}
  		| LBRACEnum Decls MethodDeclLoop RBRACEnum
{
	$$ = MakeTree(BodyOp,$2,$3);
}
;

Decls: DECLARATIONnum FieldDeclLoop ENDDECLARATIONSnum
{
	$$ = $2;
}
	| /*nothing for decls is acceptable, too*/
{
	$$ = NullExp();
}
;

/*this field let method to come more than once */
MethodDeclLoop: MethodDeclLoop MethodDecl
{
	$$ = MakeTree(BodyOp,$1,$2);
}
			| MethodDecl
{
	$$ = MakeTree(BodyOp,NullExp(),$1);	
}
;

MethodDecl : METHODnum VOIDnum IDnum LPARENnum FormalParameterListNoType RPARENnum Block /*this is first modle with VOID */
{
	/*left leaf is a tree of FormalParameterListNoType and right leaf is Block */
	/*$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$3),$5),$7);*/
	$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$3),MakeTree(SpecOp,$5,type_tree)),$7);
}
			| METHODnum Type IDnum LPARENnum FormalParameterListWithType RPARENnum Block /*this is first modle with type as return value */
{
	/*left leaf is a tree of FormalParameterListWithType and right leaf is Block */
	$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$3),MakeTree(SpecOp,$5,type_tree)),$7);	
}
;

FormalParameterListNoType: /*empty call*/
{
	/*no leaf and end tree here*/
	$$ = MakeTree(SpecOp, NullExp(),NullExp());	
}
							| FormalParameterListLoopWithVal
{
	$$ = MakeTree(SpecOp, $1,NullExp());		
}
							| FormalParameterListLoopNoVal
{
	$$ = MakeTree(SpecOp, $1,NullExp());		
}
;

Block: StatementList
{
	$$ = MakeTree(BodyOp,NullExp(),$1);
}	
	| Decls StatementList
{
	$$ = MakeTree(BodyOp,$1,$2);
}
;

Type: INTnum
{
	type_tree = MakeTree(TypeIdOp,MakeLeaf(INTEGERTNode,$1),NullExp());
	$$ = type_tree;
}	
	| IDnum 
{
	type_tree = MakeTree(TypeIdOp,MakeLeaf(IDNode,$1),NullExp());
	$$ = type_tree;
}
	|INTnum BrackLoop
{
	type_tree = MakeTree(TypeIdOp,MakeLeaf(INTEGERTNode,$1),$2);
	$$ = type_tree;
}
	| IDnum BrackLoop
{
	type_tree = MakeTree(TypeIdOp,MakeLeaf(IDNode,$1),$2);
	$$ = type_tree;
}
	| IDnum TypeList
{
	type_tree = MakeTree(TypeIdOp,MakeLeaf(IDNode,$1),$2);
	$$ = type_tree;
}
	| INTnum TypeList
{
	type_tree = MakeTree(TypeIdOp,MakeLeaf(INTEGERTNode,$1),$2);
	$$ = type_tree;
}
;

FormalParameterListWithType: /*empty call*/
{
	$$ = MakeTree(SpecOp, NullExp(),type_tree);	
}
							| FormalParameterListLoopWithVal
{
	$$ = MakeTree(SpecOp, $1,type_tree);		
}
							| FormalParameterListLoopNoVal
{
	$$ = MakeTree(SpecOp, $1,type_tree);		
}
;

FormalParameterListLoopWithVal: VALnum INTnum IDnum
{
	$$ = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, $3), MakeLeaf(INTEGERTNode, INTnum)), NullExp());
}
						| VALnum INTnum IDnum SEMInum FormalParameterListLoopWithVal
{
	$$ = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, $3), MakeLeaf(INTEGERTNode, INTnum)), $5);
}
						| VALnum INTnum IDnum SEMInum FormalParameterListLoopNoVal
{
	$$ = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, $3), MakeLeaf(INTEGERTNode, INTnum)), $5);
}
						| VALnum INTnum IDnum COMMAnum ValLoop
{
	$$ = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, $3), MakeLeaf(INTEGERTNode, INTnum)), $5);	
}
						| VALnum INTnum IDnum COMMAnum ValLoop SEMInum FormalParameterListLoopWithVal
{
	$$ = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, $3), MakeLeaf(INTEGERTNode, INTnum)), $7);
}
						| VALnum INTnum IDnum COMMAnum ValLoop SEMInum FormalParameterListLoopNoVal
{
	$$ = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, $3), MakeLeaf(INTEGERTNode, INTnum)), $7);
}
;

BrackLoop: BrackLoop LBRACnum RBRACnum
{
	$$ = $$;	
}
		| LBRACnum RBRACnum
{
	$$ = $$;	
};

TypeList: DOTnum Type
{
	$$ = MakeTree(FieldOp,$2,NullExp());
}
		| BrackLoop TypeList
{
	$$ = MakeTree(IndexOp,NullExp(),NullExp());
}
;

FormalParameterListLoopNoVal: INTnum IDnum
{
	$$ = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, INTnum)), NullExp());	
}
						| INTnum IDnum SEMInum FormalParameterListLoopWithVal
{
	$$ = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, INTnum)), $4);
}
						| INTnum IDnum SEMInum FormalParameterListLoopNoVal
{
	$$ = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, INTnum)), $4);
}
						| INTnum IDnum COMMAnum ValLoop
{
	$$ = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, INTnum)), $4);	
}
						| INTnum IDnum COMMAnum ValLoop SEMInum FormalParameterListLoopNoVal
{
	$$ = MakeTree(VArgTypeOp,MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, INTnum)), $4), $6);
}
						| INTnum IDnum COMMAnum ValLoop SEMInum FormalParameterListLoopWithVal
{
	$$ = MakeTree(VArgTypeOp,MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $2), MakeLeaf(INTEGERTNode, INTnum)), $4), $6);
}
;

ValLoop: IDnum COMMAnum ValLoop
{
	/* make a loop to continue*/
	$$ = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode,$1),MakeLeaf(INTEGERTNode,INTnum)),$3);
}
		| IDnum
{
	$$ = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode,$1),MakeLeaf(INTEGERTNode,INTnum)),NullExp());
}
;


FieldDeclLoop: /*no Declaration inside*/
{
	/*$$ = NullExp();*/
	/*in this condition we need to make a tree which has no children, but shows that this FieldDecl  can be a tree */
	$$ = MakeTree(BodyOp,NullExp(),NullExp());
}
			| FieldDeclLoop FieldDecl
{
	$$ = MakeTree(BodyOp,NullExp(),$2);	
};


FieldDecl : Type FieldDeclLoop2 SEMInum
{
	/* recall FieldDeclLoop many times */
		$$ = $2;
};

FieldDeclLoop2: VariableDeclId 
{
	/*in this case we have only VariableDeclId and then ';' */
	/*the right leaf is a tree of CommaOp and type_tree we make general, but there is no left leaf(tree). so I make a CommaOpTree as the right part and just add as the right leaf for the return tree*/

	tree CommaOpTree = MakeTree(CommaOp,$1,MakeTree(CommaOp, type_tree, NullExp()));
	$$ = MakeTree(DeclOp,NullExp(),CommaOpTree);
	
	
}
			| VariableDeclId EQUALnum VariableInitializer
{
	/*this case is when we have 'variable = variableinitializer' */
	/*the right leaf is again a tree but in its right leaf there should not be null but 3rd argumet, this time we got variableInitalizer as the leaf */

	tree CommaOpTree = MakeTree(CommaOp,$1,MakeTree(CommaOp, type_tree,$3));
	$$ = MakeTree(DeclOp,NullExp(),CommaOpTree);
}
			| FieldDeclLoop2 COMMAnum VariableDeclId EQUALnum VariableInitializer 
{
	/*the last possible event is the whole diagram repeating again while it continues with a comma ',' with a repeating part of FieldDecloop*/

	tree CommaOpTree = MakeTree(CommaOp,type_tree,$5);
	$$ = MakeTree(DeclOp,$1,MakeTree(CommaOp,$3,CommaOpTree));
}
			| FieldDeclLoop2 COMMAnum VariableDeclId 
{
	/*Similar to above, expect we finish with VariableDecId*/
	tree CommaOpTree = MakeTree(CommaOp,type_tree,NullExp());
	$$ = MakeTree(DeclOp,$1,MakeTree(CommaOp,$3,CommaOpTree));
		
}
;


VariableDeclId: IDnum
{
	$$ = MakeLeaf(IDNode,$1);
}
			| IDnum BrackLoop
{
	$$ = MakeLeaf(IDNode,$1);
}
;

VariableInitializer: Expression
{
	$$ = $1;	
}
					| ArrayIntializer
{
	$$ = $1;	
}					| ArrayCreationExpression
{
	$$ = $1;	
}
;

Expression: SimpleExpression
{
	$$ = $1;
}
			| SimpleExpression LTnum SimpleExpression
{
	$$ = MakeTree(LTOp,$1,$3);
}
			| SimpleExpression LEnum SimpleExpression
{
	$$ = MakeTree(LEOp,$1,$3);	
}
			|SimpleExpression EQnum SimpleExpression
{
	$$ = MakeTree(EQOp,$1,$3);
}
			|SimpleExpression NEnum SimpleExpression
{
	$$ = MakeTree(NEOp,$1,$3);
}
			|SimpleExpression GTnum SimpleExpression
{
	$$ = MakeTree(GEOp,$1,$3);
}
			|SimpleExpression GEnum SimpleExpression
{
	$$ = MakeTree(GTOp,$1,$3);
}
;

ArrayIntializer: LBRACEnum VariableInitializerLoop RBRACEnum
{
	$$ = MakeTree(ArrayTypeOp,$2,type_tree);	
};

ArrayCreationExpression: INTnum ArrayCreationExpressionLoop
{
	$$ = MakeTree(ArrayTypeOp, $2, MakeLeaf(INTEGERTNode,$2));	
};

VariableInitializerLoop: VariableInitializer
{
	$$ = MakeTree(CommaOp,NullExp(),$1);
}
						| VariableInitializerLoop COMMAnum VariableInitializer
{
	$$ = MakeTree(CommaOp,$1,$3);
}
;


ArrayCreationExpressionLoop: ArrayCreationExpressionLoop LBRACnum Expression RBRACnum
{
	$$ = MakeTree(BoundOp,$1,$3);
}
							| LBRACnum Expression RBRACnum
{
	$$ = MakeTree(BoundOp,NullExp(),$2);	
}
;

StatementList: LBRACEnum StatementLoop RBRACEnum
{
	$$ = $2;
};

StatementLoop: Statement
{
	$$ = MakeTree(StmtOp,NullExp(),$1);
}
			| StatementLoop SEMInum Statement
{
	/*if there is nothing as for statment, then just return StatementLoop. Otherwise, return the whole tree*/
	if($3 == NullExp()){$$ = $1;}
	else {$$ = MakeTree(StmtOp,$1,$3);}
}
;

Statement: /*nothing/
{
	$$ = NullExp();	
}
		| AssignmentStatement
{
	$$ = $1;
}
		| MethodCallStatement
{
	$$ = $1;
}
		| ReturnStatement
{
	$$ = $1;
}
		| IfStatement
{
	$$ = $1;
}
		| WhileStatement
{
	$$ = $1;
}
;

AssignmentStatement: Variable ASSGNum Expression
{
	$$ = MakeTree(AssignOp,MakeTree(AssignOp,Nullexp(),$1),$3);
};

MethodCallStatement: Variable LPARENnum ExpressionLoop RPARENnum
{
	$$ = MakeTree(RoutineCallOp,$1,$3);
};


WhileStatement: WHILEnum Expression StatementList
{
	$$ = MakeTree(LoopOp,$2,$3);
};


ReturnStatement: RETURNnum
{
	$$ = MakeTree(ReturnOp,NullExp(),NullExp());
}
				| RETURNnum Expression
{
	$$ = MakeTree(ReturnOp,$2,NullExp());	
}
;

IfStatement: IFnum Expression StatementList
{

	$$ = MakeTree(IfElseOp,NullExp(),MakeTree(CommaOp,$2,$3));
}
			| IFnum Expression StatementList ELSEnum StatementList
{
	$$ = MakeTree(IfElseOp,MakeTree(IfElseOp,Nullexp(),MakeTree(CommaOp,$2,$3)),$5);
}
			| IFnum Expression StatementList ELSEnum IfStatement
{
	$$ = MakeTree(IfElseOp,$5,MakeTree(CommaOp,$2,$3));
}
;


ExpressionLoop: Expression
{
	$$ = MakeTree(CommaOp,$1,NullExp());	
}
				| ExpressionLoop COMMAnum Expression
{
	$$ = MakeTree(CommaOp,$1,$3);		
}
				| /*null return*/
{
	$$ = NullExp();		
}
;


SimpleExpression: SimpleExpressionList
{
	$$ = $1;
}
				| PLUSnum SimpleExpressionList
{
	$$ = $2;
}
				| MINUSnum SimpleExpressionList
{
	$$ = $2;
}
;

SimpleExpressionList: Term
{
	$$ = $1;
}
					| SimpleExpressionList PLUSnum Term
{
	$$ = MakeTree(AddOp,$1,$3);
}
					| SimpleExpressionList MINUSnum Term
{
	$$ = MakeTree(SubOp,$1,$3);	
}
					| SimpleExpressionList ORnum Term
{
	$$ = MakeTree(OrOp,$1,$3);
}
;

Term: FactorList
{
	$$ = $1;	
}
;

FactorList: Factor
{
	$$ = $1;
}
			| FactorList ANDnum Factor
{
	$$ = MakeTree(AndOp,$1,$3);
}
			| FactorList DIVIDEnum Factor
{
	$$ = MakeTree(DivOp,$1,$3);	
}
			| FactorList TIMESnum Factor
{
	$$ = MakeTree(MultOp,$1,$3);
}
;

Factor: UnsignedConstant
{
	$$ = $1;
}
		| Variable
{
	$$ = $1;	
}
/*		| MethodCallStatement
{
	$$ = $1;
}*/
		| LPARENnum Expression RPARENnum
{
	$$ = $2;
}
		| NOTnum Factor
{
	$$ = MakeTree(NotOp,$2,NullExp());
}
;

MethodCallStatement: Variable LPARENnum RPARENnum
{
	$$ = MakeTree(RoutineCallOp, $1, NullExp());
}
					| Variable LPARENnum ExpressionLoop RPARENnum
{
 	$$ = MakeTree(RoutineCallOp, $1, $3);
}
;

ExpressionLoop: Expression
{
	$$ = MakeTree(CommaOp,$1,NullExp());	
}
				| ExpressionLoop COMMAnum Expression
{
	$$ = MakeTree(CommaOp,$1,$3);		
}
				| /*null return*/
{
	$$ = NullExp();		
}
;


UnsignedConstant: ICONSTnum
{
	$$ = MakeLeaf(NUMNode,$1);
}
				| SCONSTnum
{
	$$ = MakeLeaf(STRINGNode,$1);
}
;

Variable: IDnum
{
	$$ = MakeTree(VarOp, MakeLeaf(IDNode, $1), NullExp());
}
		| IDnum VariableLoop
{
	$$ = MakeTree(VarOp, MakeLeaf(IDNode, $1), $2);	
}
;

VariableLoop: VariableLoop DOTnum IDnum
{
	$$ = MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, $2), NullExp()), $1);
}
			| DOTnum IDnum
{
	$$ = MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, $2), NullExp()), NullExp());
}
			| LBRACnum Expression ExpressionLoop RBRACnum
{
	$$ = MakeTree(SelectOp, MakeTree(IndexOp, $2, $3), NullExp());
}
			| VariableLoop LBRACnum Expression ExpressionLoop RBRACnum
{
	$$ = MakeTree(SelectOp, MakeTree(IndexOp, $3, $4), $1);
}
;


/*nokate pdf -- khandan az file -- Dorost kardan error report*/


/*daste akhar tartibe bazi rule ha mesle FormalParameterList va zir shakhe hash ro avaz kon*/
%%


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *treelst;	
extern FILE *yyin;
extern char* yytext;

int main(int argc, char *argv[])
{
	
	FILE *f = fopen("src1","r");
	yyin = f; 
	treelst = stdout;
	//printf("test test");
	//do{
	yyparse();
	//}while(!feof(yyin));

	return 0;
}
yyerror(char *str)
{
	printf("yerror: %s at line %d and Column %d\n ",str,lineNumber,columnNumber);
}
#include "lex.yy.c"
