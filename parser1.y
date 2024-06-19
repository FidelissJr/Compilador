%{
	#include "parser1.h"
%}

%union { 
	struct var_nome { 
		char nome[100]; 
		struct funcao* funcao;
		struct parametro* parametro;
		struct raiz* head;
		//struct funcao* ndFuncao;
	} nd_obj; 
} 

%token <nd_obj> VOID CHARACTER PRINT READ INT FLOAT WHILE IF ELSE
NUMBER FLOAT_NUM ID TMEIG TMAIG TIGUA TDIFE TMAIO TMENO AND OR STRING ADD MULTIPLY DIVIDE SUBTRACT RETURN 
TAPAR TFPAR TACHA TFCHA TPEVI TATRI TVIRG

%type <nd_obj> Programa ListaFuncoes DeclParametros BlocoPrincipal Declaracoes Tipo ListaId Bloco ListaCmd Comando Retorno Funcao
TipoRetorno Parametro Declaracao CmdSe CmdEnquanto CmdAtrib CmdEscrita CmdLeitura ChamadaProc ChamadaFuncao

%%

Programa: ListaFuncoes BlocoPrincipal {$$.head = criarRaiz($1.funcao); head = $$.head;}
| BlocoPrincipal {{$$.head = criarRaiz($1.funcao); head = $$.head;}}
;

ListaFuncoes: ListaFuncoes Funcao {
	struct funcao* atual = $1.funcao;
    while (atual->next != NULL) {
        atual = atual->next;
    }
    atual->next = $2.funcao;
    $$.funcao = $1.funcao;
}
| Funcao {$$.funcao = $1.funcao;}
;

Funcao: TipoRetorno ID { add('F');} TAPAR DeclParametros TFPAR BlocoPrincipal {$$.funcao = criarFuncao($1.nome, $2.nome, $5.parametro, NULL);}
| TipoRetorno ID { add('F');} TAPAR TFPAR BlocoPrincipal {$$.funcao = criarFuncao($1.nome, $2.nome, NULL, NULL);}
;

TipoRetorno: Tipo
| VOID { insert_type(); }
;

DeclParametros: DeclParametros TVIRG Parametro {
	struct parametro* atual = $1.parametro;
    while (atual->next != NULL) {
        atual = atual->next;
    }
    atual->next = $3.parametro;
    $$.parametro = $1.parametro;
}
| Parametro {$$.parametro = $1.parametro;}
;

Parametro: Tipo ID { add('V'); $$.parametro = criarParametro($1.nome, $2.nome);}
;

BlocoPrincipal: TACHA Declaracoes ListaCmd TFCHA //{$$.nd = mknode($3.nd, NULL, "BlocoPrincipal");}
| TACHA ListaCmd TFCHA //{$$.nd = mknode($2.nd, NULL, "BlocoPrincipal");}
;

Declaracoes: Declaracoes Declaracao
| Declaracao
;

Declaracao: Tipo ListaId TPEVI
;

Tipo: INT { insert_type(); }
| FLOAT { insert_type(); }
| STRING{ insert_type(); }
;


ListaId: ListaId TVIRG ID { add('V'); }
| ID { add('V'); }
;

Bloco: TACHA ListaCmd TFCHA
;

ListaCmd: ListaCmd Comando
| Comando
;

Comando: CmdSe
|CmdEnquanto
| CmdAtrib
| CmdEscrita
| CmdLeitura
| ChamadaProc
| Retorno
;

value: NUMBER { add('C'); }
| FLOAT_NUM { add('C'); }
| CHARACTER { add('C'); }
| ID
;

Retorno: RETURN ExpressaoAritmetica TPEVI
|RETURN STRING TPEVI
|RETURN TPEVI
;

CmdEnquanto: WHILE { add('K'); } TAPAR ExpressaoLogica TFPAR Bloco 
;

CmdSe: IF { add('K'); } TAPAR ExpressaoLogica TFPAR Bloco 
| IF { add('K'); } TAPAR ExpressaoLogica TFPAR Bloco ELSE { add('K'); } Bloco
;

CmdAtrib: ID TATRI ExpressaoAritmetica TPEVI
| ID TATRI STRING TPEVI
;

CmdEscrita: PRINT { add('F'); } TAPAR ExpressaoAritmetica TFPAR TPEVI
| PRINT { add('F'); } TAPAR STRING TFPAR TPEVI
;

CmdLeitura: READ { add('F'); } TAPAR ID TFPAR TPEVI
;

ChamadaProc: ChamadaFuncao TPEVI
;

ChamadaFuncao: ID TAPAR ListaParametros TFPAR
| ID TAPAR TFPAR

ListaParametros: ListaParametros TVIRG ExpressaoAritmetica
| ListaParametros TVIRG STRING
| ExpressaoAritmetica
| STRING
;

OperadoresAritmeticos:  ADD 
| SUBTRACT 
| MULTIPLY
| DIVIDE
; 

OperadoresRelacionais: TMENO
| TMAIO
| TMEIG
| TMAIG
| TIGUA
| TDIFE
;

OperadoresLogicos: AND
| OR
; 

expressaoRelacional: ExpressaoAritmetica OperadoresRelacionais ExpressaoAritmetica
;

ExpressaoLogica: ExpressaoLogica OperadoresLogicos ExpressaoLogica
| expressaoRelacional
;

ExpressaoAritmetica: ExpressaoAritmetica OperadoresAritmeticos ExpressaoAritmetica
| value
| ChamadaFuncao
;

%%

int main() {
	//raizArvore = criarRaiz();

    yyparse();

    //Tabela de Símbolos
    printf("\n\n");
	printf("\t\tPHASE 1: LEXICAL ANALYSIS \n\n");
	printf("\nSYMBOL   DATATYPE   TYPE   LINE NUMBER \n");
	printf("_______________________________________\n\n");
	int i=0;
	for(i=0; i<count; i++) {
		printf("%s\t%s\t%s\t%d\t\n", symbol_table[i].id_nome, symbol_table[i].data_type, symbol_table[i].type, symbol_table[i].line_no);
	}
	for(i=0;i<count;i++) {
		free(symbol_table[i].id_nome);
		free(symbol_table[i].type);
	}
	printf("\n\n");
	if(head == NULL)
		printf("NULLLL");
	printf("\t\t\t\t\t\t PHASE 2: SYNTAX ANALYSIS \n\n");
	printf("\n\n");
	
	imprimir();


	free(head);
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_nome, type)==0) {
			return -1;
			break;
		}
	}
	return 0;
}

void add(char c) {
  q=search(yytext);
  if(!q) {
   		if(c == 'K') {
			symbol_table[count].id_nome=strdup(yytext);
			symbol_table[count].data_type=strdup("N/A");
			symbol_table[count].line_no=yylineno;
			symbol_table[count].type=strdup("Command\t");
			count++;
		}
		else if(c == 'V') {
			symbol_table[count].id_nome=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=yylineno;
			symbol_table[count].type=strdup("Variable");
			count++;
		}
		else if(c == 'C') {
			symbol_table[count].id_nome=strdup(yytext);
			symbol_table[count].data_type=strdup("CONST");
			symbol_table[count].line_no=yylineno;
			symbol_table[count].type=strdup("Constant");
			count++;
		}
		else if(c == 'F') {
			symbol_table[count].id_nome=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=yylineno;
			symbol_table[count].type=strdup("Function");
			count++;
		}
	}
}

void insert_type() {
	strcpy(type, yytext);
}

void yyerror(const char* msg) {
    fprintf(stderr, "%s\n", msg);
}

//Métodos para STA
struct node* mknode(struct node *left, struct node *right, char *token) {
  struct node *newnode = (struct node*) malloc(sizeof(struct node));
  char *newstr = (char*) malloc(strlen(token)+1);
  strcpy(newstr, token);
  newnode->left = left;
  newnode->right = right;
  newnode->token = newstr;
  return(newnode);
}


/* void printAST(struct node* node, int depth) {
    if (node == NULL)
        return;

    // Imprime tabs de acordo com a profundidade atual
    for (int i = 0; i < depth; i++) {
        printf("\t");
    }

    // Imprime o nome do nó
    printf("%s\n", node->token);

    // Chamadas recursivas para imprimir subárvores esquerda e direita
    printAST(node->left, depth + 1);
    printAST(node->right, depth + 1);
} */


struct funcao* criarFuncao(char* tipoRetorno, char* nome, struct parametro* parametros, struct node* bloco){
	struct funcao* novaFuncao = malloc(sizeof(struct funcao));
    if (novaFuncao == NULL) {
		printf("Falha ao inicializar Função");
        return NULL; // Falha na alocação de memória
    }

	if(parametros == NULL)
		printf("NULLLL");

    // copiar o nome da função e o tipo de retorno
    novaFuncao->nome = strdup(nome);
    novaFuncao->tipoRetorno = strdup(tipoRetorno);

    // Associar os parâmetros e o bloco de código já existentes
    novaFuncao->parametros = parametros;
    novaFuncao->bloco = bloco;
    novaFuncao->next = NULL; // Inicialmente, o próximo é NULL
	return novaFuncao;
}

struct raiz* criarRaiz(struct funcao* funcao){
	struct raiz* novaRaiz = (struct raiz*) malloc(sizeof(struct raiz));
    if (novaRaiz == NULL) {
        fprintf(stderr, "Falha na alocação de memória para a raiz.\n");
        return NULL;
    }

	/* if(novaFuncao == NULL){
		printf("AQUI Funcao NUll");
		novaRaiz->funcao = NULL;  
	}
	else{
		novaRaiz->funcao = novaFuncao;
	} */

//    novaRaiz->funcao = NULL;  // Inicializa a lista de funções como vazia
	
	if(funcao == NULL)
		printf("FUNCAO NULA");

	novaRaiz->nome = "Raiz";
	novaRaiz->funcao = funcao;
    return novaRaiz;
}

struct parametro* criarParametro(char* tipo, char* nome){
	//printf("CRIANDO PARAMETRO %s %s", tipo, nome);
	struct parametro* novoParametro = malloc(sizeof(struct parametro));

	novoParametro->nome = strdup(nome);;
	novoParametro-> tipo = strdup(tipo);;
	novoParametro->next = NULL;

	if (novoParametro == NULL) {
		printf("Falha ao inicializar parametro");
        return NULL; // Falha na alocação de memória
    }

	return novoParametro;
}

// Função para imprimir os nomes das funções na lista
void imprimir() {

	printf("%s", head->funcao->parametros->nome);
	printf("%s", head->funcao->next->parametros->nome);

	//if(head->funcao == NULL)
		//printf("NAO FUNCAO");
    /* if (raizArvore == NULL || raizArvore->funcao == NULL) {
        printf("A lista de funções está vazia ou a raiz é nula.\n");
        return;
    }

    struct funcao *atual = raizArvore->funcao;
    while (atual != NULL) {
        printf("Nome da Função: %s\n", atual->nome);
        atual = atual->next; // Move para a próxima função na lista
    } */
	/* if (teste == NULL || teste->funcao == NULL) {
		printf("A lista de funções está vazia ou a raiz é nula.\n");
		return;
    }

    struct funcao *atual = teste->funcao;
    while (atual != NULL) {
        printf("Nome da Função: %s\n", atual->nome);
        atual = atual->next; // Move para a próxima função na lista
    } */
}

