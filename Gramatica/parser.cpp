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
		raiz = NULL;
	}

	int yyerror(const char *error)
	{
		cout << "ERROR SINTACTICO: " << error << endl;
	}


#line 94 "parser.cpp" /* yacc.c:339  */

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
    tokenPtoComa = 268,
    tokenMain = 269,
    tokenVoid = 270,
    tokenRetorna = 271,
    tokenSalir = 272,
    tokenGraficar = 273,
    tokenPintar = 274,
    tokenString = 275,
    tokenInt = 276,
    tokenDouble = 277,
    tokenChar = 278,
    tokenBool = 279,
    tokenVar = 280,
    tokenIgual = 281,
    tokenIncremento = 282,
    tokenDecremento = 283,
    tokenSi = 284,
    tokenSino = 285,
    tokenPara = 286,
    tokenMientras = 287,
    tokenHacer = 288,
    tokenPotencia = 289,
    tokenMas = 290,
    tokenMenos = 291,
    tokenDivision = 292,
    tokenPor = 293,
    tokenNot = 294,
    tokenAnd = 295,
    tokenNand = 296,
    tokenOr = 297,
    tokenNor = 298,
    tokenXor = 299,
    tokenEquivalente = 300,
    tokenDiferente = 301,
    tokenMenor = 302,
    tokenMenorIgual = 303,
    tokenMayor = 304,
    tokenMayorIgual = 305,
    tokenCadena = 306,
    tokenEntero = 307,
    tokenDecimal = 308,
    tokenCaracter = 309,
    tokenTrue = 310,
    tokenFalse = 311,
    tokenId = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "sintactico.y" /* yacc.c:355  */

	char cadena[255];
	struct Nodo *Nodo;

#line 197 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   651

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  266

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   122,   122,   127,   137,   146,   155,   162,   175,   189,
     199,   209,   218,   227,   236,   244,   255,   267,   271,   277,
     281,   287,   301,   316,   325,   335,   339,   343,   347,   351,
     355,   359,   365,   369,   373,   379,   388,   398,   402,   406,
     410,   414,   418,   422,   426,   432,   436,   440,   446,   458,
     467,   476,   485,   494,   503,   514,   526,   537,   548,   555,
     566,   576,   587,   594,   605,   616,   627,   638,   649,   659,
     669,   679,   688,   697,   706,   715,   724,   735,   746,   757,
     768,   779,   790,   802,   811,   820,   829,   838,   847,   856,
     865,   875,   887,   896,   905,   916,   926,   940,   955,   967,
     978,   991,  1005,  1016,  1023,  1037,  1048,  1055,  1070,  1085,
    1099,  1114,  1124,  1137,  1150,  1165,  1179,  1190
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tokenImport", "tokenClase",
  "tokenPrivado", "tokenPublico", "tokenOInter", "tokenCInter",
  "tokenOPar", "tokenCPar", "tokenDolar", "tokenComa", "tokenPtoComa",
  "tokenMain", "tokenVoid", "tokenRetorna", "tokenSalir", "tokenGraficar",
  "tokenPintar", "tokenString", "tokenInt", "tokenDouble", "tokenChar",
  "tokenBool", "tokenVar", "tokenIgual", "tokenIncremento",
  "tokenDecremento", "tokenSi", "tokenSino", "tokenPara", "tokenMientras",
  "tokenHacer", "tokenPotencia", "tokenMas", "tokenMenos", "tokenDivision",
  "tokenPor", "tokenNot", "tokenAnd", "tokenNand", "tokenOr", "tokenNor",
  "tokenXor", "tokenEquivalente", "tokenDiferente", "tokenMenor",
  "tokenMenorIgual", "tokenMayor", "tokenMayorIgual", "tokenCadena",
  "tokenEntero", "tokenDecimal", "tokenCaracter", "tokenTrue",
  "tokenFalse", "tokenId", "$accept", "S0", "S", "LIST_IMPORT", "IMPORT",
  "CLASE", "VISIBILIDAD", "LIST_CUERPO_CLASE", "CUERPO_CLASE", "PRINCIPAL",
  "SENTENCIA", "PROCEDIMIENTO", "FUNCION", "METODO", "LIST_SENTSM",
  "SENTSM", "LIST_SENTSF", "SENTSF", "RETORNA", "TIPO", "LIST_ID",
  "ASIGN_DEC", "LIST_PAR", "PAR", "COND", "REL", "E", "LLAMADA", "ATTRS",
  "LIST_ATTR", "DECLARACION_G", "DECLARACION", "ASIGNACION", "SI_M",
  "SINO_M", "SI_F", "SINO_F", "PARA_M", "PARA_F", "VAR_PARA", "PASO_PARA",
  "MIENTRAS_M", "MIENTRAS_F", "HACER_M", "HACER_F", "GRAFICAR", "PINTAR", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -194

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-194)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -45,    21,  -194,    41,  -194,    42,  -194,  -194,  -194,
    -194,  -194,    55,  -194,    16,    67,    25,    79,    -5,   151,
    -194,  -194,    80,    47,  -194,  -194,  -194,  -194,  -194,     5,
    -194,  -194,  -194,  -194,  -194,    48,   102,  -194,  -194,   107,
     108,    61,   110,  -194,   526,     5,  -194,    -3,     5,   113,
     117,   120,   121,   122,   123,   132,    23,   126,   402,  -194,
     136,   141,   143,  -194,  -194,  -194,  -194,   153,   155,   124,
      73,  -194,   127,   524,  -194,    74,  -194,   128,   259,   524,
      71,   524,   526,   524,   524,  -194,  -194,     5,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,   160,     5,  -194,   259,
     524,  -194,  -194,  -194,  -194,  -194,  -194,   169,   595,   596,
    -194,   172,   169,   173,   138,   101,   161,   131,   176,   509,
     420,   595,   183,   186,   595,    61,   526,  -194,   591,   595,
     524,   524,   524,   524,   524,   259,   259,   259,   259,   259,
    -194,  -194,  -194,  -194,  -194,  -194,   259,   104,  -194,  -194,
     193,   150,   181,   524,   201,   177,  -194,   524,    -3,   438,
    -194,    26,    26,  -194,  -194,  -194,    -1,     4,     4,  -194,
    -194,   613,   524,   200,   205,   208,   211,   214,   271,  -194,
    -194,   213,   215,   217,  -194,  -194,  -194,  -194,   219,   220,
     526,  -194,   170,   569,   526,   216,   595,  -194,  -194,   562,
    -194,   524,    71,   524,   104,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,   455,  -194,   175,   473,   524,  -194,   528,   224,
     544,   313,   203,    52,  -194,   232,  -194,   550,   236,   524,
     237,   223,   239,  -194,   241,   238,   104,   576,   104,   243,
     526,   526,  -194,   331,   175,   349,   524,   491,   508,   227,
     248,  -194,   556,  -194,  -194,   252,  -194,   253,   255,   104,
     104,  -194,   367,   385,  -194,  -194
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     2,    11,     5,     0,     1,     9,    10,
       4,     3,     0,     7,     0,     0,    11,     0,     0,    11,
      13,    14,     0,     0,    53,    49,    50,    52,    51,     0,
      54,    15,    18,    19,    20,     0,     0,     8,    12,     0,
       0,     0,     0,    17,    11,    62,    56,    58,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    24,
       0,     0,     0,    27,    28,    29,    30,     0,     0,     0,
       0,    60,     0,     0,    96,     0,    31,     0,     0,     0,
       0,     0,    11,    93,     0,    99,   100,     0,    16,    23,
      32,    25,    26,    33,    34,    61,     0,    62,    55,     0,
       0,    83,    84,    85,    86,    87,    88,    89,    57,    70,
      90,     0,     0,     0,     0,     0,    54,     0,     0,     0,
      11,    95,     0,    92,    98,     0,    11,    59,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,     0,    11,   116,   117,
       0,     0,     0,     0,     0,     0,    91,     0,    58,    11,
      82,    63,    64,    65,    66,    67,    81,    77,    78,    80,
      79,    69,     0,     0,     0,     0,     0,     0,    11,    36,
      39,     0,     0,     0,    40,    41,    42,    43,     0,     0,
      11,   110,     0,     0,    11,     0,    94,    97,    22,     0,
      44,     0,     0,     0,    11,    21,    35,    45,    37,    38,
      46,    47,    11,   109,     0,    11,     0,    48,     0,     0,
       0,    11,   103,     0,   111,     0,   112,     0,     0,     0,
       0,     0,     0,   101,     0,     0,    11,     0,    11,     0,
      11,    11,   114,    11,     0,    11,     0,    11,    11,   106,
       0,   113,     0,   102,   107,     0,   104,     0,     0,    11,
      11,   115,    11,    11,   105,   108
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,  -194,  -194,   265,  -194,    56,  -194,   244,  -194,
    -194,  -194,  -194,  -194,   -78,   -57,  -193,  -156,  -194,   -16,
     145,   114,   226,   178,   -76,  -194,   -38,   -44,  -194,  -194,
    -194,     2,    -9,  -194,  -194,  -194,  -194,  -194,  -194,    81,
      37,  -194,  -194,  -194,  -194,    35,    63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    11,    57,    19,    20,    21,
      31,    32,    33,    34,    58,    59,   178,   179,   180,    69,
      47,    74,    70,    71,   108,   146,   109,   110,   122,   123,
      36,    61,    62,    63,   233,   184,   256,    64,   185,   118,
     225,    65,   186,    66,   187,    67,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      60,    89,    35,   115,   120,   119,     1,   121,   124,    72,
      23,   221,     6,    41,    60,    24,    25,    26,    27,    28,
      29,     7,   206,    73,   129,    24,    25,    26,    27,    28,
       8,     9,    83,   113,   136,   137,   138,   139,    60,    17,
     114,   138,   139,   243,     1,   245,     8,     9,   159,    84,
      85,    86,    30,    13,   161,   162,   163,   164,   165,    14,
      12,   128,    30,    89,   117,   206,   262,   263,   132,   133,
     134,   125,    18,    15,    16,    18,    60,   193,    84,    85,
      86,   196,    60,    96,   111,    97,    97,   206,    22,   206,
      39,    24,    25,    26,    27,    28,   199,   166,   167,   168,
     169,   170,    89,   181,    40,    42,   206,   206,   171,     8,
       9,   150,   212,    43,    44,    60,   215,    45,    46,    48,
     172,   173,    50,    51,    76,   218,    77,   220,   116,    78,
      79,    80,    81,   174,   181,   175,   176,   177,   183,    82,
     227,   130,   131,   132,   133,   134,    60,    90,   149,   182,
      60,    87,    91,   237,    92,    89,     8,     9,    89,    37,
     181,    56,   247,   248,    93,    17,    94,   126,    60,   183,
     252,    60,   135,   136,   137,   138,   139,   181,    83,   147,
     182,    95,   188,   148,    98,   112,   117,   151,   152,   153,
      89,    89,   181,   156,   181,   183,    60,    60,   157,   181,
     190,   181,   191,    60,    60,   224,   182,   192,   194,   195,
     189,   200,   183,   188,   201,   181,   181,   202,   181,   181,
     203,   204,   213,   182,   207,   216,   208,   183,   209,   183,
     210,   211,   223,   232,   183,   224,   183,   229,   182,   188,
     182,   189,   234,   236,   238,   182,   240,   182,   241,   242,
     183,   183,   246,   183,   183,   239,   188,   255,   257,   259,
     260,   182,   182,    38,   182,   182,   261,   189,    99,    10,
     158,   188,   197,   188,    75,   127,     8,     9,   188,   205,
     188,   250,     0,   219,   189,     0,     0,   172,   173,    50,
      51,     0,     0,     0,   188,   188,     0,   188,   188,   189,
     174,   189,   175,   176,   177,     0,   189,     0,   189,     0,
     101,   102,   103,   104,   105,   106,   107,     0,     8,     9,
       0,   231,   189,   189,     0,   189,   189,     0,    56,   172,
     173,    50,    51,     0,     0,     0,     8,     9,     0,   249,
       0,     0,   174,     0,   175,   176,   177,   172,   173,    50,
      51,     0,     0,     0,     8,     9,     0,   251,     0,     0,
     174,     0,   175,   176,   177,   172,   173,    50,    51,     0,
      56,     0,     8,     9,     0,   264,     0,     0,   174,     0,
     175,   176,   177,   172,   173,    50,    51,     0,    56,     0,
       8,     9,     0,   265,     0,     0,   174,     0,   175,   176,
     177,   172,   173,    50,    51,     0,    56,     8,     9,     0,
      88,     0,     0,     0,   174,     0,   175,   176,   177,    49,
      50,    51,     0,     0,    56,     8,     9,     0,   155,     0,
       0,    52,     0,    53,    54,    55,     0,    49,    50,    51,
       0,     0,    56,     8,     9,     0,   198,     0,     0,    52,
       0,    53,    54,    55,     0,    49,    50,    51,     0,    56,
       8,     9,     0,   222,     0,     0,     0,    52,     0,    53,
      54,    55,    49,    50,    51,     0,     0,    56,     8,     9,
       0,   226,     0,     0,    52,     0,    53,    54,    55,     0,
      49,    50,    51,     0,     0,    56,     8,     9,     0,   253,
       0,     0,    52,     0,    53,    54,    55,     0,    49,    50,
      51,     0,    56,     8,     9,     0,   254,     0,     0,   154,
      52,     0,    53,    54,    55,    49,    50,    51,     0,     0,
      56,     8,     9,    99,     0,     0,     0,    52,   228,    53,
      54,    55,     0,    49,    50,    51,     0,     0,    56,   130,
     131,   132,   133,   134,   230,    52,     0,    53,    54,    55,
     235,     0,     0,   100,     0,    56,   258,     0,   130,   131,
     132,   133,   134,   217,     0,   101,   102,   103,   104,   105,
     106,   107,   214,    56,   130,   131,   132,   133,   134,   244,
     130,   131,   132,   133,   134,     0,   130,   131,   132,   133,
     134,   160,   130,   131,   132,   133,   134,     0,     0,   130,
     131,   132,   133,   134,     0,     0,   130,   131,   132,   133,
     134,     0,     0,     0,     0,   135,   136,   137,   138,   139,
     135,   136,   137,   138,   139,   130,   131,   132,   133,   134,
       0,   140,   141,   142,   143,   144,   145,   135,   136,   137,
     138,   139
};

static const yytype_int16 yycheck[] =
{
      44,    58,    18,    79,    82,    81,     3,    83,    84,    12,
      15,   204,    57,    29,    58,    20,    21,    22,    23,    24,
      25,     0,   178,    26,   100,    20,    21,    22,    23,    24,
       5,     6,     9,    77,    35,    36,    37,    38,    82,    14,
      78,    37,    38,   236,     3,   238,     5,     6,   126,    26,
      27,    28,    57,    11,   130,   131,   132,   133,   134,     4,
       4,    99,    57,   120,    80,   221,   259,   260,    42,    43,
      44,    87,    16,    57,     7,    19,   120,   153,    26,    27,
      28,   157,   126,    10,    10,    12,    12,   243,     9,   245,
      10,    20,    21,    22,    23,    24,   172,   135,   136,   137,
     138,   139,   159,   147,    57,    57,   262,   263,   146,     5,
       6,    10,   190,    11,     7,   159,   194,     9,    57,     9,
      16,    17,    18,    19,    11,   201,     9,   203,    57,     9,
       9,     9,     9,    29,   178,    31,    32,    33,   147,     7,
     216,    40,    41,    42,    43,    44,   190,    11,    10,   147,
     194,    25,    11,   229,    11,   212,     5,     6,   215,     8,
     204,    57,   240,   241,    11,    14,    11,     7,   212,   178,
     246,   215,    34,    35,    36,    37,    38,   221,     9,     7,
     178,    57,   147,    10,    57,    57,   202,    26,    57,    13,
     247,   248,   236,    10,   238,   204,   240,   241,    12,   243,
       7,   245,    52,   247,   248,   214,   204,    26,     7,    32,
     147,    11,   221,   178,     9,   259,   260,     9,   262,   263,
       9,     7,    52,   221,    11,     9,    11,   236,    11,   238,
      11,    11,    57,    30,   243,   244,   245,    13,   236,   204,
     238,   178,    10,     7,     7,   243,     7,   245,     7,    11,
     259,   260,     9,   262,   263,    32,   221,    30,    10,     7,
       7,   259,   260,    19,   262,   263,    11,   204,     9,     4,
     125,   236,   158,   238,    48,    97,     5,     6,   243,     8,
     245,   244,    -1,   202,   221,    -1,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,   259,   260,    -1,   262,   263,   236,
      29,   238,    31,    32,    33,    -1,   243,    -1,   245,    -1,
      51,    52,    53,    54,    55,    56,    57,    -1,     5,     6,
      -1,     8,   259,   260,    -1,   262,   263,    -1,    57,    16,
      17,    18,    19,    -1,    -1,    -1,     5,     6,    -1,     8,
      -1,    -1,    29,    -1,    31,    32,    33,    16,    17,    18,
      19,    -1,    -1,    -1,     5,     6,    -1,     8,    -1,    -1,
      29,    -1,    31,    32,    33,    16,    17,    18,    19,    -1,
      57,    -1,     5,     6,    -1,     8,    -1,    -1,    29,    -1,
      31,    32,    33,    16,    17,    18,    19,    -1,    57,    -1,
       5,     6,    -1,     8,    -1,    -1,    29,    -1,    31,    32,
      33,    16,    17,    18,    19,    -1,    57,     5,     6,    -1,
       8,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    17,
      18,    19,    -1,    -1,    57,     5,     6,    -1,     8,    -1,
      -1,    29,    -1,    31,    32,    33,    -1,    17,    18,    19,
      -1,    -1,    57,     5,     6,    -1,     8,    -1,    -1,    29,
      -1,    31,    32,    33,    -1,    17,    18,    19,    -1,    57,
       5,     6,    -1,     8,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    17,    18,    19,    -1,    -1,    57,     5,     6,
      -1,     8,    -1,    -1,    29,    -1,    31,    32,    33,    -1,
      17,    18,    19,    -1,    -1,    57,     5,     6,    -1,     8,
      -1,    -1,    29,    -1,    31,    32,    33,    -1,    17,    18,
      19,    -1,    57,     5,     6,    -1,     8,    -1,    -1,    10,
      29,    -1,    31,    32,    33,    17,    18,    19,    -1,    -1,
      57,     5,     6,     9,    -1,    -1,    -1,    29,    10,    31,
      32,    33,    -1,    17,    18,    19,    -1,    -1,    57,    40,
      41,    42,    43,    44,    10,    29,    -1,    31,    32,    33,
      10,    -1,    -1,    39,    -1,    57,    10,    -1,    40,    41,
      42,    43,    44,    11,    -1,    51,    52,    53,    54,    55,
      56,    57,    13,    57,    40,    41,    42,    43,    44,    13,
      40,    41,    42,    43,    44,    -1,    40,    41,    42,    43,
      44,    10,    40,    41,    42,    43,    44,    -1,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      34,    35,    36,    37,    38,    40,    41,    42,    43,    44,
      -1,    45,    46,    47,    48,    49,    50,    34,    35,    36,
      37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    59,    60,    61,    62,    57,     0,     5,     6,
      62,    63,    64,    11,     4,    57,     7,    14,    64,    65,
      66,    67,     9,    15,    20,    21,    22,    23,    24,    25,
      57,    68,    69,    70,    71,    77,    88,     8,    66,    10,
      57,    77,    57,    11,     7,     9,    57,    78,     9,    17,
      18,    19,    29,    31,    32,    33,    57,    64,    72,    73,
      85,    89,    90,    91,    95,    99,   101,   103,   104,    77,
      80,    81,    12,    26,    79,    80,    11,     9,     9,     9,
       9,     9,     7,     9,    26,    27,    28,    25,     8,    73,
      11,    11,    11,    11,    11,    57,    10,    12,    57,     9,
      39,    51,    52,    53,    54,    55,    56,    57,    82,    84,
      85,    10,    57,    85,    84,    82,    57,    77,    97,    82,
      72,    82,    86,    87,    82,    77,     7,    81,    84,    82,
      40,    41,    42,    43,    44,    34,    35,    36,    37,    38,
      45,    46,    47,    48,    49,    50,    83,     7,    10,    10,
      10,    26,    57,    13,    10,     8,    10,    12,    78,    72,
      10,    82,    82,    82,    82,    82,    84,    84,    84,    84,
      84,    84,    16,    17,    29,    31,    32,    33,    74,    75,
      76,    85,    89,    90,    93,    96,   100,   102,   103,   104,
       7,    52,    26,    82,     7,    32,    82,    79,     8,    82,
      11,     9,     9,     9,     7,     8,    75,    11,    11,    11,
      11,    11,    72,    52,    13,    72,     9,    11,    82,    97,
      82,    74,     8,    57,    90,    98,     8,    82,    10,    13,
      10,     8,    30,    92,    10,    10,     7,    82,     7,    32,
       7,     7,    11,    74,    13,    74,     9,    72,    72,     8,
      98,     8,    82,     8,     8,    30,    94,    10,    10,     7,
       7,    11,    74,    74,     8,     8
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    61,    61,    61,    62,    63,    64,
      64,    64,    65,    65,    66,    66,    67,    68,    68,    69,
      69,    70,    71,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    86,    86,    87,    87,    88,    89,    90,    90,
      90,    91,    92,    92,    93,    94,    94,    95,    96,    97,
      97,    98,    99,   100,   101,   102,   103,   104
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     0,     3,     6,     1,
       1,     0,     2,     1,     1,     2,     6,     2,     1,     1,
       1,     8,     8,     2,     1,     2,     2,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     0,     3,
       1,     2,     0,     3,     3,     3,     3,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     0,     3,     1,     4,     5,     3,     2,
       2,     8,     4,     0,     8,     4,     0,    11,    11,     4,
       3,     1,     7,     7,     9,     9,     4,     4
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
#line 123 "sintactico.y" /* yacc.c:1646  */
    {
						raiz = (yyvsp[0].Nodo);
					}
#line 1559 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 128 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("S", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1572 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 138 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1585 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 147 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1597 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 155 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 1607 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 163 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("IMPORT", "---", 0, 0);
						Nodo *tokenImport = new Nodo("tokenImport", (yyvsp[-2].cadena), 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-1].cadena), 0, 0);
						
						padre->addHijo(tokenImport);
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 1622 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 176 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("CLASE", "---", 0, 0);
						Nodo *tokenClase = new Nodo("tokenClase", (yyvsp[-4].cadena), yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-3].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-5].Nodo));
						padre->addHijo(tokenClase);
						padre->addHijo(tokenId);
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1639 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 190 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						Nodo *tokenPrivado = new Nodo("tokenPrivado", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenPrivado);

						(yyval.Nodo) = padre;	
					}
#line 1652 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 200 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						Nodo *tokenPublico = new Nodo("tokenPublico", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenPublico);

						(yyval.Nodo) = padre;
					}
#line 1665 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 209 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						
						padre->addHijo(NULL);

						(yyval.Nodo) = padre;
					}
#line 1677 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 219 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_CUERPO_CLASE", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1690 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 228 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_CUERPO_CLASE", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1702 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 237 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("CUERPO_CLASE", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1714 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 245 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("CUERPO_CLASE", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1727 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 256 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PRINCIPAL", "---", 0, 0);
						Nodo *tokenMain = new Nodo("tokenMain", (yyvsp[-5].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenMain);
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1741 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 268 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 1749 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 272 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1757 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 278 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1765 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 282 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1773 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 288 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("FUNCION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-6].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-7].Nodo));
						padre->addHijo(tokenId);
						padre->addHijo((yyvsp[-4].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1789 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 302 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("METODO", "---", 0, 0);
						Nodo *tokenVoid = new Nodo("tokenVoid", (yyvsp[-7].cadena), yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-6].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenVoid);
						padre->addHijo(tokenId);
						padre->addHijo((yyvsp[-4].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1806 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 317 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSM", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1819 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 326 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSM", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1831 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 336 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 1839 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 340 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 1847 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 344 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1855 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 348 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1863 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 352 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1871 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 356 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1879 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 360 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *tokenSalir = new Nodo("tokenSalir", (yyvsp[-1].cadena), yyfila, yycolumna);

						(yyval.Nodo) = tokenSalir;
					}
#line 1889 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 366 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 1897 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 370 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 1905 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 374 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 1913 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 380 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSF", "---", 0, 0);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1926 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 389 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_SENTSF", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 1938 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 399 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 1946 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 403 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 1954 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 407 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1962 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 411 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1970 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 415 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1978 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 419 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1986 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 423 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[0].Nodo);
					}
#line 1994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 427 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *tokenSalir = new Nodo("tokenSalir", (yyvsp[-1].cadena), yyfila, yycolumna);

						(yyval.Nodo) = tokenSalir;
					}
#line 2004 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 433 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 2012 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 437 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 2020 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 441 "sintactico.y" /* yacc.c:1646  */
    {
						(yyval.Nodo) = (yyvsp[-1].Nodo);
					}
#line 2028 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 447 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RETORNA", "---", 0, 0);
						Nodo *tokenRetorna = new Nodo("tokenRetorna", (yyvsp[-2].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenRetorna);
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;	
					}
#line 2042 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 459 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenInt = new Nodo("tokenInt", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenInt);

						(yyval.Nodo) = padre;
					}
#line 2055 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 468 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenDouble = new Nodo("tokenDouble", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenDouble);
						
						(yyval.Nodo) = padre;
					}
#line 2068 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 477 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenbool = new Nodo("tokenBool", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenbool);
						
						(yyval.Nodo) = padre;
					}
#line 2081 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 486 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenChar = new Nodo("tokenChar", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenChar);
						
						(yyval.Nodo) = padre;
					}
#line 2094 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 495 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenString = new Nodo("tokenString", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenString);
						
						(yyval.Nodo) = padre;
					}
#line 2107 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 504 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);

						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 2120 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 515 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ID", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenComa);
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 2136 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 527 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ID", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 2149 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 538 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGN_DEC", "---", 0, 0);
						Nodo *tokenIgual = new Nodo("tokenIgual", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenIgual);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2163 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 548 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGN_DEC", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 2173 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 556 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenComa);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2188 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 567 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2200 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 577 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 2214 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 587 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PAR", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 2224 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 595 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenAdd = new Nodo("tokenAdd", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenAdd);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2239 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 606 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNand = new Nodo("tokenNand", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenNand);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2254 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 617 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenOr = new Nodo("tokenOr", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenOr);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2269 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 628 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNor = new Nodo("tokenNor", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenNor);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2284 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 639 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenXor = new Nodo("tokenXor", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenXor);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2299 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 650 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNot = new Nodo("tokenNot", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenNot);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2313 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 660 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2327 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 670 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2339 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 680 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenEquivalente = new Nodo("tokenEquivalente", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenEquivalente);

						(yyval.Nodo) = padre;
					}
#line 2352 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 689 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenDiferente = new Nodo("tokenDiferente", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenDiferente);

						(yyval.Nodo) = padre;
					}
#line 2365 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 698 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMenor = new Nodo("tokenMenor", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenMenor);

						(yyval.Nodo) = padre;
					}
#line 2378 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 707 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMenorIgual = new Nodo("tokenMenorIgual", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenMenorIgual);

						(yyval.Nodo) = padre;
					}
#line 2391 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 716 "sintactico.y" /* yacc.c:1646  */
    {	
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMayor = new Nodo("tokenMayor", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenMayor);

						(yyval.Nodo) = padre;
					}
#line 2404 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 725 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMayorIgual = new Nodo("tokenMayorIgual", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenMayorIgual);

						(yyval.Nodo) = padre;
					}
#line 2417 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 736 "sintactico.y" /* yacc.c:1646  */
    {
                        Nodo *padre = new Nodo("E", "---", 0, 0);
                        Nodo *tokenMas = new Nodo("tokenMas", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenMas);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2432 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 747 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenMenos = new Nodo("tokenMenos", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenMenos);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2447 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 758 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenPor = new Nodo("tokenPor", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenPor);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2462 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 769 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenDivision = new Nodo("tokenDivision", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenDivision);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2477 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 780 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenPotencia = new Nodo("tokenPotencia", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenPotencia);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2492 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 791 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenOPar = new Nodo("tokenOPar", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenCPar = new Nodo("tokenOPar", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenOPar);
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo(tokenCPar);

						(yyval.Nodo) = padre;
					}
#line 2508 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 803 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenCadena = new Nodo("tokenCadena", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenCadena);

						(yyval.Nodo) = padre;
					}
#line 2521 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 812 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenEntero = new Nodo("tokenEntero", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenEntero);

						(yyval.Nodo) = padre;
					}
#line 2534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 821 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenDecimal = new Nodo("tokenDecimal", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenDecimal);

						(yyval.Nodo) = padre;
					}
#line 2547 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 830 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenCaracter = new Nodo("tokenCaracter", (yyvsp[0].cadena), yyfila, yycolumna);

						padre->addHijo(tokenCaracter);

						(yyval.Nodo) = padre;
					}
#line 2560 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 839 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenTrue = new Nodo("tokenTrue", "1", yyfila, yycolumna);

						padre->addHijo(tokenTrue);

						(yyval.Nodo) = padre;
					}
#line 2573 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 848 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenFalse = new Nodo("tokenFalse", "0", yyfila, yycolumna);

						padre->addHijo(tokenFalse);

						(yyval.Nodo) = padre;
					}
#line 2586 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 857 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);

						(yyval.Nodo) = padre;
					}
#line 2599 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 866 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("E", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2611 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 876 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LLAMADA", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenID", (yyvsp[-3].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2625 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 888 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ATTRS", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2637 "parser.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 896 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ATTRS", "---", 0, 0);
						
						padre->addHijo(NULL);

						(yyval.Nodo) = padre;
					}
#line 2649 "parser.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 906 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ATTR", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo(tokenComa);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2664 "parser.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 917 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("LIST_ATTR", "---", 0, 0);
						
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2676 "parser.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 927 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("DECLARACION_G", "---", 0, 0);
						Nodo *tokenVar = new Nodo("tokenVar", (yyvsp[-3].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenVar);
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2692 "parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 941 "sintactico.y" /* yacc.c:1646  */
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
#line 2709 "parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 956 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenIgual = new Nodo("tokenIgual", (yyvsp[-1].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);
						padre->addHijo(tokenIgual);
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2725 "parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 968 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenIncremento = new Nodo("tokenIncremento", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);
						padre->addHijo(tokenIncremento);
						
						(yyval.Nodo) = padre;
					}
#line 2740 "parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 979 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenDecremento = new Nodo("tokenDecremento", (yyvsp[0].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenId);
						padre->addHijo(tokenDecremento);
						
						(yyval.Nodo) = padre;
					}
#line 2755 "parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 992 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SI_M", "---", 0, 0);
						Nodo *tokenSi = new Nodo("tokenSi", (yyvsp[-7].cadena), yyfila, yycolumna);

						padre->addHijo(tokenSi);
						padre->addHijo((yyvsp[-5].Nodo));
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2771 "parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1006 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SINO_M", "---", 0, 0);
						Nodo *tokenSino = new Nodo("tokenSino", (yyvsp[-3].cadena), yyfila, yycolumna);

						padre->addHijo(tokenSino);
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2785 "parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1016 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SINO_M", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 2795 "parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1024 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SI_F", "---", 0, 0);
						Nodo *tokenSi = new Nodo("tokenSi", (yyvsp[-7].cadena), yyfila, yycolumna);

						padre->addHijo(tokenSi);
						padre->addHijo((yyvsp[-5].Nodo));
						padre->addHijo((yyvsp[-2].Nodo));
						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2811 "parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1038 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SINO_F", "---", 0, 0);
						Nodo *tokenSino = new Nodo("tokenSino", (yyvsp[-3].cadena), yyfila, yycolumna);

						padre->addHijo(tokenSino);
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2825 "parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1048 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("SINO_F", "---", 0, 0);

						(yyval.Nodo) = padre;
					}
#line 2835 "parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1056 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PARA_M", "---", 0, 0);
						Nodo *tokenPara = new Nodo("tokenPara", (yyvsp[-10].cadena), yyfila, yycolumna);

						padre->addHijo(tokenPara);
						padre->addHijo((yyvsp[-8].Nodo));
						padre->addHijo((yyvsp[-6].Nodo));
						padre->addHijo((yyvsp[-4].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2852 "parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1071 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PARA_M", "---", 0, 0);
						Nodo *tokenPara = new Nodo("tokenPara", (yyvsp[-10].cadena), yyfila, yycolumna);

						padre->addHijo(tokenPara);
						padre->addHijo((yyvsp[-8].Nodo));
						padre->addHijo((yyvsp[-6].Nodo));
						padre->addHijo((yyvsp[-4].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2869 "parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1086 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VAR_PARA", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenIgual = new Nodo("tokenIgual", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenEntero = new Nodo("tokenEntero", (yyvsp[0].cadena), yyfila, yycolumna);

						padre->addHijo((yyvsp[-3].Nodo));
						padre->addHijo(tokenId);
						padre->addHijo(tokenIgual);
						padre->addHijo(tokenEntero);

						(yyval.Nodo) = padre;
					}
#line 2887 "parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1100 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("VAR_PARA", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", (yyvsp[-2].cadena), yyfila, yycolumna);
						Nodo *tokenIgual = new Nodo("tokenIgual", (yyvsp[-1].cadena), yyfila, yycolumna);
						Nodo *tokenEntero = new Nodo("tokenEntero", (yyvsp[0].cadena), yyfila, yycolumna);

						padre->addHijo(tokenId);
						padre->addHijo(tokenIgual);
						padre->addHijo(tokenEntero);

						(yyval.Nodo) = padre;
					}
#line 2904 "parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1115 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PASO_PARA", "---", 0, 0);

						padre->addHijo((yyvsp[0].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2916 "parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1125 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("MIENTRAS_M", "---", 0, 0);
						Nodo *tokenMientras = new Nodo("tokenMientras", (yyvsp[-6].cadena), yyfila, yycolumna);

						padre->addHijo(tokenMientras);
						padre->addHijo((yyvsp[-4].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2931 "parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1138 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("MIENTRAS_F", "---", 0, 0);
						Nodo *tokenMientras = new Nodo("tokenMientras", (yyvsp[-6].cadena), yyfila, yycolumna);

						padre->addHijo(tokenMientras);
						padre->addHijo((yyvsp[-4].Nodo));
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2946 "parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1151 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("HACER_M", "---", 0, 0);
						Nodo *tokenHacer = new Nodo("tokenHacer", (yyvsp[-8].cadena), yyfila, yycolumna);
						Nodo *tokenMientras = new Nodo("tokenMientras", (yyvsp[-4].cadena), yyfila, yycolumna);

						padre->addHijo(tokenHacer);
						padre->addHijo((yyvsp[-6].Nodo));
						padre->addHijo(tokenMientras);
						padre->addHijo((yyvsp[-2].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2963 "parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1166 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("HACER_M", "---", 0, 0);
						Nodo *tokenHacer = new Nodo("tokenHacer", (yyvsp[-8].cadena), yyfila, yycolumna);
						Nodo *tokenMientras = new Nodo("tokenMientras", (yyvsp[-4].cadena), yyfila, yycolumna);

						padre->addHijo(tokenHacer);
						padre->addHijo((yyvsp[-6].Nodo));
						padre->addHijo(tokenMientras);
						padre->addHijo((yyvsp[-2].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1180 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("GRAFICAR", "---", 0, 0);
						Nodo *tokenGraficar = new Nodo("tokenGraficar", (yyvsp[-3].cadena), yyfila, yycolumna);
						
						padre->addHijo(tokenGraficar);
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 2994 "parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1191 "sintactico.y" /* yacc.c:1646  */
    {
						Nodo *padre = new Nodo("PINTAR", "---", 0, 0);
						Nodo *tokenPintar = new Nodo("tokenPintar", (yyvsp[-3].cadena), yyfila, yycolumna);

						padre->addHijo(tokenPintar);
						padre->addHijo((yyvsp[-1].Nodo));

						(yyval.Nodo) = padre;
					}
#line 3008 "parser.cpp" /* yacc.c:1646  */
    break;


#line 3012 "parser.cpp" /* yacc.c:1646  */
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
#line 1202 "sintactico.y" /* yacc.c:1906  */

