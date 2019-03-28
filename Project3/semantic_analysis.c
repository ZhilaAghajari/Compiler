/*
* Semantic_analysis.c 
*a semantic processing on tree-output of project2
*Zhila Aghjari March 2019 / zha6@upit.cs.edu
*
*/

#include "tokens.h"
#include "proj2.h"
#include "proj3.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdio.h>


FILE *treelst;	
extern FILE *yyin;
extern char* yytext;


int main(int argc, char *argv[])
{
	
	FILE *f = fopen(argv[1],"r");
	yyin = f; 
	treelst = stdout;
	yyparse();

	return 0;
}


