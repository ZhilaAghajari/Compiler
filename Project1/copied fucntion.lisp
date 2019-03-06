. {errHandling(errOther); return errOther;} // should I add this line after end of file



	if(strstr(stringtable, yytext) != NULL) 
	{	
		char *result = strstr(stringtable,yytext);
		location = result-stringtable;

	}
	else
	{
		location =strlen(stringtable)+1;
		strcat(stringtable," ");
		strcat(stringtable,yytext);

	}




	// first check the table for existance of the current string
	if(strstr(stringtable, yytext) != NULL) 
	{	
		char *result = strstr(stringtable,yytext);
		location = result-stringtable;

	}
	else
	{
		location =strlen(stringtable)+1;
		strcat(stringtable," ");
		strcat(stringtable,yytext);

	}
char str1[4096];
    char str2[4096];
    strcpy(str1,stringtable);
    strcpy(str2,yytext);
    int l;
    int i;
    int j;
    int table_size;
    for(l=0;str2[l]!='\0';l++); /*to find length of current string*/

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
    	}