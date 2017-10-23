/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sintactico.y" /* yacc.c:339  */

	#include <iostream>
    #include "scanner.h"
	#include "Gramatica/nodo.h"

	using namespace std;

	extern int yyline;
	extern char *yytext;
	extern int yyfila;
	extern int yycolumna;
	int contador = 0;

	Nodo *raiz = NULL;

	Nodo *getRaiz() { return raiz; }

	void vaciarArbol() { raiz = NULL; }

	int yyerror(const char *error)
	{
		cout << "ERROR SINTACTIO: " << error << endl;
	}


#line 92 "parser.cpp" /* yacc.c:339  */

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
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    tokenImport = 258,
    tokenClase = 259,
    tokenPrivado = 260,
    tokenPublico = 261,
    tokenOInter = 262,
    tokenCInter = 263,
    tokenOPar = 264,
    tokenCPar = 265,
    tokenDolar = 266,
    tokenComa = 267,
    tokenMain = 268,
    tokenVoid = 269,
    tokenRetorna = 270,
    tokenInt = 271,
    tokenDouble = 272,
    tokenBool = 273,
    tokenChar = 274,
    tokenString = 275,
    tokenVar = 276,
    tokenIgual = 277,
    tokenIncremento = 278,
    tokenDecremento = 279,
    tokenPotencia = 280,
    tokenMas = 281,
    tokenMenos = 282,
    tokenDivision = 283,
    tokenPor = 284,
    tokenNot = 285,
    tokenAnd = 286,
    tokenNand = 287,
    tokenOr = 288,
    tokenNor = 289,
    tokenXor = 290,
    tokenEquivalente = 291,
    tokenDiferente = 292,
    tokenMenor = 293,
    tokenMenorIgual = 294,
    tokenMayor = 295,
    tokenMayorIgual = 296,
    tokenCadena = 297,
    tokenEntero = 298,
    tokenDecimal = 299,
    tokenId = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 30 "sintactico.y" /* yacc.c:355  */

	char cadena[255];
	struct Nodo *Nodo;

#line 183 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 200 "parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   103,   103,   108,   117,   125,   133,   140,   154,   171,
     180,   189,   197,   205,   213,   220,   230,   249,   258,   265,
     274,   287,   308,   330,   338,   347,   356,   367,   375,   384,
     393,   402,   411,   424,   432,   440,   448,   456,   466,   477,
     487,   497,   504,   514,   523,   533,   540,   550,   560,   570,
     580,   590,   599,   608,   617,   625,   633,   641,   649,   657,
     667,   677,   687,   697,   707,   717,   728,   736,   744,   752,
     760,   769,   784,   792,   800,   810,   819,   833,   844,   854
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tokenImport", "tokenClase",
  "tokenPrivado", "tokenPublico", "tokenOInter", "tokenCInter",
  "tokenOPar", "tokenCPar", "tokenDolar", "tokenComa", "tokenMain",
  "tokenVoid", "tokenRetorna", "tokenInt", "tokenDouble", "tokenBool",
  "tokenChar", "tokenString", "tokenVar", "tokenIgual", "tokenIncremento",
  "tokenDecremento", "tokenPotencia", "tokenMas", "tokenMenos",
  "tokenDivision", "tokenPor", "tokenNot", "tokenAnd", "tokenNand",
  "tokenOr", "tokenNor", "tokenXor", "tokenEquivalente", "tokenDiferente",
  "tokenMenor", "tokenMenorIgual", "tokenMayor", "tokenMayorIgual",
  "tokenCadena", "tokenEntero", "tokenDecimal", "tokenId", "$accept", "S0",
  "S", "LIST_IMPORT", "IMPORT", "CLASE", "VISIBILIDAD",
  "LIST_CUERPO_CLASE", "CUERPO_CLASE", "PRINCIPAL", "PROCEDIMIENTO",
  "DECLARACION_G", "FUNCION", "METODO", "LIST_SENTSM", "SENTSM",
  "LIST_SENTSF", "SENTSF", "RETORNA", "TIPO", "LIST_ID", "ASIGN_DEC",
  "LIST_PAR", "PAR", "COND", "REL", "E", "LLAMADA", "ATTRS", "LIST_ATTR",
  "DECLARACION", "ASIGNACION", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF -83

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-83)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,   -38,    36,   -83,    60,   -83,     9,   -83,   -83,   -83,
     -83,   -83,     7,   -83,    12,    54,   107,    63,   105,   103,
     -83,   -83,    74,    56,   -83,   -83,   -83,   -83,   -83,    80,
     -83,    99,   -83,   -83,    72,   -83,   -83,   111,   123,   101,
     -83,   139,    17,    80,   -83,    29,    80,   120,   128,     4,
     -83,   140,   141,   109,    32,   -83,   110,    -5,   -83,   135,
      -5,   -83,   -83,    80,   -83,   -83,   -83,   -83,   -83,   143,
      80,   -83,    25,    -5,   -83,   -83,   -83,   144,    96,    66,
     -83,   149,    96,   101,    17,   -83,    61,    96,    -5,    -5,
      -5,    -5,    -5,    -5,    25,    25,    25,    25,    25,   -83,
     -83,   -83,   -83,   -83,   -83,    25,    11,    29,    13,   -83,
      96,   147,   146,    20,    20,   -83,   -83,   -83,   112,    86,
      86,   -83,   -83,   108,    -5,     0,   -83,   -83,   148,   150,
     -83,   -83,   -83,    -5,    48,   -83,   -83,   -83,   -83,    96,
     -83
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     2,    11,     5,     0,     1,     9,    10,
       4,     3,     0,     7,     0,     0,    11,     0,     0,    11,
      13,    14,     0,     0,    33,    34,    35,    36,    37,     0,
      15,     0,    18,    19,     0,     8,    12,     0,     0,     0,
      17,     0,    11,    45,    39,    41,    45,     0,     0,    11,
      24,     0,     0,     0,     0,    43,     0,     0,    20,     0,
       0,    78,    79,     0,    16,    23,    25,    26,    44,     0,
      45,    38,     0,     0,    66,    67,    68,    69,    40,    53,
      70,     0,    77,     0,    11,    42,     0,    51,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,    59,     0,    11,    41,    11,    65,
      75,     0,    72,    46,    47,    48,    49,    50,    64,    60,
      61,    63,    62,    52,     0,    11,    28,    31,     0,     0,
      76,    22,    71,     0,     0,    21,    27,    29,    30,    74,
      32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -83,   -83,   156,   -83,    31,   -83,   145,   -83,
     -83,   -83,   -83,   -83,    78,   -48,   -83,    38,   -83,   -15,
      82,    59,   121,    98,   -60,   -83,   -20,   -83,   -83,   -83,
     -82,   -79
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    11,    48,    19,    20,    21,
      30,    31,    32,    33,    49,    50,   125,   126,   127,    53,
      45,    58,    54,    55,    78,   105,    79,    80,   111,   112,
      51,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      82,    65,     1,    34,    72,     8,     9,     6,   135,     8,
       9,    14,    64,    87,    39,   124,     8,     9,     8,     9,
      13,   131,     8,     9,   128,    73,   124,   129,   110,   113,
     114,   115,   116,   117,    72,    12,     7,    74,    75,    76,
      77,    56,    69,   128,    70,    47,   129,    18,    83,    47,
      18,    57,    86,    91,    92,    93,    47,    15,    47,   140,
      65,    16,    47,     1,   134,     8,     9,    74,    75,    76,
      77,   109,    22,   139,   118,   119,   120,   121,   122,    89,
      90,    91,    92,    93,    37,   123,    94,    95,    96,    97,
      98,    94,    95,    96,    97,    98,    24,    25,    26,    27,
      28,    38,    99,   100,   101,   102,   103,   104,     8,     9,
      40,    35,     8,     9,    97,    98,    17,    41,    42,    23,
      17,    24,    25,    26,    27,    28,    29,    89,    90,    91,
      92,    93,    43,    94,    95,    96,    97,    98,    95,    96,
      97,    98,    60,    61,    62,    81,    44,    70,    46,    63,
      84,    66,    67,    88,    68,    71,   106,   132,   133,   137,
      10,   138,   108,   136,    36,   107,   130,    59,    85
};

static const yytype_uint8 yycheck[] =
{
      60,    49,     3,    18,     9,     5,     6,    45,     8,     5,
       6,     4,     8,    73,    29,    15,     5,     6,     5,     6,
      11,     8,     5,     6,   106,    30,    15,   106,    88,    89,
      90,    91,    92,    93,     9,     4,     0,    42,    43,    44,
      45,    12,    10,   125,    12,    45,   125,    16,    63,    45,
      19,    22,    72,    33,    34,    35,    45,    45,    45,    11,
     108,     7,    45,     3,   124,     5,     6,    42,    43,    44,
      45,    10,     9,   133,    94,    95,    96,    97,    98,    31,
      32,    33,    34,    35,    10,   105,    25,    26,    27,    28,
      29,    25,    26,    27,    28,    29,    16,    17,    18,    19,
      20,    45,    36,    37,    38,    39,    40,    41,     5,     6,
      11,     8,     5,     6,    28,    29,    13,    45,     7,    14,
      13,    16,    17,    18,    19,    20,    21,    31,    32,    33,
      34,    35,     9,    25,    26,    27,    28,    29,    26,    27,
      28,    29,    22,    23,    24,    10,    45,    12,     9,    21,
       7,    11,    11,     9,    45,    45,     7,    10,    12,    11,
       4,    11,    84,   125,    19,    83,   107,    46,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    47,    48,    49,    50,    45,     0,     5,     6,
      50,    51,    52,    11,     4,    45,     7,    13,    52,    53,
      54,    55,     9,    14,    16,    17,    18,    19,    20,    21,
      56,    57,    58,    59,    65,     8,    54,    10,    45,    65,
      11,    45,     7,     9,    45,    66,     9,    45,    52,    60,
      61,    76,    77,    65,    68,    69,    12,    22,    67,    68,
      22,    23,    24,    21,     8,    61,    11,    11,    45,    10,
      12,    45,     9,    30,    42,    43,    44,    45,    70,    72,
      73,    10,    70,    65,     7,    69,    72,    70,     9,    31,
      32,    33,    34,    35,    25,    26,    27,    28,    29,    36,
      37,    38,    39,    40,    41,    71,     7,    66,    60,    10,
      70,    74,    75,    70,    70,    70,    70,    70,    72,    72,
      72,    72,    72,    72,    15,    62,    63,    64,    76,    77,
      67,     8,    10,    12,    70,     8,    63,    11,    11,    70,
      11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    49,    49,    49,    50,    51,    52,
      52,    52,    53,    53,    54,    54,    55,    56,    56,    56,
      57,    58,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    63,    64,    65,    65,    65,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    73,    74,    74,    75,    75,    76,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     0,     3,     6,     1,
       1,     0,     2,     1,     1,     2,     6,     2,     1,     1,
       4,     8,     8,     2,     1,     2,     2,     2,     1,     2,
       2,     1,     3,     1,     1,     1,     1,     1,     3,     1,
       2,     0,     3,     1,     2,     0,     3,     3,     3,     3,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     4,     1,     0,     3,     1,     5,     3,     2,     2
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
#line 104 "sintactico.y" /* yacc.c:1646  */
    {
						raiz = (yyvsp[0].Nodo);
					}
#line 1391 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 109 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("S", "---", 0, 0);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1403 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 118 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1415 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 126 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1426 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 133 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 1436 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 141 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("IMPORT", "---", 0, 0);
						Nodo *tokenImport = new Nodo("tokenImport", (yyvsp[-2].cadena), 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-1].cadena), 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), 0, 0);
						padre->addHijo(tokenImport);
						padre->addHijo(tokenId);
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1452 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 155 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("CLASE", "---", 0, 0);
						Nodo *tokenClase = new Nodo("tokenClase", (yyvsp[-4].cadena), yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-3].cadena), yyfila, yycolumna);
						Nodo *tokenOInter = new Nodo("tokenOInter", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenCInter = new Nodo("tokenCInter", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-5].Nodo));
						padre->addHijo(tokenClase);
						padre->addHijo(tokenId);
						padre->addHijo(tokenOInter);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenCInter);

						(yyval.Nodo) = padre;
					}
#line 1472 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 172 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						Nodo *tokenPrivado = new Nodo("tokenPrivado", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenPrivado);

						(yyval.Nodo) = padre;	
					}
#line 1484 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 181 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						Nodo *tokenPublico = new Nodo("tokenPublico", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenPublico);

						(yyval.Nodo) = padre;
					}
#line 1496 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 189 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						padre->addHijo(NULL);

						(yyval.Nodo) = padre;
					}
#line 1507 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 198 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_CUERPO_CLASE", "---", 0, 0);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1519 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 206 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_CUERPO_CLASE", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1530 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 214 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("CUERPO_CLASE", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1541 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 221 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("CUERPO_CLASE", "---", 0, 0);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1553 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 231 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PRINCIPAL", "---", 0, 0);
						Nodo *tokenMain = new Nodo("tokenMain", (yyvsp[-5].cadena), yyfila, yycolumna);
						Nodo *tokenOPar = new Nodo("tokenOPar", (yyvsp[-4].cadena), yyfila, yycolumna);
						Nodo *tokenCPar = new Nodo("tokenCPar", (yyvsp[-3].cadena), yyfila, yycolumna);
						Nodo *tokenOInter = new Nodo("tokenOInter", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenCInter = new Nodo("tokenCInter", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenMain);
						padre->addHijo(tokenOPar);
						padre->addHijo(tokenCPar);
						padre->addHijo(tokenOInter);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenCInter);

						(yyval.Nodo) = padre;
					}
#line 1574 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 250 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PROCEDIMIENTO", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1587 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 259 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PROCEDIMIENTO", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1598 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 266 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PROCEDIMIENTO", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1609 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 275 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("DECLARACION_G", "---", 0, 0);
						Nodo *tokenVar = new Nodo("tokenVar", (yyvsp[-3].cadena), yyfila, yycolumna);
						padre->addHijo(tokenVar);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1624 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 288 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("FUNCION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-6].cadena), yyfila, yycolumna);
						Nodo *tokenOPar = new Nodo("tokenOPar", (yyvsp[-5].cadena), yyfila, yycolumna);
						Nodo *tokenCPar = new Nodo("tokenCPar", (yyvsp[-3].cadena), yyfila, yycolumna);
						Nodo *tokenOInter = new Nodo("tokenOInter", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenCInter = new Nodo("tokenCInter", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-7].Nodo));
						padre->addHijo(tokenId);
						padre->addHijo(tokenOPar);
						padre->addHijo((yyvsp[-4].Nodo));
						padre->addHijo(tokenCPar);
						padre->addHijo(tokenOInter);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenCInter);

						(yyval.Nodo) = padre;
					}
#line 1647 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 309 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("METODO", "---", 0, 0);
						Nodo *tokenVoid = new Nodo("tokenVoid", (yyvsp[-7].cadena), yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-6].cadena), yyfila, yycolumna);
						Nodo *tokenOPar = new Nodo("tokenOPar", (yyvsp[-5].cadena), yyfila, yycolumna);
						Nodo *tokenCPar = new Nodo("tokenCPar", (yyvsp[-3].cadena), yyfila, yycolumna);
						Nodo *tokenOInter = new Nodo("tokenOInter", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenCInter = new Nodo("tokenCInter", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenVoid);
						padre->addHijo(tokenId);
						padre->addHijo(tokenOPar);
						padre->addHijo((yyvsp[-4].Nodo));
						padre->addHijo(tokenCPar);
						padre->addHijo(tokenOInter);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenCInter);

						(yyval.Nodo) = padre;
					}
#line 1671 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 331 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSM", "---", 0, 0);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1683 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 339 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSM", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1694 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 348 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1707 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 357 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1720 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 368 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSF", "---", 0, 0);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1732 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 376 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSF", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1743 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 385 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1756 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 394 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1769 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 403 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1780 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 412 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RETORNA", "---", 0, 0);
						Nodo *tokenRetorna = new Nodo("tokenRetorna", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenRetorna);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;	
					}
#line 1795 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 425 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenInt = new Nodo("tokenInt", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenInt);

						(yyval.Nodo) = padre;
					}
#line 1807 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 433 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenDouble = new Nodo("tokenDouble", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenDouble);
						
						(yyval.Nodo) = padre;
					}
#line 1819 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 441 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenbool = new Nodo("tokenbool", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenbool);
						
						(yyval.Nodo) = padre;
					}
#line 1831 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 449 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenChar = new Nodo("tokenChar", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenChar);
						
						(yyval.Nodo) = padre;
					}
#line 1843 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 457 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenString = new Nodo("tokenString", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenString);
						
						(yyval.Nodo) = padre;
					}
#line 1855 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 467 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ID", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenComa);
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 1870 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 478 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ID", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 1882 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 488 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGN_DEC", "---", 0, 0);
						Nodo *tokenIgual = new Nodo("tokenIgual", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo(tokenIgual);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1895 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 497 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGN_DEC", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 1905 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 505 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenComa);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1919 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 515 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1930 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 524 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 1943 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 533 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PAR", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 1953 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 541 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenAdd = new Nodo("tokenAdd", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenAdd);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1967 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 551 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNand = new Nodo("tokenNand", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenNand);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1981 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 561 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenOr = new Nodo("tokenOr", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenOr);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1995 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 571 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNor = new Nodo("tokenNor", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenNor);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2009 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 581 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenXor = new Nodo("tokenXor", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenXor);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2023 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 591 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNot = new Nodo("tokenNot", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo(tokenNot);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2036 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 600 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2049 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 609 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2060 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 618 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenEquivalente = new Nodo("tokenEquivalente", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenEquivalente);

						(yyval.Nodo) = padre;
					}
#line 2072 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 626 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenDiferente = new Nodo("tokenDiferente", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenDiferente);

						(yyval.Nodo) = padre;
					}
#line 2084 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 634 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMenor = new Nodo("tokenMenor", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenMenor);

						(yyval.Nodo) = padre;
					}
#line 2096 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 642 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMenorIgual = new Nodo("tokenMenorIgual", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenMenorIgual);

						(yyval.Nodo) = padre;
					}
#line 2108 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 650 "sintactico.y" /* yacc.c:1646  */
    {	
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMayor = new Nodo("tokenMayor", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenMayor);

						(yyval.Nodo) = padre;
					}
#line 2120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 658 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMayorIgual = new Nodo("tokenMayorIgual", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenMayorIgual);

						(yyval.Nodo) = padre;
					}
#line 2132 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 668 "sintactico.y" /* yacc.c:1646  */
    {
                        Nodo *padre = new Nodo("E", "---", 0, 0);
                        Nodo *tokenMas = new Nodo("tokenMas", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenMas);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2146 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 678 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenMenos = new Nodo("tokenMenos", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenMenos);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2160 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 688 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenPor = new Nodo("tokenPor", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenPor);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2174 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 698 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenDivision = new Nodo("tokenDivision", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenDivision);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2188 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 708 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenPotencia = new Nodo("tokenPotencia", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenPotencia);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2202 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 718 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenOPar = new Nodo("tokenOPar", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenCPar = new Nodo("tokenOPar", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenOPar);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenCPar);

						(yyval.Nodo) = padre;
					}
#line 2217 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 729 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenCadena = new Nodo("tokenCadena", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenCadena);

						(yyval.Nodo) = padre;
					}
#line 2229 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 737 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenEntero = new Nodo("tokenEntero", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenEntero);

						(yyval.Nodo) = padre;
					}
#line 2241 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 745 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenDecimal = new Nodo("tokenDecimal", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenDecimal);

						(yyval.Nodo) = padre;
					}
#line 2253 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 753 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 2265 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 761 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2276 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 770 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LLAMDA", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenID", (yyvsp[-3].cadena), yyfila, yycolumna);
                        Nodo *tokenOPar = new Nodo("tokenOPar", (yyvsp[-2].cadena), yyfila, yycolumna);
                        Nodo *tokenCPar = new Nodo("tokenCPar", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenId);
						padre->addHijo(tokenOPar);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenCPar);

						(yyval.Nodo) = padre;
					}
#line 2293 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 785 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ATTRS", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2304 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 792 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ATTRS", "---", 0, 0);
						padre->addHijo(NULL);

						(yyval.Nodo) = padre;
					}
#line 2315 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 801 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ATTR", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenComa);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2329 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 811 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ATTR", "---", 0, 0);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2340 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 820 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("DECLARACION", "---", 0, 0);
						Nodo *tokenVar = new Nodo("tokenVar", (yyvsp[-3].cadena), yyfila, yycolumna);
						padre->addHijo((yyvsp[-4].Nodo));
						padre->addHijo(tokenVar);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2356 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 834 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenIgual = new Nodo("tokenIgual", (yyvsp[-1].cadena), yyfila, yycolumna);
						padre->addHijo(tokenId);
						padre->addHijo(tokenIgual);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2371 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 845 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenIncremento = new Nodo("tokenIncremento", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenId);
						padre->addHijo(tokenIncremento);
						
						(yyval.Nodo) = padre;
					}
#line 2385 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 855 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenDecremento = new Nodo("tokenDecremento", (yyvsp[0].cadena), yyfila, yycolumna);
						padre->addHijo(tokenId);
						padre->addHijo(tokenDecremento);
						
						(yyval.Nodo) = padre;
					}
#line 2399 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2403 "parser.cpp" /* yacc.c:1646  */
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
#line 866 "sintactico.y" /* yacc.c:1906  */

