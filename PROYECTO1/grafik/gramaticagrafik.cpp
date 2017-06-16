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




/* Copy the first part of user declarations.  */
#line 1 "gramaticagrafik.y" /* yacc.c:339  */

#include "lexicoGrafik.h"
#include <iostream>
#include <QString>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QMessageBox>
extern char *yytext;
extern int columna;
extern int linea;
extern FILE *yyin;

int yyerror(const char* mens){
std::cout <<linea<<","<<columna<<"   error sintactico   "<<yytext<<" "<<mens<< std::endl;
return 0;
}
/*QString reJ="";
void mostrarResultadoJ(QWidget* th);
	typedef struct leaf{
            char produccion[1000];
            char atributo[1000];
            char contenido[1000];
            int nHijos;
            struct leaf *hijos[30];
      }nodeTree;

      nodeTree *createNode(char produccion[1000],char atributo[1000],char contenido[1000],int nHijos){
            nodeTree *nuevo = (nodeTree*)malloc(sizeof(nodeTree));
            strcpy(nuevo->produccion, produccion);
             strcpy(nuevo->atributo, atributo);
            strcpy(nuevo->contenido, contenido);
            nuevo->nHijos = nHijos;

            return nuevo;
      }

      nodeTree *addson(nodeTree *padre,nodeTree *hijo){
            padre->hijos[padre->nHijos] = hijo;
            padre->nHijos++;
            return padre;
      }



      nodeTree *root;*/

#line 113 "gramaticagrafik.cpp" /* yacc.c:339  */

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
   by #include "gramaticagrafik.h".  */
#ifndef YY_YY_GRAMATICAGRAFIK_H_INCLUDED
# define YY_YY_GRAMATICAGRAFIK_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    incluir_HK = 258,
    als = 259,
    llave_abre = 260,
    llave_cierra = 261,
    hereda = 262,
    interrogacion = 263,
    par_abre = 264,
    par_cierra = 265,
    llamar = 266,
    llamarHK = 267,
    coma = 268,
    vacio = 269,
    inicio = 270,
    dos_puntos = 271,
    publico = 272,
    privado = 273,
    protegido = 274,
    igual = 275,
    var = 276,
    cor_abre = 277,
    cor_cierra = 278,
    retornar = 279,
    importar = 280,
    extension = 281,
    datos = 282,
    procesar = 283,
    donde = 284,
    donde_todo = 285,
    donde_cada = 286,
    columna = 287,
    graficar = 288,
    imprimir = 289,
    si = 290,
    sino = 291,
    seleccion = 292,
    caso = 293,
    defecto = 294,
    para = 295,
    mas_mas = 296,
    menos_menos = 297,
    mientras = 298,
    hacer = 299,
    continuar = 300,
    terminar = 301,
    or_ = 302,
    xor_ = 303,
    and_ = 304,
    not_ = 305,
    menor = 306,
    mayor = 307,
    menor_igual = 308,
    mayor_igual = 309,
    igual_igual = 310,
    diferente = 311,
    mas = 312,
    menos = 313,
    por = 314,
    div = 315,
    pot = 316,
    punto = 317,
    nuevo = 318,
    entero_ = 319,
    decimal_ = 320,
    caracter_ = 321,
    cadena_ = 322,
    bool_ = 323,
    caracter = 324,
    cadena = 325,
    entero = 326,
    id = 327,
    bool = 328,
    decimal = 329
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 49 "gramaticagrafik.y" /* yacc.c:355  */

char cade[1000];
struct leaf *cade;

#line 233 "gramaticagrafik.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMATICAGRAFIK_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 248 "gramaticagrafik.cpp" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   911

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  362

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   184,   184,   186,   187,   189,   190,   192,   194,   195,
     197,   199,   202,   203,   206,   207,   208,   209,   210,   212,
     213,   215,   216,   217,   219,   220,   222,   223,   225,   227,
     228,   231,   232,   233,   236,   237,   238,   239,   241,   242,
     244,   246,   247,   249,   250,   252,   253,   255,   256,   258,
     260,   261,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   279,   281,   283,   284,
     286,   287,   289,   290,   292,   294,   295,   297,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   311,   312,
     314,   315,   317,   319,   321,   323,   325,   326,   327,   328,
     329,   330,   332,   333,   334,   335,   336,   337,   339,   340,
     341,   342,   343,   344,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   370,   371,   374,   375,   376,
     377,   378,   379,   380
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "incluir_HK", "als", "llave_abre",
  "llave_cierra", "hereda", "interrogacion", "par_abre", "par_cierra",
  "llamar", "llamarHK", "coma", "vacio", "inicio", "dos_puntos", "publico",
  "privado", "protegido", "igual", "var", "cor_abre", "cor_cierra",
  "retornar", "importar", "extension", "datos", "procesar", "donde",
  "donde_todo", "donde_cada", "columna", "graficar", "imprimir", "si",
  "sino", "seleccion", "caso", "defecto", "para", "mas_mas", "menos_menos",
  "mientras", "hacer", "continuar", "terminar", "or_", "xor_", "and_",
  "not_", "menor", "mayor", "menor_igual", "mayor_igual", "igual_igual",
  "diferente", "mas", "menos", "por", "div", "pot", "punto", "nuevo",
  "entero_", "decimal_", "caracter_", "cadena_", "bool_", "caracter",
  "cadena", "entero", "id", "bool", "decimal", "$accept", "S", "IMPORTSG",
  "IMPORTSH", "IMPORTH", "ALSS", "ALS", "HEREDA", "CUERPO", "DECLARACION",
  "DECLAFUN", "LLAMADA_FUN", "LPARAMETROS", "LDECPAR", "INICIO",
  "SENTENCIAS", "VISIBILIDAD", "DECLAVAR", "DECLAARR", "ARR_MULT", "LDIM",
  "DIM", "LDEF_DIM", "RETORNO", "IMPORTG", "ASIGNACION", "SENTENCIA",
  "DATOS", "SENTENCIAS_DATOS", "LCOLUMNAS", "GRAFICAR", "IMPRIMIR", "SI",
  "SELECCION", "CASOS", "PARA", "UNITARIOS", "MIENTRAS", "HACER",
  "CONTINUAR", "TERMINAR", "CONDICION", "SIG_REL", "E", "T", "OBJETO",
  "DIMENSION", "TDATO", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

#define YYPACT_NINF -179

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-179)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,   -44,    47,    16,  -179,    32,  -179,    -6,   220,  -179,
    -179,    60,    75,    13,  -179,    85,  -179,  -179,  -179,   193,
    -179,    51,   225,  -179,   259,   211,  -179,  -179,  -179,    82,
      -4,   279,  -179,  -179,  -179,  -179,  -179,  -179,    -5,  -179,
    -179,  -179,   121,   213,  -179,   174,   240,   252,  -179,   190,
    -179,  -179,  -179,   192,  -179,   264,   241,   273,     8,   225,
     234,   269,   281,   216,   274,    66,   276,   225,   126,   212,
     839,   283,   292,   762,   226,   298,   762,   317,   225,   279,
    -179,   762,    18,   253,   762,   323,   324,   326,   328,   329,
     331,   344,   349,  -179,  -179,   284,    20,   358,   315,   163,
     365,   368,   371,  -179,   373,   380,  -179,  -179,  -179,  -179,
    -179,   384,   386,     2,   375,   351,  -179,   762,    48,  -179,
    -179,  -179,  -179,  -179,  -179,   337,   644,  -179,   -16,   374,
     393,   337,   839,   400,   345,   114,   354,   411,   337,   412,
     762,   762,   762,    18,    -7,   762,   839,   414,   681,   762,
     407,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,  -179,
    -179,  -179,   762,  -179,  -179,   -22,  -179,   422,  -179,   337,
    -179,  -179,   354,   762,   762,   762,  -179,  -179,  -179,  -179,
    -179,  -179,   784,   784,   784,   784,   784,   784,  -179,  -179,
      28,  -179,   356,   839,  -179,  -179,   707,  -179,   120,   133,
     179,     7,   279,   419,   182,   397,   426,  -179,   177,   337,
     -13,   762,   337,   430,   116,   376,   184,   396,  -179,   366,
     366,   385,   385,   385,   394,  -179,    25,  -179,   337,  -179,
     438,  -179,   178,  -179,   762,  -179,   456,   458,   392,   762,
     461,   424,  -179,  -179,   762,  -179,   219,   460,   736,   407,
     459,  -179,    28,  -179,  -179,   205,   839,   218,   454,     5,
     839,   467,   337,  -179,  -179,  -179,   199,   445,  -179,  -179,
     479,   243,   463,   106,   762,    18,   520,   762,  -179,   471,
     200,   450,   473,   476,   477,   478,   839,  -179,   301,   480,
      61,   485,  -179,   233,   416,   489,   466,   494,   839,   839,
     839,   839,   839,   486,   488,   491,   492,   839,   762,   500,
     501,   505,   427,   502,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   242,   839,  -179,  -179,   508,   509,
     511,   457,   561,   839,   839,   839,   839,    18,   602,   462,
     464,   465,   517,  -179,   524,  -179,   527,   528,   529,  -179,
     516,   510,   532,   535,   839,   475,  -179,  -179,   643,   538,
    -179,  -179
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,     1,     0,     0,     6,
       3,     0,     0,     0,     5,     2,     9,    49,     7,     0,
       8,     0,     0,    11,     0,     0,    31,    32,    33,     0,
     143,     0,   137,   138,   139,   140,   141,   142,     0,    13,
      14,    15,     0,     0,    16,     0,     0,     0,   143,     0,
      10,    12,    18,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
      27,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     0,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,    46,     0,     0,   118,
     119,   114,   120,   116,   124,    37,   101,   113,   121,     0,
       0,    35,     0,     0,     0,     0,    21,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,    53,    28,    29,    54,    55,    52,    56,    65,    57,
      63,    64,     0,    90,    91,     0,    51,     0,    66,    99,
     115,   117,   122,     0,     0,     0,   102,   103,   104,   105,
     106,   107,     0,     0,     0,     0,     0,     0,   123,    45,
       0,    39,     0,     0,    26,   133,     0,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,     0,    25,
       0,     0,    50,     0,     0,     0,    96,    97,    98,   108,
     109,   110,   111,   112,   100,    43,     0,    42,    44,    19,
       0,    23,     0,    72,     0,    74,     0,     0,     0,     0,
       0,     0,   132,   130,     0,   136,     0,     0,     0,   125,
       0,    40,     0,    20,    22,     0,     0,     0,     0,     0,
       0,     0,    24,   135,   128,   127,     0,     0,    41,    73,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,    75,     0,     0,     0,     0,     0,    77,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    84,    83,    86,     0,
       0,     0,     0,    82,     0,     0,    93,    71,     0,     0,
       0,     0,     0,    80,    79,    78,    81,     0,     0,     0,
       0,     0,     0,    76,     0,    88,     0,     0,     0,    70,
       0,     0,     0,     0,     0,     0,    69,    68,     0,     0,
      89,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -179,  -179,   540,  -179,   534,  -179,  -179,   512,
    -179,    11,  -178,  -179,  -179,     9,    99,    97,   102,   428,
    -179,   300,  -179,  -179,   553,  -138,   -98,  -179,  -179,  -179,
    -179,  -179,  -179,  -179,  -179,  -179,   431,  -179,  -179,  -179,
    -179,   130,  -179,   228,  -179,   -69,   347,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    15,    16,    22,    38,    39,
      40,    97,   208,    68,    41,    98,    25,    99,   100,   225,
     226,   227,    65,   101,     4,   102,   103,    44,   115,   280,
     104,   105,   106,   107,   273,   108,   166,   109,   110,   111,
     112,   209,   187,   126,   127,   113,   150,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     153,    50,    81,    49,   128,   213,   203,   128,     1,    30,
     245,    46,   128,   136,   202,   128,    31,   237,   232,     7,
      85,   275,   162,    47,    24,   163,   164,    81,     5,   148,
      63,   251,    69,   190,   173,   174,   175,    81,   252,    82,
      83,     1,   149,   163,   164,    85,   165,     6,   128,   172,
     214,   134,   173,   174,   175,    85,    95,    81,    11,    32,
      33,    34,    35,    36,   165,    96,    12,    37,    17,   165,
     266,   128,   128,   128,   201,    85,   128,   308,   117,   128,
     128,    95,    24,    18,   124,    19,   118,   124,    74,    13,
      96,    95,   124,   128,   153,   124,    30,   119,   120,   121,
      96,   122,   123,    31,   128,   128,   128,   153,   173,   174,
     175,    95,   287,   128,   128,   128,   128,   128,   128,   170,
      96,   128,   171,    23,   195,   248,    42,   128,   124,    52,
     233,    43,   153,   234,    53,    42,    78,   291,   149,    79,
      43,   192,   128,   235,   288,   289,    32,    33,    34,    35,
      36,   124,   124,   124,    37,   205,   124,    64,    66,   124,
     124,   173,   174,   175,    75,   128,    77,   173,   174,   175,
     128,   154,   153,   124,   238,   128,    53,   133,   153,   128,
     173,   174,   175,   128,   124,   124,   124,   243,   254,   236,
     244,   244,   240,   124,   124,   124,   124,   124,   124,   344,
      21,   124,   230,   125,   153,   128,   131,   124,   128,   278,
     295,   135,   244,   296,   138,   269,    29,   153,   153,   153,
     153,    54,   124,     7,    13,   153,   173,   174,   175,   173,
     174,   175,   174,   175,   153,   153,   153,   153,   153,   128,
     153,    24,   263,   310,    67,   124,    55,   169,    48,    56,
     124,    61,   173,   174,   175,   124,   271,   272,   337,   124,
     153,    57,    58,   124,    59,   270,   173,   174,   175,   276,
     198,   199,   200,    60,    70,   204,    26,    27,    28,   210,
     173,   174,   175,    62,    80,   124,    71,    72,   124,   173,
     174,   175,   212,    48,    73,   302,    76,   129,    32,    33,
      34,    35,    36,   216,   217,   218,    37,   315,   316,   317,
     318,   114,   282,   283,   284,   116,   323,   285,   130,   124,
     228,   152,   132,   332,    81,   137,    82,    83,   333,   334,
     335,   336,   139,   140,   338,   141,    31,   142,   143,    84,
     144,   246,    85,    32,    33,    34,    35,    36,    86,    87,
      88,    37,    89,   145,   146,    90,   147,   168,    91,    92,
      93,    94,   229,   358,   255,    81,   151,    82,    83,   259,
     303,   304,   305,   155,   262,   306,   156,    31,    95,   157,
      84,   158,   228,    85,   173,   174,   175,    96,   159,    86,
      87,    88,   160,    89,   161,   167,    90,   189,   190,    91,
      92,    93,    94,   241,   290,   193,    81,   293,    82,    83,
     219,   220,   221,   222,   223,   224,   165,   194,    31,    95,
     196,    84,   197,   206,    85,   184,   185,   186,    96,   211,
      86,    87,    88,   215,    89,   239,   242,    90,   324,   247,
      91,    92,    93,    94,   253,   175,   186,    81,   250,    82,
      83,   182,   183,   184,   185,   186,   328,   329,   330,    31,
      95,   256,    84,   257,   258,    85,   260,   261,   267,    96,
     264,    86,    87,    88,   274,    89,   277,   279,    90,   286,
     294,    91,    92,    93,    94,   281,   297,   311,    81,   298,
      82,    83,   299,   300,   301,   309,   307,   312,   313,   314,
      31,    95,   319,    84,   320,   325,    85,   321,   322,   326,
      96,   331,    86,    87,    88,   327,    89,   339,   340,    90,
     341,   354,    91,    92,    93,    94,   292,   349,   342,    81,
     355,    82,    83,   346,   350,   347,   348,   351,   352,   353,
     356,    31,    95,   357,    84,   359,   361,    85,    14,    20,
      51,    96,   268,    86,    87,    88,    10,    89,   191,   188,
      90,   249,     0,    91,    92,    93,    94,   343,     0,     0,
      81,     0,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    95,     0,    84,     0,     0,    85,     0,
       0,     0,    96,     0,    86,    87,    88,     0,    89,     0,
       0,    90,     0,     0,    91,    92,    93,    94,   345,     0,
       0,    81,     0,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    95,     0,    84,     0,     0,    85,
       0,     0,     0,    96,     0,    86,    87,    88,     0,    89,
       0,     0,    90,     0,     0,    91,    92,    93,    94,   360,
       0,     0,    81,     0,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    95,     0,    84,     0,     0,
      85,     0,     0,     0,    96,     0,    86,    87,    88,     0,
      89,     0,     0,    90,     0,     0,    91,    92,    93,    94,
      81,   207,    82,    83,     0,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    95,     0,    85,     0,
       0,     0,     0,     0,     0,    96,    81,   231,    82,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,    85,     0,     0,     0,     0,   118,
       0,     0,     0,     0,    95,    81,   265,    82,    83,     0,
     119,   120,   121,    96,   122,   123,     0,   117,     0,     0,
       0,     0,     0,    85,     0,   118,     0,     0,     0,     0,
      95,    81,     0,    82,    83,     0,   119,   120,   121,    96,
     122,   123,     0,     0,     0,     0,   117,     0,     0,    85,
       0,     0,     0,    81,   118,    82,    83,     0,     0,    95,
       0,     0,     0,     0,     0,   119,   120,   121,    96,   122,
     123,    85,   117,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,    95,     0,     0,     0,     0,
       0,   119,   120,   121,    96,   122,   123,     0,     0,     0,
       0,     0,   118,     0,     0,     0,     0,    95,    81,     0,
      82,    83,     0,   119,   120,   121,    96,   122,   123,     0,
      31,     0,     0,    84,     0,     0,    85,     0,     0,     0,
       0,     0,    86,    87,    88,     0,    89,     0,     0,    90,
       0,     0,    91,    92,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,     0,     0,     0,     0,     0,
       0,    96
};

static const yytype_int16 yycheck[] =
{
      98,     6,     9,    31,    73,    27,   144,    76,    25,    14,
      23,    15,    81,    82,    21,    84,    21,    10,   196,     3,
      27,    16,    20,    27,    16,    41,    42,     9,    72,     9,
      22,     6,    60,     5,    47,    48,    49,     9,    13,    11,
      12,    25,    22,    41,    42,    27,    62,     0,   117,   118,
      72,    79,    47,    48,    49,    27,    63,     9,    26,    64,
      65,    66,    67,    68,    62,    72,    72,    72,     8,    62,
     248,   140,   141,   142,   143,    27,   145,    16,    50,   148,
     149,    63,    16,     8,    73,    72,    58,    76,    22,     4,
      72,    63,    81,   162,   192,    84,    14,    69,    70,    71,
      72,    73,    74,    21,   173,   174,   175,   205,    47,    48,
      49,    63,     6,   182,   183,   184,   185,   186,   187,    71,
      72,   190,    74,    72,    10,     9,    29,   196,   117,     8,
      10,    29,   230,    13,    13,    38,    10,   275,    22,    13,
      38,   132,   211,    10,    38,    39,    64,    65,    66,    67,
      68,   140,   141,   142,    72,   146,   145,    58,    59,   148,
     149,    47,    48,    49,    65,   234,    67,    47,    48,    49,
     239,     8,   270,   162,   202,   244,    13,    78,   276,   248,
      47,    48,    49,   252,   173,   174,   175,    10,    10,    10,
      13,    13,    10,   182,   183,   184,   185,   186,   187,   337,
       7,   190,   193,    73,   302,   274,    76,   196,   277,    10,
      10,    81,    13,    13,    84,    10,     5,   315,   316,   317,
     318,     8,   211,     3,     4,   323,    47,    48,    49,    47,
      48,    49,    48,    49,   332,   333,   334,   335,   336,   308,
     338,    16,    23,    10,    10,   234,    72,   117,    14,     9,
     239,    10,    47,    48,    49,   244,    38,    39,    16,   248,
     358,     9,    72,   252,    72,   256,    47,    48,    49,   260,
     140,   141,   142,     9,     5,   145,    17,    18,    19,   149,
      47,    48,    49,    10,    72,   274,     5,    71,   277,    47,
      48,    49,   162,    14,    20,   286,    20,    71,    64,    65,
      66,    67,    68,   173,   174,   175,    72,   298,   299,   300,
     301,    28,    69,    70,    71,    23,   307,    74,    20,   308,
     190,     6,     5,   314,     9,    72,    11,    12,   319,   320,
     321,   322,     9,     9,   325,     9,    21,     9,     9,    24,
       9,   211,    27,    64,    65,    66,    67,    68,    33,    34,
      35,    72,    37,     9,     5,    40,    72,     6,    43,    44,
      45,    46,     6,   354,   234,     9,     8,    11,    12,   239,
      69,    70,    71,     8,   244,    74,     8,    21,    63,     8,
      24,     8,   252,    27,    47,    48,    49,    72,     8,    33,
      34,    35,     8,    37,     8,    20,    40,    23,     5,    43,
      44,    45,    46,     6,   274,     5,     9,   277,    11,    12,
     182,   183,   184,   185,   186,   187,    62,    72,    21,    63,
       9,    24,    10,     9,    27,    59,    60,    61,    72,    22,
      33,    34,    35,    11,    37,    16,    10,    40,   308,     9,
      43,    44,    45,    46,     6,    49,    61,     9,    72,    11,
      12,    57,    58,    59,    60,    61,    29,    30,    31,    21,
      63,     5,    24,     5,    72,    27,     5,    43,     9,    72,
      10,    33,    34,    35,    20,    37,     9,    32,    40,    16,
       9,    43,    44,    45,    46,     6,    36,    71,     9,    16,
      11,    12,    16,    16,    16,    10,    16,     8,    32,     5,
      21,    63,    16,    24,    16,     5,    27,    16,    16,     8,
      72,     9,    33,    34,    35,    10,    37,     9,     9,    40,
       9,     5,    43,    44,    45,    46,     6,    10,    71,     9,
      20,    11,    12,    71,    10,    71,    71,    10,    10,    10,
       8,    21,    63,     8,    24,    70,     8,    27,     8,    15,
      38,    72,   252,    33,    34,    35,     3,    37,   130,   128,
      40,   214,    -1,    43,    44,    45,    46,     6,    -1,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    63,    -1,    24,    -1,    -1,    27,    -1,
      -1,    -1,    72,    -1,    33,    34,    35,    -1,    37,    -1,
      -1,    40,    -1,    -1,    43,    44,    45,    46,     6,    -1,
      -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    63,    -1,    24,    -1,    -1,    27,
      -1,    -1,    -1,    72,    -1,    33,    34,    35,    -1,    37,
      -1,    -1,    40,    -1,    -1,    43,    44,    45,    46,     6,
      -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    63,    -1,    24,    -1,    -1,
      27,    -1,    -1,    -1,    72,    -1,    33,    34,    35,    -1,
      37,    -1,    -1,    40,    -1,    -1,    43,    44,    45,    46,
       9,    10,    11,    12,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    63,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    72,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    27,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    63,     9,    10,    11,    12,    -1,
      69,    70,    71,    72,    73,    74,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    58,    -1,    -1,    -1,    -1,
      63,     9,    -1,    11,    12,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    50,    -1,    -1,    27,
      -1,    -1,    -1,     9,    58,    11,    12,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    27,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    63,     9,    -1,
      11,    12,    -1,    69,    70,    71,    72,    73,    74,    -1,
      21,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    -1,    -1,    40,
      -1,    -1,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    76,    77,    99,    72,     0,     3,    78,    79,
      99,    26,    72,     4,    79,    80,    81,     8,     8,    72,
      81,     7,    82,    72,    16,    91,    17,    18,    19,     5,
      14,    21,    64,    65,    66,    67,    68,    72,    83,    84,
      85,    89,    92,    93,   102,   122,    15,    27,    14,   122,
       6,    84,     8,    13,     8,    72,     9,     9,    72,    72,
       9,    10,    10,    22,    91,    97,    91,    10,    88,   122,
       5,     5,    71,    20,    22,    91,    20,    91,    10,    13,
      72,     9,    11,    12,    24,    27,    33,    34,    35,    37,
      40,    43,    44,    45,    46,    63,    72,    86,    90,    92,
      93,    98,   100,   101,   105,   106,   107,   108,   110,   112,
     113,   114,   115,   120,    28,   103,    23,    50,    58,    69,
      70,    71,    73,    74,    86,   116,   118,   119,   120,    71,
      20,   116,     5,    91,   122,   116,   120,    72,   116,     9,
       9,     9,     9,     9,     9,     9,     5,    72,     9,    22,
     121,     8,     6,   101,     8,     8,     8,     8,     8,     8,
       8,     8,    20,    41,    42,    62,   111,    20,     6,   116,
      71,    74,   120,    47,    48,    49,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,   117,   111,    23,
       5,    94,    90,     5,    72,    10,     9,    10,   116,   116,
     116,   120,    21,   100,   116,    90,     9,    10,    87,   116,
     116,    22,   116,    27,    72,    11,   116,   116,   116,   118,
     118,   118,   118,   118,   118,    94,    95,    96,   116,     6,
      90,    10,    87,    10,    13,    10,    10,    10,   122,    16,
      10,     6,    10,    10,    13,    23,   116,     9,     9,   121,
      72,     6,    13,     6,    10,   116,     5,     5,    72,   116,
       5,    43,   116,    23,    10,    10,    87,     9,    96,    10,
      90,    38,    39,   109,    20,    16,    90,     9,    10,    32,
     104,     6,    69,    70,    71,    74,    16,     6,    38,    39,
     116,   100,     6,   116,     9,    10,    13,    36,    16,    16,
      16,    16,    90,    69,    70,    71,    74,    16,    16,    10,
      10,    71,     8,    32,     5,    90,    90,    90,    90,    16,
      16,    16,    16,    90,   116,     5,     8,    10,    29,    30,
      31,     9,    90,    90,    90,    90,    90,    16,    90,     9,
       9,     9,    71,     6,   100,     6,    71,    71,    71,    10,
      10,    10,    10,    10,     5,    20,     8,     8,    90,    70,
       6,     8
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    78,    78,    79,    80,    80,
      81,    82,    83,    83,    84,    84,    84,    84,    84,    85,
      85,    86,    86,    86,    87,    87,    88,    88,    89,    90,
      90,    91,    91,    91,    92,    92,    92,    92,    93,    93,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   103,   103,   103,
     104,   104,   105,   105,   106,   107,   107,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     111,   111,   112,   113,   114,   115,   116,   116,   116,   116,
     116,   116,   117,   117,   117,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   121,   121,   122,   122,   122,
     122,   122,   122,   122
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     2,     1,     3,     2,     1,
       7,     2,     2,     1,     1,     1,     1,     2,     2,     8,
       9,     2,     5,     4,     3,     1,     4,     2,     7,     2,
       1,     2,     2,     2,     4,     6,     4,     6,     5,     7,
       3,     3,     1,     1,     1,     4,     3,     2,     1,     4,
       3,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     2,     2,     2,     7,    15,    13,    13,
       6,     4,     4,     6,     4,     7,    11,     7,     5,     5,
       5,     5,     4,     4,     4,     4,     4,     3,    11,    15,
       1,     1,     7,     9,     1,     1,     3,     3,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     2,     1,     2,     1,     1,
       1,     1,     2,     2,     1,     4,     6,     5,     5,     2,
       4,     3,     4,     3,     3,     4,     3,     1,     1,     1,
       1,     1,     1,     1
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
      
#line 1683 "gramaticagrafik.cpp" /* yacc.c:1646  */
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
#line 382 "gramaticagrafik.y" /* yacc.c:1906  */

void mostrarResultado(QWidget* th) {
 QMessageBox::information(th,"Resultado",re);
 re="";
}



