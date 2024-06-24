%{
#include "y.tab.h"
%}

%option yylineno

letras [a-zA-Z]
digito [0-9]

%%

"read"                     {strcpy(yylval.nd_obj.nome,(yytext)); return READ; }
"print"                    {strcpy(yylval.nd_obj.nome,(yytext)); return PRINT; }
"int"                      {strcpy(yylval.nd_obj.nome,(yytext)); return INT; }
"double"                    {strcpy(yylval.nd_obj.nome,(yytext)); return DOUBLE; }
"void"                     {strcpy(yylval.nd_obj.nome,(yytext)); return VOID; }
"return"                   {strcpy(yylval.nd_obj.nome,(yytext)); return RETURN; }
"while"                    {strcpy(yylval.nd_obj.nome,(yytext)); return WHILE; }
"if"                       {strcpy(yylval.nd_obj.nome,(yytext)); return IF; }
"else"                     {strcpy(yylval.nd_obj.nome,(yytext)); return ELSE; }
[-]?{digito}+              {strcpy(yylval.nd_obj.nome,(yytext)); return NUMBER; }
[-]?{digito}+\.{digito}+   {strcpy(yylval.nd_obj.nome,(yytext)); return DOUBLE_NUM; }
{letras}({letras}|{digito})* {strcpy(yylval.nd_obj.nome,(yytext)); return ID; }
"<="                       {strcpy(yylval.nd_obj.nome,(yytext)); return TMEIG; }
">="                       {strcpy(yylval.nd_obj.nome,(yytext)); return TMAIG; }
"=="                       {strcpy(yylval.nd_obj.nome,(yytext)); return TIGUA; }
"!="                       {strcpy(yylval.nd_obj.nome,(yytext)); return TDIFE; }
">"                        {strcpy(yylval.nd_obj.nome,(yytext)); return TMAIO; }
"<"                        {strcpy(yylval.nd_obj.nome,(yytext)); return TMENO; }
"&&"                       {strcpy(yylval.nd_obj.nome,(yytext)); return AND; }
"||"                       {strcpy(yylval.nd_obj.nome,(yytext)); return OR; }
"+"                        {strcpy(yylval.nd_obj.nome,(yytext)); return ADD; }
"-"                        {strcpy(yylval.nd_obj.nome,(yytext)); return SUBTRACT; }
"/"                        {strcpy(yylval.nd_obj.nome,(yytext)); return DIVIDE; }
"*"                        {strcpy(yylval.nd_obj.nome,(yytext)); return MULTIPLY; }
"("                        {return TAPAR; }
")"                        {return TFPAR; }
"{"                        {return TACHA; }
"}"                        { return TFCHA; }
";"                        { return TPEVI; }
"="                        {return TATRI; }
","                        { return TVIRG; }
"//"[^"\n"]*                { /* Ignora comentários de linha única */ }
[ \t\r]+                   { /* Ignora espaços em branco */ }
\n                         { }
.                          { return *yytext; }
\"([^\\"]|\\.)*\"            { strncpy(yylval.nd_obj.nome, yytext, 100); return STRING; }
['].[']                    { return CHARACTER; }

%%
int yywrap() {
    return 1;
}
