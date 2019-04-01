#MAKEFILE
all : LEXcompile YACC GccCompiler

LEXcompile : lexical_rules.l
	lex lexical_rules.l
	
GccCompiler: y.tab.c lex.yy.c proj2.c
	gcc  -std=c99 -g -o runparser y.tab.c proj2.c -lfl

YACC : Grammar.y
	yacc -v Grammar.y


clean: 
	rm -rf lex.yy.c runfile
	rm -rf Grammar.output
	rm -rf Grammar.tab.c
	rm -rf runparser

# parser:   y.tab.c lex.yy.c proj2.c
# 	gcc  -g -o parser y.tab.c proj2.c -lfl

# y.tab.c:  grammar.y
# 	yacc -v grammar.y

# lex.yy.c: lexical_rules.l 
# 	lex lexical_rules.l