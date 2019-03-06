
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tokens.h"

extern int lineNumber;

//extern int lineNumber;
/*next to do
* 1-move this code to a file name like driver.c //done
*2-update ur make file for new .c file and lex.yy.c //done
*3-see if lineNumber works accessing inside driver.c // at that moment this part is in in lexical in rules part 3
*-----------------------------------------------------
*4-you should write one function to increase lineNumber //done
*5- do the same for column number // done 
*6- create the string table
*/
int main(void)
{
	FILE *input;
	FILE *yyin;
	input = fopen("in.txt","r");
	yyin = input;
	//call yylex to identify tokens
	int z = 1;
	while(z!=0)
	{
		//yylex();
		z = yylex();
		printf("%d...", z);
		printf("lineNumber= %d",lineNumber);

	}

}