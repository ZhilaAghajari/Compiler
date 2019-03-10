%{ /*Definition*/
#include "proj2.h"
#inlcude <stdio.h>
int yycolumn, yyline;
%}

%token <intg> PROGRAMnum IDnum SEMInum CLASSnum
%type <tptr> Program ClassDecl

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


int main(int argc, char *argv[])
{
	FILE *treelst;	
	return 0;
}
yyerror(char *str)
{
	printf("yerror: %s at line %d \n",str,yyline);
}
//#inlcude "lex.yy.c"