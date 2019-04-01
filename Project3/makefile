#MAKEFILE
all : LEXcompile YACC SemanticCompiler

LEXcompile : lexical_rules.l
	flex lexical_rules.l 

SemanticCompiler: semantic_analysis.c y.tab.c lex.yy.c proj2.c proj3.c
	gcc -std=c99 -g -o runsemantic semantic_analysis.c y.tab.c proj2.c proj3.c -lfl


YACC : Grammar.y
	yacc -d -v Grammar.y


clean: 
	rm -rf lex.yy.c runfile
	rm -rf Grammar.output
	rm -rf Grammar.tab.c
	rm -rf runparser
	rm -rf runsemantic
	rm -rf y.tab.c
