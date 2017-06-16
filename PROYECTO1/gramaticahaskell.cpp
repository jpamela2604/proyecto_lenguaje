/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         zzparse
#define yylex           zzlex
#define yyerror         zzerror
#define yydebug         zzdebug
#define yynerrs         zznerrs

#define yylval          zzlval
#define yychar          zzchar

/* Copy the first part of user declarations.  */
#line 2 "gramaticahaskell.y" /* yacc.c:339  */

#include "nodo.h"
#include "lexicoHaskell.h"
#include <iostream>
#include <QString>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QMessageBox>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>

extern char *zztext;
extern int columna;
extern int linea;
extern FILE *zzin;

int zzerror(const char* mens){
std::cout <<linea<<","<<columna<<"   error sintactico   "<<zztext<<" "<<mens<< std::endl;
return 0;
}
QString re="";
     void mostrarResultadoJ(QWidget* th);

     // Nodo * root=new Nodo();
     Nodo *root;

#line 103 "gramaticahaskell.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "gramaticahaskell.h".  */
#ifndef YY_ZZ_GRAMATICAHASKELL_H_INCLUDED
# define YY_ZZ_GRAMATICAHASKELL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zzdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    mas = 258,
    menos = 259,
    por = 260,
    divi = 261,
    mod = 262,
    sqrt_ = 263,
    par_abre = 264,
    par_cierra = 265,
    or_ = 266,
    and_ = 267,
    mayor = 268,
    menor = 269,
    mayor_igual = 270,
    menor_igual = 271,
    igual_igual = 272,
    diferente = 273,
    let = 274,
    igual = 275,
    cor_abre = 276,
    cor_cierra = 277,
    dolar = 278,
    coma = 279,
    calcular = 280,
    succ_ = 281,
    decc_ = 282,
    min = 283,
    max = 284,
    concatenacion = 285,
    exclamacion = 286,
    sum = 287,
    product = 288,
    revers = 289,
    impr = 290,
    par = 291,
    asc = 292,
    desc = 293,
    length = 294,
    llave_abre = 295,
    llave_cierra = 296,
    if_ = 297,
    then_ = 298,
    else_ = 299,
    end = 300,
    case_ = 301,
    dos_puntos = 302,
    caracter = 303,
    cadena = 304,
    numero = 305,
    id = 306,
    porcentaje = 307,
    pot = 308,
    punto_coma = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 33 "gramaticahaskell.y" /* yacc.c:355  */

char caden[1000];
class Nodo *nodo;

#line 203 "gramaticahaskell.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE zzlval;

int zzparse (void);

#endif /* !YY_ZZ_GRAMATICAHASKELL_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 218 "gramaticahaskell.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  159

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   126,   126,   130,   135,   142,   143,   144,   146,   147,
     148,   149,   150,   158,   166,   172,   178,   188,   193,   201,
     209,   215,   224,   230,   235,   240,   245,   250,   256,   264,
     272,   280,   288,   296,   304,   312,   319,   325,   330,   345,
     351,   360,   365,   375,   383,   390,   397,   406,   413,   420,
     427,   434,   441,   449,   457,   465,   472,   479,   486,   494,
     501,   510,   515,   522,   527,   534,   535,   536,   537,   539,
     549,   558,   563,   570,   579
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mas", "menos", "por", "divi", "mod",
  "sqrt_", "par_abre", "par_cierra", "or_", "and_", "mayor", "menor",
  "mayor_igual", "menor_igual", "igual_igual", "diferente", "let", "igual",
  "cor_abre", "cor_cierra", "dolar", "coma", "calcular", "succ_", "decc_",
  "min", "max", "concatenacion", "exclamacion", "sum", "product", "revers",
  "impr", "par", "asc", "desc", "length", "llave_abre", "llave_cierra",
  "if_", "then_", "else_", "end", "case_", "dos_puntos", "caracter",
  "cadena", "numero", "id", "porcentaje", "pot", "punto_coma", "$accept",
  "S", "SENTENCIAS", "SENTENCIA", "T", "NUMERO", "CONDICION", "OR", "E",
  "LLAMADA_FUN", "PARAMETROS", "DECLA_LISTA", "LISTA", "NATIVAS",
  "DECLA_FUN", "LPARAMS", "CUERPO", "SF", "IF", "CASE", "LCASOS", "CASO", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -76

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-76)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,   147,   212,   -76,   -76,    42,   -76,    26,    18,   -76,
     -12,   -76,   -76,   -76,    19,   -76,   -76,   147,   147,   305,
     -76,   -76,   -12,   125,    25,    33,   147,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,    36,
     277,   -76,    48,   -76,   -76,   113,    62,    -2,    50,   147,
     147,   147,   147,   147,   147,   147,   -76,   147,    85,    84,
     112,   120,   143,   146,   160,   186,   194,   230,   244,   248,
     258,   262,   136,   170,    55,   -12,   -76,   213,   -76,   -76,
     -76,   277,    75,   -76,   114,   110,   -76,    -2,    -2,    -1,
      -1,    -1,    -1,    -1,   125,   113,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   115,
      22,   170,    32,   107,    68,   -76,   -76,   231,   -76,    62,
     272,   -76,   121,   306,     6,   170,   170,   277,   -76,   -76,
     -76,   -76,   -76,   -76,   147,   100,   116,   144,   -76,   -76,
     -76,   -76,   -76,   -76,   155,   -76,   245,   125,   277,   277,
     -76,   -76,   277,   159,   181,   263,   -76,   -76,   -76
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    15,    44,    46,    14,     0,     2,     4,
       7,     9,     8,     5,    11,    10,     6,     0,     0,     0,
      38,    46,    37,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,     1,     3,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    67,     0,    64,    65,
      66,     0,     0,    16,     0,    12,    36,    28,    29,    30,
      31,    32,    33,    34,    41,     0,    17,    47,    48,    49,
      50,    51,    52,    54,    55,    56,    57,    58,    53,     0,
       0,     0,     0,     0,     0,    59,    63,     0,    61,     0,
       0,    39,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,     0,     0,     0,     0,    72,    60,
      13,    43,    40,    20,    19,    18,     0,    21,     0,     0,
      70,    71,     0,     0,     0,     0,    74,    73,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -76,   -76,   163,     0,   -45,   -17,   -76,    47,   -76,
     103,    17,   -76,   -76,   -76,   -76,   -66,   -75,   -76,   -76,
     -76,    35
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    22,    11,   112,   134,   113,    12,
      24,    76,    14,    15,    16,    42,    77,    78,    79,    80,
     137,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      10,    85,   116,    51,    52,    53,    54,    54,    10,    49,
      50,    51,    52,    53,    54,   117,    86,    13,    45,   128,
     129,   130,   131,   132,   133,    13,    43,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,     1,
      75,     2,   116,   125,   126,    83,    57,    56,    23,    57,
      46,    55,    55,    49,    50,    51,    52,    53,    54,    55,
      86,   146,    40,   122,    47,    48,     3,     4,    81,     5,
       6,   116,    82,    59,   140,   127,    72,    75,   116,   116,
     116,    75,   153,   154,    58,    84,   155,    49,    50,    51,
      52,    53,    54,    41,   123,   120,    87,    88,    89,    90,
      91,    92,    93,    55,    94,    95,   114,    96,   144,   145,
      49,    50,    51,    52,    53,    54,   135,    75,   136,    23,
     128,   129,   130,   131,   132,   133,   118,    75,    49,    50,
      51,    52,    53,    54,     1,    97,    19,    55,   121,    26,
      17,   119,    45,    98,   142,    18,    75,   148,    75,    75,
      45,    17,    75,    75,    75,    75,    18,     1,   124,    19,
      55,     3,     4,   149,    21,     6,    99,   126,     1,   100,
      19,    44,   151,    45,    17,   110,    45,   109,    55,   111,
       1,   147,     2,   101,     3,     4,    20,    21,     6,   150,
      45,     1,   135,    19,   136,     3,     4,    20,    21,     6,
       0,    73,     1,     0,     2,    74,     0,     3,     4,   102,
      21,     6,     0,   156,     0,     0,    45,   103,     3,     4,
      20,    21,     6,    73,    45,     0,     0,    74,     0,     3,
       4,    25,    21,     6,     1,   157,     2,    26,    27,    28,
      29,    30,     0,     0,    31,    32,    33,    34,    35,    36,
      37,    38,     1,   104,     2,    73,     0,     0,   115,    74,
      45,     3,     4,    39,    21,     6,     1,   105,     2,     0,
       0,   106,     0,    73,    45,     0,   139,    74,    45,     3,
       4,   107,    21,     6,     1,   108,     2,    73,    45,   152,
       0,    74,    45,     3,     4,   141,    21,     6,     1,     0,
       2,     0,    45,     0,     0,    73,     0,     0,   158,    74,
       0,     3,     4,     0,    21,     6,   143,   125,   126,    73,
       0,     0,     0,    74,     0,     3,     4,     0,    21,     6,
      26,    27,    28,    29,    30,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39
};

static const yytype_int16 yycheck[] =
{
       0,    46,    77,     5,     6,     7,     8,     8,     8,     3,
       4,     5,     6,     7,     8,    81,    10,     0,    30,    13,
      14,    15,    16,    17,    18,     8,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    21,
      40,    23,   117,    11,    12,    45,    24,    22,     1,    24,
      31,    53,    53,     3,     4,     5,     6,     7,     8,    53,
      10,   127,    20,    41,    17,    18,    48,    49,    20,    51,
      52,   146,    24,    26,   119,    43,    40,    77,   153,   154,
     155,    81,   148,   149,    51,    23,   152,     3,     4,     5,
       6,     7,     8,    51,   111,    95,    49,    50,    51,    52,
      53,    54,    55,    53,    57,    20,    51,    23,   125,   126,
       3,     4,     5,     6,     7,     8,    48,   117,    50,    72,
      13,    14,    15,    16,    17,    18,    51,   127,     3,     4,
       5,     6,     7,     8,    21,    23,    23,    53,    23,    25,
       4,    31,    30,    23,    23,     9,   146,    47,   148,   149,
      30,     4,   152,   153,   154,   155,     9,    21,   111,    23,
      53,    48,    49,    47,    51,    52,    23,    12,    21,    23,
      23,     8,   137,    30,     4,    72,    30,    41,    53,     9,
      21,   134,    23,    23,    48,    49,    50,    51,    52,    45,
      30,    21,    48,    23,    50,    48,    49,    50,    51,    52,
      -1,    42,    21,    -1,    23,    46,    -1,    48,    49,    23,
      51,    52,    -1,    54,    -1,    -1,    30,    23,    48,    49,
      50,    51,    52,    42,    30,    -1,    -1,    46,    -1,    48,
      49,    19,    51,    52,    21,    54,    23,    25,    26,    27,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    21,    23,    23,    42,    -1,    -1,    45,    46,
      30,    48,    49,    51,    51,    52,    21,    23,    23,    -1,
      -1,    23,    -1,    42,    30,    -1,    45,    46,    30,    48,
      49,    23,    51,    52,    21,    23,    23,    42,    30,    44,
      -1,    46,    30,    48,    49,    23,    51,    52,    21,    -1,
      23,    -1,    30,    -1,    -1,    42,    -1,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    10,    11,    12,    42,
      -1,    -1,    -1,    46,    -1,    48,    49,    -1,    51,    52,
      25,    26,    27,    28,    29,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    23,    48,    49,    51,    52,    56,    57,    58,
      59,    60,    64,    66,    67,    68,    69,     4,     9,    23,
      50,    51,    59,    63,    65,    19,    25,    26,    27,    28,
      29,    32,    33,    34,    35,    36,    37,    38,    39,    51,
      20,    51,    70,     0,    58,    30,    31,    63,    63,     3,
       4,     5,     6,     7,     8,    53,    22,    24,    51,    63,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    40,    42,    46,    59,    66,    71,    72,    73,
      74,    20,    24,    59,    23,    60,    10,    63,    63,    63,
      63,    63,    63,    63,    63,    20,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    41,
      65,     9,    61,    63,    51,    45,    72,    71,    51,    31,
      59,    23,    41,    61,    63,    11,    12,    43,    13,    14,
      15,    16,    17,    18,    62,    48,    50,    75,    76,    45,
      60,    23,    23,    10,    61,    61,    71,    63,    47,    47,
      45,    76,    44,    71,    71,    71,    54,    54,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    61,    61,
      61,    61,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    65,    65,    66,    67,    67,    67,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    72,    72,    73,
      74,    75,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     1,     1,     3,     4,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     5,
       6,     3,     1,     6,     1,     3,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       5,     3,     1,     2,     1,     1,     1,     1,     1,     7,
       4,     2,     1,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 126 "gramaticahaskell.y" /* yacc.c:1646  */
    {re ="termino haskells2";

                                root=(yyvsp[0].nodo);(yyval.nodo)=(yyvsp[0].nodo);}
#line 1444 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 131 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                (yyvsp[-1].nodo)->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=(yyvsp[-1].nodo);
                        }
#line 1453 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 136 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("SENTENCIAS");
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1463 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 142 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 1469 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 143 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 1475 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 144 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 1481 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 146 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 1487 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 147 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 1493 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 148 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 1499 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 149 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 1505 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 151 "gramaticahaskell.y" /* yacc.c:1646  */
    {

                                Nodo *padre= new Nodo("ACCESO");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1517 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 159 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("ACCESO");
                                padre->hijos.append((yyvsp[-4].nodo));
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1529 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 167 "gramaticahaskell.y" /* yacc.c:1646  */
    {       //ultimo valor valido solo en consola
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append(new Nodo("%"));
                                (yyval.nodo)=padre;
                        }
#line 1539 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 173 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("CARACTER");
                                padre->hijos.append(new Nodo((yyvsp[0].caden)));
                                (yyval.nodo)=padre;
                        }
#line 1549 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 179 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("LISTA");
                                padre->hijos.append(new Nodo("CONCATENACION"));
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                         }
#line 1561 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 189 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                (yyval.nodo)=(yyvsp[-1].nodo);
                        }
#line 1569 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 194 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("COND");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append(new Nodo("&&"));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1581 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 202 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("COND");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append(new Nodo("||"));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1593 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 210 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("COND");
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1603 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 216 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("COND");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append((yyvsp[-1].nodo));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1615 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 225 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo(">");
                                (yyval.nodo)=padre;

                        }
#line 1625 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 231 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("<");
                                (yyval.nodo)=padre;
                        }
#line 1634 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 236 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo(">=");
                                (yyval.nodo)=padre;
                        }
#line 1643 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 241 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("<=");
                                (yyval.nodo)=padre;
                        }
#line 1652 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 246 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("==");
                                (yyval.nodo)=padre;
                        }
#line 1661 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 251 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("!=");
                                (yyval.nodo)=padre;
                        }
#line 1670 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 257 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append(new Nodo("+"));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1682 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 265 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append(new Nodo("-"));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1694 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 273 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append(new Nodo("*"));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1706 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 281 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append(new Nodo("/"));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1718 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 289 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append(new Nodo("%"));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1730 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 297 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append(new Nodo("SQRT_"));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1742 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 305 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append((yyvsp[-2].nodo));
                                padre->hijos.append(new Nodo("^"));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1754 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 313 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append(new Nodo("-"));
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1765 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 320 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1775 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 326 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append((yyvsp[0].nodo));
                        }
#line 1784 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 331 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("E");
                                Nodo *hijo = new Nodo("NUMERO");
                                hijo->hijos.append(new Nodo((yyvsp[0].caden)));
                                padre->hijos.append(hijo);
                                (yyval.nodo)=padre;
                        }
#line 1796 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 346 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("LLAMADA_FUN");
                                padre->hijos.append(new Nodo((yyvsp[-3].caden)));
                                (yyval.nodo)=padre;
                        }
#line 1806 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 352 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("LLAMADA_FUN");
                                padre->hijos.append(new Nodo((yyvsp[-4].caden)));
                                padre->hijos.append((yyvsp[-2].nodo));
                                (yyval.nodo)=padre;

                        }
#line 1818 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 361 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                (yyvsp[-2].nodo)->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=(yyvsp[-2].nodo);
                        }
#line 1827 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 366 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                 Nodo *padre= new Nodo("PARAMETROS");
                                 padre->hijos.append((yyvsp[0].nodo));
                                 (yyval.nodo)=padre;
                        }
#line 1837 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 376 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("DECLA_LISTA");
                                padre->hijos.append(new Nodo((yyvsp[-3].caden)));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1848 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 384 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("LISTA");
                                padre->hijos.append(new Nodo("CADENA"));
                                padre->hijos.append(new Nodo((yyvsp[0].caden)));
                                (yyval.nodo)=padre;
                        }
#line 1859 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 391 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("LISTA");
                                padre->hijos.append(new Nodo("DEFICION"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1870 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 398 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("LISTA");
                                padre->hijos.append(new Nodo("ID"));
                                padre->hijos.append(new Nodo((yyvsp[0].caden)));
                                (yyval.nodo)=padre;

                        }
#line 1882 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 407 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("SUCC_"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1893 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 414 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("DECC_"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1904 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 421 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("MIN"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1915 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 428 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("MAX"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1926 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 435 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("SUM"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1937 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 442 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("PRODUCT"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;

                        }
#line 1949 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 450 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("LENGTH"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;

                        }
#line 1961 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 458 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("REVERS"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;

                        }
#line 1973 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 466 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("IMPR"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1984 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 473 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("PAR"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 1995 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 480 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("ASC"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 2006 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 487 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("DESC"));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 2017 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 495 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("DECLA_FUN");
                                padre->hijos.append(new Nodo((yyvsp[-3].caden)));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 2028 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 502 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("DECLA_FUN");
                                padre->hijos.append(new Nodo((yyvsp[-4].caden)));
                                padre->hijos.append((yyvsp[-3].nodo));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 2040 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 511 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                (yyvsp[-2].nodo)->hijos.append(new Nodo((yyvsp[0].caden)));
                                (yyval.nodo)=(yyvsp[-2].nodo);
                        }
#line 2049 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 516 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("LPARAMS");
                                padre->hijos.append(new Nodo((yyvsp[0].caden)));
                                (yyval.nodo)=padre;
                        }
#line 2059 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 523 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                (yyvsp[-1].nodo)->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=(yyvsp[-1].nodo);
                        }
#line 2068 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 528 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("CUERPO");
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 2078 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 534 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 2084 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 535 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 2090 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 536 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 2096 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 537 "gramaticahaskell.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 2102 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 540 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("IF");
                                padre->hijos.append((yyvsp[-5].nodo));
                                padre->hijos.append((yyvsp[-3].nodo));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;

                        }
#line 2115 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 550 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("CASE");
                                padre->hijos.append(new Nodo((yyvsp[-2].caden)));
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;

                        }
#line 2127 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 559 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                (yyvsp[-1].nodo)->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=(yyvsp[-1].nodo);
                        }
#line 2136 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 564 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("CASOS");
                                padre->hijos.append((yyvsp[0].nodo));
                                (yyval.nodo)=padre;
                        }
#line 2146 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 571 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("CASO");
                                Nodo *hijo= new Nodo("NUMERO");
                                hijo->hijos.append(new Nodo((yyvsp[-3].caden)));
                                padre->hijos.append(hijo);
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 2159 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 580 "gramaticahaskell.y" /* yacc.c:1646  */
    {
                                Nodo *padre= new Nodo("CASO");
                                Nodo *hijo= new Nodo("CARACTER");
                                hijo->hijos.append(new Nodo((yyvsp[-3].caden)));
                                padre->hijos.append(hijo);
                                padre->hijos.append((yyvsp[-1].nodo));
                                (yyval.nodo)=padre;
                        }
#line 2172 "gramaticahaskell.cpp" /* yacc.c:1646  */
    break;


#line 2176 "gramaticahaskell.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 590 "gramaticahaskell.y" /* yacc.c:1906  */

void mostrarResultado(QWidget* th) {
 QMessageBox::information(th,"Resultado",re);
 re="";
}

