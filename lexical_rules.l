/*
* token rules.. they will be given later on to lex 
*/

%{ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tokens.h"
#include <regex.h>
int lineNumber=1;
int columnNumber=1;
char stringtable[4096];
int location;
int isStr = 0;
void updatestrTable(char*);
void errHandling(int);


%}

%x comment 


/* first I put comment, since it could be mis-find by "/" or "*" and etc */
/* second I put all symbols, to make sure they are porioritized more than identifiers */
/* Finnally I wrote all other Regular-Expression and EOF*/


%%
\/\* {BEGIN comment;}
<comment>\*\/ {BEGIN 0;return COMMENT;}
<comment>\n {lineNumber++;columnNumber=1;}
<comment><<EOF>> {errHandling(errComment);return EOFnum;} /*test it for return error*/
<comment>. /*observe anything between starting and ending of comment*/
[\n] {lineNumber++; columnNumber=1;}
"&&" {columnNumber+=yyleng; return ANDnum;}
":=" {columnNumber+=yyleng;return ASSGNum;}
"declarations" {columnNumber+=yyleng;return DECLARATIONnum;}
"enddeclarations" {columnNumber+=yyleng;return ENDDECLARATIONSnum;}
"." {columnNumber+=yyleng;return DOTnum;}
"=" {columnNumber+=yyleng;return EQUALnum;}
">" {columnNumber+=yyleng;return GTnum;}
"int" {columnNumber+=yyleng;return INTnum;}
"[" {columnNumber+=yyleng;return LBRACnum;}
"(" {columnNumber+=yyleng;return LPARENnum;}
"method" {columnNumber+=yyleng;return METHODnum;}
"!=" {columnNumber+=yyleng;return NEnum;}
"||" {columnNumber+=yyleng;return ORnum;}
"program" {columnNumber+=yyleng;return PROGRAMnum;}
"]" {columnNumber+=yyleng;return RBRACnum;}
")" {columnNumber+=yyleng;return RPARENnum;}
";" {columnNumber+=yyleng;return SEMInum;}
"val" {columnNumber+=yyleng;return VALnum;}
"while" {columnNumber+=yyleng;return WHILEnum;}
"class" {columnNumber+=yyleng;return CLASSnum;}
"," {columnNumber+=yyleng;return COMMAnum;}
"/" {columnNumber+=yyleng;return DIVIDEnum;}
"else" {columnNumber+=yyleng;return ELSEnum;}
"==" {columnNumber+=yyleng;return EQnum;}
">=" {columnNumber+=yyleng;return GEnum;}
([1-9]([0-9])*)|0 {columnNumber+=yyleng;return ICONSTnum;}
"if" {columnNumber+=yyleng;return IFnum;}
"{" {columnNumber+=yyleng;return LBRACEnum;}
"<=" {columnNumber+=yyleng;return LEnum;}
"<" {columnNumber+=yyleng;return LTnum;}
"-" {columnNumber+=yyleng;return MINUSnum;}
"!" {columnNumber+=yyleng;return NOTnum;}
"+" {columnNumber+=yyleng;return PLUSnum;}
"}" {columnNumber+=yyleng;return RBRACEnum;}
"return" {columnNumber+=yyleng;return RETURNnum;}
"*" {columnNumber+=yyleng;return TIMESnum;}
"void" {columnNumber+=yyleng;return VOIDnum;}
[a-zA-Z_][a-zA-Z_0-9]* {columnNumber+=yyleng;updatestrTable(yytext);return IDnum;}
\'([^\n\r\f\\']|\\(.|\n|\f|\r|\n\r))*\' {columnNumber+=yyleng; isStr = 1;updatestrTable(yytext);return SCONSTnum;} 
\'([^\n\r\f\\']|\\(.|\n|\f|\r|\n\r))*\\? {columnNumber+=yyleng; errHandling(errString);return errString;}
0+[0-9]+ {columnNumber+=yyleng; errHandling(errIntzero);return errIntzero;}
([0-9]+(([a-zA-Z_]|[0-9]))*) {columnNumber+=yyleng; errHandling(errIdentifier);return errIdentifier;}; /* identifier starts with number*/
<<EOF>> {columnNumber+=yyleng-1;return EOFnum;}
. {columnNumber++;}

%%
void updatestrTable(char* yytext)
{

	if(isStr && strlen(yytext)==2)
	{
		printf("print it ....%d----%s---",strlen(stringtable),stringtable);
		location =strlen(stringtable)+1;
		strcat(stringtable," ");
		return;
	}

	//copy yytext to another char* if it is string
	char temptable[4096];
	if(isStr)//we want to cut off '' at the start and end of string
	{
		for(int i=1;i<strlen(yytext)-1;i++)
			temptable[i-1] = yytext[i];		
		strcpy(yytext,temptable);
		isStr = 0;
	}
	

	//we devised a manual searching and did not use strstr for searching
	//in the proposed method we start with the start of string and go a for-loop over all chars. if we see a similar patterns over a 
	// seen set of chars we check 3-if to make sure this pattern is exactly the same with the variable we were looking for or not
	int yc = 0;//counter of matching string
	int newVar = 1; //if the searching variable is newVar=1 then we should add it to stringtable, otherwise we have to return location

	//searching string begins here
	for (int i=0;i<strlen(stringtable);i++)
	{
		//if we see similar char we increased yc to check other chars of this variable
		if(stringtable[i]==yytext[yc])
		{
			yc++;
		}
		//we set yc =0 everytime we can't see a similar char. The reason is, if we see "interest" and "interesting" respectively
		// in stringtable and yytext we will increase yc 8 times (as interest in stringtable). then we have to reset yc since two
		// words are different and we want to check other words, too.
		else 
			yc = 0;

		//if yc counter == strlen(yytext) that means we extract and find a pattern...therefore we should check if it is and independant words
		// or a word inside another word
		if(yc==strlen(yytext)) 
		{
			//if i-yc>=0 that means the word is not at the start of stringtable, so there must be spaces one before and one after the word
			// if everythings goes right, then we can say this variable is not new and we can return the location and searching is finished
			if(i-yc>=0 && stringtable[i-yc]==' ' && (stringtable[i+1]==' '))
			{
				newVar = 0;
				location = i; //set the current location of variable
				break;
			}
			//in other case if i-yc>=0 but the found variable is at the end of string there is no space afterward but instead we have 
			// i+1 == strlen(stringtable), since there is end of string
			if(i-yc>=0 && stringtable[i-yc]==' ' && i+1==strlen(stringtable))
			{
				newVar = 0;
				location = i; //set the current location of variable
				break;
			}
			
			//if i-yc<0 then it the word we found is at the start of string table so ther must be a space just aftewards not befor
			if(i-yc<0 && stringtable[i+1]==' ')
			{
				newVar = 0;
				location = i;
				break;
			}

			//if there is no break, that means the word we found wasn't an independant one or correct one, so we should search again
			yc = 0;
		}
	}


	//if it is a new variable add it to string table, otherwise just set the location
	if(newVar)
	{
		location =strlen(stringtable)+1;
		strcat(stringtable," ");
		strcat(stringtable,yytext);
	}
	//since we add " " each time we want to put a new variable into stringtable, then we decide to return location-1 instead of location
	location--;

}
void errHandling(int err)
{
	switch(err)
	{
		case errIntzero:
			{
				printf("the integer %s in line %d, and collumn %d starts with a zero '\n", yytext, lineNumber, columnNumber);
				break;
			}
		case errString:
			{
				printf("the string %s in line %d and collumn %d has been detected which is malformed and not closed!'\n", yytext, lineNumber, columnNumber-strlen(yytext));	
				break;
			}
		case errIdentifier:
		{
			printf("so called identifier %s in line %d and collumn %d is malformed '\n", yytext, lineNumber, columnNumber-strlen(yytext));
			break;
		}
		case errOther:
		{
			printf("The wrong typo %s happend in line %d and collumn %d \n",yytext, lineNumber, columnNumber);
			break;
		}
		default:
			break;
	}
}

int main(int argc, char *argv[])
{
	FILE *input;
	//FILE *yyin;

	input = fopen("strings.mjava","r");
	yyin = input;

	//call yylex to identify tokens
	int z = 1;
	char *TOKEN;
	printf("Line   Column   Token    Index_in_String_Table\n");
	while(z!=0)
	{
		//yylex();
		//z = yylex();
		//printf("%d...\n", z);

		switch(z=yylex()) // convert token numbers to their corresponding type..
		{
			case 257:		{TOKEN = "ANDnum"; break;}
			case 258:		{TOKEN="ASSGNum"; break;}
			case 259:		{TOKEN = "DECLARATIONnum"; break;}
			case 260:		{TOKEN = "DOTnum"; break;}
			case 261:		{TOKEN = "ENDDECLARATIONSnum"; break;}
			case 262:		{TOKEN = "EQUALnum"; break;}
			case 263:		{TOKEN="GTnum"; break;}
			case 264:		{TOKEN ="IDnum"; break;}
			case 265:		{TOKEN="INTnum"; break;}
			case 266:		{TOKEN = "LBRACnum"; break;}
			case 267:		{TOKEN="LPARENnum"; break;}
			case 268:		{TOKEN="METHODnum"; break;}
			case 269:		{TOKEN="NEnum"; break;}
			case 270:		{TOKEN="ORnum"; break;}
			case 271:		{TOKEN="PROGRAMnum"; break;}
			case 272:		{TOKEN="RBRACnum"; break;}
			case 273:		{TOKEN="RPARENnum"; break;}
			case 274:		{TOKEN="SEMInum"; break;}
			case 275:		{TOKEN="VALnum"; break;}
			case 276:		{TOKEN="WHILEnum"; break;}
			case 277:		{TOKEN="CLASSnum"; break;}
			case 278:		{TOKEN="COMMAnum"; break;}
			case 279:		{TOKEN="DIVIDEnum"; break;}
			case 280:		{TOKEN="ELSEnum"; break;}
			case 281:		{TOKEN="EQnum"; break;}
			case 282:		{TOKEN="GEnum"; break;}
			case 283:		{TOKEN="ICONSTnum"; break;}
			case 284:		{TOKEN="IFnum"; break;}
			case 285:		{TOKEN="LBRACEnum"; break;}
			case 286:		{TOKEN="LEnum"; break;}
			case 287:		{TOKEN="LTnum"; break;}
			case 289:		{TOKEN="NOTnum"; break;}
			case 290:		{TOKEN="PLUSnum"; break;}
			case 291:		{TOKEN="RBRACEnum"; break;}
			case 292:		{TOKEN="RETURNnum"; break;}
			case 293:		{TOKEN="SCONSTnum"; break;}
			case 294:		{TOKEN="TIMESnum"; break;}
			case 295:		{TOKEN="VOIDnum"; break;}
			case 296:		{TOKEN="malformedComment"; break;}
			case 297:		{TOKEN="COMMENT"; break;}
			case 0:			{TOKEN="EOFnum"; break;}
			case 500:		{TOKEN="errIdentifier"; break;}
			case 501:		{TOKEN="errComment"; break;}
			case 502:		{TOKEN="errString"; break;}
			case 503:		{TOKEN="errIntzero"; break;}
			case 504:		{TOKEN="errOther"; break;}

		}

		//printf("%d...\n", z);


		if(z == IDnum || z == SCONSTnum)
		{
			//printf("lineNumber= %d lineColumn=%d Index_in_string_Table=%d , value=%s \n",lineNumber,columnNumber,location, yytext);
			printf("%d\t%d\t%s\t\t%d \n",lineNumber,columnNumber,TOKEN, location);

		}

		else
		{
			printf("%d\t%d\t%s\n",lineNumber,columnNumber,TOKEN);

		}
	}
	/* now I should print string table at the end of program like in the example: */
	printf("String Table: %s\n" ,stringtable);

}