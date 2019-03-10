#MAKEFILE

all : LEXcompile GccCompiler YACC

LEXcompile : lexical_rules.l
	lex lexical_rules.l

YACC : Grammer.y
	bison -v Grammer.y
	
GccCompiler: lex.yy.c 
	gcc -std=c99 lex.yy.c -o runfile -ll


clean: 
	rm lex.yy.c runfile