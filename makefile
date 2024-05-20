all: main

lex.yy.c: lexer.l
	flex lexer.l

y.tab.c y.tab.h: parser1.y
	yacc -v -d parser1.y

main: lex.yy.c y.tab.c 
	gcc -o saida y.tab.c
