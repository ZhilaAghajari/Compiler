#MAKEFILE
#last step I was in, cannot run YACC completely, since there is
#no yac.tab.y for us!
all : LEXcompile YACC GccCompiler

LEXcompile : lexical_rules.l
	lex lexical_rules.l
	
GccCompiler: y.tab.c lex.yy.c proj2.c
	gcc  -g -o runparser y.tab.c proj2.c -lfl

YACC : Grammar.y
	yacc -v Grammar.y


clean: 
	rm -rf lex.yy.c runfile
	rm -rf Grammar.output
	rm -rf Grammar.tab.c

# parser:   y.tab.c lex.yy.c proj2.c
# 	gcc  -g -o parser y.tab.c proj2.c -lfl

# y.tab.c:  grammar.y
# 	yacc -v grammar.y

# lex.yy.c: lexical_rules.l 
# 	lex lexical_rules.l