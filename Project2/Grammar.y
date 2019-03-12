%{ /*Definition*/
#include "proj2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "tokens.h"
int yycolumn, yyline;
tree temp_tree1, temp_tree2; /* defined two tree variable for temporary usage*/
%}

/*%token <intg> PROGRAMnum IDnum SEMInum CLASSnum
%type <tptr> Program ClassDecl*/

%token <intg> errIdentifier errComment errString errIntzero errOther COMMENT EOFnum DECLARATIONnum ASSGNum

%token <intg>  PROGRAMnum IDnum SEMInum CLASSnum  DECLARATIONSnum  ENDDECLARATIONSnum
%token <intg>  COMMAnum EQUALnum LBRACEnum RBRACEnum LBRACnum RBRACnum LPARENnum RPARENnum VOIDnum
%token <intg>  INTnum METHODnum VALnum DOTnum ASSGNnum RETURNnum IFnum ELSEnum WHILEnum
%token <intg>  LTnum LEnum EQnum NEnum GEnum GTnum PLUSnum MINUSnum ORnum TIMESnum DIVIDEnum ANDnum
%token <intg>  NOTnum ICONSTnum SCONSTnum

%type  <tptr>  Program ClassDecl_rec ClassDecl ClassBody MethodDecl_List 
%type  <tptr>  MethodDecl_z1 MethodDecl Type Type_rec Formal_Parameter_List 
%type  <tptr>  Formal_Parameter_List_rec Formal_Parameter 
%type  <tptr>  Formal_Parameter_rec Block StatementList StatementList_rec
%type  <tptr>  Statement Decls FieldDecl_List FieldDecl FieldDecl_rec
%type  <tptr>  FieldDecl_Id VariableDeclId BracketLoop VariableInitializer 
%type  <tptr>  ArrayInitializer ArrayInitializer_rec
%type  <tptr>  ArrayCreationExpression ArrayCreationExpression_rec 
%type  <tptr>  ArrayExpression AssignmentStatement MethodCallStatement
%type  <tptr>  ParameterList ReturnStatement IfStatement WhileStatement
%type  <tptr>  Expression Factor UnsignedConstant SimpleExpression
%type  <tptr>  SimpleExpression_Op_rec SimpleExpression_Op Term Term_Op_rec
%type  <tptr>  Term_Op Variable Variable_rec Field Index Index_rec


%% /*yacc specification */
Program : PROGRAMnum IDnum SEMInum ClassDecl
{
	$$ = MakeTree(ProgramOp,$3,MakeLeaf(IDNode,$2));
	printtree($$,0);
};
ClassDecl: CLASSnum IDnum
{
	printf("here");
}
;

%%

FILE *treelst;	

int main(int argc, char *argv[])
{
	treelst = stdout;
	yyparse();
	return 0;
}
yyerror(char *str)
{
	printf("yerror: %s at line %d \n",str,yyline);
}
#include "lex.yy.c"