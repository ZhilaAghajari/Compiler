#MAKEFILE

all : LEXcompile GccCompiler YACC

LEXcompile : lexical_rules.l
	lex lexical_rules.l
	
GccCompiler: lex.yy.c 
	gcc -std=c99 lex.yy.c -o runfile -ll

YACC : Grammar.y
	bison -v Grammar.y
	gcc Grammar.tab.c proj2.c lex.yy.c -o runpars -ll


clean: 
	rm lex.yy.c runfile