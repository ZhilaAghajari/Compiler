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


extern FILE *yyin;
extern char* yytext;
extern tree DisplayTree;

FILE *treelst;	

void traverse(tree treeNode);
void semantic_analyzor(tree treeNode);
void bottomUp(tree root);

char* stringtable={"this is a test for system println \0"};


int main(int argc, char *argv[])
{

	FILE *f = fopen("src1","r");
	yyin = f; 
	treelst = stdout;
	yyparse();

	STInit(); //initalize symbol table
	traverse(DisplayTree);//start traversing the tree
	//STPrint();//print the symbol table
	//printtree(DisplayTree,0);//print the whole tree


	return 0;
}


//start traversing using this function
void traverse(tree treeNode)
{
	bottomUp(treeNode);
	//printtree(treeNode,0);
	//semantic_analyzor(treeNode);
}

void bottomUp(tree root) {
	if (IsNull(root)) {
		return;
	}
	printtree(root,0);//////////
	bottomUp(LeftChild(root));
}


void semantic_analyzor(tree treeNode)
{
	if(!IsNull(treeNode))//NodeKind(treeNode) == EXPRNode) //if it is a node we can traverse continue
	{
		switch(NodeOp(treeNode))
		{
			case ProgramOp:
				programAnalyze(treeNode); break;
			default:
				break;
		}
	}
	else //print an error message
		printf("%s %d \n","Node is not traversable!",IntVal(treeNode) );
}


void programAnalyze(tree treeNode)
{
	SetRightChild(treeNode, NullExp());
	semantic_analyzor(LeftChild(treeNode));
	/*printf("3");*/
}

