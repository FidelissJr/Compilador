/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser1.y"

	#include "parser1.h"

#line 75 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    FLOAT = 263,                   /* FLOAT  */
    WHILE = 264,                   /* WHILE  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    NUMBER = 267,                  /* NUMBER  */
    FLOAT_NUM = 268,               /* FLOAT_NUM  */
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
#define FLOAT 263
#define WHILE 264
#define IF 265
#define ELSE 266
#define NUMBER 267
#define FLOAT_NUM 268
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
		struct ifStatement* ifStatement;
		struct listaCmd *listaCmd;
		struct tabelaSimbolos* tabelaSimbolos;
		struct listaIdentificadores* listaIdentificadores;
		struct blocoPrincipal* blocoPrincipal;
	} nd_obj; 

#line 214 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_CHARACTER = 4,                  /* CHARACTER  */
  YYSYMBOL_PRINT = 5,                      /* PRINT  */
  YYSYMBOL_READ = 6,                       /* READ  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_FLOAT = 8,                      /* FLOAT  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_NUMBER = 12,                    /* NUMBER  */
  YYSYMBOL_FLOAT_NUM = 13,                 /* FLOAT_NUM  */
  YYSYMBOL_ID = 14,                        /* ID  */
  YYSYMBOL_TMEIG = 15,                     /* TMEIG  */
  YYSYMBOL_TMAIG = 16,                     /* TMAIG  */
  YYSYMBOL_TIGUA = 17,                     /* TIGUA  */
  YYSYMBOL_TDIFE = 18,                     /* TDIFE  */
  YYSYMBOL_TMAIO = 19,                     /* TMAIO  */
  YYSYMBOL_TMENO = 20,                     /* TMENO  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_STRING = 23,                    /* STRING  */
  YYSYMBOL_ADD = 24,                       /* ADD  */
  YYSYMBOL_MULTIPLY = 25,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 26,                    /* DIVIDE  */
  YYSYMBOL_SUBTRACT = 27,                  /* SUBTRACT  */
  YYSYMBOL_RETURN = 28,                    /* RETURN  */
  YYSYMBOL_TAPAR = 29,                     /* TAPAR  */
  YYSYMBOL_TFPAR = 30,                     /* TFPAR  */
  YYSYMBOL_TACHA = 31,                     /* TACHA  */
  YYSYMBOL_TFCHA = 32,                     /* TFCHA  */
  YYSYMBOL_TPEVI = 33,                     /* TPEVI  */
  YYSYMBOL_TATRI = 34,                     /* TATRI  */
  YYSYMBOL_TVIRG = 35,                     /* TVIRG  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_Programa = 37,                  /* Programa  */
  YYSYMBOL_ListaFuncoes = 38,              /* ListaFuncoes  */
  YYSYMBOL_Funcao = 39,                    /* Funcao  */
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_41_2 = 41,                      /* $@2  */
  YYSYMBOL_TipoRetorno = 42,               /* TipoRetorno  */
  YYSYMBOL_DeclParametros = 43,            /* DeclParametros  */
  YYSYMBOL_Parametro = 44,                 /* Parametro  */
  YYSYMBOL_BlocoPrincipal = 45,            /* BlocoPrincipal  */
  YYSYMBOL_Declaracoes = 46,               /* Declaracoes  */
  YYSYMBOL_Declaracao = 47,                /* Declaracao  */
  YYSYMBOL_ListaId = 48,                   /* ListaId  */
  YYSYMBOL_Tipo = 49,                      /* Tipo  */
  YYSYMBOL_ListaCmd = 50,                  /* ListaCmd  */
  YYSYMBOL_Comando = 51,                   /* Comando  */
  YYSYMBOL_value = 52,                     /* value  */
  YYSYMBOL_Retorno = 53,                   /* Retorno  */
  YYSYMBOL_CmdEnquanto = 54,               /* CmdEnquanto  */
  YYSYMBOL_55_3 = 55,                      /* $@3  */
  YYSYMBOL_Bloco = 56,                     /* Bloco  */
  YYSYMBOL_CmdSe = 57,                     /* CmdSe  */
  YYSYMBOL_58_4 = 58,                      /* $@4  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_60_6 = 60,                      /* $@6  */
  YYSYMBOL_CmdAtrib = 61,                  /* CmdAtrib  */
  YYSYMBOL_CmdEscrita = 62,                /* CmdEscrita  */
  YYSYMBOL_63_7 = 63,                      /* $@7  */
  YYSYMBOL_64_8 = 64,                      /* $@8  */
  YYSYMBOL_CmdLeitura = 65,                /* CmdLeitura  */
  YYSYMBOL_66_9 = 66,                      /* $@9  */
  YYSYMBOL_ChamadaProc = 67,               /* ChamadaProc  */
  YYSYMBOL_ChamadaFuncao = 68,             /* ChamadaFuncao  */
  YYSYMBOL_ListaParametros = 69,           /* ListaParametros  */
  YYSYMBOL_OperadoresAritmeticos = 70,     /* OperadoresAritmeticos  */
  YYSYMBOL_OperadoresRelacionais = 71,     /* OperadoresRelacionais  */
  YYSYMBOL_OperadoresLogicos = 72,         /* OperadoresLogicos  */
  YYSYMBOL_expressaoRelacional = 73,       /* expressaoRelacional  */
  YYSYMBOL_ExpressaoLogica = 74,           /* ExpressaoLogica  */
  YYSYMBOL_ExpressaoAritmetica = 75        /* ExpressaoAritmetica  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   179

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    32,    35,    43,    46,    46,    47,    47,
      50,    51,    54,    62,    65,    68,    69,    72,    81,    84,
      96,    99,   102,   103,   104,   107,   110,   113,   114,   115,
     116,   117,   118,   119,   122,   123,   124,   125,   128,   129,
     130,   133,   133,   136,   139,   139,   140,   140,   140,   143,
     144,   147,   147,   148,   148,   151,   151,   154,   157,   158,
     160,   161,   162,   163,   166,   167,   168,   169,   172,   173,
     174,   175,   176,   177,   180,   181,   184,   187,   188,   191,
     192,   193
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "CHARACTER",
  "PRINT", "READ", "INT", "FLOAT", "WHILE", "IF", "ELSE", "NUMBER",
  "FLOAT_NUM", "ID", "TMEIG", "TMAIG", "TIGUA", "TDIFE", "TMAIO", "TMENO",
  "AND", "OR", "STRING", "ADD", "MULTIPLY", "DIVIDE", "SUBTRACT", "RETURN",
  "TAPAR", "TFPAR", "TACHA", "TFCHA", "TPEVI", "TATRI", "TVIRG", "$accept",
  "Programa", "ListaFuncoes", "Funcao", "$@1", "$@2", "TipoRetorno",
  "DeclParametros", "Parametro", "BlocoPrincipal", "Declaracoes",
  "Declaracao", "ListaId", "Tipo", "ListaCmd", "Comando", "value",
  "Retorno", "CmdEnquanto", "$@3", "Bloco", "CmdSe", "$@4", "$@5", "$@6",
  "CmdAtrib", "CmdEscrita", "$@7", "$@8", "CmdLeitura", "$@9",
  "ChamadaProc", "ChamadaFuncao", "ListaParametros",
  "OperadoresAritmeticos", "OperadoresRelacionais", "OperadoresLogicos",
  "expressaoRelacional", "ExpressaoLogica", "ExpressaoAritmetica", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-108)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,  -108,  -108,  -108,  -108,   101,     4,    18,  -108,     9,
    -108,  -108,  -108,  -108,  -108,  -108,   -14,     5,   101,  -108,
      23,    30,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
     -21,  -108,  -108,  -108,  -108,    24,    28,    58,    65,    72,
      73,    63,   121,  -108,  -108,  -108,    83,     0,  -108,  -108,
    -108,    71,  -108,    50,  -108,    19,  -108,  -108,  -108,    85,
      87,    59,    97,    33,    59,    59,    59,  -108,  -108,    -8,
     151,    93,   137,  -108,  -108,  -108,  -108,  -108,  -108,    59,
    -108,  -108,   113,    38,   102,   115,   116,   125,  -108,    69,
     133,   100,   144,  -108,   124,  -108,  -108,   151,  -108,    -6,
    -108,   129,   123,   134,   135,   136,  -108,  -108,   140,    59,
    -108,  -108,  -108,  -108,  -108,  -108,    59,   140,   140,  -108,
     151,   123,    38,  -108,  -108,  -108,  -108,  -108,    75,  -108,
      21,   151,  -108,   145,  -108,  -108,    60,  -108,  -108,   140,
    -108
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,    22,    23,    24,     0,     0,     0,     5,     0,
       3,    10,    51,    55,    41,    44,     0,     0,     0,    18,
       0,     0,    26,    33,    28,    27,    29,    30,    31,    32,
       0,     1,     4,     2,     6,     0,     0,     0,     0,     0,
       0,     0,     0,    36,    34,    35,    37,     0,    40,    80,
      81,     0,    17,     0,    21,     0,    16,    25,    57,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    59,     0,
      62,     0,     0,    39,    64,    66,    67,    65,    38,     0,
      15,    19,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,    58,     0,    50,    49,    79,    20,     0,
      13,     0,     0,     0,     0,     0,    74,    75,     0,     0,
      70,    71,    72,    73,    69,    68,     0,     0,     0,    61,
      60,     0,     0,    14,     9,    52,    54,    56,     0,    42,
      77,    76,    45,     0,     7,    12,     0,    47,    43,     0,
      48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,   165,  -108,  -108,  -108,  -108,    51,    -2,
    -108,   161,  -108,    -4,   -15,   -19,  -108,  -108,  -108,  -108,
    -107,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,    -5,  -108,  -108,  -108,  -108,  -108,   -58,   -11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,    59,    60,     9,    99,   100,    10,
      18,    19,    55,    11,    21,    22,    49,    23,    24,    38,
     129,    25,    39,    40,   139,    26,    27,    35,    36,    28,
      37,    29,    50,    69,    79,   116,   109,    88,    89,    90
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      30,    20,    57,    53,    31,    33,    51,    91,    92,    43,
     132,   133,    58,    30,    20,    41,    30,    44,    45,    46,
      42,     1,    93,    34,   121,     2,     3,    94,    47,   122,
      70,    72,   140,    73,    57,    12,    13,    54,    48,    14,
      15,     4,   106,   107,    16,     2,     3,    87,    30,     5,
      85,   130,    81,    61,    82,    12,    13,    62,    17,    14,
      15,     4,    56,    43,    16,    12,    13,    43,    97,    14,
      15,    44,    45,    46,    16,    44,    45,    46,    17,   101,
      12,    13,    80,   120,    14,    15,    67,    63,    17,    16,
     106,   107,   138,    68,    64,    74,    75,    76,    77,   108,
     124,    65,    66,    17,    78,   131,    12,    13,     2,     3,
      14,    15,    41,   136,    83,    16,    84,    57,   101,   134,
      86,   106,   107,    30,     4,    43,    95,    98,    43,    17,
     117,    30,   102,    44,    45,    46,    44,    45,    46,    74,
      75,    76,    77,   123,    71,   103,   104,   119,   110,   111,
     112,   113,   114,   115,     5,   105,   137,    74,    75,    76,
      77,    74,    75,    76,    77,   106,   107,   125,   126,   127,
      96,   128,    32,   135,   118,    74,    75,    76,    77,    52
};

static const yytype_uint8 yycheck[] =
{
       5,     5,    21,    18,     0,     7,    17,    65,    66,     4,
     117,   118,    33,    18,    18,    29,    21,    12,    13,    14,
      34,     3,    30,    14,    30,     7,     8,    35,    23,    35,
      41,    42,   139,    33,    53,     5,     6,    14,    33,     9,
      10,    23,    21,    22,    14,     7,     8,    14,    53,    31,
      61,   109,    33,    29,    35,     5,     6,    29,    28,     9,
      10,    23,    32,     4,    14,     5,     6,     4,    79,     9,
      10,    12,    13,    14,    14,    12,    13,    14,    28,    83,
       5,     6,    32,    94,     9,    10,    23,    29,    28,    14,
      21,    22,    32,    30,    29,    24,    25,    26,    27,    30,
     102,    29,    29,    28,    33,   116,     5,     6,     7,     8,
       9,    10,    29,   128,    29,    14,    29,   136,   122,   121,
      23,    21,    22,   128,    23,     4,    33,    14,     4,    28,
      30,   136,    30,    12,    13,    14,    12,    13,    14,    24,
      25,    26,    27,    14,    23,    30,    30,    23,    15,    16,
      17,    18,    19,    20,    31,    30,    11,    24,    25,    26,
      27,    24,    25,    26,    27,    21,    22,    33,    33,    33,
      33,    31,     7,   122,    30,    24,    25,    26,    27,    18
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,    23,    31,    37,    38,    39,    42,
      45,    49,     5,     6,     9,    10,    14,    28,    46,    47,
      49,    50,    51,    53,    54,    57,    61,    62,    65,    67,
      68,     0,    39,    45,    14,    63,    64,    66,    55,    58,
      59,    29,    34,     4,    12,    13,    14,    23,    33,    52,
      68,    75,    47,    50,    14,    48,    32,    51,    33,    40,
      41,    29,    29,    29,    29,    29,    29,    23,    30,    69,
      75,    23,    75,    33,    24,    25,    26,    27,    33,    70,
      32,    33,    35,    29,    29,    75,    23,    14,    73,    74,
      75,    74,    74,    30,    35,    33,    33,    75,    14,    43,
      44,    49,    30,    30,    30,    30,    21,    22,    30,    72,
      15,    16,    17,    18,    19,    20,    71,    30,    30,    23,
      75,    30,    35,    14,    45,    33,    33,    33,    31,    56,
      74,    75,    56,    56,    45,    44,    50,    11,    32,    60,
      56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    40,    39,    41,    39,
      42,    42,    43,    43,    44,    45,    45,    46,    46,    47,
      48,    48,    49,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    53,    53,
      53,    55,    54,    56,    58,    57,    59,    60,    57,    61,
      61,    63,    62,    64,    62,    66,    65,    67,    68,    68,
      69,    69,    69,    69,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    71,    72,    72,    73,    74,    74,    75,
      75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     0,     7,     0,     6,
       1,     1,     3,     1,     2,     4,     3,     2,     1,     3,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     0,     6,     3,     0,     6,     0,     0,     9,     4,
       4,     0,     6,     0,     6,     0,     6,     2,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Programa: ListaFuncoes BlocoPrincipal  */
#line 31 "parser1.y"
                                      {(yyval.nd_obj).head = criarRaiz((yyvsp[-1].nd_obj).funcao); head = (yyval.nd_obj).head;}
#line 1375 "y.tab.c"
    break;

  case 3: /* Programa: BlocoPrincipal  */
#line 32 "parser1.y"
                 {(yyval.nd_obj).head = criarRaiz((yyvsp[0].nd_obj).funcao); head = (yyval.nd_obj).head;}
#line 1381 "y.tab.c"
    break;

  case 4: /* ListaFuncoes: ListaFuncoes Funcao  */
#line 35 "parser1.y"
                                  {
	struct funcao* atual = (yyvsp[-1].nd_obj).funcao;
    while (atual->next != NULL) {
        atual = atual->next;
    }
    atual->next = (yyvsp[0].nd_obj).funcao;
    (yyval.nd_obj).funcao = (yyvsp[-1].nd_obj).funcao;
}
#line 1394 "y.tab.c"
    break;

  case 5: /* ListaFuncoes: Funcao  */
#line 43 "parser1.y"
         {(yyval.nd_obj).funcao = (yyvsp[0].nd_obj).funcao;}
#line 1400 "y.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 46 "parser1.y"
                       { add('F');}
#line 1406 "y.tab.c"
    break;

  case 7: /* Funcao: TipoRetorno ID $@1 TAPAR DeclParametros TFPAR BlocoPrincipal  */
#line 46 "parser1.y"
                                                                              {(yyval.nd_obj).funcao = criarFuncao((yyvsp[-6].nd_obj).nome, (yyvsp[-5].nd_obj).nome, (yyvsp[-2].nd_obj).parametro, (yyvsp[0].nd_obj).blocoPrincipal);}
#line 1412 "y.tab.c"
    break;

  case 8: /* $@2: %empty  */
#line 47 "parser1.y"
                 { add('F');}
#line 1418 "y.tab.c"
    break;

  case 9: /* Funcao: TipoRetorno ID $@2 TAPAR TFPAR BlocoPrincipal  */
#line 47 "parser1.y"
                                                         {(yyval.nd_obj).funcao = criarFuncao((yyvsp[-5].nd_obj).nome, (yyvsp[-4].nd_obj).nome, NULL, (yyvsp[0].nd_obj).blocoPrincipal);}
#line 1424 "y.tab.c"
    break;

  case 11: /* TipoRetorno: VOID  */
#line 51 "parser1.y"
       { insert_type(); }
#line 1430 "y.tab.c"
    break;

  case 12: /* DeclParametros: DeclParametros TVIRG Parametro  */
#line 54 "parser1.y"
                                               {
	struct parametro* atual = (yyvsp[-2].nd_obj).parametro;
    while (atual->next != NULL) {
        atual = atual->next;
    }
    atual->next = (yyvsp[0].nd_obj).parametro;
    (yyval.nd_obj).parametro = (yyvsp[-2].nd_obj).parametro;
}
#line 1443 "y.tab.c"
    break;

  case 13: /* DeclParametros: Parametro  */
#line 62 "parser1.y"
            {(yyval.nd_obj).parametro = (yyvsp[0].nd_obj).parametro;}
#line 1449 "y.tab.c"
    break;

  case 14: /* Parametro: Tipo ID  */
#line 65 "parser1.y"
                   { add('V'); (yyval.nd_obj).parametro = criarParametro((yyvsp[-1].nd_obj).nome, (yyvsp[0].nd_obj).nome);}
#line 1455 "y.tab.c"
    break;

  case 15: /* BlocoPrincipal: TACHA Declaracoes ListaCmd TFCHA  */
#line 68 "parser1.y"
                                                 { (yyval.nd_obj).blocoPrincipal = criarBlocoPrincipal((yyvsp[-2].nd_obj).tabelaSimbolos, (yyvsp[-1].nd_obj).listaCmd);}
#line 1461 "y.tab.c"
    break;

  case 16: /* BlocoPrincipal: TACHA ListaCmd TFCHA  */
#line 69 "parser1.y"
                       { (yyval.nd_obj).blocoPrincipal = criarBlocoPrincipal(NULL, (yyvsp[-1].nd_obj).listaCmd);}
#line 1467 "y.tab.c"
    break;

  case 17: /* Declaracoes: Declaracoes Declaracao  */
#line 72 "parser1.y"
                                   {
	(yyval.nd_obj).tabelaSimbolos = (yyvsp[-1].nd_obj).tabelaSimbolos;
	// Atualiza a tabela de símbolos com as declarações da derivação atual
	struct tabelaSimbolos *temp = (yyvsp[0].nd_obj).tabelaSimbolos;
	while (temp != NULL) {
		(yyval.nd_obj).tabelaSimbolos = adicionarTabelaSimbolos((yyval.nd_obj).tabelaSimbolos, temp->nome, temp->tipoDado, temp->tipo);
	temp = temp->next;
	}
}
#line 1481 "y.tab.c"
    break;

  case 18: /* Declaracoes: Declaracao  */
#line 81 "parser1.y"
             {(yyval.nd_obj).tabelaSimbolos = (yyvsp[0].nd_obj).tabelaSimbolos;}
#line 1487 "y.tab.c"
    break;

  case 19: /* Declaracao: Tipo ListaId TPEVI  */
#line 84 "parser1.y"
                               {
	struct listaIdentificadores *id = (yyvsp[-1].nd_obj).listaIdentificadores;
	struct tabelaSimbolos *tabelaSimbolos = NULL;
	while (id != NULL) {
		tabelaSimbolos = adicionarTabelaSimbolos(tabelaSimbolos, id->nome, (yyvsp[-2].nd_obj).nome, "Variável");
		id = id->next;
	}
	(yyval.nd_obj).tabelaSimbolos = tabelaSimbolos;
	printf("\n\n\n\n\n");
}
#line 1502 "y.tab.c"
    break;

  case 20: /* ListaId: ListaId TVIRG ID  */
#line 96 "parser1.y"
                          { 
	(yyval.nd_obj).listaIdentificadores = adicionarListaIdentificadores((yyvsp[-2].nd_obj).listaIdentificadores, (yyvsp[0].nd_obj).nome);
}
#line 1510 "y.tab.c"
    break;

  case 21: /* ListaId: ID  */
#line 99 "parser1.y"
     { (yyval.nd_obj).listaIdentificadores = criarListaIdentificadores((yyvsp[0].nd_obj).nome);}
#line 1516 "y.tab.c"
    break;

  case 22: /* Tipo: INT  */
#line 102 "parser1.y"
          { insert_type(); }
#line 1522 "y.tab.c"
    break;

  case 23: /* Tipo: FLOAT  */
#line 103 "parser1.y"
        { insert_type(); }
#line 1528 "y.tab.c"
    break;

  case 24: /* Tipo: STRING  */
#line 104 "parser1.y"
        { insert_type(); }
#line 1534 "y.tab.c"
    break;

  case 25: /* ListaCmd: ListaCmd Comando  */
#line 107 "parser1.y"
                           {
	(yyval.nd_obj).listaCmd = adicionarComando((yyvsp[-1].nd_obj).listaCmd, (yyvsp[0].nd_obj).node);
}
#line 1542 "y.tab.c"
    break;

  case 26: /* ListaCmd: Comando  */
#line 110 "parser1.y"
          { (yyval.nd_obj).listaCmd = criarListaCmd((yyvsp[0].nd_obj).node); }
#line 1548 "y.tab.c"
    break;

  case 28: /* Comando: CmdEnquanto  */
#line 114 "parser1.y"
             { (yyval.nd_obj).node = (yyvsp[0].nd_obj).node; }
#line 1554 "y.tab.c"
    break;

  case 29: /* Comando: CmdAtrib  */
#line 115 "parser1.y"
           { (yyval.nd_obj).node = (yyvsp[0].nd_obj).node; }
#line 1560 "y.tab.c"
    break;

  case 34: /* value: NUMBER  */
#line 122 "parser1.y"
              { add('C'); }
#line 1566 "y.tab.c"
    break;

  case 35: /* value: FLOAT_NUM  */
#line 123 "parser1.y"
            { add('C'); }
#line 1572 "y.tab.c"
    break;

  case 36: /* value: CHARACTER  */
#line 124 "parser1.y"
            { add('C'); }
#line 1578 "y.tab.c"
    break;

  case 41: /* $@3: %empty  */
#line 133 "parser1.y"
                   { add('K'); }
#line 1584 "y.tab.c"
    break;

  case 42: /* CmdEnquanto: WHILE $@3 TAPAR ExpressaoLogica TFPAR Bloco  */
#line 133 "parser1.y"
                                                                    {(yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).bloco->listaCmd->node, "WHILE"); imprimirListaCmd((yyvsp[0].nd_obj).bloco->listaCmd);}
#line 1590 "y.tab.c"
    break;

  case 43: /* Bloco: TACHA ListaCmd TFCHA  */
#line 136 "parser1.y"
                            { (yyval.nd_obj).bloco = criarBloco((yyvsp[-1].nd_obj).listaCmd); }
#line 1596 "y.tab.c"
    break;

  case 44: /* $@4: %empty  */
#line 139 "parser1.y"
          { add('K'); }
#line 1602 "y.tab.c"
    break;

  case 46: /* $@5: %empty  */
#line 140 "parser1.y"
     { add('K'); }
#line 1608 "y.tab.c"
    break;

  case 47: /* $@6: %empty  */
#line 140 "parser1.y"
                                                          { add('K'); }
#line 1614 "y.tab.c"
    break;

  case 49: /* CmdAtrib: ID TATRI ExpressaoAritmetica TPEVI  */
#line 143 "parser1.y"
                                             {(yyval.nd_obj).node = criarNode(criarNode(NULL, NULL, (yyvsp[-3].nd_obj).nome), (yyvsp[-1].nd_obj).node, "=");}
#line 1620 "y.tab.c"
    break;

  case 50: /* CmdAtrib: ID TATRI STRING TPEVI  */
#line 144 "parser1.y"
                        {(yyval.nd_obj).node = criarNode(criarNode(NULL, NULL, (yyvsp[-3].nd_obj).nome), criarNode(NULL, NULL, (yyvsp[-1].nd_obj).nome), "=");}
#line 1626 "y.tab.c"
    break;

  case 51: /* $@7: %empty  */
#line 147 "parser1.y"
                  { add('F'); }
#line 1632 "y.tab.c"
    break;

  case 53: /* $@8: %empty  */
#line 148 "parser1.y"
        { add('F'); }
#line 1638 "y.tab.c"
    break;

  case 55: /* $@9: %empty  */
#line 151 "parser1.y"
                 { add('F'); }
#line 1644 "y.tab.c"
    break;

  case 57: /* ChamadaProc: ChamadaFuncao TPEVI  */
#line 154 "parser1.y"
                                 { (yyval.nd_obj).node = (yyvsp[-1].nd_obj).node; }
#line 1650 "y.tab.c"
    break;

  case 58: /* ChamadaFuncao: ID TAPAR ListaParametros TFPAR  */
#line 157 "parser1.y"
                                              { (yyval.nd_obj).node = criarNode((yyvsp[-1].nd_obj).node, NULL, (yyvsp[-3].nd_obj).nome); }
#line 1656 "y.tab.c"
    break;

  case 59: /* ChamadaFuncao: ID TAPAR TFPAR  */
#line 158 "parser1.y"
                 { (yyval.nd_obj).node = criarNode(NULL, NULL, (yyvsp[-2].nd_obj).nome); }
#line 1662 "y.tab.c"
    break;

  case 60: /* ListaParametros: ListaParametros TVIRG ExpressaoAritmetica  */
#line 160 "parser1.y"
                                                           { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, ","); }
#line 1668 "y.tab.c"
    break;

  case 61: /* ListaParametros: ListaParametros TVIRG STRING  */
#line 161 "parser1.y"
                               { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, criarNode(NULL, NULL, (yyvsp[0].nd_obj).nome), ","); }
#line 1674 "y.tab.c"
    break;

  case 62: /* ListaParametros: ExpressaoAritmetica  */
#line 162 "parser1.y"
                      { (yyval.nd_obj).node = (yyvsp[0].nd_obj).node; }
#line 1680 "y.tab.c"
    break;

  case 63: /* ListaParametros: STRING  */
#line 163 "parser1.y"
         { (yyval.nd_obj).node = criarNode(NULL, NULL, (yyvsp[0].nd_obj).nome); }
#line 1686 "y.tab.c"
    break;

  case 76: /* expressaoRelacional: ExpressaoAritmetica OperadoresRelacionais ExpressaoAritmetica  */
#line 184 "parser1.y"
                                                                                   { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, (yyvsp[-1].nd_obj).nome); }
#line 1692 "y.tab.c"
    break;

  case 77: /* ExpressaoLogica: ExpressaoLogica OperadoresLogicos ExpressaoLogica  */
#line 187 "parser1.y"
                                                                   { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, (yyvsp[-1].nd_obj).nome); }
#line 1698 "y.tab.c"
    break;

  case 78: /* ExpressaoLogica: expressaoRelacional  */
#line 188 "parser1.y"
                      { (yyval.nd_obj).node = (yyvsp[0].nd_obj).node; }
#line 1704 "y.tab.c"
    break;

  case 79: /* ExpressaoAritmetica: ExpressaoAritmetica OperadoresAritmeticos ExpressaoAritmetica  */
#line 191 "parser1.y"
                                                                                   { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, (yyvsp[-1].nd_obj).nome); }
#line 1710 "y.tab.c"
    break;

  case 80: /* ExpressaoAritmetica: value  */
#line 192 "parser1.y"
        { (yyval.nd_obj).node = criarNode(NULL, NULL, (yyvsp[0].nd_obj).nome);}
#line 1716 "y.tab.c"
    break;


#line 1720 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 196 "parser1.y"


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
