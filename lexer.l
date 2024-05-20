%{
    #include "y.tab.h"
    int countn=0;
%}

%option yylineno

letras [a-zA-Z]
digito [0-9]

%%

"print"                    { return PRINT; }
"read"                     { return READ; }
"int"                       { return INT; }
"float"                     { return FLOAT; }
"void"                      { return VOID; }
"return"                    { return RETURN; }
"while"	                    { return WHILE; }
"if"	                    { return IF; }
"else"	                    { return ELSE; }
[-]?{digito}+                { return NUMBER; }
[-]?{digito}+\.{digito}{1,6}  { return FLOAT_NUM; }
{letras}({letras}|{digito})*   { return ID; }
"<="                        { return TMEIG; }
">="                        { return TMAIG; }
"=="                        { return TIGUA; }
"!="                        { return TDIFE; }
">"	                    { return TMAIO; }
"<"	                    { return TMENO; }
"&&"	                    { return AND; }
"||"	                    { return OR; }
"+"                         { return ADD; }
"-"                         { return SUBTRACT; }
"/"                         { return DIVIDE; }
"*"                         { return MULTIPLY; }
"("                         { return TAPAR; }
")"                         { return TFPAR; }
"{"                         { return TACHA; }
"}"                         { return TFCHA; }
";"                         { return TPEVI; }
"="                         { return TATRI; }
","                         { return TVIRG; }
\/\/.*                      { ; }
\/\*(.*\n)*.*\*\/           { ; } 
[ \t\r\n]+                  { /* Ignora espaços em branco */ }
[\n]                        { countn++; }
.	                    { return *yytext; }
["].*["]                    { return STRING; }
['].[']                     { return CHARACTER; }

%%

int yywrap() {
    return 1;
}