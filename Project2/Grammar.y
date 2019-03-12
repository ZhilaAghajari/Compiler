%{ /*Definition*/
#include "proj2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "tokens.h"
int yycolumn, yyline;
tree temp_tree1, temp_tree2; /* defined two tree variable for temporary usage*/
%}


%token <intg> errIdentifier errComment errString errIntzero errOther COMMENT EOFnum DECLARATIONnum ASSGNum PROGRAMnum IDnum SEMInum ANDnum DOTnum ENDDECLARATIONSnum EQUALnum GTnum INTnum LBRACnum LPARENnum METHODnum NEnum ORnum RBRACnum RPARENnum VALnum WHILEnum CLASSnum COMMAnum DIVIDEnum ELSEnum EQnum GEnum ICONSTnum IFnum LBRACEnum LEnum LTnum MINUSnum NOTnum PLUSnum RBRACEnum RETURNnum SCONSTnum TIMESnum VOIDnum malformedComment

%type  <tptr>  Program ClassDecl ClassDeclLoop


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

ClassDecl: CLASSnum IDnum /*ClassBody  -- ya nokate pdf*/
{
	/*$$ = MakeTree(ClassOp,$3,MakeLeaf(IDNode,$2));*/
	$$ = MakeTree(ClassOp,$2,MakeLeaf(IDNode,$2));
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