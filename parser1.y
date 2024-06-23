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
		struct ifStatement* ifStatement;
		struct listaCmd *listaCmd;
		struct tabelaSimbolos* tabelaSimbolos;
		struct listaIdentificadores* listaIdentificadores;
		struct blocoPrincipal* blocoPrincipal;
		struct comando* comando;
		struct whileCmd* whileCmd;

	} nd_obj; 
} 

%token <nd_obj> VOID CHARACTER PRINT READ INT FLOAT WHILE IF ELSE
NUMBER FLOAT_NUM ID TMEIG TMAIG TIGUA TDIFE TMAIO TMENO AND OR STRING ADD MULTIPLY DIVIDE SUBTRACT RETURN 
TAPAR TFPAR TACHA TFCHA TPEVI TATRI TVIRG

%type <nd_obj> Programa ListaFuncoes DeclParametros BlocoPrincipal Declaracoes Tipo ListaId Bloco ListaCmd Comando Retorno Funcao
TipoRetorno Parametro Declaracao CmdSe CmdEnquanto CmdAtrib CmdEscrita CmdLeitura ChamadaProc ChamadaFuncao ExpressaoAritmetica value
OperadoresAritmeticos OperadoresRelacionais OperadoresLogicos expressaoRelacional ExpressaoLogica ListaParametros 

%%

Programa: ListaFuncoes BlocoPrincipal {$$.head = criarRaiz($1.funcao); head = $$.head;}
| BlocoPrincipal {$$.head = criarRaiz($1.funcao); head = $$.head;}
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

Funcao: TipoRetorno ID { add('F');} TAPAR DeclParametros TFPAR BlocoPrincipal {$$.funcao = criarFuncao($1.nome, $2.nome, $5.parametro, $7.blocoPrincipal);} 
| TipoRetorno ID { add('F');} TAPAR TFPAR BlocoPrincipal {$$.funcao = criarFuncao($1.nome, $2.nome, NULL, $6.blocoPrincipal);}
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

BlocoPrincipal: TACHA Declaracoes ListaCmd TFCHA { $$.blocoPrincipal = criarBlocoPrincipal($2.tabelaSimbolos, $3.listaCmd);}
| TACHA ListaCmd TFCHA { $$.blocoPrincipal = criarBlocoPrincipal(NULL, $2.listaCmd);}
;

Declaracoes: Declaracoes Declaracao{
	$$.tabelaSimbolos = $1.tabelaSimbolos;
	// Atualiza a tabela de símbolos com as declarações da derivação atual
	struct tabelaSimbolos *temp = $2.tabelaSimbolos;
	while (temp != NULL) {
		$$.tabelaSimbolos = adicionarTabelaSimbolos($$.tabelaSimbolos, temp->nome, temp->tipoDado, temp->tipo);
	temp = temp->next;
	}
}
| Declaracao {$$.tabelaSimbolos = $1.tabelaSimbolos;}
;

Declaracao: Tipo ListaId TPEVI {
	struct listaIdentificadores *id = $2.listaIdentificadores;
	struct tabelaSimbolos *tabelaSimbolos = NULL;
	while (id != NULL) {
		tabelaSimbolos = adicionarTabelaSimbolos(tabelaSimbolos, id->nome, $1.nome, "Variável");
		id = id->next;
	}
	$$.tabelaSimbolos = tabelaSimbolos;
	printf("\n\n\n\n\n");
}
;

ListaId: ListaId TVIRG ID { 
	$$.listaIdentificadores = adicionarListaIdentificadores($1.listaIdentificadores, $3.nome);
}
| ID { $$.listaIdentificadores = criarListaIdentificadores($1.nome);}
;

Tipo: INT { insert_type(); }
| FLOAT { insert_type(); }
| STRING{ insert_type(); }
;

ListaCmd: ListaCmd Comando {
	$$.listaCmd = adicionarComando($1.listaCmd, $2.node);
}
| Comando { $$.listaCmd = criarListaCmd($1.node); }
;

Comando: CmdSe
|CmdEnquanto { $$.node = $1.node; }
| CmdAtrib { $$.node = $1.node; }
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

CmdEnquanto: WHILE { add('K'); } TAPAR ExpressaoLogica TFPAR Bloco  {$$.node = criarNode($4.node, $6.bloco->listaCmd->node, "WHILE"); imprimirListaCmd($6.bloco->listaCmd);}
;

Bloco: TACHA ListaCmd TFCHA { $$.bloco = criarBloco($2.listaCmd); }
;

CmdSe: IF { add('K'); } TAPAR ExpressaoLogica TFPAR Bloco //{$$.ifStatement = criarIfStatement($3.node, $5.bloco, NULL);}
| IF { add('K'); } TAPAR ExpressaoLogica TFPAR Bloco ELSE { add('K'); } Bloco //{$$.ifStatement = criarIfStatement($4.node, $6.bloco, $9.bloco);}
;

CmdAtrib: ID TATRI ExpressaoAritmetica TPEVI {$$.node = criarNode(criarNode(NULL, NULL, $1.nome), $3.node, "=");}
| ID TATRI STRING TPEVI {$$.node = criarNode(criarNode(NULL, NULL, $1.nome), criarNode(NULL, NULL, $3.nome), "=");}
;

CmdEscrita: PRINT { add('F'); } TAPAR ExpressaoAritmetica TFPAR TPEVI
| PRINT { add('F'); } TAPAR STRING TFPAR TPEVI
;

CmdLeitura: READ { add('F'); } TAPAR ID TFPAR TPEVI
; //Nao sera utilizado

ChamadaProc: ChamadaFuncao TPEVI { $$.node = $1.node; }
;

ChamadaFuncao: ID TAPAR ListaParametros TFPAR { $$.node = criarNode($3.node, NULL, $1.nome); }
| ID TAPAR TFPAR { $$.node = criarNode(NULL, NULL, $1.nome); }

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
	
	imprimir(head);

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

struct ifStatement *criarIfStatement(struct node *condition, struct bloco *trueBlock, struct bloco *falseBlock){
	struct ifStatement *newIfStatement = (struct ifStatement*) malloc(sizeof(struct ifStatement));
	if (newIfStatement == NULL) {
		fprintf(stderr, "Falha na alocação de memória para o ifStatement.\n");
		return NULL;
	}
	newIfStatement->condition = condition;
	newIfStatement->trueBlock = trueBlock;
	newIfStatement->falseBlock = falseBlock;
	return newIfStatement;

}
// Função para imprimir os nomes das funções na lista

struct listaCmd* adicionarComando(struct listaCmd *lista, struct node *cmd) {
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

struct listaCmd* criarListaCmd(struct node *node) {
	struct listaCmd *lista = (struct listaCmd*) malloc(sizeof(struct listaCmd));
	if (lista == NULL) {
		// Handle memory allocation failure if needed
		return NULL; // Or NULL, depending on how you want to handle failure
	}
	lista->node = node;
	lista->next = NULL; // Ensure the new node is properly terminated
	return lista;
}

struct tabelaSimbolos* criarTabelaSimbolos(char* nome, char* tipoDado, char* tipo) {
	struct tabelaSimbolos* novaTabela = (struct tabelaSimbolos*) malloc(sizeof(struct tabelaSimbolos));
	if (novaTabela == NULL) {
		// Handle memory allocation failure if needed
		return NULL; // Or NULL, depending on how you want to handle failure
	}
	novaTabela->nome = strdup(nome);
	novaTabela->tipoDado = strdup(tipoDado);
	novaTabela->tipo = strdup(tipo);
	return novaTabela;
}

struct tabelaSimbolos* adicionarTabelaSimbolos(struct tabelaSimbolos *tabela, char* nome, char* tipoDado, char* tipo) {
	struct tabelaSimbolos *novo = criarTabelaSimbolos(nome, tipoDado, tipo);
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

void imprimirListaidentificadores(struct listaIdentificadores *lista) {
	struct listaIdentificadores *atual = lista;
	while (atual != NULL) {
		printf("Nome: %s\n", atual->nome);
		atual = atual->next;
	}
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

void imprimirTabelaSimbolos(struct tabelaSimbolos *tabela) {
	struct tabelaSimbolos *atual = tabela;
	while (atual != NULL) {
		printf("Nome: %s\n", atual->nome);
		printf("Tipo de Dado: %s\n", atual->tipoDado);
		printf("Tipo: %s\n", atual->tipo);
		atual = atual->next;
	}
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

void imprimir(struct raiz* raiz) {

	if (raiz == NULL) {
		printf("A raiz é nula.\n");
		return;
	}
	
	struct funcao *atual = raiz->funcao;

	while(atual != NULL) {
		printf("%s %s", raiz->funcao->tipoRetorno, raiz->funcao->nome);

		struct parametro *parametroAtual = atual->parametros;
		while(parametroAtual != NULL) {
			printf("(%s %s){", parametroAtual->tipo, parametroAtual->nome);
			parametroAtual = parametroAtual->next;
		}

		struct tabelaSimbolos *tabelaAtual = raiz->funcao->blocoPrincipal->tabelaSimbolos;
		while(tabelaAtual != NULL) {
			printf("\n%s %s;", tabelaAtual->tipoDado, tabelaAtual->nome);
			tabelaAtual = tabelaAtual->next;
		}

		struct listaCmd *listaCmdAtual = raiz->funcao->blocoPrincipal->listaCmd;
		imprimirListaCmd(listaCmdAtual);
		/* while(listaCmdAtual != NULL) {
			imprimirListaCmd(listaCmdAtual);
			listaCmdAtual = listaCmdAtual->next;
		} */

		atual = atual->next;
		
	}

	/* if(node == NULL) {
		printf("NULL");
		return;
	} */

	//printf("%s", node->token);
	/* printf("E %s", node->left->token);
	printf("D %s", node->right->token); */
	//printf("%s", head->funcao->next->parametros->nome); 

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

void imprimirAST(struct node *tree) {
    if(tree == NULL) {
        return;
    }
    
    // Check if the node is a "WHILE" command
    if (strcmp(tree->token, "WHILE") == 0) {
        printf("\nwhile(");
        imprimirAST(tree->left); // Print condition
        printf(")\n {");
        imprimirAST(tree->right); // Print body
        printf("}");
    } else {
        // For non-"WHILE" nodes, print left child, token, then right child
        if (tree->left) {
            imprimirAST(tree->left);
        }
        
        printf("%s", tree->token);
        
        if (tree->right) {
            imprimirAST(tree->right);
        }
    }
}

void imprimirListaCmd(struct listaCmd *lista) {
	struct listaCmd *atual = lista;

	while (atual != NULL) {
		if(atual->node != NULL)
			imprimirAST(atual->node);
		atual = atual->next;
	}
}