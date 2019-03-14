%{ /*Definition*/
#include "proj2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "tokens.h"
int yycolumn, yyline;
tree temp_tree1, temp_tree2, type_tree; /* defined two tree variable for temporary usage*/
%}


%token <intg> errIdentifier errComment errString errIntzero errOther COMMENT EOFnum DECLARATIONnum ASSGNum PROGRAMnum IDnum SEMInum ANDnum DOTnum ENDDECLARATIONSnum EQUALnum GTnum INTnum LBRACnum LPARENnum METHODnum NEnum ORnum RBRACnum RPARENnum VALnum WHILEnum CLASSnum COMMAnum DIVIDEnum ELSEnum EQnum GEnum ICONSTnum IFnum LBRACEnum LEnum LTnum MINUSnum NOTnum PLUSnum RBRACEnum RETURNnum SCONSTnum TIMESnum VOIDnum malformedComment

%type  <tptr>  Program ClassDecl ClassDeclLoop ClassBody Decls FieldDeclLoop FieldDecl MethodDecl Type FormalParameterList Block MethodDeclLoop VariableDecId FieldDeclLoop2 VariableDeclId VariableInitializer BrackLoop Expression ArrayIntializer ArrayCreationExpression VariableInitializerLoop ArrayCreationExpressionLoop FormalParameterListLoop1 FormalParameterListLoop2


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
};

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
MethodDecl : METHODnum VOIDnum IDnum LPARENnum FormalParameterList RPARENnum Block /*this is first modle with VOID */
{
	/*left leaf is a tree of FormalParameterList and right leaf is Block */
	$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$3),$5),$7);
}
			| METHODnum Type IDnum LPARENnum FormalParameterList RPARENnum Block /*this is first modle with type as return value */
{
	/*left leaf is a tree of FormalParameterList and right leaf is Block */
	$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$3),$5),$7);	
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

BrackLoop: BrackLoop LBRACnum RBRACnum
{
	$$ = $$;	
}
		| LBRACnum RBRACnum
{
	$$ = $$;	
};

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

ArrayIntializer: LBRACEnum VariableInitializerLoop RBRACEnum
{
	$$ = MakeTree(ArrayTypeOp,$2,type_tree);	
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


ArrayCreationExpression: INTnum ArrayCreationExpressionLoop
{
	$$ = MakeTree(ArrayTypeOp, $2, MakeLeaf(INTEGERTNode,$2));	
};

ArrayCreationExpressionLoop: ArrayCreationExpressionLoop LBRACnum Expression RBRACnum
{
	$$ = MakeTree(BoundOp,$1,$3);
}
							| LBRACnum Expression RBRACnum
{
	$$ = MakeTree(BoundOp,NullExp(),$2);	
}
;

FormalParameterList: /*nothing for FormalParameterList*/
{
	$$ = MakeTree(SpecOp, NullExp(),type_tree);
}
					| FormalParameterListLoop1 SEMInum FormalParameterList
{
	/*make a tree and make a right child for left child, since we don't want the left child here of the new leaf*/
	$$ = MakeTree(SpecOp,MkRightC($3,$1),type_tree);	
}
					| FormalParameterListLoop1
{
	$$ = $1;
}
;

FormalParameterListLoop1: VALnum INTnum FormalParameterListLoop2
{
	/*make the right child a value equal to VarargOp*/
	$$ = MakeVal($3);
}
						| INTnum FormalParameterListLoop2
{
	$$ = $2;
}
;

FormalParameterListLoop2: IDnum
{
	$$ = MakeTree(RArgTypeOp,MakeTree(CommaOp, MakeLeaf(IDNode, $1), MakeLeaf(INTEGERTNode, 0)),NullExp());
}
						| IDnum COMMAnum FormalParameterListLoop2
{
	tree temp = MakeTree(RArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, $1), MakeLeaf(INTEGERTNode, 0)), NullExp());
	$$ = MkRightC($3, temp);
}
;

Expression: /*nothing for now ---*/
{
	$$ = NullExp();	
};


Block: /*nothing for now ---*/
{
	$$ = NullExp();	
};

Type: /*nothing for now ---*/
{
	$$ = NullExp();	
};






/*edame code nevisi -- ya nokate pdf -- ya khatahaie mojood -- khandan az file*/

%%


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *treelst;	

int main(int argc, char *argv[])
{
	
	//FILE f = fopen("src1","r");
	//yyin = f; 
	treelst = stdout;
	//printf("test test");
	yyparse();
	return 0;
}
yyerror(char *str)
{
	printf("yerror: %s at line %d \n",str,yyline);
}
#include "lex.yy.c"
