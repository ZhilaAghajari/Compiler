%{ /*Definition*/
#include "proj2.h"
#inlcude <stdio.h>
%}

%toekn <intg> PROGRAMnum IDnum SEMInum
%type <tptr> Program

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

int yycolumn, yyline;
FILE *treelst;

main()
{
	
}
yyerror(char *str)
{
	printf("yerror: %s at line %d \n",str,yyline);
}
#inlcude "lex.yy.c"