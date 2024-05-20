%{
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    #include"lex.yy.c"
    
    void yyerror(const char *s);
    int yylex();
    int yywrap();
%}

%token VOID CHARACTER PRINT READ INT FLOAT WHILE IF ELSE
NUMBER FLOAT_NUM ID TMEIG TMAIG TIGUA TDIFE TMAIO TMENO AND OR STRING ADD MULTIPLY DIVIDE SUBTRACT RETURN 
TAPAR TFPAR TACHA TFCHA TPEVI TATRI TVIRG

%%

Programa: ListaFuncoes BlocoPrincipal
| BlocoPrincipal
;

ListaFuncoes: ListaFuncoes Funcao
| Funcao
;

Funcao: TipoRetorno ID TAPAR DeclParametros TFPAR BlocoPrincipal
| TipoRetorno ID TAPAR TFPAR BlocoPrincipal
;

TipoRetorno: Tipo
| VOID
;

DeclParametros: DeclParametros TVIRG Parametro
| Parametro
;

Parametro: Tipo ID
;

BlocoPrincipal: TACHA Declaracoes ListaCmd TFCHA
| TACHA ListaCmd TFCHA
;

Declaracoes: Declaracoes Declaracao
| Declaracao
;

Declaracao: Tipo ListaId TPEVI
;

Tipo: INT 
| FLOAT 
| STRING
;


ListaId: ListaId TVIRG ID
| ID
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

value: NUMBER
| FLOAT_NUM
| CHARACTER
| ID
;

Retorno: RETURN ExpressaoAritmetica TPEVI
|RETURN STRING TPEVI
|RETURN TPEVI
;

CmdEnquanto: WHILE TAPAR ExpressaoLogica TFPAR Bloco
;

CmdSe: IF TAPAR ExpressaoLogica TFPAR Bloco
| IF TAPAR ExpressaoLogica TFPAR Bloco ELSE Bloco
;

CmdAtrib: ID TATRI ExpressaoAritmetica TPEVI
| ID TATRI STRING TPEVI
;

CmdEscrita: PRINT TAPAR ExpressaoAritmetica TFPAR TPEVI
| PRINT TAPAR STRING TFPAR TPEVI
;

CmdLeitura: READ TAPAR ID TFPAR TPEVI
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
    yyparse();
}

void yyerror(const char* msg) {
    fprintf(stderr, "%s\n", msg);
}