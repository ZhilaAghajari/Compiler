%{ /*Definition*/
#include "proj2.h"
#inlcude <stdio.h>
%}

%toekn <intg> PROGRAMnum

%% /*yacc specification */



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