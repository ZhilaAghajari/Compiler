#MAKEFILE
#last step I was in, cannot run YACC completely, since there is
#no yac.tab.y for us!
all : LEXcompile YACC SemanticCompiler

LEXcompile : lex.l table.c 
	flex lex.l table.c
	
#ParserCompiler: y.tab.c lex.yy.c proj2.c
#	gcc  -std=c99 -g -o runparser Grammar.y y.tab.c proj2.c -lfl

SemanticCompiler: seman.c y.tab.c lex.yy.c proj2.c proj3.c
	gcc -g -o runsemantic seman.c y.tab.c proj2.c proj3.c -lfl


YACC : grammar.y
	yacc -v grammar.y


clean: 
	rm -rf lex.yy.c runfile
	rm -rf Grammar.output
	rm -rf Grammar.tab.c
	rm -rf runparser
	rm -rf runsemantic

# parser:   y.tab.c lex.yy.c proj2.c
# 	gcc  -g -o parser y.tab.c proj2.c -lfl

# y.tab.c:  grammar.y
# 	yacc -v grammar.y

# lex.yy.c: lexical_rules.l 
# 	lex lexical_rules.l