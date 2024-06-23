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

struct node *criarNode(struct node *left, struct node *right, char *token);
struct funcao *criarFuncao(char *tipoRetorno, char *nome, struct parametro *parametros, struct blocoPrincipal *blocoPrincipal);
struct raiz *criarRaiz(struct funcao *);
struct parametro *criarParametro(char *tipo, char *nome);
void imprimir(struct raiz *raiz);
void imprimirAST(struct node *node);
struct bloco *criarBloco(struct listaCmd *listaCmd);
struct ifStatement *criarIfStatement(struct node *condition, struct bloco *trueBlock, struct bloco *falseBlock);
struct listaCmd *adicionarComando(struct listaCmd *lista, struct node *cmd);
void imprimirListaCmd(struct listaCmd *lista);
struct listaCmd *criarListaCmd(struct node *node);
struct listaIdentificadores *adicionarListaIdentificadores(struct listaIdentificadores *lista, char *novoIdentificador);
struct listaIdentificadores *criarListaIdentificadores(char *nome);
void imprimirListaidentificadores(struct listaIdentificadores *lista);
struct tabelaSimbolos *adicionarTabelaSimbolos(struct tabelaSimbolos *tabela, char *nome, char *tipoDado, char *tipo);
void imprimirTabelaSimbolos(struct tabelaSimbolos *tabela);
struct blocoPrincipal *criarBlocoPrincipal(struct tabelaSimbolos *tabelaSimbolos, struct listaCmd *listaCmd);
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
    struct blocoPrincipal *blocoPrincipal;
    struct funcao *next;
};

struct node
{
    struct node *left;
    struct node *right;
    char *token;
};

struct listaCmd
{
    struct node *node;
    struct listaCmd *next;
};

struct bloco
{
    struct listaCmd *listaCmd;
};
struct blocoPrincipal
{
    struct tabelaSimbolos *tabelaSimbolos;
    struct listaCmd *listaCmd;
};

struct tabelaSimbolos
{
    char *nome;
    char *tipo;
    char *tipoDado;
    struct tabelaSimbolos *next;
};

struct listaIdentificadores
{
    char *nome;
    struct listaIdentificadores *next;
};

struct raiz *head;

struct comando *comando
{
    union
    {
        // struct atribuicaoCmd *atribuicao;
        struct ifStatement *ifStatement;
        struct whileCmd *ifStatement;
    }
}

struct whileCmd
{
    struct node *condition;
    struct bloco *bloco;
};

struct atribuicao
{
    char *identificador;
    struct node *expressao;
};
struct ifStatement
{
    struct node *condition;   // Condição do if
    struct bloco *trueBlock;  // Bloco de instruções se a condição for verdadeira
    struct bloco *falseBlock; // Bloco de instruções se a condição for falsa (else)
};