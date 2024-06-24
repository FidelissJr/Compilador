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

#line 219 "y.tab.c"

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
  YYSYMBOL_DOUBLE = 8,                     /* DOUBLE  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_NUMBER = 12,                    /* NUMBER  */
  YYSYMBOL_DOUBLE_NUM = 13,                /* DOUBLE_NUM  */
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
  YYSYMBOL_Bloco = 55,                     /* Bloco  */
  YYSYMBOL_CmdSe = 56,                     /* CmdSe  */
  YYSYMBOL_CmdAtrib = 57,                  /* CmdAtrib  */
  YYSYMBOL_CmdEscrita = 58,                /* CmdEscrita  */
  YYSYMBOL_CmdLeitura = 59,                /* CmdLeitura  */
  YYSYMBOL_ChamadaProc = 60,               /* ChamadaProc  */
  YYSYMBOL_ChamadaFuncao = 61,             /* ChamadaFuncao  */
  YYSYMBOL_ListaParametros = 62,           /* ListaParametros  */
  YYSYMBOL_OperadoresAritmeticos = 63,     /* OperadoresAritmeticos  */
  YYSYMBOL_OperadoresRelacionais = 64,     /* OperadoresRelacionais  */
  YYSYMBOL_OperadoresLogicos = 65,         /* OperadoresLogicos  */
  YYSYMBOL_expressaoRelacional = 66,       /* expressaoRelacional  */
  YYSYMBOL_ExpressaoLogica = 67,           /* ExpressaoLogica  */
  YYSYMBOL_ExpressaoAritmetica = 68        /* ExpressaoAritmetica  */
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
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

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
       0,    36,    36,    44,    47,    52,    59,    59,    61,    61,
      64,    65,    68,    76,    79,    82,    83,    86,    87,    90,
      93,    97,   100,   101,   102,   105,   108,   111,   112,   113,
     114,   115,   116,   117,   120,   121,   122,   123,   126,   127,
     128,   131,   134,   137,   138,   141,   142,   145,   146,   149,
     152,   155,   156,   158,   159,   160,   161,   164,   165,   166,
     167,   170,   171,   172,   173,   174,   175,   178,   179,   182,
     185,   186,   189,   190,   191
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
  "PRINT", "READ", "INT", "DOUBLE", "WHILE", "IF", "ELSE", "NUMBER",
  "DOUBLE_NUM", "ID", "TMEIG", "TMAIG", "TIGUA", "TDIFE", "TMAIO", "TMENO",
  "AND", "OR", "STRING", "ADD", "MULTIPLY", "DIVIDE", "SUBTRACT", "RETURN",
  "TAPAR", "TFPAR", "TACHA", "TFCHA", "TPEVI", "TATRI", "TVIRG", "$accept",
  "Programa", "ListaFuncoes", "Funcao", "$@1", "$@2", "TipoRetorno",
  "DeclParametros", "Parametro", "BlocoPrincipal", "Declaracoes",
  "Declaracao", "ListaId", "Tipo", "ListaCmd", "Comando", "value",
  "Retorno", "CmdEnquanto", "Bloco", "CmdSe", "CmdAtrib", "CmdEscrita",
  "CmdLeitura", "ChamadaProc", "ChamadaFuncao", "ListaParametros",
  "OperadoresAritmeticos", "OperadoresRelacionais", "OperadoresLogicos",
  "expressaoRelacional", "ExpressaoLogica", "ExpressaoAritmetica", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-91)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -91,   -91,   -91,   -91,    85,    11,    12,   -91,     3,
     -91,   -91,    -8,    -6,     7,    25,   -22,    49,    85,   -91,
      26,    19,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
      23,   -91,   -91,   -91,   -91,    89,    67,   108,   108,    56,
     126,   -91,   -91,    30,    47,   -91,   -91,   -91,   120,   -91,
      32,   -91,    -3,   -91,   -91,   -91,    54,    59,    68,   134,
      70,   -91,   -91,   -12,   110,    55,   -91,   -91,     9,   141,
      63,   130,   -91,   -91,   -91,   -91,   -91,   -91,   108,   -91,
     -91,    91,    66,    79,    90,    99,   115,   -91,   -91,    93,
     108,   -91,   -91,   -91,   -91,   -91,   -91,   108,    93,   -91,
     129,   -91,   -91,   141,   -91,    20,   -91,   136,   131,   -91,
     -91,   -91,   105,   -91,    45,   141,   140,   -91,   141,   131,
      66,   -91,   -91,    43,    93,   -91,   -91,   -91,   -91
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,    22,    23,    24,     0,     0,     0,     5,     0,
       3,    10,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,    26,    33,    28,    27,    29,    30,    31,    32,
       0,     1,     4,     2,     6,     0,     0,     0,     0,     0,
       0,    34,    35,    37,    36,    40,    73,    74,     0,    17,
       0,    21,     0,    16,    25,    50,     0,     0,    36,     0,
       0,    36,    71,     0,     0,     0,    36,    52,     0,    55,
      36,     0,    39,    57,    59,    60,    58,    38,     0,    15,
      19,     0,     0,     0,     0,     0,     0,    67,    68,     0,
       0,    63,    64,    65,    66,    62,    61,     0,     0,    51,
       0,    46,    45,    72,    20,     0,    13,     0,     0,    47,
      48,    49,     0,    41,    70,    69,    43,    36,    53,     0,
       0,    14,     9,     0,     0,     7,    12,    42,    44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   -91,   162,   -91,   -91,   -91,   -91,    50,    -2,
     -91,   153,   -91,    -4,   -15,   -19,   -91,   -91,   -91,   -90,
     -91,   -91,   -91,   -91,   -91,    -5,   -91,   -91,   -91,   -91,
     -91,   -32,   -13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,    56,    57,     9,   105,   106,    10,
      18,    19,    52,    11,    21,    22,    46,    23,    24,   113,
      25,    26,    27,    28,    29,    47,    68,    78,    97,    90,
      62,    63,    64
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      30,    20,    54,    50,    48,    33,    65,    39,   116,    87,
      88,    31,    40,    30,    20,     1,    30,    34,    89,     2,
       3,    35,    59,    36,    12,    13,    69,    71,    14,    15,
      80,    54,    81,    16,   128,     4,    37,    12,    13,    99,
      51,    14,    15,     5,   100,    30,    16,    17,    12,    13,
     119,    53,    14,    15,    38,   120,    55,    16,   114,    39,
      17,    41,    42,    43,    79,   103,    87,    88,    41,    42,
      43,    17,    44,     2,     3,   127,    87,    88,   107,    66,
      72,    60,    45,    82,   115,    98,    67,   118,    83,     4,
      12,    13,     2,     3,    14,    15,   101,   123,    84,    16,
      86,    41,    42,    43,    54,   104,   122,    30,     4,   108,
      12,    13,    58,    17,    14,    15,   107,   125,    30,    16,
      41,    42,    43,   109,   112,    91,    92,    93,    94,    95,
      96,    61,   110,    17,    73,    74,    75,    76,    41,    42,
      43,    41,    42,    43,    73,    74,    75,    76,   111,    70,
     121,   124,   117,    77,    73,    74,    75,    76,    73,    74,
      75,    76,     5,   102,    85,    73,    74,    75,    76,    32,
     126,    49
};

static const yytype_int8 yycheck[] =
{
       5,     5,    21,    18,    17,     7,    38,    29,    98,    21,
      22,     0,    34,    18,    18,     3,    21,    14,    30,     7,
       8,    29,    35,    29,     5,     6,    39,    40,     9,    10,
      33,    50,    35,    14,   124,    23,    29,     5,     6,    30,
      14,     9,    10,    31,    35,    50,    14,    28,     5,     6,
      30,    32,     9,    10,    29,    35,    33,    14,    90,    29,
      28,    12,    13,    14,    32,    78,    21,    22,    12,    13,
      14,    28,    23,     7,     8,    32,    21,    22,    82,    23,
      33,    14,    33,    29,    97,    30,    30,   100,    29,    23,
       5,     6,     7,     8,     9,    10,    33,   112,    30,    14,
      30,    12,    13,    14,   123,    14,   108,   112,    23,    30,
       5,     6,    23,    28,     9,    10,   120,   119,   123,    14,
      12,    13,    14,    33,    31,    15,    16,    17,    18,    19,
      20,    23,    33,    28,    24,    25,    26,    27,    12,    13,
      14,    12,    13,    14,    24,    25,    26,    27,    33,    23,
      14,    11,    23,    33,    24,    25,    26,    27,    24,    25,
      26,    27,    31,    33,    30,    24,    25,    26,    27,     7,
     120,    18
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,    23,    31,    37,    38,    39,    42,
      45,    49,     5,     6,     9,    10,    14,    28,    46,    47,
      49,    50,    51,    53,    54,    56,    57,    58,    59,    60,
      61,     0,    39,    45,    14,    29,    29,    29,    29,    29,
      34,    12,    13,    14,    23,    33,    52,    61,    68,    47,
      50,    14,    48,    32,    51,    33,    40,    41,    23,    68,
      14,    23,    66,    67,    68,    67,    23,    30,    62,    68,
      23,    68,    33,    24,    25,    26,    27,    33,    63,    32,
      33,    35,    29,    29,    30,    30,    30,    21,    22,    30,
      65,    15,    16,    17,    18,    19,    20,    64,    30,    30,
      35,    33,    33,    68,    14,    43,    44,    49,    30,    33,
      33,    33,    31,    55,    67,    68,    55,    23,    68,    30,
      35,    14,    45,    50,    11,    45,    44,    32,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    40,    39,    41,    39,
      42,    42,    43,    43,    44,    45,    45,    46,    46,    47,
      48,    48,    49,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    53,    53,
      53,    54,    55,    56,    56,    57,    57,    58,    58,    59,
      60,    61,    61,    62,    62,    62,    62,    63,    63,    63,
      63,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    68
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     0,     7,     0,     6,
       1,     1,     3,     1,     2,     4,     3,     2,     1,     3,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     5,     3,     5,     7,     4,     4,     5,     5,     5,
       2,     4,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     1,     1
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
#line 36 "parser1.y"
                                      { 
	(yyvsp[0].nd_obj).blocoPrincipal->tabelaSimbolos = tabelaSimbolosMain;
	struct funcao* main = criarFuncao("", "", NULL, (yyvsp[0].nd_obj).blocoPrincipal);
	(yyvsp[-1].nd_obj).funcao = adicionarFuncao((yyvsp[-1].nd_obj).funcao, main);
	(yyval.nd_obj).head = criarRaiz((yyvsp[-1].nd_obj).funcao); 
	head = (yyval.nd_obj).head;
	limparTabelaSimbolos();
	}
#line 1370 "y.tab.c"
    break;

  case 3: /* Programa: BlocoPrincipal  */
#line 44 "parser1.y"
                 {(yyval.nd_obj).head = criarRaiz((yyvsp[0].nd_obj).funcao); head = (yyval.nd_obj).head; }
#line 1376 "y.tab.c"
    break;

  case 4: /* ListaFuncoes: ListaFuncoes Funcao  */
#line 47 "parser1.y"
                                  {
	(yyvsp[0].nd_obj).funcao->blocoPrincipal->tabelaSimbolos = tabelaSimbolosMain;
	(yyval.nd_obj).funcao = adicionarFuncao((yyvsp[-1].nd_obj).funcao, (yyvsp[0].nd_obj).funcao);
	limparTabelaSimbolos();
}
#line 1386 "y.tab.c"
    break;

  case 5: /* ListaFuncoes: Funcao  */
#line 52 "parser1.y"
         {
	(yyvsp[0].nd_obj).funcao->blocoPrincipal->tabelaSimbolos = tabelaSimbolosMain;
	(yyval.nd_obj).funcao = (yyvsp[0].nd_obj).funcao; 
	limparTabelaSimbolos();
}
#line 1396 "y.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 59 "parser1.y"
                       {add('F', NULL);}
#line 1402 "y.tab.c"
    break;

  case 7: /* Funcao: TipoRetorno ID $@1 TAPAR DeclParametros TFPAR BlocoPrincipal  */
#line 59 "parser1.y"
                                                                                   { 
	(yyval.nd_obj).funcao = criarFuncao((yyvsp[-6].nd_obj).nome, (yyvsp[-5].nd_obj).nome, (yyvsp[-2].nd_obj).parametro, (yyvsp[0].nd_obj).blocoPrincipal); }
#line 1409 "y.tab.c"
    break;

  case 8: /* $@2: %empty  */
#line 61 "parser1.y"
                 {add('F', NULL);}
#line 1415 "y.tab.c"
    break;

  case 9: /* Funcao: TipoRetorno ID $@2 TAPAR TFPAR BlocoPrincipal  */
#line 61 "parser1.y"
                                                              {(yyval.nd_obj).funcao = criarFuncao((yyvsp[-5].nd_obj).nome, (yyvsp[-4].nd_obj).nome, NULL, (yyvsp[0].nd_obj).blocoPrincipal);}
#line 1421 "y.tab.c"
    break;

  case 11: /* TipoRetorno: VOID  */
#line 65 "parser1.y"
       { insert_type(); }
#line 1427 "y.tab.c"
    break;

  case 12: /* DeclParametros: DeclParametros TVIRG Parametro  */
#line 68 "parser1.y"
                                               {
	struct parametro* atual = (yyvsp[-2].nd_obj).parametro;
    while (atual->next != NULL) {
        atual = atual->next;
    }
    atual->next = (yyvsp[0].nd_obj).parametro;
    (yyval.nd_obj).parametro = (yyvsp[-2].nd_obj).parametro;
}
#line 1440 "y.tab.c"
    break;

  case 13: /* DeclParametros: Parametro  */
#line 76 "parser1.y"
            {(yyval.nd_obj).parametro = (yyvsp[0].nd_obj).parametro;}
#line 1446 "y.tab.c"
    break;

  case 14: /* Parametro: Tipo ID  */
#line 79 "parser1.y"
                    { add('V', NULL); (yyval.nd_obj).parametro = criarParametro((yyvsp[-1].nd_obj).nome, (yyvsp[0].nd_obj).nome);}
#line 1452 "y.tab.c"
    break;

  case 15: /* BlocoPrincipal: TACHA Declaracoes ListaCmd TFCHA  */
#line 82 "parser1.y"
                                                 { (yyval.nd_obj).blocoPrincipal = criarBlocoPrincipal(NULL, (yyvsp[-1].nd_obj).listaCmd);}
#line 1458 "y.tab.c"
    break;

  case 16: /* BlocoPrincipal: TACHA ListaCmd TFCHA  */
#line 83 "parser1.y"
                       { (yyval.nd_obj).blocoPrincipal = criarBlocoPrincipal(NULL, (yyvsp[-1].nd_obj).listaCmd);}
#line 1464 "y.tab.c"
    break;

  case 20: /* ListaId: ListaId TVIRG ID  */
#line 93 "parser1.y"
                          { 
	{add('V', NULL);}
	(yyval.nd_obj).listaIdentificadores = adicionarListaIdentificadores((yyvsp[-2].nd_obj).listaIdentificadores, (yyvsp[0].nd_obj).nome);
}
#line 1473 "y.tab.c"
    break;

  case 21: /* ListaId: ID  */
#line 97 "parser1.y"
     { (yyval.nd_obj).listaIdentificadores = criarListaIdentificadores((yyvsp[0].nd_obj).nome); {add('V', NULL);}}
#line 1479 "y.tab.c"
    break;

  case 22: /* Tipo: INT  */
#line 100 "parser1.y"
          { insert_type(); }
#line 1485 "y.tab.c"
    break;

  case 23: /* Tipo: DOUBLE  */
#line 101 "parser1.y"
         { insert_type(); }
#line 1491 "y.tab.c"
    break;

  case 24: /* Tipo: STRING  */
#line 102 "parser1.y"
        { insert_type(); }
#line 1497 "y.tab.c"
    break;

  case 25: /* ListaCmd: ListaCmd Comando  */
#line 105 "parser1.y"
                           {
	(yyval.nd_obj).listaCmd = adicionarComando((yyvsp[-1].nd_obj).listaCmd, (yyvsp[0].nd_obj).comando);
}
#line 1505 "y.tab.c"
    break;

  case 26: /* ListaCmd: Comando  */
#line 108 "parser1.y"
          { (yyval.nd_obj).listaCmd = criarListaCmd((yyvsp[0].nd_obj).comando);}
#line 1511 "y.tab.c"
    break;

  case 27: /* Comando: CmdSe  */
#line 111 "parser1.y"
               { (yyval.nd_obj).comando = criarComando(CMD_IF); (yyval.nd_obj).comando->tipoComando.ifCmd = (yyvsp[0].nd_obj).ifCmd;}
#line 1517 "y.tab.c"
    break;

  case 28: /* Comando: CmdEnquanto  */
#line 112 "parser1.y"
              { (yyval.nd_obj).comando = criarComando(CMD_WHILE); (yyval.nd_obj).comando->tipoComando.whileCmd = (yyvsp[0].nd_obj).whileCmd;}
#line 1523 "y.tab.c"
    break;

  case 29: /* Comando: CmdAtrib  */
#line 113 "parser1.y"
           { (yyval.nd_obj).comando = criarComando(CMD_ATRIB); (yyval.nd_obj).comando->tipoComando.node = (yyvsp[0].nd_obj).node; (yyval.nd_obj).comando->tipoComando.atribuicao = (yyvsp[0].nd_obj).atribuicao;}
#line 1529 "y.tab.c"
    break;

  case 30: /* Comando: CmdEscrita  */
#line 114 "parser1.y"
             { (yyval.nd_obj).comando = criarComando(CMD_NODE); (yyval.nd_obj).comando->tipoComando.node = (yyvsp[0].nd_obj).node;}
#line 1535 "y.tab.c"
    break;

  case 32: /* Comando: ChamadaProc  */
#line 116 "parser1.y"
              {(yyval.nd_obj).comando = criarComando(CMD_CHAMADAFUNCAO); (yyval.nd_obj).comando->tipoComando.chamadaFuncao = (yyvsp[0].nd_obj).chamadaFuncao;}
#line 1541 "y.tab.c"
    break;

  case 33: /* Comando: Retorno  */
#line 117 "parser1.y"
          { (yyval.nd_obj).comando = criarComando(CMD_NODE); (yyval.nd_obj).comando->tipoComando.node = (yyvsp[0].nd_obj).node;}
#line 1547 "y.tab.c"
    break;

  case 34: /* value: NUMBER  */
#line 120 "parser1.y"
              { add('C', "int"); }
#line 1553 "y.tab.c"
    break;

  case 35: /* value: DOUBLE_NUM  */
#line 121 "parser1.y"
             { add('C', "double"); }
#line 1559 "y.tab.c"
    break;

  case 36: /* value: STRING  */
#line 122 "parser1.y"
         { add('C', "string"); }
#line 1565 "y.tab.c"
    break;

  case 38: /* Retorno: RETURN ExpressaoAritmetica TPEVI  */
#line 126 "parser1.y"
                                          {(yyval.nd_obj).node = criarNode(NULL, (yyvsp[-1].nd_obj).node, "return ");}
#line 1571 "y.tab.c"
    break;

  case 39: /* Retorno: RETURN STRING TPEVI  */
#line 127 "parser1.y"
                     {(yyval.nd_obj).node = criarNode(NULL, criarNode(NULL, NULL, (yyvsp[-1].nd_obj).nome), "return ");}
#line 1577 "y.tab.c"
    break;

  case 40: /* Retorno: RETURN TPEVI  */
#line 128 "parser1.y"
              {(yyval.nd_obj).node = criarNode(NULL, NULL, "return");}
#line 1583 "y.tab.c"
    break;

  case 41: /* CmdEnquanto: WHILE TAPAR ExpressaoLogica TFPAR Bloco  */
#line 131 "parser1.y"
                                                      {(yyval.nd_obj).whileCmd = criarWhileCmd((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).bloco);}
#line 1589 "y.tab.c"
    break;

  case 42: /* Bloco: TACHA ListaCmd TFCHA  */
#line 134 "parser1.y"
                            { (yyval.nd_obj).bloco = criarBloco((yyvsp[-1].nd_obj).listaCmd);}
#line 1595 "y.tab.c"
    break;

  case 43: /* CmdSe: IF TAPAR ExpressaoLogica TFPAR Bloco  */
#line 137 "parser1.y"
                                            {(yyval.nd_obj).ifCmd = criarIfCmd((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).bloco, NULL);}
#line 1601 "y.tab.c"
    break;

  case 44: /* CmdSe: IF TAPAR ExpressaoLogica TFPAR Bloco ELSE Bloco  */
#line 138 "parser1.y"
                                                  {(yyval.nd_obj).ifCmd = criarIfCmd((yyvsp[-4].nd_obj).node, (yyvsp[-2].nd_obj).bloco, (yyvsp[0].nd_obj).bloco);}
#line 1607 "y.tab.c"
    break;

  case 45: /* CmdAtrib: ID TATRI ExpressaoAritmetica TPEVI  */
#line 141 "parser1.y"
                                             {(yyval.nd_obj).atribuicao = criarAtribuicao((yyvsp[-3].nd_obj).nome, (yyvsp[-1].nd_obj).node, (yyvsp[-1].nd_obj).chamadaFuncao);}
#line 1613 "y.tab.c"
    break;

  case 46: /* CmdAtrib: ID TATRI STRING TPEVI  */
#line 142 "parser1.y"
                        {(yyval.nd_obj).atribuicao = criarAtribuicao((yyvsp[-3].nd_obj).nome, criarNode(NULL, NULL, (yyvsp[-1].nd_obj).nome), NULL);}
#line 1619 "y.tab.c"
    break;

  case 47: /* CmdEscrita: PRINT TAPAR STRING TFPAR TPEVI  */
#line 145 "parser1.y"
                                           {(yyval.nd_obj).node = criarNode(NULL, criarNode(NULL, NULL, (yyvsp[-2].nd_obj).nome), "print");}
#line 1625 "y.tab.c"
    break;

  case 48: /* CmdEscrita: PRINT TAPAR ExpressaoAritmetica TFPAR TPEVI  */
#line 146 "parser1.y"
                                              {(yyval.nd_obj).node = criarNode(NULL, (yyvsp[-2].nd_obj).node, "print");}
#line 1631 "y.tab.c"
    break;

  case 50: /* ChamadaProc: ChamadaFuncao TPEVI  */
#line 152 "parser1.y"
                                 {(yyval.nd_obj).chamadaFuncao = (yyvsp[-1].nd_obj).chamadaFuncao;}
#line 1637 "y.tab.c"
    break;

  case 51: /* ChamadaFuncao: ID TAPAR ListaParametros TFPAR  */
#line 155 "parser1.y"
                                              { (yyval.nd_obj).chamadaFuncao = criarChamadaFuncao((yyvsp[-3].nd_obj).nome, (yyvsp[-1].nd_obj).node, yylineno);}
#line 1643 "y.tab.c"
    break;

  case 52: /* ChamadaFuncao: ID TAPAR TFPAR  */
#line 156 "parser1.y"
                 { (yyval.nd_obj).chamadaFuncao = criarChamadaFuncao((yyvsp[-2].nd_obj).nome, NULL, yylineno);}
#line 1649 "y.tab.c"
    break;

  case 53: /* ListaParametros: ListaParametros TVIRG ExpressaoAritmetica  */
#line 158 "parser1.y"
                                                           { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, ","); }
#line 1655 "y.tab.c"
    break;

  case 54: /* ListaParametros: ListaParametros TVIRG STRING  */
#line 159 "parser1.y"
                               { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, criarNode(NULL, NULL, (yyvsp[0].nd_obj).nome), ","); }
#line 1661 "y.tab.c"
    break;

  case 55: /* ListaParametros: ExpressaoAritmetica  */
#line 160 "parser1.y"
                      { (yyval.nd_obj).node = (yyvsp[0].nd_obj).node; }
#line 1667 "y.tab.c"
    break;

  case 56: /* ListaParametros: STRING  */
#line 161 "parser1.y"
         { (yyval.nd_obj).node = criarNode(NULL, NULL, (yyvsp[0].nd_obj).nome); }
#line 1673 "y.tab.c"
    break;

  case 69: /* expressaoRelacional: ExpressaoAritmetica OperadoresRelacionais ExpressaoAritmetica  */
#line 182 "parser1.y"
                                                                                   { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, (yyvsp[-1].nd_obj).nome); }
#line 1679 "y.tab.c"
    break;

  case 70: /* ExpressaoLogica: ExpressaoLogica OperadoresLogicos ExpressaoLogica  */
#line 185 "parser1.y"
                                                                   { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, (yyvsp[-1].nd_obj).nome); }
#line 1685 "y.tab.c"
    break;

  case 71: /* ExpressaoLogica: expressaoRelacional  */
#line 186 "parser1.y"
                      { (yyval.nd_obj).node = (yyvsp[0].nd_obj).node; }
#line 1691 "y.tab.c"
    break;

  case 72: /* ExpressaoAritmetica: ExpressaoAritmetica OperadoresAritmeticos ExpressaoAritmetica  */
#line 189 "parser1.y"
                                                                                   { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, (yyvsp[-1].nd_obj).nome); }
#line 1697 "y.tab.c"
    break;

  case 73: /* ExpressaoAritmetica: value  */
#line 190 "parser1.y"
        { (yyval.nd_obj).node = criarNode(NULL, NULL, (yyvsp[0].nd_obj).nome);}
#line 1703 "y.tab.c"
    break;

  case 74: /* ExpressaoAritmetica: ChamadaFuncao  */
#line 191 "parser1.y"
               {(yyval.nd_obj).chamadaFuncao = (yyvsp[0].nd_obj).chamadaFuncao;}
#line 1709 "y.tab.c"
    break;


#line 1713 "y.tab.c"

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

#line 194 "parser1.y"


int main() {
	yyparse();
	
	struct funcao *atual = head->funcao;

	while(atual != NULL) {
		imprimirTabelaCompleta(atual->blocoPrincipal->tabelaSimbolos);
		printf("\n\n\n");
		atual = atual->next;
	}

	if(head == NULL)
		printf("NULLLL");
	
	imprimir(head); //Imprime o código

	//Verificacao semantica
	verificarSemantica(head);

	//Liberar memoria
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
			if(strcmp(tabelaAtual->tipo, "Variable") == 0 && tabelaAtual->linha != 1)
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
		struct tabelaSimbolos *tabelaAtual = atual->blocoPrincipal->tabelaSimbolos;

		struct listaCmd *listaCmdAtual = atual->blocoPrincipal->listaCmd;
		verificarListaCmd(listaCmdAtual, tabelaAtual);
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
				case CMD_NODE:
					//printNode(listaCmd->comando->tipoComando.node);
					break;
				case CMD_WHILE:
					validarExpressoes(listaCmd->comando->tipoComando.whileCmd->condition, tabelaSimbolos);
					break;
				
				case CMD_IF:
					validarExpressoes(listaCmd->comando->tipoComando.ifCmd->condition, tabelaSimbolos);
					break;
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

		struct tabelaSimbolos* registro = buscarNaTabela(tabelaSimbolos, atribuicao->nome);

		if(registro == NULL) {
			char msg[100];
			sprintf(msg, "Variável não declarada: %s.", atribuicao->nome);
			throwSemanticError(msg);
		}
		else{
			validaTipos(atribuicao->node, registro->tipoDado, tabelaSimbolos);	
			intDoubleConverter(atribuicao->node, registro->tipoDado, tabelaSimbolos);
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
			sprintf(msg, "Função *%s* não declarada.", chamadaFuncao->nome);
			throwSemanticError(msg);
			return;
		}
		if(chamadaFuncao->parametros != NULL) {
			struct node* parametros = chamadaFuncao->parametros;
			int qtdParemtrosChamadaFuncao = contarNosParametros(parametros);
			int qtdParametrosFuncao = 0;

			struct parametro* atual = funcao->parametros;

			while(atual != NULL) {
				qtdParametrosFuncao++;
				atual = atual->next;
			}

			if(countParameters != qtdParametrosFuncao) {
				char msg[100];
				sprintf(msg, "Número incorreto de parâmetros na chamada da função %s. Esperado: %d, Recebido: %d", chamadaFuncao->nome, qtdParametrosFuncao, qtdParemtrosChamadaFuncao);
				throwSemanticError(msg);
			}

			atual = funcao->parametros;
			int numeroParametro = 0; 
			while(atual != NULL) {
				numeroParametro ++; 
				struct tabelaSimbolos* registro = buscarNaTabela(funcao->blocoPrincipal->tabelaSimbolos, atual->nome);
				validaTipagemParametros(parametros, registro->tipoDado, funcao->blocoPrincipal->tabelaSimbolos, numeroParametro);
				atual = atual->next;
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

struct tabelaSimbolos* buscarNaTabela(struct tabelaSimbolos *tabela, const char *nome) {
    struct tabelaSimbolos *atual = tabela;
    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0) {
            return atual;
        }
        atual = atual->next;
    }
    return NULL;
}

void validaTipos(struct node *tree, char *tipoDado, struct tabelaSimbolos *tabelaSimbolos) {
	if (tree == NULL) {
		return;
	}
	
	validaTipos(tree->left, tipoDado, tabelaSimbolos);
	
	if (tree->token != NULL) {
		struct tabelaSimbolos* registro = buscarNaTabela(tabelaSimbolos, tree->token);
		if (registro != NULL && strcmp(registro->tipoDado, tipoDado) != 0) {
			char msg[100];
			sprintf(msg, "Tipo incorreto. Esperado: %s, Recebido: %s. Linha: %d", tipoDado, registro->tipoDado, registro->linha);
			throwSemanticError(msg);
		}
	}
	
	validaTipos(tree->right, tipoDado, tabelaSimbolos);
}

int contarNosParametros(struct node *tree) {
	if (tree == NULL) {
		return 0;
    }

    int count = 0;

    // Count the current node only if its token is populated
    if (tree->token != NULL && strcmp(tree->token, ",") != 0){
        count = 1;
    }

    // Recursively count the nodes in the left and right subtrees
    count += contarNosParametros(tree->left);
    count += contarNosParametros(tree->right);

    return count;
}

int validaTipagemParametros(struct node *tree, char *tipoDado, struct tabelaSimbolos *tabelaSimbolos, int numeroParametro) {
	if (tree == NULL) {
		return 0;
    }

    int count = 0;

    // Count the current node only if its token is populated
    if (tree->token != NULL && strcmp(tree->token, ",") != 0){
		count = 1;
		
		if(count == numeroParametro) {
				//verificar
			struct tabelaSimbolos* registro = buscarNaTabela(tabelaSimbolos, tree->token);
			if(registro != NULL && strcmp(registro->tipoDado, tipoDado) != 0){
				char msg[100];
				sprintf(msg, "Tipo parametro incorreto. Esperado: %s, Recebido: %s. Linha: %d", tipoDado, registro->tipoDado, registro->linha);
				throwSemanticError(msg);
			}
		}
    }

    // Recursively count the nodes in the left and right subtrees
    count += contarNosParametros(tree->left);
    count += contarNosParametros(tree->right);

    return count;
}

void validarExpressoes(struct node *tree, struct tabelaSimbolos *tabelaSimbolos) {

	
	if (tree == NULL) {
		return;
	}

	if (strcmp(tree->token, ">") == 0 || strcmp(tree->token, "<") == 0 ||
		strcmp(tree->token, ">=") == 0 || strcmp(tree->token, "<=") == 0 ||
		strcmp(tree->token, "==") == 0 || strcmp(tree->token, "!=") == 0) {
		struct node *left = tree->left;
		struct node *right = tree->right;

		if (left != NULL && right != NULL) {
			struct tabelaSimbolos *leftSymbol = buscarNaTabela(tabelaSimbolos, left->token);
			struct tabelaSimbolos *rightSymbol = buscarNaTabela(tabelaSimbolos, right->token);

			if(leftSymbol == NULL) {
				char msg[100];
				sprintf(msg, "Variável não declarada: %s.", left->token);
				throwSemanticError(msg);
			}

			if(rightSymbol == NULL) {
				char msg[100];
				sprintf(msg, "Variável não declarada: %s.", right->token);
				throwSemanticError(msg);
			}

			if (leftSymbol != NULL && rightSymbol != NULL) {
				if (strcmp(leftSymbol->tipoDado, rightSymbol->tipoDado) != 0) {
					printf("Erro: Comparação entre tipos incompatíveis. %s %s %s\n", leftSymbol->tipoDado, tree->token, rightSymbol->tipoDado);
				}
			}
		}
	}

	validarExpressoes(tree->left, tabelaSimbolos);
	validarExpressoes(tree->right, tabelaSimbolos);
}

void intDoubleConverter(struct node *tree, char *tipoDado, struct tabelaSimbolos *tabelaSimbolos) {
		if (tree->left) {
            intDoubleConverter(tree->left, tipoDado, tabelaSimbolos);
        }

		struct tabelaSimbolos* registro = buscarNaTabela(tabelaSimbolos, tree->token);

		if(registro != NULL){
			if(strcmp(registro->tipoDado, "int") == 0 && strcmp(tipoDado, "double") == 0) {
				char msg[100];
				sprintf(msg, "Conversão implícita de int para double. Linha: %d", registro->linha);
				throwSemanticError(msg);
			}
			else if(strcmp(registro->tipoDado, "double") == 0 && strcmp(tipoDado, "int") == 0) {
				char msg[100];
				sprintf(msg, "Conversão implícita de double para int. Linha: %d", registro->linha);
				throwSemanticError(msg);
			}
		}

        //printf("%s", tree->token);
        
        if (tree->right) {
            intDoubleConverter(tree->right, tipoDado, tabelaSimbolos);
        }
}

