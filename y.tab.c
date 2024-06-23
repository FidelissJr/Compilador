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
		struct ifCmd* ifCmd;
		struct listaCmd *listaCmd;
		struct tabelaSimbolos* tabelaSimbolos;
		struct listaIdentificadores* listaIdentificadores;
		struct blocoPrincipal* blocoPrincipal;
		struct comando* comando;
		struct whileCmd* whileCmd;
		struct chamadaFuncao* chamadaFuncao;

	} nd_obj; 

#line 218 "y.tab.c"

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
  YYSYMBOL_CmdAtrib = 58,                  /* CmdAtrib  */
  YYSYMBOL_CmdEscrita = 59,                /* CmdEscrita  */
  YYSYMBOL_CmdLeitura = 60,                /* CmdLeitura  */
  YYSYMBOL_61_4 = 61,                      /* $@4  */
  YYSYMBOL_ChamadaProc = 62,               /* ChamadaProc  */
  YYSYMBOL_ChamadaFuncao = 63,             /* ChamadaFuncao  */
  YYSYMBOL_ListaParametros = 64,           /* ListaParametros  */
  YYSYMBOL_OperadoresAritmeticos = 65,     /* OperadoresAritmeticos  */
  YYSYMBOL_OperadoresRelacionais = 66,     /* OperadoresRelacionais  */
  YYSYMBOL_OperadoresLogicos = 67,         /* OperadoresLogicos  */
  YYSYMBOL_expressaoRelacional = 68,       /* expressaoRelacional  */
  YYSYMBOL_ExpressaoLogica = 69,           /* ExpressaoLogica  */
  YYSYMBOL_ExpressaoAritmetica = 70        /* ExpressaoAritmetica  */
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
#define YYLAST   190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

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
       0,    35,    35,    41,    44,    47,    50,    50,    51,    51,
      54,    55,    58,    66,    69,    72,    73,    76,    85,    88,
     100,   103,   106,   107,   108,   111,   114,   117,   118,   119,
     120,   121,   122,   123,   126,   127,   128,   129,   132,   133,
     134,   137,   137,   140,   143,   144,   147,   148,   151,   152,
     155,   155,   158,   161,   162,   164,   165,   166,   167,   170,
     171,   172,   173,   176,   177,   178,   179,   180,   181,   184,
     185,   188,   191,   192,   195,   196,   197
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
  "Retorno", "CmdEnquanto", "$@3", "Bloco", "CmdSe", "CmdAtrib",
  "CmdEscrita", "CmdLeitura", "$@4", "ChamadaProc", "ChamadaFuncao",
  "ListaParametros", "OperadoresAritmeticos", "OperadoresRelacionais",
  "OperadoresLogicos", "expressaoRelacional", "ExpressaoLogica",
  "ExpressaoAritmetica", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-98)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,   -98,   -98,   -98,   -98,   116,    11,    17,   -98,     7,
     -98,   -98,     3,   -98,   -98,    12,    18,     5,   116,   -98,
      41,    44,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
      28,   -98,   -98,   -98,   -98,   115,    40,    48,    30,    88,
     128,   -98,   -98,   -98,    50,    47,   -98,   -98,   -98,   146,
     -98,    54,   -98,   -23,   -98,   -98,   -98,    55,    59,    51,
     160,    69,    30,   -98,     9,   142,   -98,   -98,    21,   109,
      63,   150,   -98,   -98,   -98,   -98,   -98,   -98,    30,   -98,
     -98,    84,     0,    73,    71,    72,    79,    15,   -98,   -98,
      81,    30,   -98,   -98,   -98,   -98,   -98,   -98,    30,   -98,
     133,   -98,   -98,   109,   -98,    27,   -98,    96,    83,   -98,
     -98,    82,    81,    85,   120,    52,   109,   -98,   109,    83,
       0,   -98,   -98,   -98,   -98,    61,    81,   -98,   -98,   -98,
     -98
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,    22,    23,    24,     0,     0,     0,     5,     0,
       3,    10,     0,    50,    41,     0,     0,     0,     0,    18,
       0,     0,    26,    33,    28,    27,    29,    30,    31,    32,
       0,     1,     4,     2,     6,     0,     0,     0,     0,     0,
       0,    36,    34,    35,    37,     0,    40,    75,    76,     0,
      17,     0,    21,     0,    16,    25,    52,     0,     0,     0,
       0,     0,     0,    73,     0,     0,    58,    54,     0,    57,
       0,     0,    39,    59,    61,    62,    60,    38,     0,    15,
      19,     0,     0,     0,     0,     0,     0,     0,    69,    70,
       0,     0,    65,    66,    67,    68,    64,    63,     0,    53,
       0,    47,    46,    74,    20,     0,    13,     0,     0,    48,
      49,     0,     0,     0,    44,    72,    71,    56,    55,     0,
       0,    14,     9,    51,    42,     0,     0,     7,    12,    43,
      45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -98,   136,   -98,   -98,   -98,   -98,    29,    -2,
     -98,   130,   -98,    -4,   -16,   -18,   -98,   -98,   -98,   -98,
     -97,   -98,   -98,   -98,   -98,   -98,   -98,    -5,   -98,   -98,
     -98,   -98,   -98,   -56,   -13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,     8,    57,    58,     9,   105,   106,    10,
      18,    19,    53,    11,    21,    22,    47,    23,    24,    37,
     114,    25,    26,    27,    28,    36,    29,    48,    68,    78,
      98,    91,    63,    64,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      30,    20,    51,    55,    49,    33,    87,     2,     3,    41,
      80,    31,    81,    30,    20,   124,    30,    42,    43,    44,
       1,    34,    60,     4,     2,     3,    69,    71,    45,   130,
      88,    89,    35,    55,    41,   115,    88,    89,    46,    90,
       4,    38,    42,    43,    44,   112,    30,    39,     5,    12,
      13,    99,    40,    14,    15,    52,   100,   119,    16,    12,
      13,    56,   120,    14,    15,   103,    12,    13,    16,    61,
      14,    15,    17,    88,    89,    16,    54,    62,   107,    39,
      72,    84,    17,    86,    82,   116,    79,   118,    83,    17,
      12,    13,    41,   129,    14,    15,   101,   125,   104,    16,
      42,    43,    44,   108,   109,   110,   122,    55,    30,   111,
     121,    66,   113,    17,     5,   123,   107,   127,    67,    41,
      30,    12,    13,     2,     3,    14,    15,    42,    43,    44,
      16,   126,    41,    73,    74,    75,    76,    41,    59,     4,
      42,    43,    44,    32,    17,    42,    43,    44,    50,   128,
       0,    70,     0,     0,     0,     0,   117,    92,    93,    94,
      95,    96,    97,     0,     0,     0,    73,    74,    75,    76,
      73,    74,    75,    76,    73,    74,    75,    76,     0,    77,
       0,     0,     0,   102,    73,    74,    75,    76,     0,     0,
      85
};

static const yytype_int8 yycheck[] =
{
       5,     5,    18,    21,    17,     7,    62,     7,     8,     4,
      33,     0,    35,    18,    18,   112,    21,    12,    13,    14,
       3,    14,    35,    23,     7,     8,    39,    40,    23,   126,
      21,    22,    29,    51,     4,    91,    21,    22,    33,    30,
      23,    29,    12,    13,    14,    30,    51,    29,    31,     5,
       6,    30,    34,     9,    10,    14,    35,    30,    14,     5,
       6,    33,    35,     9,    10,    78,     5,     6,    14,    29,
       9,    10,    28,    21,    22,    14,    32,    29,    82,    29,
      33,    30,    28,    14,    29,    98,    32,   100,    29,    28,
       5,     6,     4,    32,     9,    10,    33,   113,    14,    14,
      12,    13,    14,    30,    33,    33,   108,   125,   113,    30,
      14,    23,    31,    28,    31,    33,   120,   119,    30,     4,
     125,     5,     6,     7,     8,     9,    10,    12,    13,    14,
      14,    11,     4,    24,    25,    26,    27,     4,    23,    23,
      12,    13,    14,     7,    28,    12,    13,    14,    18,   120,
      -1,    23,    -1,    -1,    -1,    -1,    23,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      24,    25,    26,    27,    24,    25,    26,    27,    -1,    33,
      -1,    -1,    -1,    33,    24,    25,    26,    27,    -1,    -1,
      30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     8,    23,    31,    37,    38,    39,    42,
      45,    49,     5,     6,     9,    10,    14,    28,    46,    47,
      49,    50,    51,    53,    54,    57,    58,    59,    60,    62,
      63,     0,    39,    45,    14,    29,    61,    55,    29,    29,
      34,     4,    12,    13,    14,    23,    33,    52,    63,    70,
      47,    50,    14,    48,    32,    51,    33,    40,    41,    23,
      70,    29,    29,    68,    69,    70,    23,    30,    64,    70,
      23,    70,    33,    24,    25,    26,    27,    33,    65,    32,
      33,    35,    29,    29,    30,    30,    14,    69,    21,    22,
      30,    67,    15,    16,    17,    18,    19,    20,    66,    30,
      35,    33,    33,    70,    14,    43,    44,    49,    30,    33,
      33,    30,    30,    31,    56,    69,    70,    23,    70,    30,
      35,    14,    45,    33,    56,    50,    11,    45,    44,    32,
      56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    38,    38,    40,    39,    41,    39,
      42,    42,    43,    43,    44,    45,    45,    46,    46,    47,
      48,    48,    49,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    53,    53,
      53,    55,    54,    56,    57,    57,    58,    58,    59,    59,
      61,    60,    62,    63,    63,    64,    64,    64,    64,    65,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    68,    69,    69,    70,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     0,     7,     0,     6,
       1,     1,     3,     1,     2,     4,     3,     2,     1,     3,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     0,     6,     3,     5,     7,     4,     4,     5,     5,
       0,     6,     2,     4,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     1,     1
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
#line 35 "parser1.y"
                                      { 
	struct funcao* main = criarFuncao("", "", NULL, (yyvsp[0].nd_obj).blocoPrincipal);
	(yyvsp[-1].nd_obj).funcao = adicionarFuncao((yyvsp[-1].nd_obj).funcao, main);
	(yyval.nd_obj).head = criarRaiz((yyvsp[-1].nd_obj).funcao); 
	head = (yyval.nd_obj).head;
	}
#line 1377 "y.tab.c"
    break;

  case 3: /* Programa: BlocoPrincipal  */
#line 41 "parser1.y"
                 {(yyval.nd_obj).head = criarRaiz((yyvsp[0].nd_obj).funcao); head = (yyval.nd_obj).head;}
#line 1383 "y.tab.c"
    break;

  case 4: /* ListaFuncoes: ListaFuncoes Funcao  */
#line 44 "parser1.y"
                                  {
    (yyval.nd_obj).funcao = adicionarFuncao((yyvsp[-1].nd_obj).funcao, (yyvsp[0].nd_obj).funcao);
}
#line 1391 "y.tab.c"
    break;

  case 5: /* ListaFuncoes: Funcao  */
#line 47 "parser1.y"
         {(yyval.nd_obj).funcao = (yyvsp[0].nd_obj).funcao;}
#line 1397 "y.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 50 "parser1.y"
                       { add('F');}
#line 1403 "y.tab.c"
    break;

  case 7: /* Funcao: TipoRetorno ID $@1 TAPAR DeclParametros TFPAR BlocoPrincipal  */
#line 50 "parser1.y"
                                                                              {(yyval.nd_obj).funcao = criarFuncao((yyvsp[-6].nd_obj).nome, (yyvsp[-5].nd_obj).nome, (yyvsp[-2].nd_obj).parametro, (yyvsp[0].nd_obj).blocoPrincipal);}
#line 1409 "y.tab.c"
    break;

  case 8: /* $@2: %empty  */
#line 51 "parser1.y"
                 { add('F');}
#line 1415 "y.tab.c"
    break;

  case 9: /* Funcao: TipoRetorno ID $@2 TAPAR TFPAR BlocoPrincipal  */
#line 51 "parser1.y"
                                                         {(yyval.nd_obj).funcao = criarFuncao((yyvsp[-5].nd_obj).nome, (yyvsp[-4].nd_obj).nome, NULL, (yyvsp[0].nd_obj).blocoPrincipal);}
#line 1421 "y.tab.c"
    break;

  case 11: /* TipoRetorno: VOID  */
#line 55 "parser1.y"
       { insert_type(); }
#line 1427 "y.tab.c"
    break;

  case 12: /* DeclParametros: DeclParametros TVIRG Parametro  */
#line 58 "parser1.y"
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
#line 66 "parser1.y"
            {(yyval.nd_obj).parametro = (yyvsp[0].nd_obj).parametro;}
#line 1446 "y.tab.c"
    break;

  case 14: /* Parametro: Tipo ID  */
#line 69 "parser1.y"
                   { add('V'); (yyval.nd_obj).parametro = criarParametro((yyvsp[-1].nd_obj).nome, (yyvsp[0].nd_obj).nome);}
#line 1452 "y.tab.c"
    break;

  case 15: /* BlocoPrincipal: TACHA Declaracoes ListaCmd TFCHA  */
#line 72 "parser1.y"
                                                 { (yyval.nd_obj).blocoPrincipal = criarBlocoPrincipal((yyvsp[-2].nd_obj).tabelaSimbolos, (yyvsp[-1].nd_obj).listaCmd);}
#line 1458 "y.tab.c"
    break;

  case 16: /* BlocoPrincipal: TACHA ListaCmd TFCHA  */
#line 73 "parser1.y"
                       { (yyval.nd_obj).blocoPrincipal = criarBlocoPrincipal(NULL, (yyvsp[-1].nd_obj).listaCmd);}
#line 1464 "y.tab.c"
    break;

  case 17: /* Declaracoes: Declaracoes Declaracao  */
#line 76 "parser1.y"
                                   {
	(yyval.nd_obj).tabelaSimbolos = (yyvsp[-1].nd_obj).tabelaSimbolos;
	// Atualiza a tabela de símbolos com as declarações da derivação atual
	struct tabelaSimbolos *temp = (yyvsp[0].nd_obj).tabelaSimbolos;
	while (temp != NULL) {
		(yyval.nd_obj).tabelaSimbolos = adicionarTabelaSimbolos((yyval.nd_obj).tabelaSimbolos, temp->nome, temp->tipoDado, temp->tipo);
	temp = temp->next;
	}
}
#line 1478 "y.tab.c"
    break;

  case 18: /* Declaracoes: Declaracao  */
#line 85 "parser1.y"
             {(yyval.nd_obj).tabelaSimbolos = (yyvsp[0].nd_obj).tabelaSimbolos;}
#line 1484 "y.tab.c"
    break;

  case 19: /* Declaracao: Tipo ListaId TPEVI  */
#line 88 "parser1.y"
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
#line 1499 "y.tab.c"
    break;

  case 20: /* ListaId: ListaId TVIRG ID  */
#line 100 "parser1.y"
                          { 
	(yyval.nd_obj).listaIdentificadores = adicionarListaIdentificadores((yyvsp[-2].nd_obj).listaIdentificadores, (yyvsp[0].nd_obj).nome);
}
#line 1507 "y.tab.c"
    break;

  case 21: /* ListaId: ID  */
#line 103 "parser1.y"
     { (yyval.nd_obj).listaIdentificadores = criarListaIdentificadores((yyvsp[0].nd_obj).nome);}
#line 1513 "y.tab.c"
    break;

  case 22: /* Tipo: INT  */
#line 106 "parser1.y"
          { insert_type(); }
#line 1519 "y.tab.c"
    break;

  case 23: /* Tipo: FLOAT  */
#line 107 "parser1.y"
        { insert_type(); }
#line 1525 "y.tab.c"
    break;

  case 24: /* Tipo: STRING  */
#line 108 "parser1.y"
        { insert_type(); }
#line 1531 "y.tab.c"
    break;

  case 25: /* ListaCmd: ListaCmd Comando  */
#line 111 "parser1.y"
                           {
	(yyval.nd_obj).listaCmd = adicionarComando((yyvsp[-1].nd_obj).listaCmd, (yyvsp[0].nd_obj).comando);
}
#line 1539 "y.tab.c"
    break;

  case 26: /* ListaCmd: Comando  */
#line 114 "parser1.y"
          { (yyval.nd_obj).listaCmd = criarListaCmd((yyvsp[0].nd_obj).comando);}
#line 1545 "y.tab.c"
    break;

  case 27: /* Comando: CmdSe  */
#line 117 "parser1.y"
               { (yyval.nd_obj).comando = criarComando(CMD_IF); (yyval.nd_obj).comando->tipoComando.ifCmd = (yyvsp[0].nd_obj).ifCmd;}
#line 1551 "y.tab.c"
    break;

  case 28: /* Comando: CmdEnquanto  */
#line 118 "parser1.y"
              { (yyval.nd_obj).comando = criarComando(CMD_WHILE); (yyval.nd_obj).comando->tipoComando.whileCmd = (yyvsp[0].nd_obj).whileCmd;}
#line 1557 "y.tab.c"
    break;

  case 29: /* Comando: CmdAtrib  */
#line 119 "parser1.y"
           { (yyval.nd_obj).comando = criarComando(CMD_ATRIB); (yyval.nd_obj).comando->tipoComando.node = (yyvsp[0].nd_obj).node;}
#line 1563 "y.tab.c"
    break;

  case 30: /* Comando: CmdEscrita  */
#line 120 "parser1.y"
             { (yyval.nd_obj).comando = criarComando(CMD_NODE); (yyval.nd_obj).comando->tipoComando.node = (yyvsp[0].nd_obj).node;}
#line 1569 "y.tab.c"
    break;

  case 33: /* Comando: Retorno  */
#line 123 "parser1.y"
          { (yyval.nd_obj).comando = criarComando(CMD_NODE); (yyval.nd_obj).comando->tipoComando.node = (yyvsp[0].nd_obj).node;}
#line 1575 "y.tab.c"
    break;

  case 34: /* value: NUMBER  */
#line 126 "parser1.y"
              { add('C'); }
#line 1581 "y.tab.c"
    break;

  case 35: /* value: FLOAT_NUM  */
#line 127 "parser1.y"
            { add('C'); }
#line 1587 "y.tab.c"
    break;

  case 36: /* value: CHARACTER  */
#line 128 "parser1.y"
            { add('C'); }
#line 1593 "y.tab.c"
    break;

  case 38: /* Retorno: RETURN ExpressaoAritmetica TPEVI  */
#line 132 "parser1.y"
                                          {(yyval.nd_obj).node = criarNode(NULL, (yyvsp[-1].nd_obj).node, "return ");}
#line 1599 "y.tab.c"
    break;

  case 39: /* Retorno: RETURN STRING TPEVI  */
#line 133 "parser1.y"
                     {(yyval.nd_obj).node = criarNode(NULL, criarNode(NULL, NULL, (yyvsp[-1].nd_obj).nome), "return ");}
#line 1605 "y.tab.c"
    break;

  case 40: /* Retorno: RETURN TPEVI  */
#line 134 "parser1.y"
              {(yyval.nd_obj).node = criarNode(NULL, NULL, "return");}
#line 1611 "y.tab.c"
    break;

  case 41: /* $@3: %empty  */
#line 137 "parser1.y"
                   { add('K'); }
#line 1617 "y.tab.c"
    break;

  case 42: /* CmdEnquanto: WHILE $@3 TAPAR ExpressaoLogica TFPAR Bloco  */
#line 137 "parser1.y"
                                                                    {(yyval.nd_obj).whileCmd = criarWhileCmd((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).bloco);}
#line 1623 "y.tab.c"
    break;

  case 43: /* Bloco: TACHA ListaCmd TFCHA  */
#line 140 "parser1.y"
                            { (yyval.nd_obj).bloco = criarBloco((yyvsp[-1].nd_obj).listaCmd);}
#line 1629 "y.tab.c"
    break;

  case 44: /* CmdSe: IF TAPAR ExpressaoLogica TFPAR Bloco  */
#line 143 "parser1.y"
                                            {(yyval.nd_obj).ifCmd = criarIfCmd((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).bloco, NULL);}
#line 1635 "y.tab.c"
    break;

  case 45: /* CmdSe: IF TAPAR ExpressaoLogica TFPAR Bloco ELSE Bloco  */
#line 144 "parser1.y"
                                                  {(yyval.nd_obj).ifCmd = criarIfCmd((yyvsp[-4].nd_obj).node, (yyvsp[-2].nd_obj).bloco, (yyvsp[0].nd_obj).bloco);}
#line 1641 "y.tab.c"
    break;

  case 46: /* CmdAtrib: ID TATRI ExpressaoAritmetica TPEVI  */
#line 147 "parser1.y"
                                             {(yyval.nd_obj).node = criarNode(criarNode(NULL, NULL, (yyvsp[-3].nd_obj).nome), (yyvsp[-1].nd_obj).node, "=");}
#line 1647 "y.tab.c"
    break;

  case 47: /* CmdAtrib: ID TATRI STRING TPEVI  */
#line 148 "parser1.y"
                        {(yyval.nd_obj).node = criarNode(criarNode(NULL, NULL, (yyvsp[-3].nd_obj).nome), criarNode(NULL, NULL, (yyvsp[-1].nd_obj).nome), "=");}
#line 1653 "y.tab.c"
    break;

  case 48: /* CmdEscrita: PRINT TAPAR STRING TFPAR TPEVI  */
#line 151 "parser1.y"
                                           {(yyval.nd_obj).node = criarNode(NULL, criarNode(NULL, NULL, (yyvsp[-2].nd_obj).nome), "print");}
#line 1659 "y.tab.c"
    break;

  case 49: /* CmdEscrita: PRINT TAPAR ExpressaoAritmetica TFPAR TPEVI  */
#line 152 "parser1.y"
                                              {(yyval.nd_obj).node = criarNode(NULL, (yyvsp[-2].nd_obj).node, "print");}
#line 1665 "y.tab.c"
    break;

  case 50: /* $@4: %empty  */
#line 155 "parser1.y"
                 { add('F'); }
#line 1671 "y.tab.c"
    break;

  case 52: /* ChamadaProc: ChamadaFuncao TPEVI  */
#line 158 "parser1.y"
                                 { (yyval.nd_obj).node = (yyvsp[-1].nd_obj).node; }
#line 1677 "y.tab.c"
    break;

  case 53: /* ChamadaFuncao: ID TAPAR ListaParametros TFPAR  */
#line 161 "parser1.y"
                                              { (yyval.nd_obj).node = criarNode((yyvsp[-1].nd_obj).node, NULL, (yyvsp[-3].nd_obj).nome); }
#line 1683 "y.tab.c"
    break;

  case 54: /* ChamadaFuncao: ID TAPAR TFPAR  */
#line 162 "parser1.y"
                 { (yyval.nd_obj).node = criarNode(NULL, NULL, (yyvsp[-2].nd_obj).nome); }
#line 1689 "y.tab.c"
    break;

  case 55: /* ListaParametros: ListaParametros TVIRG ExpressaoAritmetica  */
#line 164 "parser1.y"
                                                           { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, ""); }
#line 1695 "y.tab.c"
    break;

  case 56: /* ListaParametros: ListaParametros TVIRG STRING  */
#line 165 "parser1.y"
                               { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, criarNode(NULL, NULL, (yyvsp[0].nd_obj).nome), ""); }
#line 1701 "y.tab.c"
    break;

  case 57: /* ListaParametros: ExpressaoAritmetica  */
#line 166 "parser1.y"
                      { (yyval.nd_obj).node = (yyvsp[0].nd_obj).node; }
#line 1707 "y.tab.c"
    break;

  case 58: /* ListaParametros: STRING  */
#line 167 "parser1.y"
         { (yyval.nd_obj).node = criarNode(NULL, NULL, (yyvsp[0].nd_obj).nome); }
#line 1713 "y.tab.c"
    break;

  case 71: /* expressaoRelacional: ExpressaoAritmetica OperadoresRelacionais ExpressaoAritmetica  */
#line 188 "parser1.y"
                                                                                   { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, (yyvsp[-1].nd_obj).nome); }
#line 1719 "y.tab.c"
    break;

  case 72: /* ExpressaoLogica: ExpressaoLogica OperadoresLogicos ExpressaoLogica  */
#line 191 "parser1.y"
                                                                   { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, (yyvsp[-1].nd_obj).nome); }
#line 1725 "y.tab.c"
    break;

  case 73: /* ExpressaoLogica: expressaoRelacional  */
#line 192 "parser1.y"
                      { (yyval.nd_obj).node = (yyvsp[0].nd_obj).node; }
#line 1731 "y.tab.c"
    break;

  case 74: /* ExpressaoAritmetica: ExpressaoAritmetica OperadoresAritmeticos ExpressaoAritmetica  */
#line 195 "parser1.y"
                                                                                   { (yyval.nd_obj).node = criarNode((yyvsp[-2].nd_obj).node, (yyvsp[0].nd_obj).node, (yyvsp[-1].nd_obj).nome); }
#line 1737 "y.tab.c"
    break;

  case 75: /* ExpressaoAritmetica: value  */
#line 196 "parser1.y"
        { (yyval.nd_obj).node = criarNode(NULL, NULL, (yyvsp[0].nd_obj).nome);}
#line 1743 "y.tab.c"
    break;


#line 1747 "y.tab.c"

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

#line 200 "parser1.y"


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
	novoComando->tipoComando.node = NULL;
	novoComando->tipoComando.whileCmd = NULL;

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

struct chamadaFuncao* criarChamadaFuncao(char* nome, struct node* parametros) {
	struct chamadaFuncao* novaChamadaFuncao = (struct chamadaFuncao*) malloc(sizeof(struct chamadaFuncao));
	if (novaChamadaFuncao == NULL) {
		// Handle memory allocation failure if needed
		return NULL; // Or NULL, depending on how you want to handle failure
	}
	novaChamadaFuncao->nome = strdup(nome);
	novaChamadaFuncao->parametros = parametros;
	return novaChamadaFuncao;
}

void printChamadaFuncao(struct chamadaFuncao* chamadaFuncao) {
	if (chamadaFuncao != NULL) {
		printf("%s(", chamadaFuncao->nome);
		if (chamadaFuncao->parametros != NULL) {
			printNode(chamadaFuncao->parametros);
		}
		printf(")");
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
