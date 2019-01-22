#MAKEFILE

all : LEXcompile GccCompiler

LEXcompile : lexical_rules.l
	lex lexical_rules.l
	
GccCompiler: lex.yy.c 
	gcc lex.yy.c -o runfile -ll

clean: 
	rm lex.yy.c runfile