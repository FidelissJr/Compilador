#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "lex.yy.c"

void yyerror(const char *s);
int yylex();
int yywrap();

typedef enum
{
    CMD_ATRIB,
    CMD_WHILE,
    CMD_IF,
    CMD_CHAMADAFUNCAO,
    CMD_NODE
} CommandType;

// TAbela de símbolos
void add(char c, char *tipo);
void insert_type();
int search(char *);
void insert_type();

struct node *criarNode(struct node *left, struct node *right, char *token);
struct funcao *criarFuncao(char *tipoRetorno, char *nome, struct parametro *parametros, struct blocoPrincipal *blocoPrincipal);
struct raiz *criarRaiz(struct funcao *);
struct parametro *criarParametro(char *tipo, char *nome);
void imprimir(struct raiz *raiz);
struct bloco *criarBloco(struct listaCmd *listaCmd);
struct ifCmd *criarifCmd(struct node *condition, struct bloco *trueBlock, struct bloco *falseBlock);
struct listaCmd *adicionarComando(struct listaCmd *lista, struct comando *cmd);
void imprimirListaCmd(struct listaCmd *lista);
struct listaCmd *criarListaCmd(struct comando *cmd);
struct listaIdentificadores *adicionarListaIdentificadores(struct listaIdentificadores *lista, char *novoIdentificador);
struct listaIdentificadores *criarListaIdentificadores(char *nome);
struct tabelaSimbolos *adicionarTabelaSimbolos(struct tabelaSimbolos *tabela, char *nome, char *tipoDado, char *tipo, int linha);
void imprimirTabelaSimbolos(struct tabelaSimbolos *tabela);
struct blocoPrincipal *criarBlocoPrincipal(struct tabelaSimbolos *tabelaSimbolos, struct listaCmd *listaCmd);
struct whileCmd *criarWhileCmd(struct node *condition, struct bloco *bloco);
struct comando *criarComando(CommandType identificador);
struct funcao *adicionarFuncao(struct funcao *listaFuncao, struct funcao *novaFuncao);
struct ifCmd *criarIfCmd(struct node *condition, struct bloco *trueBlock, struct bloco *falseBlock);
struct chamadaFuncao *criarChamadaFuncao(char *nome, struct node *parametros, int linha);
struct atribuicao *criarAtribuicao(char *nome, struct node *node, struct chamadaFuncao *chamadaFuncao);
void imprimirAtribuicao(struct atribuicao *atribuicao);

void printNode(struct node *n);
void printWhileCmd(struct whileCmd *whileCmd);
void printListaCmd(struct listaCmd *lista);
void printIfCmd(struct ifCmd *ifCmd);
void printChamadaFuncao(struct chamadaFuncao *chamadaFuncao);
void imprimirTabelaCompleta(struct tabelaSimbolos *tabela);

// Analise Semantica
void verificarSemantica(struct raiz *raiz);
int variavelJaDeclarada(struct tabelaSimbolos *tabela, const char *nome);
void throwMultiDeclarationError(char *nome, int linha1, int linha2);
void throwSemanticError(char *msg);
void verificarAtribuicao(struct atribuicao *atribuicao, struct tabelaSimbolos *tabelaSimbolos);
void verificarListaCmd(struct listaCmd *listaCmd, struct tabelaSimbolos *tabelaSimbolos);
void limparTabelaSimbolos();
void verificarMultiplasFuncoes(struct funcao *funcao);
int buscarLinhaSimbolo(struct tabelaSimbolos *tabela, const char *nome);
void verificarChamadaFuncao(struct chamadaFuncao *chamadaFuncao);
int contarParametros(struct parametro *parametros);
struct funcao *buscarFuncao(char *nome);

int count = 0;
int q;
char type[10];
extern int yylineno;

// Tabela Sintatica Abstrata
struct tabelaSimbolos *tabelaSimbolosMain = NULL;
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
    struct comando *comando;
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
    int linha;
    struct tabelaSimbolos *next;
};

struct listaIdentificadores
{
    char *nome;
    struct listaIdentificadores *next;
};

struct raiz *head;
struct comando
{
    CommandType identificador;
    union
    {
        struct node *node;
        struct ifCmd *ifCmd;
        struct whileCmd *whileCmd;
        struct chamadaFuncao *chamadaFuncao;
        struct atribuicao *atribuicao;
    } tipoComando;
};

struct atribuicao
{
    char *nome;
    struct node *node;
    struct chamadaFuncao *chamadaFuncao;
};
struct chamadaFuncao
{
    char *nome;
    struct node *parametros;
};

struct whileCmd
{
    struct node *condition;
    struct bloco *bloco;
};
struct ifCmd
{
    struct node *condition;   // Condição do if
    struct bloco *trueBlock;  // Bloco de instruções se a condição for verdadeira
    struct bloco *falseBlock; // Bloco de instruções se a condição for falsa (else)
};
