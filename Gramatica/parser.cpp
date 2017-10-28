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

	void vaciarArbol() {
		if (raiz != NULL) delete raiz;
		else raiz = NULL;
	}

	void deleteArbol() { delete raiz; }

	int yyerror(const char *error)
	{
		cout << "ERROR SINTACTIO: " << error << endl;
	}


#line 97 "parser.cpp" /* yacc.c:339  */

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
    tokenSi = 280,
    tokenSino = 281,
    tokenPotencia = 282,
    tokenMas = 283,
    tokenMenos = 284,
    tokenDivision = 285,
    tokenPor = 286,
    tokenNot = 287,
    tokenAnd = 288,
    tokenNand = 289,
    tokenOr = 290,
    tokenNor = 291,
    tokenXor = 292,
    tokenEquivalente = 293,
    tokenDiferente = 294,
    tokenMenor = 295,
    tokenMenorIgual = 296,
    tokenMayor = 297,
    tokenMayorIgual = 298,
    tokenCadena = 299,
    tokenEntero = 300,
    tokenDecimal = 301,
    tokenId = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "sintactico.y" /* yacc.c:355  */

	char cadena[255];
	struct Nodo *Nodo;

#line 190 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 207 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   235

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   111,   111,   116,   126,   135,   144,   151,   166,   184,
     194,   204,   213,   222,   231,   239,   250,   270,   280,   288,
     298,   312,   334,   357,   366,   376,   386,   396,   406,   415,
     425,   435,   445,   453,   463,   477,   486,   495,   504,   513,
     524,   536,   547,   558,   565,   576,   586,   597,   604,   615,
     626,   637,   648,   659,   669,   679,   689,   698,   707,   716,
     725,   734,   745,   756,   767,   778,   789,   800,   812,   821,
     830,   839,   848,   858,   874,   883,   892,   903,   913,   928,
     940,   951,   964,   986,  1001,  1008,  1030,  1045
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
  "tokenDecremento", "tokenSi", "tokenSino", "tokenPotencia", "tokenMas",
  "tokenMenos", "tokenDivision", "tokenPor", "tokenNot", "tokenAnd",
  "tokenNand", "tokenOr", "tokenNor", "tokenXor", "tokenEquivalente",
  "tokenDiferente", "tokenMenor", "tokenMenorIgual", "tokenMayor",
  "tokenMayorIgual", "tokenCadena", "tokenEntero", "tokenDecimal",
  "tokenId", "$accept", "S0", "S", "LIST_IMPORT", "IMPORT", "CLASE",
  "VISIBILIDAD", "LIST_CUERPO_CLASE", "CUERPO_CLASE", "PRINCIPAL",
  "PROCEDIMIENTO", "DECLARACION_G", "FUNCION", "METODO", "LIST_SENTSM",
  "SENTSM", "LIST_SENTSF", "SENTSF", "RETORNA", "TIPO", "LIST_ID",
  "ASIGN_DEC", "LIST_PAR", "PAR", "COND", "REL", "E", "LLAMADA", "ATTRS",
  "LIST_ATTR", "DECLARACION", "ASIGNACION", "SI_M", "SINO_M", "SI_F",
  "SINO_F", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF -127

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-127)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    -4,    56,  -127,   204,  -127,    70,  -127,  -127,  -127,
    -127,  -127,    81,  -127,    43,   122,    36,    87,   170,   172,
    -127,  -127,   118,    86,  -127,  -127,  -127,  -127,  -127,   149,
    -127,   123,  -127,  -127,    88,  -127,  -127,   130,   129,   134,
    -127,   173,    89,   149,  -127,    -8,   149,   174,    95,   176,
      19,  -127,   197,   200,  -127,   165,     0,  -127,   166,    60,
    -127,    11,    60,    60,  -127,  -127,   149,  -127,  -127,  -127,
    -127,  -127,   207,   149,  -127,    66,    60,  -127,  -127,  -127,
     206,   159,   132,  -127,   209,   106,   159,   134,    89,  -127,
     117,   159,    60,    60,    60,    60,    60,    60,    66,    66,
      66,    66,    66,  -127,  -127,  -127,  -127,  -127,  -127,    66,
      52,   210,    -8,    68,  -127,   159,   208,   211,    65,    65,
    -127,  -127,  -127,   175,    48,    48,  -127,  -127,   171,    60,
     212,     3,  -127,  -127,   213,   214,  -127,    89,  -127,  -127,
    -127,    60,   121,    60,  -127,  -127,  -127,  -127,    78,   159,
    -127,   116,   193,   215,   219,  -127,    52,    89,    14,    83,
     194,  -127,   220,  -127,    52,    40,  -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     2,    11,     5,     0,     1,     9,    10,
       4,     3,     0,     7,     0,     0,    11,     0,     0,    11,
      13,    14,     0,     0,    35,    36,    37,    38,    39,     0,
      15,     0,    18,    19,     0,     8,    12,     0,     0,     0,
      17,     0,    11,    47,    41,    43,    47,     0,     0,     0,
      11,    24,     0,     0,    27,     0,     0,    45,     0,     0,
      20,     0,     0,     0,    80,    81,     0,    16,    23,    25,
      26,    46,     0,    47,    40,     0,     0,    68,    69,    70,
      71,    42,    55,    72,     0,     0,    79,     0,    11,    44,
       0,    53,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,    57,    58,    59,    60,    61,     0,
      11,     0,    43,    11,    67,    77,     0,    74,    48,    49,
      50,    51,    52,    66,    62,    63,    65,    64,    54,     0,
       0,    11,    29,    32,     0,     0,    33,    11,    78,    22,
      73,     0,     0,     0,    21,    28,    30,    31,    11,    76,
      34,     0,    84,     0,     0,    82,    11,    11,    11,    11,
      87,    83,     0,    85,    11,    11,    86
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,  -127,   224,  -127,   160,  -127,   216,  -127,
    -127,  -127,  -127,  -127,   -85,   -50,  -126,  -118,  -127,   -12,
     142,   119,   184,   161,   -61,  -127,    22,  -127,  -127,  -127,
    -105,   -94,  -127,  -127,  -127,  -127
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    11,    49,    19,    20,    21,
      30,    31,    32,    33,    50,    51,   131,   132,   133,    55,
      45,    60,    56,    57,    81,   109,    82,    83,   116,   117,
      52,    53,    54,   155,   136,   163
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    85,    86,   113,    58,   134,    34,     1,     8,     9,
      72,   144,    73,   145,    59,    91,   135,    39,   129,     8,
       9,    84,   160,    73,     8,     9,   134,    67,   130,   129,
     158,   115,   118,   119,   120,   121,   122,   135,   165,   130,
     145,     8,     9,     6,    47,     8,     9,   145,   166,    17,
      48,   134,   148,   134,    87,   129,     7,     8,     9,   134,
     134,    48,   135,    68,   135,   130,    48,   129,   142,    75,
     135,   135,   159,     8,     9,    75,   139,   130,   101,   102,
     149,    13,   151,     8,     9,    14,   152,    48,     8,     9,
      15,   161,    76,    47,     8,     9,    22,    90,    68,    48,
      95,    96,    97,    47,    77,    78,    79,    80,    47,    68,
      77,    78,    79,    80,    47,    48,   111,    63,    64,    65,
     123,   124,   125,   126,   127,    48,   153,   114,    37,    16,
      48,   128,   150,    38,    40,    41,    48,    42,    43,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    93,
      94,    95,    96,    97,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    12,    24,    25,    26,    27,    28,
     103,   104,   105,   106,   107,   108,    18,     8,     9,    18,
      35,    44,    46,    62,    23,    17,    24,    25,    26,    27,
      28,    29,    93,    94,    95,    96,    97,    66,    98,    99,
     100,   101,   102,    99,   100,   101,   102,     1,    69,     8,
       9,    70,    71,    74,    88,    92,   110,   137,   140,   154,
     162,   143,   156,   141,   146,   147,   157,   164,    10,   112,
      61,   138,     0,     0,    89,    36
};

static const yytype_int16 yycheck[] =
{
      50,    62,    63,    88,    12,   110,    18,     3,     5,     6,
      10,     8,    12,   131,    22,    76,   110,    29,    15,     5,
       6,    10,     8,    12,     5,     6,   131,     8,    25,    15,
     156,    92,    93,    94,    95,    96,    97,   131,   164,    25,
     158,     5,     6,    47,    25,     5,     6,   165,     8,    13,
      47,   156,   137,   158,    66,    15,     0,     5,     6,   164,
     165,    47,   156,   113,   158,    25,    47,    15,   129,     9,
     164,   165,   157,     5,     6,     9,     8,    25,    30,    31,
     141,    11,   143,     5,     6,     4,     8,    47,     5,     6,
      47,     8,    32,    25,     5,     6,     9,    75,   148,    47,
      35,    36,    37,    25,    44,    45,    46,    47,    25,   159,
      44,    45,    46,    47,    25,    47,    10,    22,    23,    24,
      98,    99,   100,   101,   102,    47,    10,    10,    10,     7,
      47,   109,    11,    47,    11,    47,    47,     7,     9,    33,
      34,    35,    36,    37,    27,    28,    29,    30,    31,    33,
      34,    35,    36,    37,    33,    34,    35,    36,    37,    27,
      28,    29,    30,    31,     4,    16,    17,    18,    19,    20,
      38,    39,    40,    41,    42,    43,    16,     5,     6,    19,
       8,    47,     9,     9,    14,    13,    16,    17,    18,    19,
      20,    21,    33,    34,    35,    36,    37,    21,    27,    28,
      29,    30,    31,    28,    29,    30,    31,     3,    11,     5,
       6,    11,    47,    47,     7,     9,     7,     7,    10,    26,
      26,     9,     7,    12,    11,    11,     7,     7,     4,    87,
      46,   112,    -1,    -1,    73,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,    50,    51,    52,    47,     0,     5,     6,
      52,    53,    54,    11,     4,    47,     7,    13,    54,    55,
      56,    57,     9,    14,    16,    17,    18,    19,    20,    21,
      58,    59,    60,    61,    67,     8,    56,    10,    47,    67,
      11,    47,     7,     9,    47,    68,     9,    25,    47,    54,
      62,    63,    78,    79,    80,    67,    70,    71,    12,    22,
      69,    70,     9,    22,    23,    24,    21,     8,    63,    11,
      11,    47,    10,    12,    47,     9,    32,    44,    45,    46,
      47,    72,    74,    75,    10,    72,    72,    67,     7,    71,
      74,    72,     9,    33,    34,    35,    36,    37,    27,    28,
      29,    30,    31,    38,    39,    40,    41,    42,    43,    73,
       7,    10,    68,    62,    10,    72,    76,    77,    72,    72,
      72,    72,    72,    74,    74,    74,    74,    74,    74,    15,
      25,    64,    65,    66,    78,    79,    82,     7,    69,     8,
      10,    12,    72,     9,     8,    65,    11,    11,    62,    72,
      11,    72,     8,    10,    26,    81,     7,     7,    64,    62,
       8,     8,    26,    83,     7,    64,     8
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    51,    51,    51,    52,    53,    54,
      54,    54,    55,    55,    56,    56,    57,    58,    58,    58,
      59,    60,    61,    62,    62,    63,    63,    63,    64,    64,
      65,    65,    65,    65,    66,    67,    67,    67,    67,    67,
      68,    68,    69,    69,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    73,    73,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    76,    76,    77,    77,    78,    79,
      79,    79,    80,    81,    81,    82,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     0,     3,     6,     1,
       1,     0,     2,     1,     1,     2,     6,     2,     1,     1,
       4,     8,     8,     2,     1,     2,     2,     1,     2,     1,
       2,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     1,     2,     0,     3,     1,     2,     0,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     4,     1,     0,     3,     1,     5,     3,
       2,     2,     8,     4,     0,     8,     4,     0
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
#line 112 "sintactico.y" /* yacc.c:1646  */
    {
						raiz = (yyvsp[0].Nodo);
					}
#line 1422 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 117 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("S", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1435 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 127 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1448 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 136 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1460 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 144 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 1470 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 152 "sintactico.y" /* yacc.c:1646  */
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
#line 1487 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 167 "sintactico.y" /* yacc.c:1646  */
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
#line 1508 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 185 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						Nodo *tokenPrivado = new Nodo("tokenPrivado", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenPrivado);

						(yyval.Nodo) = padre;	
					}
#line 1521 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 195 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						Nodo *tokenPublico = new Nodo("tokenPublico", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenPublico);

						(yyval.Nodo) = padre;
					}
#line 1534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 204 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						
						padre->addHijo(NULL);

						(yyval.Nodo) = padre;
					}
#line 1546 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 214 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_CUERPO_CLASE", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1559 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 223 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_CUERPO_CLASE", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1571 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 232 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("CUERPO_CLASE", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1583 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 240 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("CUERPO_CLASE", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1596 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 251 "sintactico.y" /* yacc.c:1646  */
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
#line 1618 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 271 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PROCEDIMIENTO", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1632 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 281 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PROCEDIMIENTO", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1644 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 289 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PROCEDIMIENTO", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1656 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 299 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("DECLARACION_G", "---", 0, 0);
						Nodo *tokenVar = new Nodo("tokenVar", (yyvsp[-3].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenVar);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1672 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 313 "sintactico.y" /* yacc.c:1646  */
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
#line 1696 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 335 "sintactico.y" /* yacc.c:1646  */
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
#line 1721 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 358 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSM", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1734 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 367 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSM", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1746 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 377 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1760 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 387 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1774 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 397 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);

						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1786 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 407 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSF", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1799 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 416 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSF", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1811 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 426 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1825 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 436 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;
					}
#line 1839 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 446 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1851 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 454 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);

						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1863 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 464 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RETORNA", "---", 0, 0);
						Nodo *tokenRetorna = new Nodo("tokenRetorna", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenDolar = new Nodo("tokenDolar", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenRetorna);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenDolar);

						(yyval.Nodo) = padre;	
					}
#line 1879 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 478 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenInt = new Nodo("tokenInt", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenInt);

						(yyval.Nodo) = padre;
					}
#line 1892 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 487 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenDouble = new Nodo("tokenDouble", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenDouble);
						
						(yyval.Nodo) = padre;
					}
#line 1905 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 496 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenbool = new Nodo("tokenbool", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenbool);
						
						(yyval.Nodo) = padre;
					}
#line 1918 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 505 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenChar = new Nodo("tokenChar", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenChar);
						
						(yyval.Nodo) = padre;
					}
#line 1931 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 514 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenString = new Nodo("tokenString", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenString);
						
						(yyval.Nodo) = padre;
					}
#line 1944 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 525 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ID", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenComa);
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 1960 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 537 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ID", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 1973 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 548 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGN_DEC", "---", 0, 0);
						Nodo *tokenIgual = new Nodo("tokenIgual", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenIgual);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1987 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 558 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGN_DEC", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 1997 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 566 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenComa);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2012 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 577 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2024 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 587 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 2038 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 597 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PAR", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 2048 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 605 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenAdd = new Nodo("tokenAdd", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenAdd);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2063 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 616 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNand = new Nodo("tokenNand", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenNand);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2078 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 627 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenOr = new Nodo("tokenOr", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenOr);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2093 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 638 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNor = new Nodo("tokenNor", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenNor);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2108 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 649 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenXor = new Nodo("tokenXor", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenXor);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2123 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 660 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNot = new Nodo("tokenNot", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenNot);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2137 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 670 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2151 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 680 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2163 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 690 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenEquivalente = new Nodo("tokenEquivalente", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenEquivalente);

						(yyval.Nodo) = padre;
					}
#line 2176 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 699 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenDiferente = new Nodo("tokenDiferente", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenDiferente);

						(yyval.Nodo) = padre;
					}
#line 2189 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 708 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMenor = new Nodo("tokenMenor", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenMenor);

						(yyval.Nodo) = padre;
					}
#line 2202 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 717 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMenorIgual = new Nodo("tokenMenorIgual", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenMenorIgual);

						(yyval.Nodo) = padre;
					}
#line 2215 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 726 "sintactico.y" /* yacc.c:1646  */
    {	
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMayor = new Nodo("tokenMayor", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenMayor);

						(yyval.Nodo) = padre;
					}
#line 2228 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 735 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMayorIgual = new Nodo("tokenMayorIgual", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenMayorIgual);

						(yyval.Nodo) = padre;
					}
#line 2241 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 746 "sintactico.y" /* yacc.c:1646  */
    {
                        Nodo *padre = new Nodo("E", "---", 0, 0);
                        Nodo *tokenMas = new Nodo("tokenMas", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenMas);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2256 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 757 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenMenos = new Nodo("tokenMenos", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenMenos);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2271 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 768 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenPor = new Nodo("tokenPor", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenPor);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2286 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 779 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenDivision = new Nodo("tokenDivision", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenDivision);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2301 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 790 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenPotencia = new Nodo("tokenPotencia", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenPotencia);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2316 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 801 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenOPar = new Nodo("tokenOPar", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenCPar = new Nodo("tokenOPar", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenOPar);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenCPar);

						(yyval.Nodo) = padre;
					}
#line 2332 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 813 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenCadena = new Nodo("tokenCadena", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenCadena);

						(yyval.Nodo) = padre;
					}
#line 2345 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 822 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenEntero = new Nodo("tokenEntero", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenEntero);

						(yyval.Nodo) = padre;
					}
#line 2358 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 831 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenDecimal = new Nodo("tokenDecimal", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenDecimal);

						(yyval.Nodo) = padre;
					}
#line 2371 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 840 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 2384 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 849 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2396 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 859 "sintactico.y" /* yacc.c:1646  */
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
#line 2414 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 875 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ATTRS", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2426 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 883 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ATTRS", "---", 0, 0);
						
						padre->addHijo(NULL);

						(yyval.Nodo) = padre;
					}
#line 2438 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 893 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ATTR", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenComa);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2453 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 904 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ATTR", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2465 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 914 "sintactico.y" /* yacc.c:1646  */
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
#line 2482 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 929 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenIgual = new Nodo("tokenIgual", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);
						padre->addHijo(tokenIgual);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2498 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 941 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenIncremento = new Nodo("tokenIncremento", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);
						padre->addHijo(tokenIncremento);
						
						(yyval.Nodo) = padre;
					}
#line 2513 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 952 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenDecremento = new Nodo("tokenDecremento", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);
						padre->addHijo(tokenDecremento);
						
						(yyval.Nodo) = padre;
					}
#line 2528 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 965 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SI_M", "---", 0, 0);
						Nodo *tokenSi = new Nodo("tokenSi", (yyvsp[-7].cadena), yyfila, yycolumna);
						Nodo *tokenOPar = new Nodo("tokenOPar", (yyvsp[-6].cadena), yyfila, yycolumna);
						Nodo *tokenCPar = new Nodo("tokenCPar", (yyvsp[-4].cadena), yyfila, yycolumna);
						Nodo *tokenOInter = new Nodo("tokenOInter", (yyvsp[-3].cadena), yyfila, yycolumna);
						Nodo *tokenCInter = new Nodo("tokenCInter", (yyvsp[-1].cadena), yyfila, yycolumna);

						padre->addHijo(tokenSi);
						padre->addHijo(tokenOPar);
						padre->addHijo((yyvsp[-5].Nodo));
						padre->addHijo(tokenCPar);
						padre->addHijo(tokenOInter);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenCInter);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2552 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 987 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SINO_M", "---", 0, 0);
						Nodo *tokenSino = new Nodo("tokenSino", (yyvsp[-3].cadena), yyfila, yycolumna);
						Nodo *tokenOInter = new Nodo("tokenOInter", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenCInter = new Nodo("tokenCInter", (yyvsp[0].cadena), yyfila, yycolumna);

						padre->addHijo(tokenSino);
						padre->addHijo(tokenOInter);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenCInter);

						(yyval.Nodo) = padre;
					}
#line 2570 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 1001 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SINO_M", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 2580 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1009 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SI_F", "---", 0, 0);
						Nodo *tokenSi = new Nodo("tokenSi", (yyvsp[-7].cadena), yyfila, yycolumna);
						Nodo *tokenOPar = new Nodo("tokenOPar", (yyvsp[-6].cadena), yyfila, yycolumna);
						Nodo *tokenCPar = new Nodo("tokenCPar", (yyvsp[-4].cadena), yyfila, yycolumna);
						Nodo *tokenOInter = new Nodo("tokenOInter", (yyvsp[-3].cadena), yyfila, yycolumna);
						Nodo *tokenCInter = new Nodo("tokenCInter", (yyvsp[-1].cadena), yyfila, yycolumna);

						padre->addHijo(tokenSi);
						padre->addHijo(tokenOPar);
						padre->addHijo((yyvsp[-5].Nodo));
						padre->addHijo(tokenCPar);
						padre->addHijo(tokenOInter);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenCInter);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2604 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1031 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SINO_F", "---", 0, 0);
						Nodo *tokenSino = new Nodo("tokenSino", (yyvsp[-3].cadena), yyfila, yycolumna);
						Nodo *tokenOInter = new Nodo("tokenOInter", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenCInter = new Nodo("tokenCInter", (yyvsp[0].cadena), yyfila, yycolumna);

						padre->addHijo(tokenSino);
						padre->addHijo(tokenOInter);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenCInter);

						(yyval.Nodo) = padre;
					}
#line 2622 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1045 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SINO_F", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 2632 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2636 "parser.cpp" /* yacc.c:1646  */
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
#line 1052 "sintactico.y" /* yacc.c:1906  */

