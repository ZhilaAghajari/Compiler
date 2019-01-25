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
\'([^"\\\n]|\\(.|\n|\f|\r|\n\r))*\' {columnNumber+=yyleng; updatestrTable(yytext);return SCONSTnum;} 
\'([^"\\\n]|\\(.|\n|\f|\r|\n\r))*\\? {columnNumber+=yyleng; errHandling(errString);return errString;}
0+[0-9]+ {columnNumber+=yyleng; errHandling(errIntzero);return errIntzero;}
([0-9]+(([a-zA-Z_]|[0-9]))*) {columnNumber+=yyleng; errHandling(errIdentifier);return errIdentifier;}; /* identifier starts with number*/
<<EOF>> {columnNumber+=yyleng;return EOFnum;}

%%
void updatestrTable(char* yytext)
{
	//reference string table to another string
	char temptable[4096];
	strcpy(temptable,stringtable);

	// first check the table for existance of the current string
	if(strstr(temptable, yytext) != NULL) 
	{
		//we loop until we make sure we find substring of the looking variable, not inside another string mistaken substring
		//for this purpose we check if the substr we get is start of string_table && there is a space before/after that || it is end of string
		//we Finnally make sure if we reach end of string 
		while(1)
		{
			//search for substr, and then return its location
			char *result = strstr(temptable,yytext);
			location = result-temptable;
			//if the looking substr is in starting point of string && (there is a space after it || it is end of stringtable) --> you found it correctly
			if(location==0 && (strcmp(temptable[location+strlen(yytext)]," " ) ==0 || strcmp(temptable[location+strlen(yytext)],"\0" )==0 ))
				break;
			//if the substr we are looking for is somewhere in the middle of string, &&  there is an space before && there is (space || \0) after
			if(location>0 && temptable[location-1]==' ' && (temptable[location+strlen(yytext)]=='\0' || temptable[location+strlen(yytext)]==' '))// && strcmp(temptable[location-1]," " ) ==0 && (strcmp(temptable[location+strlen(yytext)],"\0" ) ==0 || strcmp(temptable[location+strlen(yytext)]," " ) ==0 ))
				break;
			//if it is not broke yet, that means the substr we found was not what we wanted...
			//split the string from where we are to check again for any possible match
			strcpy(temptable," "); //copy a fake string to reset current string
			int counter = 0;//create a counter for temptableß
			for(int i=location+strlen(yytext);stringtable[i]!='\0';i++)
			{
				//temptable[counter++] = stringtable[i];
				//we want to split stringtable from current location to the end and put it to temptable. We do this to check the rest of stringtable
				//for this purpose the easiest way is to add char by char to pevent error, and since there is no char to string concatation in C,
				// we make each char of stringtable(stringable[i]) a 2-len string and then add it to temptable
				char tmp[2]; tmp[0] = stringtable[i]; tmp[1] = '\0';
				strcat(temptable,tmp); 
			}

			if(counter<=1 || result == NULL) //it is end of string --> no match, store current substr as new token in stringtable
			{
				location =strlen(stringtable)+1;
				strcat(stringtable," ");
				strcat(stringtable,yytext);
				break;
			}
			//else while should continue 
			
		}
	}
	else // else there is no match, add to the end of stringtablen
	{
		location =strlen(stringtable)+1;
		strcat(stringtable," ");
		strcat(stringtable,yytext);
	}
/*
	// first check the table for existance of the current string
	if(strstr(temptable, yytext) != NULL) 
	{	
		//we loop until we make sure we find substring of the looking variable, not inside another string mistaken substring
		//for this purpose we check if the substr we get is start of string_table && there is a space before/after that || it is end of string
		//we Finnally make sure if we reach end of string 
		while(1)
		{
			
			//search for substr, and then return its location
			char *result = strstr(temptable,yytext);
			location = result-temptable;
			//if the looking substr is in starting point of string && (there is a space after it || it is end of stringtable) --> you found it correctly
			if(location==0 && (strcmp(temptable[location+strlen(yytext)]," " ) ==0 || strcmp(temptable[location+strlen(yytext)],"\0" )==0 ))
				break;

			//if the substr we are looking for is somewhere in the middle of string, &&  there is an space before && there is (space || \0) after
			if(location>0 && strcmp(temptable[location-1]," " ) ==0 && (strcmp(temptable[location+strlen(yytext)],"\0" ) ==0 || strcmp(temptable[location+strlen(yytext)]," " ) ==0 ))
				break;

			//if it is not broke yet, that means the substr we found was not what we wanted...
			//split the string from where we are to check again for any possible match
			strcpy(temptable,""); //copy a fake string to reset current string
			int counter = 0;//create a counter for temptableß
			for(int i=location+strlen(yytext);strcmp(stringtable[i],"\0")!=0;i++)
				temptable[counter++] = stringtable[i];
			
			if(counter<=1) //it is end of string --> no match, store current substr as new token in stringtable
			{
				location =strlen(stringtable)+1;
				strcat(stringtable," ");
				strcat(stringtable,yytext);
			}
			//else while should continue 

		}

	}
	else
	{
		location =strlen(stringtable)+1;
		strcat(stringtable," ");
		strcat(stringtable,yytext);

	}
*/
    /* ... */
    /*char str1[4096];
    char str2[4096];
    strcpy(str1,stringtable);
    strcpy(str2,yytext);
    int l;
    int i;
    int j;
    int table_size;
    for(l=0;str2[l]!='\0';l++); //to find length of current string

    for(i=0,j=0;str1[i]!='\0' && str2[j]!='\0'; i++)
    {
    	if(str1[i]==str2[j])
    		j++;
    	else
    		j=0;
    }
    if(j==1)
    	location = i-j+1;
    else{
    		for(table_size=0;str1[table_size]!='\0';table_size++);
    		location = table_size;
    		strcat(stringtable,yytext);
    	}*/

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
				printf("the string %s in line %d and collumn %d has been detected which is malformed and not closed!'\n", yytext, lineNumber, columnNumber);	
				break;
			}
		case errIdentifier:
		{
			printf("so called identifier %s in line %d and collumn %d is malformed '\n", yytext, lineNumber, columnNumber);
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

	input = fopen("test.mjava","r");
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
	printf("String Table: %s" ,stringtable);

}