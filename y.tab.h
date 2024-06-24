/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VOID = 258,                    /* VOID  */
    CHARACTER = 259,               /* CHARACTER  */
    PRINT = 260,                   /* PRINT  */
    READ = 261,                    /* READ  */
    INT = 262,                     /* INT  */
    DOUBLE = 263,                  /* DOUBLE  */
    WHILE = 264,                   /* WHILE  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    NUMBER = 267,                  /* NUMBER  */
    DOUBLE_NUM = 268,              /* DOUBLE_NUM  */
    ID = 269,                      /* ID  */
    TMEIG = 270,                   /* TMEIG  */
    TMAIG = 271,                   /* TMAIG  */
    TIGUA = 272,                   /* TIGUA  */
    TDIFE = 273,                   /* TDIFE  */
    TMAIO = 274,                   /* TMAIO  */
    TMENO = 275,                   /* TMENO  */
    AND = 276,                     /* AND  */
    OR = 277,                      /* OR  */
    STRING = 278,                  /* STRING  */
    ADD = 279,                     /* ADD  */
    MULTIPLY = 280,                /* MULTIPLY  */
    DIVIDE = 281,                  /* DIVIDE  */
    SUBTRACT = 282,                /* SUBTRACT  */
    RETURN = 283,                  /* RETURN  */
    TAPAR = 284,                   /* TAPAR  */
    TFPAR = 285,                   /* TFPAR  */
    TACHA = 286,                   /* TACHA  */
    TFCHA = 287,                   /* TFCHA  */
    TPEVI = 288,                   /* TPEVI  */
    TATRI = 289,                   /* TATRI  */
    TVIRG = 290                    /* TVIRG  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define VOID 258
#define CHARACTER 259
#define PRINT 260
#define READ 261
#define INT 262
#define DOUBLE 263
#define WHILE 264
#define IF 265
#define ELSE 266
#define NUMBER 267
#define DOUBLE_NUM 268
#define ID 269
#define TMEIG 270
#define TMAIG 271
#define TIGUA 272
#define TDIFE 273
#define TMAIO 274
#define TMENO 275
#define AND 276
#define OR 277
#define STRING 278
#define ADD 279
#define MULTIPLY 280
#define DIVIDE 281
#define SUBTRACT 282
#define RETURN 283
#define TAPAR 284
#define TFPAR 285
#define TACHA 286
#define TFCHA 287
#define TPEVI 288
#define TATRI 289
#define TVIRG 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 5 "parser1.y"
 
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

#line 158 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
