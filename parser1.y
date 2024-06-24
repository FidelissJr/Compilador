%{
	#include "parser1.h"
%}

%union { 
	struct var_nome { 
		char nome[100]; 
		struct funcao* funcao;
		struct parametro* parametro;
		struct raiz* head;
		struct bloco* bloco;
		struct node* node;
		struct ifCmd* ifCmd;
		struct listaCmd *listaCmd;
		struct tabelaSimbolos* tabelaSimbolos;
		struct listaIdentificadores* listaIdentificadores;
		struct blocoPrincipal* blocoPrincipal;
		struct comando* comando;
		struct whileCmd* whileCmd;
		struct chamadaFuncao* chamadaFuncao;
		struct atribuicao* atribuicao;

	} nd_obj; 
} 

%token <nd_obj> VOID CHARACTER PRINT READ INT FLOAT WHILE IF ELSE
NUMBER FLOAT_NUM ID TMEIG TMAIG TIGUA TDIFE TMAIO TMENO AND OR STRING ADD MULTIPLY DIVIDE SUBTRACT RETURN 
TAPAR TFPAR TACHA TFCHA TPEVI TATRI TVIRG

%type <nd_obj> Programa ListaFuncoes DeclParametros BlocoPrincipal Declaracoes Tipo ListaId Bloco ListaCmd Comando Retorno Funcao
TipoRetorno Parametro Declaracao CmdSe CmdEnquanto CmdAtrib CmdEscrita CmdLeitura ChamadaProc ChamadaFuncao ExpressaoAritmetica value
OperadoresAritmeticos OperadoresRelacionais OperadoresLogicos expressaoRelacional ExpressaoLogica ListaParametros 

%%

Programa: ListaFuncoes BlocoPrincipal { 
	$2.blocoPrincipal->tabelaSimbolos = tabelaSimbolosMain;
	struct funcao* main = criarFuncao("", "", NULL, $2.blocoPrincipal);
	$1.funcao = adicionarFuncao($1.funcao, main);
	$$.head = criarRaiz($1.funcao); 
	head = $$.head;
	limparTabelaSimbolos();
	}
| BlocoPrincipal {$$.head = criarRaiz($1.funcao); head = $$.head; }
;

ListaFuncoes: ListaFuncoes Funcao {
	$2.funcao->blocoPrincipal->tabelaSimbolos = tabelaSimbolosMain;
	$$.funcao = adicionarFuncao($1.funcao, $2.funcao);
	limparTabelaSimbolos();
}
| Funcao {
	$1.funcao->blocoPrincipal->tabelaSimbolos = tabelaSimbolosMain;
	$$.funcao = $1.funcao; 
	limparTabelaSimbolos();
}
;

Funcao: TipoRetorno ID {add('F', NULL);} TAPAR DeclParametros TFPAR BlocoPrincipal { 
	$$.funcao = criarFuncao($1.nome, $2.nome, $5.parametro, $7.blocoPrincipal); } 
| TipoRetorno ID {add('F', NULL);} TAPAR TFPAR BlocoPrincipal {$$.funcao = criarFuncao($1.nome, $2.nome, NULL, $6.blocoPrincipal);}
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

Parametro: Tipo ID  { add('V', NULL); $$.parametro = criarParametro($1.nome, $2.nome);}
;

BlocoPrincipal: TACHA Declaracoes ListaCmd TFCHA { $$.blocoPrincipal = criarBlocoPrincipal(NULL, $3.listaCmd);}
| TACHA ListaCmd TFCHA { $$.blocoPrincipal = criarBlocoPrincipal(NULL, $2.listaCmd);}
;

Declaracoes: Declaracoes Declaracao 
| Declaracao
;

Declaracao: Tipo ListaId TPEVI
;

ListaId: ListaId TVIRG ID { 
	{add('V', NULL);}
	$$.listaIdentificadores = adicionarListaIdentificadores($1.listaIdentificadores, $3.nome);
}
| ID { $$.listaIdentificadores = criarListaIdentificadores($1.nome); {add('V', NULL);}}
;

Tipo: INT { insert_type(); }
| FLOAT { insert_type(); }
| STRING{ insert_type(); }
;

ListaCmd: ListaCmd Comando {
	$$.listaCmd = adicionarComando($1.listaCmd, $2.comando);
}
| Comando { $$.listaCmd = criarListaCmd($1.comando);}
;

Comando: CmdSe { $$.comando = criarComando(CMD_IF); $$.comando->tipoComando.ifCmd = $1.ifCmd;}
| CmdEnquanto { $$.comando = criarComando(CMD_WHILE); $$.comando->tipoComando.whileCmd = $1.whileCmd;}
| CmdAtrib { $$.comando = criarComando(CMD_ATRIB); $$.comando->tipoComando.node = $1.node; $$.comando->tipoComando.atribuicao = $1.atribuicao;}
| CmdEscrita { $$.comando = criarComando(CMD_NODE); $$.comando->tipoComando.node = $1.node;}
| CmdLeitura//Nao sera implmentado
| ChamadaProc {$$.comando = criarComando(CMD_CHAMADAFUNCAO); $$.comando->tipoComando.chamadaFuncao = $1.chamadaFuncao;}
| Retorno { $$.comando = criarComando(CMD_NODE); $$.comando->tipoComando.node = $1.node;}
;

value: NUMBER { add('C', "int"); }
| FLOAT_NUM { add('C', "double"); }
| STRING { add('C', "string"); }
| ID
;

Retorno: RETURN ExpressaoAritmetica TPEVI {$$.node = criarNode(NULL, $2.node, "return ");}
|RETURN STRING TPEVI {$$.node = criarNode(NULL, criarNode(NULL, NULL, $2.nome), "return ");}
|RETURN TPEVI {$$.node = criarNode(NULL, NULL, "return");}
;

CmdEnquanto: WHILE TAPAR ExpressaoLogica TFPAR Bloco  {$$.whileCmd = criarWhileCmd($3.node, $5.bloco);} 
;

Bloco: TACHA ListaCmd TFCHA { $$.bloco = criarBloco($2.listaCmd);}
;

CmdSe: IF TAPAR ExpressaoLogica TFPAR Bloco {$$.ifCmd = criarIfCmd($3.node, $5.bloco, NULL);}
| IF TAPAR ExpressaoLogica TFPAR Bloco ELSE Bloco {$$.ifCmd = criarIfCmd($3.node, $5.bloco, $7.bloco);}
;

CmdAtrib: ID TATRI ExpressaoAritmetica TPEVI {$$.atribuicao = criarAtribuicao($1.nome, $3.node, $3.chamadaFuncao);}
| ID TATRI STRING TPEVI {$$.atribuicao = criarAtribuicao($1.nome, criarNode(NULL, NULL, $3.nome), NULL);}
;

CmdEscrita: PRINT TAPAR STRING TFPAR TPEVI {$$.node = criarNode(NULL, criarNode(NULL, NULL, $3.nome), "print");}
| PRINT TAPAR ExpressaoAritmetica TFPAR TPEVI {$$.node = criarNode(NULL, $3.node, "print");}
;

CmdLeitura: READ TAPAR ID TFPAR TPEVI
; //Nao sera utilizado

ChamadaProc: ChamadaFuncao TPEVI {$$.chamadaFuncao = $1.chamadaFuncao;} 
;

ChamadaFuncao: ID TAPAR ListaParametros TFPAR { $$.chamadaFuncao = criarChamadaFuncao($1.nome, $3.node, yylineno);}
| ID TAPAR TFPAR { $$.chamadaFuncao = criarChamadaFuncao($1.nome, NULL, yylineno);}

ListaParametros: ListaParametros TVIRG ExpressaoAritmetica { $$.node = criarNode($1.node, $3.node, ","); }	
| ListaParametros TVIRG STRING { $$.node = criarNode($1.node, criarNode(NULL, NULL, $3.nome), ","); }
| ExpressaoAritmetica { $$.node = $1.node; }
| STRING { $$.node = criarNode(NULL, NULL, $1.nome); }
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

expressaoRelacional: ExpressaoAritmetica OperadoresRelacionais ExpressaoAritmetica { $$.node = criarNode($1.node, $3.node, $2.nome); }
;

ExpressaoLogica: ExpressaoLogica OperadoresLogicos ExpressaoLogica { $$.node = criarNode($1.node, $3.node, $2.nome); }
| expressaoRelacional { $$.node = $1.node; }
;

ExpressaoAritmetica: ExpressaoAritmetica OperadoresAritmeticos ExpressaoAritmetica { $$.node = criarNode($1.node, $3.node, $2.nome); }
| value { $$.node = criarNode(NULL, NULL, $1.nome);}
| ChamadaFuncao{$$.chamadaFuncao = $1.chamadaFuncao;}
;

%%

int main() {
	//raizArvore = criarRaiz();
	yyparse();
	//Tabela de Símbolos
	printf("\n\n");;
	printf("\t\tPHASE 1: LEXICAL ANALYSIS \n\n");
	printf("\nSYMBOL   DATATYPE   TYPE   LINE NUMBER \n");
	printf("_______________________________________\n\n");

	printf("__________________TABELA COMPLETA_____________________\n\n");

	printf("\n\n");
	if(head == NULL)
		printf("NULLLL");
	printf("\t\t\t\t\t\t PHASE 2: SYNTAX ANALYSIS \n\n");
	printf("\n\n");
	
	imprimir(head);

	//Verificacao semantica
	verificarSemantica(head);

	free(tabelaSimbolosMain);

	free(head);
}

int search(char *type) {
	struct tabelaSimbolos *atual = tabelaSimbolosMain;
	while (atual != NULL) {
		if (strcmp(atual->nome, type) == 0) {
			return atual->linha;
		}
		atual = atual->next;
	}
	return 0;
}


void add(char c, char*tipo) {
  q=search(yytext);
  if(q == 0) {
	if(c == 'K') {
		tabelaSimbolosMain = adicionarTabelaSimbolos(tabelaSimbolosMain, yytext, "N/A", "Command", yylineno);
	}
	else if(c == 'V') {
		tabelaSimbolosMain = adicionarTabelaSimbolos(tabelaSimbolosMain, yytext, type, "Variable", yylineno);
	}
	else if(c == 'C') {
		tabelaSimbolosMain = adicionarTabelaSimbolos(tabelaSimbolosMain, yytext, tipo, "Constant", yylineno);
	}
	else if(c == 'F') {
		tabelaSimbolosMain = adicionarTabelaSimbolos(tabelaSimbolosMain, yytext, type, "Function", yylineno);
	}
	}
	else{
		if(c != 'C')
			throwMultiDeclarationError(yytext, q, yylineno);
	}
	
}

void insert_type() {
	strcpy(type, yytext);
}

void yyerror(const char* msg) {
    fprintf(stderr, "%s\n", msg);
}

//Métodos para STA
struct node* criarNode(struct node *left, struct node *right, char *token) {
  struct node *newnode = (struct node*) malloc(sizeof(struct node));
  char *newstr = (char*) malloc(strlen(token)+1);
  strcpy(newstr, token);
  newnode->left = left;
  newnode->right = right;
  newnode->token = newstr;
  return(newnode);
}

struct funcao* criarFuncao(char* tipoRetorno, char* nome, struct parametro* parametros, struct blocoPrincipal* blocoPrincipal){
	struct funcao* novaFuncao = malloc(sizeof(struct funcao));
    if (novaFuncao == NULL) {
		printf("Falha ao inicializar Função");
        return NULL; // Falha na alocação de memória
    }

    // copiar o nome da função e o tipo de retorno
    novaFuncao->nome = strdup(nome);
    novaFuncao->tipoRetorno = strdup(tipoRetorno);

    // Associar os parâmetros e o bloco de código já existentes
    novaFuncao->parametros = parametros;
    novaFuncao->blocoPrincipal = blocoPrincipal;
    novaFuncao->next = NULL; // Inicialmente, o próximo é NULL
	return novaFuncao;
}

struct raiz* criarRaiz(struct funcao* funcao){
	struct raiz* novaRaiz = (struct raiz*) malloc(sizeof(struct raiz));
    if (novaRaiz == NULL) {
        fprintf(stderr, "Falha na alocação de memória para a raiz.\n");
        return NULL;
    }

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

struct bloco* criarBloco(struct listaCmd* listaCmd){
	struct bloco* novoBloco = (struct bloco*) malloc(sizeof(struct bloco));
    if (novoBloco == NULL) {
        fprintf(stderr, "Falha na alocação de memória para o bloco.\n");
        return NULL;
    }
	novoBloco->listaCmd = listaCmd;
	return novoBloco;
}

struct ifCmd *criarIfCmd(struct node *condition, struct bloco *trueBlock, struct bloco *falseBlock){
	struct ifCmd *newIfCmd = (struct ifCmd*) malloc(sizeof(struct ifCmd));
	if (newIfCmd == NULL) {
		fprintf(stderr, "Falha na alocação de memória para o ifCmd.\n");
		return NULL;
	}
	newIfCmd->condition = condition;
	newIfCmd->trueBlock = trueBlock;
	newIfCmd->falseBlock = falseBlock;
	return newIfCmd;

}

struct listaCmd* adicionarComando(struct listaCmd *lista, struct comando *cmd) {
    struct listaCmd *novo = criarListaCmd(cmd);
    if (novo == NULL) {
        // Handle memory allocation failure if needed
        return lista; // Or NULL, depending on how you want to handle failure
    }
    struct listaCmd *temp = lista;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = novo;
    return lista;
}

struct listaCmd* criarListaCmd(struct comando *cmd) {
	struct listaCmd *lista = (struct listaCmd*) malloc(sizeof(struct listaCmd));
	if (lista == NULL) {
		// Handle memory allocation failure if needed
		return NULL; // Or NULL, depending on how you want to handle failure
	}
	lista->comando = cmd;
	lista->next = NULL; // Ensure the new node is properly terminated
	return lista;
}

struct tabelaSimbolos* criarTabelaSimbolos(char* nome, char* tipoDado, char* tipo, int linha) {
	struct tabelaSimbolos* novaTabela = (struct tabelaSimbolos*) malloc(sizeof(struct tabelaSimbolos));
	if (novaTabela == NULL) {
		// Handle memory allocation failure if needed
		return NULL; // Or NULL, depending on how you want to handle failure
	}
	novaTabela->nome = strdup(nome);
	novaTabela->tipoDado = strdup(tipoDado);
	novaTabela->tipo = strdup(tipo);
	novaTabela->linha = linha;
	return novaTabela;
}

struct tabelaSimbolos* adicionarTabelaSimbolos(struct tabelaSimbolos *tabela, char* nome, char* tipoDado, char* tipo, int linha) {
	struct tabelaSimbolos *novo = criarTabelaSimbolos(nome, tipoDado, tipo, linha);
	if (tabela == NULL) {
        return novo;
    }

	if (novo == NULL) {
		// Handle memory allocation failure if needed
		printf("Falha ao criar nova tabela de símbolos");
		return tabela; // Or NULL, depending on how you want to handle failure
	}
	struct tabelaSimbolos *temp = tabela;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = novo;
	return tabela;
}

struct listaIdentificadores* criarListaIdentificadores(char* nome){
	struct listaIdentificadores* novaLista = malloc(sizeof(struct listaIdentificadores));
	novaLista->nome = strdup(nome);
	novaLista->next = NULL;

	if (novaLista == NULL) {
		printf("Falha ao inicializar lista de identificadores");
		return NULL; // Falha na alocação de memória
	}

	return novaLista;
}

struct listaIdentificadores* adicionarListaIdentificadores(struct listaIdentificadores* lista, char* novoIdentificador){
    struct listaIdentificadores* novo = criarListaIdentificadores(novoIdentificador);
    if (novo == NULL) {
        // Handle memory allocation failure if needed
        return lista; // Or NULL, depending on how you want to handle failure
    }
    if (lista == NULL) {
		printf("LISTA NULA");
        // If the list is initially empty, return the new node as the start of the list
        return novo;
    }
    struct listaIdentificadores* temp = lista;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = novo; // Append the new node at the end of the list
    return lista;
}

int variavelJaDeclarada(struct tabelaSimbolos *tabela, const char *nome) {
    struct tabelaSimbolos *atual = tabela;
    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0) {
            return atual->linha;
        }
        atual = atual->next;
    }
    return 0;
}

struct funcao* adicionarFuncao(struct funcao *listaFuncao, struct funcao *novaFuncao) {
	struct funcao *temp = listaFuncao;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = novaFuncao;
	return listaFuncao;
}

struct blocoPrincipal* criarBlocoPrincipal(struct tabelaSimbolos* tabelaSimbolos, struct listaCmd* listaCmd) {
	struct blocoPrincipal* novoBlocoPrincipal = (struct blocoPrincipal*) malloc(sizeof(struct blocoPrincipal));
	if (novoBlocoPrincipal == NULL) {
		// Handle memory allocation failure if needed
		return NULL; // Or NULL, depending on how you want to handle failure
	}
	novoBlocoPrincipal->tabelaSimbolos = tabelaSimbolos;
	novoBlocoPrincipal->listaCmd = listaCmd;
	return novoBlocoPrincipal;
}

struct comando * criarComando(CommandType identificador) {
	struct comando *novoComando = (struct comando*) malloc(sizeof(struct comando));

	novoComando->identificador = identificador;

	if (novoComando == NULL) {
		fprintf(stderr, "Falha na alocação de memória para o comando.\n");
		return NULL;
	}
	return novoComando;
}

struct whileCmd *criarWhileCmd(struct node *condition, struct bloco *bloco) {
	struct whileCmd *newWhileCmd = (struct whileCmd*) malloc(sizeof(struct whileCmd));
	if (newWhileCmd == NULL) {
		fprintf(stderr, "Falha na alocação de memória para o whileCmd.\n");
		return NULL;
	}
	newWhileCmd->condition = condition;
	newWhileCmd->bloco = bloco;
	return newWhileCmd;
}

struct chamadaFuncao* criarChamadaFuncao(char* nome, struct node* parametros, int linha) {

	int q = search(nome);

	if(q == 0) {
		char msg[100];
		sprintf(msg, "Chamada de função inexistente: %s. Linha %d", nome, linha);
		throwSemanticError(msg);
	}

	struct chamadaFuncao* novaChamadaFuncao = (struct chamadaFuncao*) malloc(sizeof(struct chamadaFuncao));
	if (novaChamadaFuncao == NULL) {
		// Handle memory allocation failure if needed
		return NULL; // Or NULL, depending on how you want to handle failure
	}
	novaChamadaFuncao->nome = strdup(nome);
	novaChamadaFuncao->parametros = parametros;
	return novaChamadaFuncao;
}

struct atribuicao* criarAtribuicao(char* nome, struct node* node, struct chamadaFuncao* chamadaFuncao) {
	struct atribuicao* novaAtribuicao = (struct atribuicao*) malloc(sizeof(struct atribuicao));
	if (novaAtribuicao == NULL) {
		// Handle memory allocation failure if needed
		return NULL; // Or NULL, depending on how you want to handle failure
	}
	novaAtribuicao->nome = strdup(nome);
	novaAtribuicao->node = node;
	novaAtribuicao->chamadaFuncao = chamadaFuncao;
	return novaAtribuicao;
}

void printChamadaFuncao(struct chamadaFuncao* chamadaFuncao) {
	if (chamadaFuncao != NULL) {
		printf("%s(", chamadaFuncao->nome);
		if (chamadaFuncao->parametros != NULL) {
			printNode(chamadaFuncao->parametros);
		}
		printf(");\n");
	}
}

//Implementação de métodos de impressão
void imprimir(struct raiz* raiz) {

	if (raiz == NULL) {
		printf("A raiz é nula.\n");
		return;
	}
	
	struct funcao *atual = raiz->funcao;

	while(atual != NULL) {

		if(atual->parametros != NULL)
			printf("%s %s", atual->tipoRetorno, atual->nome);
		else
			printf("{\n");
		struct parametro *parametroAtual = atual->parametros;
		while(parametroAtual != NULL) {
			printf("(%s %s){\n", parametroAtual->tipo, parametroAtual->nome);
			parametroAtual = parametroAtual->next;
		}

		struct tabelaSimbolos *tabelaAtual = atual->blocoPrincipal->tabelaSimbolos;
		while(tabelaAtual != NULL) {
			printf("%s %s;\n", tabelaAtual->tipoDado, tabelaAtual->nome);
			tabelaAtual = tabelaAtual->next;
		}

		struct listaCmd *listaCmdAtual = atual->blocoPrincipal->listaCmd;
		printListaCmd(listaCmdAtual);


		atual = atual->next;
		printf("}\n\n");
		
	}
}

void imprimirTabelaSimbolos(struct tabelaSimbolos *tabela) {
	struct tabelaSimbolos *atual = tabela;
	while (atual != NULL) {
		printf("Nome: %s\n", atual->nome);
		printf("Tipo de Dado: %s\n", atual->tipoDado);
		printf("Tipo: %s\n", atual->tipo);
		atual = atual->next;
	}
}

void printNode(struct node *tree) {
     if (tree->left) {
            printNode(tree->left);
        }
        
        printf("%s", tree->token);
        
        if (tree->right) {
            printNode(tree->right);
        }
}

void printWhileCmd(struct whileCmd *whileC) {

	if (whileC == NULL) {
		printf("Comando de while nulo.\n");
		return;
	}

	if (whileC->condition == NULL) {
		printf("Condição do while nula.\n");
		return;
	}

	if(whileC->bloco == NULL) {
		printf("Bloco do while nulo.\n");
		return;
	}

	if(whileC->bloco->listaCmd == NULL) {
		printf("listaCmd nulo.\n");
		return;
	}

    if (whileC != NULL) {
        printf("while(");
        printNode(whileC->condition);
        printf("){\n");
        printListaCmd(whileC->bloco->listaCmd);
		printf("}\n");
    }
}

void printListaCmd(struct listaCmd *lista) {
    while (lista != NULL) {
        if (lista->comando != NULL) {
            switch (lista->comando->identificador) {
                case CMD_ATRIB:
					imprimirAtribuicao(lista->comando->tipoComando.atribuicao);
					break;
                case CMD_NODE:
                    printNode(lista->comando->tipoComando.node);
					printf(";\n");
                    break;
                case CMD_WHILE:
                    printWhileCmd(lista->comando->tipoComando.whileCmd);
                    break;
				case CMD_IF:
                    printIfCmd(lista->comando->tipoComando.ifCmd);
                    break;
				case CMD_CHAMADAFUNCAO:
					printChamadaFuncao(lista->comando->tipoComando.chamadaFuncao);
					break;
                default:
                    printf("Unknown command type.\n");
                    break;
            }
        }
        lista = lista->next;
    }
}

void printIfCmd(struct ifCmd *ifCmd) {
	if (ifCmd != NULL) {
		printf("if(");
		printNode(ifCmd->condition);
		printf("){\n");
		printListaCmd(ifCmd->trueBlock->listaCmd);
		printf("}\n");

		if (ifCmd->falseBlock != NULL) {
			printf("else {\n");
			printListaCmd(ifCmd->falseBlock->listaCmd);
			printf("}\n");
		}
	}
}

void imprimirAtribuicao(struct atribuicao *atribuicao) {
	if (atribuicao != NULL) {
		if(atribuicao->node != NULL){
		printf("%s = ", atribuicao->nome);
		printNode(atribuicao->node);
		printf(";\n");
		}
		else if(atribuicao->chamadaFuncao != NULL){
			printChamadaFuncao(atribuicao->chamadaFuncao);
		}
	}
}

void imprimirTabelaCompleta(struct tabelaSimbolos *tabela) {
	struct tabelaSimbolos *atual = tabela;
	while (atual != NULL) {
		printf("%s\t%s\t%s\t%d\t\n", atual->nome, atual->tipoDado, atual->tipo, atual->linha);
		/* printf("Nome: %s\n", atual->nome);
		printf("Tipo de Dado: %s\n", atual->tipoDado);
		printf("Tipo: %s\n", atual->tipo);
		printf("Linha: %d\n", atual->linha); */
		atual = atual->next;
	}
}

void verificarSemantica(struct raiz* raiz) {

	if (raiz == NULL) {
		printf("A raiz é nula.\n");
		return;
	}
	
	struct funcao *atual = raiz->funcao;

	verificarMultiplasFuncoes(atual);

	while(atual != NULL) {
		imprimirTabelaCompleta(atual->blocoPrincipal->tabelaSimbolos);
		/* if(atual->parametros != NULL)
			printf("%s %s", atual->tipoRetorno, atual->nome);
		else
			printf("{\n");
		struct parametro *parametroAtual = atual->parametros;
		while(parametroAtual != NULL) {
			printf("(%s %s){\n", parametroAtual->tipo, parametroAtual->nome);
			parametroAtual = parametroAtual->next;
		} */

		struct tabelaSimbolos *tabelaAtual = atual->blocoPrincipal->tabelaSimbolos;

		struct listaCmd *listaCmdAtual = atual->blocoPrincipal->listaCmd;
		verificarListaCmd(listaCmdAtual, tabelaAtual);
	
		printf("\n\n\n\n\n");
		atual = atual->next;
	}
}

void verificarListaCmd(struct listaCmd *listaCmd, struct tabelaSimbolos *tabelaSimbolos) {
	while (listaCmd != NULL) {
		if (listaCmd->comando != NULL) {
			switch (listaCmd->comando->identificador) {
				case CMD_ATRIB:
					verificarAtribuicao(listaCmd->comando->tipoComando.atribuicao, tabelaSimbolos);
					break;
				/* case CMD_NODE:
					verificarNode(listaCmd->comando->tipoComando.node);
					break;
				case CMD_WHILE:
					verificarWhileCmd(listaCmd->comando->tipoComando.whileCmd);
					break;
				case CMD_IF:
					verificarIfCmd(listaCmd->comando->tipoComando.ifCmd);
					break;
					*/
				case CMD_CHAMADAFUNCAO:
					verificarChamadaFuncao(listaCmd->comando->tipoComando.chamadaFuncao);
					break;
				default:
					//printf("Unknown command type.\n");
					break;
			}
		}
		listaCmd = listaCmd->next;
	}
}

void verificarAtribuicao(struct atribuicao *atribuicao, struct tabelaSimbolos *tabelaSimbolos) {
	if (atribuicao != NULL) {
		int q = variavelJaDeclarada(tabelaSimbolos, atribuicao->nome);
		if(q == 0) {
			char msg[100];
			sprintf(msg, "Variável não declarada: %s.", atribuicao->nome);
			throwSemanticError(msg);
		}
	}
}

void throwSemanticError(char *msg) {
	fprintf(stderr, "Erro semântico: %s\n", msg);
}

void throwMultiDeclarationError(char* nome, int linha1, int linha2) {
	printf("Erro semântico: %s foi declarado na linha %d e novamente na linha %d.\n", nome, linha1, linha2);
}

void limparTabelaSimbolos() {
	tabelaSimbolosMain = NULL;
}

void verificarMultiplasFuncoes(struct funcao* funcao){
	struct funcao* atual = funcao;
	while(atual != NULL) {
		struct funcao* temp = atual->next;
		while(temp != NULL) {
			if(strcmp(atual->nome, temp->nome) == 0) {
				char msg[100];
				sprintf(msg, "Função %s declarada mais de uma vez. Linha %d e Linha %d", atual->nome, buscarLinhaSimbolo(atual->blocoPrincipal->tabelaSimbolos, atual->nome), buscarLinhaSimbolo(temp->blocoPrincipal->tabelaSimbolos, temp->nome));
				throwSemanticError(msg);
			}
			temp = temp->next;
		}
		atual = atual->next;
	}
}

int buscarLinhaSimbolo(struct tabelaSimbolos *tabela, const char *nome) {
	struct tabelaSimbolos *atual = tabela;
	while (atual != NULL) {
		if (strcmp(atual->nome, nome) == 0) {
			return  atual->linha;
		}
		atual = atual->next;
	}
	return 0;
}

void verificarChamadaFuncao(struct chamadaFuncao* chamadaFuncao) {
	int countParameters = 0;
	if (chamadaFuncao != NULL) {
		struct funcao* funcao = buscarFuncao(chamadaFuncao->nome);
		if(funcao == NULL) {
			char msg[100];
			sprintf(msg, "Função %s não declarada.", chamadaFuncao->nome);
			throwSemanticError(msg);
		}
		if(chamadaFuncao->parametros != NULL) {
			struct node* parametros = chamadaFuncao->parametros;
			while(parametros != NULL) {
				countParameters++;
				parametros = parametros->right;
			}
			if(countParameters != contarParametros(funcao->parametros)) {
				char msg[100];
				sprintf(msg, "Número incorreto de parâmetros na chamada da função %s. Esperado: %d, Recebido: %d", chamadaFuncao->nome, contarParametros(funcao->parametros), countParameters);
				throwSemanticError(msg);
			}
		}
	}
}

struct funcao* buscarFuncao(char* nome){
	struct funcao* atual = head->funcao;
	while(atual != NULL) {
		if(strcmp(atual->nome, nome) == 0) {
			return atual;
		}
		atual = atual->next;
	}
}

int contarParametros(struct parametro* parametros) {
	int count = 0;
	struct parametro* atual = parametros;
	while(atual != NULL) {
		count++;
		atual = atual->next;
	}
	return count;
}