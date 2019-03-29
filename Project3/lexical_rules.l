/*
* Zhila Aghajari (zha6@pitt.edu)
* token rules are written here to be give to the lex
* As explaiend in the slides, the first part is for defining variable and importing libraries and other header that I need in this FILE
* Tokens are also included to be used here 
*in the second part rules are definied. I put them based on their priorities so that it won't misclassifies tokens
*/

%{ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "tokens.h"
//#include "proj2.h"
//#include "y.tab.h"
#include <regex.h>
extern int yylex();

#define errComment 		501 
#define errIdentifier 	500 /*to identify malformed identifier*/
#define errString 		502 /*to identify strings which are not closed using an '*/
#define errIntzero 		503 /*to identify an integer starts with zero */
#define errOther 		504

int current_pointer = 0;


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
<comment>\*\/ {BEGIN 0;/*return COMMENT;*/}
<comment>\n {lineNumber++;columnNumber=1;}
<comment><<EOF>> {errHandling(errComment);return EOFnum;} /*test it for return error*/
<comment>. /*observe anything between starting and ending of comment*/
[\n] {lineNumber++; columnNumber=1;}
[ ] {columnNumber++;}
[\t] {columnNumber+=8;}
"&&" {columnNumber+=yyleng; return ANDnum;}
":=" {columnNumber+=yyleng;return ASSGNnum;}
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
([1-9]([0-9])*)|0 {columnNumber+=yyleng;yylval.intg = atoi(yytext);return ICONSTnum;}
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
[a-zA-Z_][a-zA-Z_0-9]* {columnNumber+=yyleng; /*add_to_stringtable(yytext);*/updatestrTable(yytext);return IDnum;}
\'([^\n\r\f\\']|\\(.|\n|\f|\r|\n\r))*\' {columnNumber+=yyleng;isStr = 1;/*add_to_stringtable(yytext);*/updatestrTable(yytext);return SCONSTnum;} 
\'([^\n\r\f\\']|\\(.|\n|\f|\r|\n\r))*\\? {columnNumber+=yyleng; errHandling(errString);}
0+[0-9]+ {columnNumber+=yyleng; errHandling(errIntzero);}
([0-9]+(([a-zA-Z_]|[0-9]))*) {columnNumber+=yyleng; errHandling(errIdentifier);}; /* identifier starts with number*/
<<EOF>> {columnNumber+=yyleng-1;return EOFnum;}
. {errHandling(errOther);}

%%
void updatestrTable(char* yytext)
{

	if(isStr && strlen(yytext)==2)
	{
		//printf("print it ....%d----%s---",strlen(stringtable),stringtable);
		location =strlen(stringtable);
		//strcat(stringtable," ");
		isStr = 0;
		yylval.intg = location;
		yylval.intg = current_pointer;
		return;
	}

	//copy yytext to another char* if it is string
	char temptable[4096];
	if(isStr)//we want to cut off '' at the start and end of string
	{
		//for(int i=1;i<strlen(yytext)-1;i++)
		int tempIndex = 0;//counter for temptable
		int i=1; //counter of yytext
		while(i<strlen(yytext)-1)
		{
			//if it is special character, replace the character and increase i twice
			if(yytext[i] == '\\' && yytext[i+1]=='n')
			{
				temptable[tempIndex++] = '\n';
				yyleng--;
				i++;
			}
			else if(yytext[i] == '\\' && yytext[i+1]=='t')
			{
				temptable[tempIndex++] = '\t';
				yyleng--;
				i++;
			}
			else if(yytext[i] == '\\' && yytext[i+1]=='\'')
			{
				temptable[tempIndex++] = '\'';
				yyleng--;
				i++;
			}
			else if(yytext[i] == '\\' && yytext[i+1]=='\\')
			{
				temptable[tempIndex++] = '\\';
				yyleng--;
				i++;
			}
			else
			{
				temptable[tempIndex++] = yytext[i];

			}

			i++;//increase i by one
		}
		temptable[tempIndex] = '\0';
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
				location = i-yc+1; //set the current location of variable
				break;
			}
			//in other case if i-yc>=0 but the found variable is at the end of string there is no space afterward but instead we have 
			// i+1 == strlen(stringtable), since there is end of string
			if(i-yc>=0 && stringtable[i-yc]==' ' && i+1==strlen(stringtable))
			{
				newVar = 0;
				location = i-yc+1; //set the current location of variable
				break;
			}
			
			//if i-yc<0 then it the word we found is at the start of string table so ther must be a space just aftewards not befor
			if(i-yc<0 && stringtable[i+1]==' ')
			{
				newVar = 0;
				location = i-yc+1;
				break;
			}

			//if there is no break, that means the word we found wasn't an independant one or correct one, so we should search again
			yc = 0;
		}
	}


	//if it is a new variable add it to string table, otherwise just set the location
	if(newVar)
	{
		/*location =strlen(stringtable)+1;
		strcat(stringtable," ");
		strcat(stringtable,yytext);*/

		location = current_pointer+1;
		for(int i=0;i<yyleng;i++)
			stringtable[i+current_pointer] = yytext[i];
		current_pointer += yyleng;
		stringtable[current_pointer] = '\0';
		current_pointer+=1;
	}
	//since we add " " each time we want to put a new variable into stringtable, then we decide to return location-1 instead of location
	location--;
	yylval.intg = location;
		

}
void errHandling(int err)
{
	switch(err)
	{
		case errIntzero:
			{
				printf("ERROR : the integer %s starts with zero, at line %d, and collumn %d  \n", yytext, lineNumber, columnNumber);
				break;
			}
		case errString:
			{
				printf("ERROR : Unmached String Constant %s , at line %d column %d \n", yytext, lineNumber, columnNumber-strlen(yytext));
				//printf("the string %s in line %d and collumn %d has been detected which is malformed and not closed!'\n", yytext, lineNumber, columnNumber-strlen(yytext));	
				break;
			}
		case errIdentifier:
		{
			printf("ERROR : Malformed identifier %s, at line %d and collumn %d \n", yytext, lineNumber, columnNumber-strlen(yytext));
			break;
		}
		case errOther:
		{
			//printf("ERROR : The wrong typo %s happend at line %d and collumn %d \n",yytext, lineNumber, columnNumber);
			break;
		}
		case errComment:
		{
			printf("Error: EOF found in comment, at line %d column %d \n", lineNumber, columnNumber);
			break;	
		}
		default:
			break;
	}
}


int loc_str(char text[])
{
	int yc = 0;//counter of matching string
	int newVar = 1; //if the searching variable is newVar=1 then we should add it to stringtable, otherwise we have to return location

	//searching string begins here
	for (int i=0;i<strlen(stringtable);i++)
	{
		//if we see similar char we increased yc to check other chars of this variable
		if(stringtable[i]==text[yc])
		{
			yc++;
		}
		//we set yc =0 everytime we can't see a similar char. The reason is, if we see "interest" and "interesting" respectively
		// in stringtable and text we will increase yc 8 times (as interest in stringtable). then we have to reset yc since two
		// words are different and we want to check other words, too.
		else 
			yc = 0;

		//if yc counter == strlen(text) that means we extract and find a pattern...therefore we should check if it is and independant words
		// or a word inside another word
		if(yc==strlen(text)) 
		{
			//if i-yc>=0 that means the word is not at the start of stringtable, so there must be spaces one before and one after the word
			// if everythings goes right, then we can say this variable is not new and we can return the location and searching is finished
			if(i-yc>=0 && stringtable[i-yc]==' ' && (stringtable[i+1]==' '))
			{
				return i-yc+1;
			}
			//in other case if i-yc>=0 but the found variable is at the end of string there is no space afterward but instead we have 
			// i+1 == strlen(stringtable), since there is end of string
			if(i-yc>=0 && stringtable[i-yc]==' ' && i+1==strlen(stringtable))
			{
				return i-yc+1;
			}
			
			//if i-yc<0 then it the word we found is at the start of string table so ther must be a space just aftewards not befor
			if(i-yc<0 && stringtable[i+1]==' ')
			{
				return i-yc+1;
			}

			//if there is no break, that means the word we found wasn't an independant one or correct one, so we should search again
			yc = 0;
		}
	}
	return -1;
}
