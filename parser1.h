#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "lex.yy.c"

void yyerror(const char *s);
int yylex();
int yywrap();

// TAbela de símbolos
void add(char);
void insert_type();
int search(char *);
void insert_type();

struct node *mknode(struct node *left, struct node *right, char *token);
struct funcao *criarFuncao(char *tipoRetorno, char *nome, struct parametro *parametros, struct node *bloco);
struct raiz *criarRaiz(struct funcao *);
struct parametro *criarParametro(char *tipo, char *nome);
void imprimir();

struct dataType
{
    char *id_nome;
    char *data_type;
    char *type;
    int line_no;
} symbol_table[40];

int count = 0;
int q;
char type[10];
extern int yylineno;

// Tabela Sintatica Abstrata

struct raiz
{
    struct funcao *funcao;
    char *nome;
};

struct parametro
{
    char *nome;
    char *tipo;
    struct parametro *next;
};

struct funcao
{
    char *nome;
    char *tipoRetorno;
    struct parametro *parametros;
    struct node *bloco;
    struct funcao *next;
};

struct node
{
    struct node *left;
    struct node *right;
    char *token;
};

struct bloco
{
    char *nome;
    struct node *node;
}

struct raiz *head;