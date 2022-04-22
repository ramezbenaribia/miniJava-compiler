
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "SyntaxicAnalyser.y"

	
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    #include "SemantiqueAnalyser.h"
	
    #define YYSTYPE char*

    int yyparse(void);
    int yyerror(char const *msg);	
    int yylex(void);

    extern int line;

    int classID = 0;
    int level = 0;
    bool isParam = false;   
    int method_call_index = -1;
    int expression_level = 0;


    #define YYERROR_VERBOSE 1
    



/* Line 189 of yacc.c  */
#line 101 "SyntaxicAnalyser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PUBLIC = 258,
     STATIC = 259,
     _CLASS = 260,
     VOID = 261,
     MAIN = 262,
     EXTENDS = 263,
     RETURN = 264,
     PRINT = 265,
     LENGTH = 266,
     THIS = 267,
     NEW = 268,
     IF = 269,
     ELSE = 270,
     WHILE = 271,
     INT = 272,
     INT_ERROR = 273,
     STRING = 274,
     STRING_ERROR = 275,
     DATATYPE = 276,
     PAR_OUVRANTE = 277,
     PAR_FERMANTE = 278,
     TAB_OUVRANTE = 279,
     TAB_FERMANTE = 280,
     ACO_OUVRANTE = 281,
     ACO_FERMANTE = 282,
     OPERATOR = 283,
     POINT = 284,
     POINT_VIRGULE = 285,
     VIRGULE = 286,
     DOUBLEQUOTE = 287,
     SINGLEQUOTE = 288,
     PLUS = 289,
     MOINS = 290,
     MULTIPLIER = 291,
     NOT = 292,
     AFFECTATION = 293,
     DIV = 294,
     COMPOP = 295,
     BOOL = 296,
     NUMBER = 297,
     ID = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 186 "SyntaxicAnalyser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1691

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNRULES -- Number of states.  */
#define YYNSTATES  439

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    18,    25,    32,    39,
      41,    44,    47,    50,    52,    55,    57,    60,    67,    74,
      81,    85,    88,    93,    98,   100,   102,   105,   107,   120,
     133,   146,   159,   172,   185,   198,   211,   214,   216,   219,
     221,   224,   227,   230,   232,   234,   239,   244,   249,   257,
     265,   273,   281,   289,   295,   301,   307,   313,   319,   325,
     331,   337,   343,   348,   353,   358,   363,   371,   379,   387,
     395,   403,   411,   425,   439,   453,   467,   481,   495,   509,
     523,   537,   551,   565,   579,   584,   589,   594,   599,   604,
     607,   610,   613,   616,   619,   622,   625,   628,   631,   634,
     637,   640,   643,   646,   649,   652,   655,   659,   663,   665,
     667,   669,   671,   673,   675,   677,   680,   681,   684,   687,
     690,   691,   696,   697,   702,   706,   711,   716,   721,   725,
     729,   733,   739,   745,   751,   753,   756,   758,   760,   762,
     768,   774,   780,   786,   792,   797,   802,   807,   812,   817,
     820,   823,   827,   831,   835,   837
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    59,    46,    -1,    47,    46,    -1,    72,
      -1,    61,    48,    26,    49,    52,    27,    -1,     1,    48,
      26,    49,    52,    27,    -1,    61,    48,     1,    49,    52,
      27,    -1,    61,    48,    26,    49,    52,     1,    -1,    72,
      -1,     8,    43,    -1,     1,    43,    -1,     8,     1,    -1,
      72,    -1,    50,    49,    -1,    72,    -1,    62,    30,    -1,
      62,    38,    51,    43,    51,    30,    -1,    62,    38,     1,
      43,    51,    30,    -1,    62,    38,    51,    43,     1,    30,
      -1,    62,     1,    30,    -1,    62,     1,    -1,    62,    38,
      42,    30,    -1,    62,    38,     1,    30,    -1,    32,    -1,
      33,    -1,    53,    52,    -1,    72,    -1,     3,    63,    22,
      54,    23,    26,    49,    57,     9,    69,    30,    27,    -1,
       1,    63,    22,    54,    23,    26,    49,    57,     9,    69,
      30,    27,    -1,     3,     1,     1,    54,    23,    26,    49,
      57,     9,    69,    30,    27,    -1,     3,    63,    22,    54,
       1,    26,    49,    57,     9,    69,    30,    27,    -1,     3,
      63,    22,    54,    23,     1,    49,    57,     9,    69,    30,
      27,    -1,     3,    63,    22,    54,    23,    26,    49,    57,
       1,    69,    30,    27,    -1,     3,    63,    22,    54,    23,
      26,    49,    57,     9,    69,     1,    27,    -1,     3,    63,
      22,    54,    23,    26,    49,    57,     9,    69,    30,     1,
      -1,    62,    55,    -1,    72,    -1,    56,    55,    -1,    72,
      -1,    31,    62,    -1,     1,    62,    -1,    58,    57,    -1,
      72,    -1,    57,    -1,    26,    58,    27,    58,    -1,     1,
      58,    27,    58,    -1,    26,    58,     1,    58,    -1,    14,
      22,    69,    23,    58,    15,    58,    -1,     1,    22,    69,
      23,    58,    15,    58,    -1,    14,     1,    69,    23,    58,
      15,    58,    -1,    14,    22,    69,     1,    58,    15,    58,
      -1,    14,    22,    69,    23,    58,     1,    58,    -1,    16,
      22,    69,    23,    58,    -1,     1,    22,    69,    23,    58,
      -1,    16,     1,    69,    23,    58,    -1,    16,    22,    69,
       1,    58,    -1,    10,    22,    69,    23,    30,    -1,     1,
      22,    69,    23,    30,    -1,    10,     1,    69,    23,    30,
      -1,    10,    22,    69,     1,    30,    -1,    10,    22,    69,
      23,     1,    -1,    43,    38,    69,    30,    -1,     1,    38,
      69,    30,    -1,    43,     1,    69,    30,    -1,    43,    38,
      69,     1,    -1,    43,    24,    69,    25,    38,    69,    30,
      -1,     1,    24,    69,    25,    38,    69,    30,    -1,    43,
       1,    69,    25,    38,    69,    30,    -1,    43,    24,    69,
       1,    38,    69,    30,    -1,    43,    24,    69,    25,     1,
      69,    30,    -1,    43,    24,    69,    25,    38,    69,     1,
      -1,    61,    26,     3,     4,     6,     7,    22,    60,    23,
      26,    57,    27,    27,    -1,    61,     1,     3,     4,     6,
       7,    22,    60,    23,    26,    57,    27,    27,    -1,    61,
      26,     1,     4,     6,     7,    22,    60,    23,    26,    57,
      27,    27,    -1,    61,    26,     3,     1,     6,     7,    22,
      60,    23,    26,    57,    27,    27,    -1,    61,    26,     3,
       4,     1,     7,    22,    60,    23,    26,    57,    27,    27,
      -1,    61,    26,     3,     4,     6,     1,    22,    60,    23,
      26,    57,    27,    27,    -1,    61,    26,     3,     4,     6,
       7,     1,    60,    23,    26,    57,    27,    27,    -1,    61,
      26,     3,     4,     6,     7,    22,    60,     1,    26,    57,
      27,    27,    -1,    61,    26,     3,     4,     6,     7,    22,
      60,    23,     1,    57,    27,    27,    -1,    61,    26,     3,
       4,     6,     7,    22,    60,    23,    26,     1,    27,    27,
      -1,    61,    26,     3,     4,     6,     7,    22,    60,    23,
      26,    57,     1,    27,    -1,    61,    26,     3,     4,     6,
       7,    22,    60,    23,    26,    57,    27,     1,    -1,    19,
      24,    25,    43,    -1,     1,    24,    25,    43,    -1,    19,
       1,    25,    43,    -1,    19,    24,     1,    43,    -1,    19,
      24,    25,     1,    -1,     5,    43,    -1,     1,    43,    -1,
       5,     1,    -1,    21,    43,    -1,    43,    43,    -1,    17,
      43,    -1,     1,    43,    -1,    43,     1,    -1,    21,     1,
      -1,    17,     1,    -1,    21,    43,    -1,    43,    43,    -1,
      17,    43,    -1,     1,    43,    -1,    43,     1,    -1,    21,
       1,    -1,    17,     1,    -1,    31,    69,    64,    -1,     1,
      69,    64,    -1,    72,    -1,    28,    -1,    40,    -1,    34,
      -1,    35,    -1,    36,    -1,    39,    -1,    69,    64,    -1,
      -1,    29,    43,    -1,     1,    43,    -1,    29,     1,    -1,
      -1,    69,    70,    66,    69,    -1,    -1,    69,    71,    65,
      69,    -1,    69,     1,    69,    -1,    69,    24,    69,    25,
      -1,    69,     1,    69,    25,    -1,    69,    24,    69,     1,
      -1,    69,    29,    11,    -1,    69,     1,    11,    -1,    69,
      29,     1,    -1,    69,    68,    22,    67,    23,    -1,    69,
      68,     1,    67,    23,    -1,    69,    68,    22,    67,     1,
      -1,    42,    -1,    35,    42,    -1,    41,    -1,    43,    -1,
      12,    -1,    13,    17,    24,    69,    25,    -1,     1,    17,
      24,    69,    25,    -1,    13,     1,    24,    69,    25,    -1,
      13,    17,     1,    69,    25,    -1,    13,    17,    24,    69,
       1,    -1,    13,    43,    22,    23,    -1,     1,    43,    22,
      23,    -1,    13,     1,    22,    23,    -1,    13,    43,     1,
      23,    -1,    13,    43,    22,     1,    -1,    37,    69,    -1,
       1,    69,    -1,    22,    69,    23,    -1,     1,    69,    23,
      -1,    22,    69,     1,    -1,     1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    81,    82,    85,    86,    87,    88,    89,
      92,    97,    98,    99,   102,   103,   106,   107,   108,   109,
     110,   111,   113,   114,   118,   119,   123,   124,   126,   127,
     128,   129,   130,   131,   132,   133,   136,   137,   140,   141,
     143,   144,   146,   147,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   159,   160,   161,   162,   164,   165,   166,
     167,   168,   170,   174,   175,   176,   178,   183,   184,   185,
     186,   187,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   205,   210,   211,   212,   213,   217,
     222,   223,   228,   236,   243,   250,   251,   252,   253,   256,
     261,   266,   271,   272,   273,   274,   285,   286,   287,   290,
     291,   294,   295,   296,   297,   300,   306,   312,   316,   317,
     321,   320,   334,   333,   348,   349,   357,   358,   359,   366,
     367,   368,   369,   370,   371,   376,   382,   387,   395,   396,
     397,   398,   399,   400,   401,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   417
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PUBLIC", "STATIC", "_CLASS", "VOID",
  "MAIN", "EXTENDS", "RETURN", "PRINT", "LENGTH", "THIS", "NEW", "IF",
  "ELSE", "WHILE", "INT", "INT_ERROR", "STRING", "STRING_ERROR",
  "DATATYPE", "PAR_OUVRANTE", "PAR_FERMANTE", "TAB_OUVRANTE",
  "TAB_FERMANTE", "ACO_OUVRANTE", "ACO_FERMANTE", "OPERATOR", "POINT",
  "POINT_VIRGULE", "VIRGULE", "DOUBLEQUOTE", "SINGLEQUOTE", "PLUS",
  "MOINS", "MULTIPLIER", "NOT", "AFFECTATION", "DIV", "COMPOP", "BOOL",
  "NUMBER", "ID", "$accept", "program", "ClassDeclarationRepeat",
  "ClassDeclaration", "ExtendsID", "VarDeclarationRepeat",
  "VarDeclaration", "QUOTE", "MethodDeclarationRepeat",
  "MethodDeclaration", "TIVTIRepeat", "VTIRepeat", "VT", "STATEMENTRepeat",
  "STATEMENT", "MainClass", "MainMethodParam", "ClassScope", "Type",
  "MethodType", "SectionC_E", "LogicOperator", "MathOperator",
  "SectionE_SCE", "UseFunction", "Expression", "$@1", "$@2", "epsilon", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    47,    47,
      48,    48,    48,    48,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    51,    51,    52,    52,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    60,    60,    60,    61,
      61,    61,    62,    62,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    65,
      65,    66,    66,    66,    66,    67,    67,    68,    68,    68,
      70,    69,    71,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     6,     6,     6,     6,     1,
       2,     2,     2,     1,     2,     1,     2,     6,     6,     6,
       3,     2,     4,     4,     1,     1,     2,     1,    12,    12,
      12,    12,    12,    12,    12,    12,     2,     1,     2,     1,
       2,     2,     2,     1,     1,     4,     4,     4,     7,     7,
       7,     7,     7,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     4,     4,     4,     4,     7,     7,     7,     7,
       7,     7,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,     4,     4,     4,     4,     4,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     2,     2,     2,
       0,     4,     0,     4,     3,     4,     4,     4,     3,     3,
       3,     5,     5,     5,     1,     2,     1,     1,     1,     5,
       5,     5,     5,     5,     4,     4,     4,     4,     4,     2,
       2,     3,     3,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    90,    91,    89,     1,
       0,     2,     0,     0,     9,     0,     0,     0,     0,     0,
      13,     3,     0,     0,     0,     0,    11,    12,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,    95,    98,    94,    97,    92,    96,    93,     0,     0,
       0,     0,    27,    14,    21,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,    26,    20,     0,    24,    25,     0,     0,
       7,     8,     5,     0,     0,     0,     0,     0,     0,     0,
     102,   105,   101,   104,    99,   103,   100,     0,     0,     0,
      23,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,    39,     0,     0,
       0,    18,    19,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    40,
      38,     0,     0,     0,     0,    85,    86,    87,    88,    84,
       0,     0,     0,     0,     0,     0,    44,     0,    43,    44,
      44,    44,    44,    44,    44,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,    44,    44,    44,     0,     0,   138,     0,     0,     0,
       0,   136,   134,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      72,     0,     0,     0,     0,     0,     0,     0,   137,     0,
       0,     0,     0,     0,   135,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,   152,     0,     0,     0,     0,     0,     0,     0,   151,
     129,   137,     0,    58,     0,     0,   130,   128,   117,     0,
       0,   111,   112,   113,   114,     0,   109,   110,     0,     0,
      59,    60,    61,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145,   146,     0,     0,     0,   147,
     148,   144,   126,     0,     0,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,    33,    34,    35,    28,
     140,   141,   142,     0,   139,     0,   132,     0,     0,   115,
     108,   133,   131,    67,     0,     0,     0,     0,     0,    68,
      69,    70,     0,    66,     0,     0,     0,   107,   106
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    19,    40,    41,    89,    60,    61,
     123,   145,   146,   206,   187,     4,   116,    13,    42,    79,
     419,   348,   345,   386,   290,   332,   291,   292,   188
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -149
static const yytype_int16 yypact[] =
{
     391,   -23,     0,   127,   394,   125,  -149,  -149,  -149,  -149,
      22,  -149,   394,   138,   219,    69,   140,   184,     6,   212,
    -149,  -149,   206,   226,   253,   170,  -149,  -149,  -149,  1026,
    1026,  1026,   279,   292,   307,   122,   273,    78,    92,   144,
     199,   628,   198,  -149,   199,   199,   319,   360,   386,   398,
     349,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   133,   245,
     397,   199,  -149,  -149,   399,  -149,   268,   407,     2,   414,
     420,   425,   426,   437,   264,   417,   151,   161,   165,   439,
     202,   444,  -149,  -149,  -149,    40,  -149,  -149,   441,   427,
    -149,  -149,  -149,     3,     3,     3,     3,     3,     3,     3,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,   101,   101,   101,
    -149,   354,  -149,   116,   445,    66,   449,   450,   455,   456,
     462,   473,     1,   474,    37,  -149,   477,   311,   471,   472,
     490,   496,   497,   286,   501,   504,   505,   507,   516,   517,
     518,   233,   519,   367,   367,  -149,    37,  -149,   520,   522,
     238,  -149,  -149,  -149,   506,   510,   511,   204,   215,   215,
     215,   215,   215,   215,   215,   215,   703,   769,  -149,  -149,
    -149,   769,   769,   769,   769,  -149,  -149,  -149,  -149,  -149,
     668,   329,   331,   339,   215,    54,   523,   783,  -149,   528,
     529,   530,   531,   532,   536,   537,   698,   967,   234,   234,
     234,   234,   234,   296,   296,   296,  -149,   970,   296,   296,
     296,   296,   296,   296,   988,   296,   296,   296,   538,  -149,
     550,   551,   553,   554,   556,   557,   558,   569,   571,   174,
     590,   596,   597,   598,  1002,   335,  -149,   197,   296,   566,
     296,  -149,  -149,  -149,  1231,  1248,  1261,   783,  1279,  1293,
    1311,  1325,  1343,  1357,   608,   783,  1191,  1374,  1387,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,   296,   296,   296,   296,   296,   296,   586,   589,  1031,
     260,   248,   340,  1405,  -149,  1051,   715,   733,   296,    20,
     403,   346,   243,   574,  -149,   804,   584,    34,    86,    18,
     578,    18,   783,   280,   783,   807,   826,   587,  -149,   118,
       4,   525,  -149,  1418,  1431,  1448,  1461,  1474,  1491,   296,
     593,  -149,   603,   296,   296,   296,   604,   323,   378,  -149,
    -149,   410,  1071,  -149,   845,  1504,   440,  -149,  -149,   732,
     732,  -149,  -149,  -149,  -149,   296,  -149,  -149,   296,   296,
    -149,  -149,  -149,  -149,   660,    72,  1091,  1007,  1025,   848,
     867,   886,   296,   296,   296,   296,   601,   606,   609,   612,
     613,   646,   236,  1517,  -149,  -149,  1534,  1547,  1560,  -149,
    -149,  -149,  -149,   783,   415,  -149,   618,  1211,   326,  1111,
    1131,  1577,   783,   296,  1151,   783,   608,   783,  1590,  1603,
    1620,  1633,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,   452,  -149,   889,  -149,   715,   296,  -149,
    -149,  -149,  -149,  -149,   908,  1651,   927,   930,   949,  -149,
    -149,  -149,   560,  -149,  1171,  1211,   489,  -149,  -149
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,   631,  -149,   635,    50,  -149,   322,   423,  -149,
     246,   514,  -149,  -148,  -122,  -149,   412,   650,    29,   594,
     -12,  -149,  -149,   312,  -149,   -20,  -149,  -149,    -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -156
static const yytype_int16 yytable[] =
{
      14,     7,   140,    91,   114,   364,    20,    27,    14,    20,
     186,   189,   190,   191,   192,   193,   194,   195,   197,   180,
       6,   336,   115,    17,   141,    43,    43,    43,   181,    92,
      18,   337,   182,  -155,   183,   235,    62,    43,   143,   219,
      62,    62,   365,     8,   184,   330,   236,   237,  -155,    28,
     230,   231,   232,   233,   234,   215,   238,    62,   207,   219,
    -155,   185,   214,   338,   351,     6,   219,   132,   144,   239,
     110,   240,    23,   355,   207,   241,   242,   331,   216,    52,
      44,    45,   181,   111,   236,   237,   182,   352,   183,   277,
     133,    63,   217,    54,   393,  -154,   204,  -154,   184,  -155,
    -154,  -154,    36,   125,   125,   125,  -154,   239,  -154,   240,
     205,  -154,  -154,   241,   242,   394,   353,   129,    37,   235,
     147,    53,    38,    49,  -155,   295,    15,     9,    50,   330,
     236,   237,   305,   306,    75,    55,   124,   124,   124,    17,
     238,    24,   147,    25,    39,    56,    18,   219,    86,    87,
      76,    16,   101,   239,    77,   240,   363,   219,   219,   241,
     242,   331,   103,    43,  -155,   334,   105,    43,    43,    43,
      43,    34,   168,   169,    35,   269,    78,   354,   357,   358,
     359,   360,   361,   244,   245,   246,   219,    57,   248,   249,
     250,   251,   252,   253,   102,   256,   257,   258,   280,    64,
      58,   270,    59,   108,   104,   178,   219,    30,   106,   219,
     219,   219,   219,   219,   281,   279,   180,   198,   283,    -4,
     285,   199,   200,   201,   202,   181,  -155,    26,    65,   182,
      32,   183,    31,   207,   165,   180,    66,   408,    29,   173,
     282,   184,  -155,  -155,   181,   100,    80,   179,   182,   324,
     183,   313,   314,   315,   316,   317,   318,    33,   185,   166,
     184,   415,    76,   409,   174,    98,    77,   219,   335,    85,
     424,   346,   325,   426,   427,   428,   219,   185,   219,   219,
     219,   355,   322,   347,   323,    46,    99,   156,    78,  -155,
     181,   330,   236,   237,   182,  -155,   183,   235,    47,   373,
      86,    87,   238,   376,   377,   378,   184,  -155,   236,   237,
      88,   157,   149,    48,   334,   239,    51,   240,   238,   387,
     387,   241,   242,   356,   380,   389,    69,   421,   390,   391,
     208,   239,   210,   240,   150,   279,   235,   241,   242,   243,
     212,   326,   398,   399,   400,   401,   381,   236,   237,   422,
      73,   209,   277,   211,   126,   127,    74,   238,  -154,  -154,
    -154,   213,   327,  -154,  -154,  -154,  -154,    70,    36,  -154,
     239,  -154,   240,   425,  -154,  -154,   241,   242,   278,   235,
     341,   342,   343,   420,    37,   344,    86,    87,    38,   330,
     236,   237,     1,    71,  -155,    10,     2,   434,   435,     2,
     238,  -153,  -153,  -153,   339,    72,  -153,  -153,  -153,  -153,
      39,  -118,  -153,   239,  -153,   240,   235,  -153,  -153,   241,
     242,   331,   437,   438,    82,   340,   330,   236,   237,    84,
     420,   420,  -118,   128,    90,   130,    93,   238,  -127,  -127,
    -127,  -119,    94,  -127,  -127,  -127,  -127,    95,    96,  -127,
     239,  -127,   240,   235,  -127,  -127,   241,   242,   331,    97,
     100,   107,  -119,   330,   236,   237,   109,    67,    68,   131,
     113,   112,   134,   135,   238,  -143,  -143,  -143,   136,   137,
    -143,  -143,  -143,  -143,    83,   138,  -143,   239,  -143,   240,
     180,  -143,  -143,   241,   242,   331,   139,   142,  -155,   181,
     148,   151,   152,   182,  -155,   183,   117,   118,   119,   120,
     121,   122,  -151,  -151,  -151,   184,  -155,  -151,  -151,   333,
     153,   154,   155,  -151,  -151,  -151,   235,   158,  -151,  -151,
     159,   160,   185,   161,   -65,   -65,   330,   236,   237,   -65,
     -65,   -65,   162,   163,   164,   167,   171,   238,   172,   175,
     218,   -65,   -65,   176,   177,   220,   221,   222,   223,   224,
     239,   235,   240,   225,   226,   259,   241,   242,   331,   -71,
     -71,   330,   236,   237,   -71,   -71,   -71,   260,   261,   355,
     262,   263,   238,   264,   265,   266,   -71,   -71,   181,   330,
     236,   237,   182,  -155,   183,   239,   267,   240,   268,   271,
     238,   241,   242,   331,   184,   272,   273,   274,   284,   180,
     319,   320,   349,   239,   350,   240,   374,  -155,   181,   241,
     242,   356,   182,  -155,   183,   362,   375,   379,   402,    36,
     203,  -155,   204,   403,   184,  -155,   404,  -155,  -155,   405,
     406,   416,  -155,    21,  -155,    37,   205,   235,    22,    38,
       5,   185,   388,    81,  -155,  -155,     0,   330,   236,   237,
     170,   180,     0,     0,     0,     0,     0,     0,   238,   180,
     181,    39,     0,   407,   182,   392,   183,     0,   181,     0,
       0,   239,   182,   240,   183,     0,   184,   241,   242,   331,
     203,     0,   204,     0,   184,  -155,     0,     0,     0,   180,
       0,     0,     0,   185,   196,     0,   205,     0,   181,     0,
       0,   185,   182,   181,   183,     0,   235,   182,     0,   183,
     203,     0,   204,     0,   184,   227,   330,   236,   237,   184,
    -155,     0,     0,   235,   180,     0,   205,   238,     0,     0,
       0,   185,  -155,   181,   236,   237,   185,   182,  -155,   183,
     239,     0,   240,     0,   238,  -116,   241,   242,   331,   184,
    -155,     0,     0,   333,     0,     0,     0,   239,     0,   240,
      36,     0,     0,   241,   242,   243,   185,     0,  -155,  -155,
       0,     0,     0,  -155,   180,  -155,    37,     0,     0,     0,
      38,     0,  -155,   181,     0,  -155,     0,   182,  -155,   183,
       0,     0,     0,     0,     0,   180,     0,     0,   180,   184,
    -155,     0,    39,   -46,   181,     0,   -47,   181,   182,   -46,
     183,   182,   -47,   183,     0,     0,   185,   180,     0,     0,
     184,   -46,     0,   184,   247,   -45,   181,     0,     0,     0,
     182,   -45,   183,     0,     0,     0,   180,   185,     0,   180,
     185,     0,   184,   -45,   -54,   181,     0,   -55,   181,   182,
     383,   183,   182,   -55,   183,     0,     0,     0,   180,   185,
       0,   184,   -54,     0,   184,   -55,   -56,   181,     0,     0,
       0,   182,   -56,   183,     0,     0,     0,   180,   185,     0,
     180,   185,     0,   184,   -56,   -53,   181,     0,   -49,   181,
     182,   -53,   183,   182,   -49,   183,     0,     0,     0,   180,
     185,     0,   184,   -53,     0,   184,   -49,   -50,   181,     0,
       0,     0,   182,   -50,   183,     0,     0,     0,   180,   185,
       0,   180,   185,     0,   184,   -50,   -51,   181,     0,   -52,
     181,   182,   -51,   183,   182,   -52,   183,     0,     0,     0,
     180,   185,     0,   184,   -51,     0,   184,   247,   -48,   181,
       0,     0,     0,   182,   -48,   183,     0,     0,   228,     0,
     185,   180,     0,   185,     0,   184,   -48,   -44,     0,     0,
     181,   -44,     0,   -44,   182,     0,   183,     0,     0,   254,
       0,     0,   185,   -44,   229,     0,   184,   247,   181,     0,
       0,     0,   182,   275,   183,     0,     0,     0,   180,     0,
     -44,   276,   -44,   185,   184,   255,   -44,   181,   -44,     0,
       0,   182,   395,   183,     0,     0,   396,    36,   -44,  -155,
       0,   185,   286,   184,     0,   181,     0,     0,     0,   182,
     397,   183,     0,    37,     0,   -44,     0,    38,     0,     0,
     185,   184,   286,  -155,   321,   288,  -150,     0,     0,  -122,
     289,  -150,  -150,     0,     0,  -120,  -120,  -120,   185,    39,
    -120,  -122,   286,     0,  -149,   288,  -149,     0,     0,  -122,
     289,  -149,  -149,     0,     0,  -120,  -120,  -120,     0,     0,
    -120,  -122,   215,     0,  -124,   288,   382,     0,     0,  -122,
     289,  -124,  -124,     0,     0,  -120,  -120,  -120,     0,     0,
    -120,  -122,   286,  -118,  -137,   216,  -137,     0,     0,  -137,
    -137,     0,     0,     0,     0,  -137,  -137,  -137,     0,   217,
    -137,  -137,   286,     0,  -121,   288,  -121,     0,     0,  -121,
     289,  -121,  -121,     0,     0,  -120,  -120,  -120,     0,     0,
    -120,  -121,   215,     0,  -123,   288,  -123,     0,     0,  -122,
     289,  -123,  -123,     0,     0,  -120,  -120,  -120,     0,     0,
    -120,  -122,   417,   320,  -137,   216,  -137,     0,     0,  -137,
    -137,     0,     0,     0,     0,  -137,  -137,  -137,     0,   217,
    -137,  -137,   286,     0,  -124,   288,   382,     0,     0,  -122,
     289,     0,   418,     0,     0,  -120,  -120,  -120,     0,     0,
    -120,  -122,   417,     0,     0,   288,   307,     0,     0,  -122,
     289,   308,     0,     0,     0,  -120,  -120,  -120,     0,     0,
    -120,  -122,   286,     0,  -155,   288,     0,     0,     0,  -122,
     289,     0,   418,     0,     0,  -120,  -120,  -120,     0,   286,
    -120,  -122,     0,     0,   287,   288,     0,     0,     0,  -122,
     289,     0,   286,     0,     0,  -120,  -120,  -120,     0,     0,
    -120,  -122,   288,   293,     0,     0,  -122,   289,     0,     0,
     286,     0,  -120,  -120,  -120,   288,     0,  -120,  -122,  -122,
     289,   294,     0,     0,   297,  -120,  -120,  -120,     0,     0,
    -120,  -122,   296,   288,     0,     0,     0,  -122,   289,     0,
       0,     0,   286,  -120,  -120,  -120,   298,   288,  -120,  -122,
       0,  -122,   289,     0,     0,     0,   300,  -120,  -120,  -120,
       0,     0,  -120,  -122,   299,   288,     0,     0,     0,  -122,
     289,     0,     0,     0,   286,  -120,  -120,  -120,   301,   288,
    -120,  -122,     0,  -122,   289,     0,     0,     0,   303,  -120,
    -120,  -120,     0,     0,  -120,  -122,   302,   288,     0,     0,
       0,  -122,   289,     0,     0,   309,     0,  -120,  -120,  -120,
     304,   288,  -120,  -122,     0,  -122,   289,     0,   311,     0,
       0,  -120,  -120,  -120,     0,     0,  -120,  -122,   288,   310,
       0,     0,  -122,   289,     0,     0,   328,     0,  -120,  -120,
    -120,   288,     0,  -120,  -122,  -122,   289,   312,     0,   286,
       0,  -120,  -120,  -120,     0,     0,  -120,  -122,   329,   288,
       0,     0,   286,  -122,   289,     0,     0,     0,     0,  -120,
    -120,  -120,   288,     0,  -120,  -122,  -122,   289,   366,   286,
       0,     0,  -120,  -120,  -120,   288,     0,  -120,  -122,  -122,
     289,   367,   286,     0,     0,  -120,  -120,  -120,     0,     0,
    -120,  -122,   288,     0,     0,   286,  -122,   289,   368,     0,
       0,     0,  -120,  -120,  -120,   288,     0,  -120,  -122,  -122,
     289,   369,   371,     0,     0,  -120,  -120,  -120,   288,     0,
    -120,  -122,  -122,   289,   370,   384,     0,     0,  -120,  -120,
    -120,     0,     0,  -120,  -122,   288,     0,     0,   286,  -122,
     289,   372,     0,     0,     0,  -120,  -120,  -120,   288,   385,
    -120,  -122,  -122,   289,     0,   286,     0,     0,  -120,  -120,
    -120,   288,   410,  -120,  -122,  -122,   289,     0,   286,     0,
       0,  -120,  -120,  -120,     0,     0,  -120,  -122,   288,   411,
       0,   413,  -122,   289,     0,     0,     0,     0,  -120,  -120,
    -120,   288,   412,  -120,  -122,  -122,   289,     0,   286,     0,
       0,  -120,  -120,  -120,   288,   414,  -120,  -122,  -122,   289,
       0,   286,     0,     0,  -120,  -120,  -120,     0,     0,  -120,
    -122,   288,     0,     0,   286,  -122,   289,   423,     0,     0,
       0,  -120,  -120,  -120,   288,     0,  -120,  -122,  -122,   289,
     429,   286,     0,     0,  -120,  -120,  -120,   288,     0,  -120,
    -122,  -122,   289,   430,   432,     0,     0,  -120,  -120,  -120,
       0,     0,  -120,  -122,   288,     0,     0,     0,  -122,   289,
     431,     0,   328,     0,  -120,  -120,  -120,   288,     0,  -120,
    -122,  -122,   289,   433,     0,     0,     0,  -120,  -120,  -120,
       0,     0,  -120,  -122,   436,   288,     0,     0,     0,  -122,
     289,     0,     0,     0,     0,  -120,  -120,  -120,     0,     0,
    -120,  -122
};

static const yytype_int16 yycheck[] =
{
       4,     1,     1,     1,     1,     1,    10,     1,    12,    13,
     158,   159,   160,   161,   162,   163,   164,   165,   166,     1,
      43,     1,    19,     1,    23,    29,    30,    31,    10,    27,
       8,    11,    14,    15,    16,     1,    40,    41,     1,   187,
      44,    45,    38,    43,    26,    11,    12,    13,    26,    43,
     198,   199,   200,   201,   202,     1,    22,    61,   180,   207,
      23,    43,   184,    43,    30,    43,   214,     1,    31,    35,
      30,    37,     3,     1,   196,    41,    42,    43,    24,     1,
      30,    31,    10,    43,    12,    13,    14,     1,    16,    17,
      24,    41,    38,     1,    22,    23,    24,    25,    26,    27,
      28,    29,     1,   107,   108,   109,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    30,     1,    17,     1,
     124,    43,    21,     1,    23,   247,     1,     0,     6,    11,
      12,    13,   254,   255,     1,    43,   107,   108,   109,     1,
      22,     1,   146,     3,    43,     1,     8,   295,    32,    33,
      17,    26,     1,    35,    21,    37,    38,   305,   306,    41,
      42,    43,     1,   167,    26,   287,     1,   171,   172,   173,
     174,     1,   143,   144,     4,     1,    43,   299,   300,   301,
     302,   303,   304,   203,   204,   205,   334,    43,   208,   209,
     210,   211,   212,   213,    43,   215,   216,   217,     1,     1,
       1,    27,     3,     1,    43,     1,   354,     1,    43,   357,
     358,   359,   360,   361,    17,   235,     1,   167,   238,     0,
     240,   171,   172,   173,   174,    10,    27,    43,    30,    14,
       4,    16,    26,   355,     1,     1,    38,     1,    26,     1,
      43,    26,    27,     9,    10,    43,     1,    43,    14,     1,
      16,   271,   272,   273,   274,   275,   276,     4,    43,    26,
      26,   383,    17,    27,    26,     1,    21,   415,   288,     1,
     392,    28,    24,   395,   396,   397,   424,    43,   426,   427,
     428,     1,    22,    40,    24,     6,    22,     1,    43,     9,
      10,    11,    12,    13,    14,    15,    16,     1,     6,   319,
      32,    33,    22,   323,   324,   325,    26,    27,    12,    13,
      42,    25,     1,     6,   436,    35,    43,    37,    22,   339,
     340,    41,    42,    43,     1,   345,     7,     1,   348,   349,
       1,    35,     1,    37,    23,   355,     1,    41,    42,    43,
       1,     1,   362,   363,   364,   365,    23,    12,    13,    23,
       1,    22,    17,    22,   108,   109,     7,    22,    23,    24,
      25,    22,    22,    28,    29,    30,    31,     7,     1,    34,
      35,    36,    37,   393,    39,    40,    41,    42,    43,     1,
      34,    35,    36,   387,    17,    39,    32,    33,    21,    11,
      12,    13,     1,     7,     0,     1,     5,   417,   418,     5,
      22,    23,    24,    25,     1,     7,    28,    29,    30,    31,
      43,     1,    34,    35,    36,    37,     1,    39,    40,    41,
      42,    43,   434,   435,    27,    22,    11,    12,    13,    30,
     434,   435,    22,   111,    27,   113,    22,    22,    23,    24,
      25,     1,    22,    28,    29,    30,    31,    22,    22,    34,
      35,    36,    37,     1,    39,    40,    41,    42,    43,    22,
      43,    22,    22,    11,    12,    13,    22,    44,    45,    24,
      43,    30,    23,    23,    22,    23,    24,    25,    23,    23,
      28,    29,    30,    31,    61,    23,    34,    35,    36,    37,
       1,    39,    40,    41,    42,    43,    23,    23,     9,    10,
      23,    30,    30,    14,    15,    16,    94,    95,    96,    97,
      98,    99,    23,    24,    25,    26,    27,    28,    29,    30,
      30,    25,    25,    34,    35,    36,     1,    26,    39,    40,
      26,    26,    43,    26,     9,    10,    11,    12,    13,    14,
      15,    16,    26,    26,    26,    26,    26,    22,    26,    43,
      27,    26,    27,    43,    43,    27,    27,    27,    27,    27,
      35,     1,    37,    27,    27,    27,    41,    42,    43,     9,
      10,    11,    12,    13,    14,    15,    16,    27,    27,     1,
      27,    27,    22,    27,    27,    27,    26,    27,    10,    11,
      12,    13,    14,    15,    16,    35,    27,    37,    27,     9,
      22,    41,    42,    43,    26,     9,     9,     9,    42,     1,
      24,    22,    38,    35,    30,    37,    23,     9,    10,    41,
      42,    43,    14,    15,    16,    38,    23,    23,    27,     1,
      22,     3,    24,    27,    26,    27,    27,     9,    10,    27,
      27,    23,    14,    12,    16,    17,    38,     1,    13,    21,
       0,    43,   340,    59,    26,    27,    -1,    11,    12,    13,
     146,     1,    -1,    -1,    -1,    -1,    -1,    -1,    22,     1,
      10,    43,    -1,    27,    14,    15,    16,    -1,    10,    -1,
      -1,    35,    14,    37,    16,    -1,    26,    41,    42,    43,
      22,    -1,    24,    -1,    26,    27,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    43,     1,    -1,    38,    -1,    10,    -1,
      -1,    43,    14,    10,    16,    -1,     1,    14,    -1,    16,
      22,    -1,    24,    -1,    26,    27,    11,    12,    13,    26,
      27,    -1,    -1,     1,     1,    -1,    38,    22,    -1,    -1,
      -1,    43,     9,    10,    12,    13,    43,    14,    15,    16,
      35,    -1,    37,    -1,    22,    23,    41,    42,    43,    26,
      27,    -1,    -1,    30,    -1,    -1,    -1,    35,    -1,    37,
       1,    -1,    -1,    41,    42,    43,    43,    -1,     9,    10,
      -1,    -1,    -1,    14,     1,    16,    17,    -1,    -1,    -1,
      21,    -1,     9,    10,    -1,    26,    -1,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     1,    26,
      27,    -1,    43,     9,    10,    -1,     9,    10,    14,    15,
      16,    14,    15,    16,    -1,    -1,    43,     1,    -1,    -1,
      26,    27,    -1,    26,    27,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    -1,    -1,     1,    43,    -1,     1,
      43,    -1,    26,    27,     9,    10,    -1,     9,    10,    14,
      15,    16,    14,    15,    16,    -1,    -1,    -1,     1,    43,
      -1,    26,    27,    -1,    26,    27,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    -1,    -1,     1,    43,    -1,
       1,    43,    -1,    26,    27,     9,    10,    -1,     9,    10,
      14,    15,    16,    14,    15,    16,    -1,    -1,    -1,     1,
      43,    -1,    26,    27,    -1,    26,    27,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    -1,    -1,     1,    43,
      -1,     1,    43,    -1,    26,    27,     9,    10,    -1,     9,
      10,    14,    15,    16,    14,    15,    16,    -1,    -1,    -1,
       1,    43,    -1,    26,    27,    -1,    26,    27,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    -1,     1,    -1,
      43,     1,    -1,    43,    -1,    26,    27,    10,    -1,    -1,
      10,    14,    -1,    16,    14,    -1,    16,    -1,    -1,     1,
      -1,    -1,    43,    26,    27,    -1,    26,    27,    10,    -1,
      -1,    -1,    14,     1,    16,    -1,    -1,    -1,     1,    -1,
      43,     9,    10,    43,    26,    27,    14,    10,    16,    -1,
      -1,    14,    15,    16,    -1,    -1,     1,     1,    26,     3,
      -1,    43,     1,    26,    -1,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    17,    -1,    43,    -1,    21,    -1,    -1,
      43,    26,     1,    27,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    43,    43,
      39,    40,     1,    -1,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    -1,    -1,
      39,    40,     1,    -1,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    -1,    -1,
      39,    40,     1,    22,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    34,    35,    36,    -1,    38,
      39,    40,     1,    -1,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    -1,    -1,
      39,    40,     1,    -1,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    -1,    -1,
      39,    40,     1,    22,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    34,    35,    36,    -1,    38,
      39,    40,     1,    -1,    23,    24,    25,    -1,    -1,    28,
      29,    -1,    31,    -1,    -1,    34,    35,    36,    -1,    -1,
      39,    40,     1,    -1,    -1,    24,    25,    -1,    -1,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    -1,    -1,
      39,    40,     1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    -1,    -1,    34,    35,    36,    -1,     1,
      39,    40,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,     1,    -1,    -1,    34,    35,    36,    -1,    -1,
      39,    40,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
       1,    -1,    34,    35,    36,    24,    -1,    39,    40,    28,
      29,    30,    -1,    -1,     1,    34,    35,    36,    -1,    -1,
      39,    40,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,     1,    34,    35,    36,    23,    24,    39,    40,
      -1,    28,    29,    -1,    -1,    -1,     1,    34,    35,    36,
      -1,    -1,    39,    40,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,     1,    34,    35,    36,    23,    24,
      39,    40,    -1,    28,    29,    -1,    -1,    -1,     1,    34,
      35,    36,    -1,    -1,    39,    40,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    -1,     1,    -1,    34,    35,    36,
      23,    24,    39,    40,    -1,    28,    29,    -1,     1,    -1,
      -1,    34,    35,    36,    -1,    -1,    39,    40,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,     1,    -1,    34,    35,
      36,    24,    -1,    39,    40,    28,    29,    30,    -1,     1,
      -1,    34,    35,    36,    -1,    -1,    39,    40,    23,    24,
      -1,    -1,     1,    28,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    24,    -1,    39,    40,    28,    29,    30,     1,
      -1,    -1,    34,    35,    36,    24,    -1,    39,    40,    28,
      29,    30,     1,    -1,    -1,    34,    35,    36,    -1,    -1,
      39,    40,    24,    -1,    -1,     1,    28,    29,    30,    -1,
      -1,    -1,    34,    35,    36,    24,    -1,    39,    40,    28,
      29,    30,     1,    -1,    -1,    34,    35,    36,    24,    -1,
      39,    40,    28,    29,    30,     1,    -1,    -1,    34,    35,
      36,    -1,    -1,    39,    40,    24,    -1,    -1,     1,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    24,    25,
      39,    40,    28,    29,    -1,     1,    -1,    -1,    34,    35,
      36,    24,    25,    39,    40,    28,    29,    -1,     1,    -1,
      -1,    34,    35,    36,    -1,    -1,    39,    40,    24,    25,
      -1,     1,    28,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    24,    25,    39,    40,    28,    29,    -1,     1,    -1,
      -1,    34,    35,    36,    24,    25,    39,    40,    28,    29,
      -1,     1,    -1,    -1,    34,    35,    36,    -1,    -1,    39,
      40,    24,    -1,    -1,     1,    28,    29,    30,    -1,    -1,
      -1,    34,    35,    36,    24,    -1,    39,    40,    28,    29,
      30,     1,    -1,    -1,    34,    35,    36,    24,    -1,    39,
      40,    28,    29,    30,     1,    -1,    -1,    34,    35,    36,
      -1,    -1,    39,    40,    24,    -1,    -1,    -1,    28,    29,
      30,    -1,     1,    -1,    34,    35,    36,    24,    -1,    39,
      40,    28,    29,    30,    -1,    -1,    -1,    34,    35,    36,
      -1,    -1,    39,    40,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    34,    35,    36,    -1,    -1,
      39,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    45,    59,    61,    43,     1,    43,     0,
       1,    46,    47,    61,    72,     1,    26,     1,     8,    48,
      72,    46,    48,     3,     1,     3,    43,     1,    43,    26,
       1,    26,     4,     4,     1,     4,     1,    17,    21,    43,
      49,    50,    62,    72,    49,    49,     6,     6,     6,     1,
       6,    43,     1,    43,     1,    43,     1,    43,     1,     3,
      52,    53,    72,    49,     1,    30,    38,    52,    52,     7,
       7,     7,     7,     1,     7,     1,    17,    21,    43,    63,
       1,    63,    27,    52,    30,     1,    32,    33,    42,    51,
      27,     1,    27,    22,    22,    22,    22,    22,     1,    22,
      43,     1,    43,     1,    43,     1,    43,    22,     1,    22,
      30,    43,    30,    43,     1,    19,    60,    60,    60,    60,
      60,    60,    60,    54,    62,    72,    54,    54,    51,     1,
      51,    24,     1,    24,    23,    23,    23,    23,    23,    23,
       1,    23,    23,     1,    31,    55,    56,    72,    23,     1,
      23,    30,    30,    30,    25,    25,     1,    25,    26,    26,
      26,    26,    26,    26,    26,     1,    26,    26,    62,    62,
      55,    26,    26,     1,    26,    43,    43,    43,     1,    43,
       1,    10,    14,    16,    26,    43,    57,    58,    72,    57,
      57,    57,    57,    57,    57,    57,     1,    57,    49,    49,
      49,    49,    49,    22,    24,    38,    57,    58,     1,    22,
       1,    22,     1,    22,    58,     1,    24,    38,    27,    57,
      27,    27,    27,    27,    27,    27,    27,    27,     1,    27,
      57,    57,    57,    57,    57,     1,    12,    13,    22,    35,
      37,    41,    42,    43,    69,    69,    69,    27,    69,    69,
      69,    69,    69,    69,     1,    27,    69,    69,    69,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,     1,
      27,     9,     9,     9,     9,     1,     9,    17,    43,    69,
       1,    17,    43,    69,    42,    69,     1,    23,    24,    29,
      68,    70,    71,    25,    30,    58,    23,     1,    23,    23,
       1,    23,    23,     1,    23,    58,    58,    25,    30,     1,
      25,     1,    30,    69,    69,    69,    69,    69,    69,    24,
      22,    23,    22,    24,     1,    24,     1,    22,     1,    23,
      11,    43,    69,    30,    58,    69,     1,    11,    43,     1,
      22,    34,    35,    36,    39,    66,    28,    40,    65,    38,
      30,    30,     1,    30,    58,     1,    43,    58,    58,    58,
      58,    58,    38,    38,     1,    38,    30,    30,    30,    30,
      30,     1,    30,    69,    23,    23,    69,    69,    69,    23,
       1,    23,    25,    15,     1,    25,    67,    69,    67,    69,
      69,    69,    15,    22,    43,    15,     1,    15,    69,    69,
      69,    69,    27,    27,    27,    27,    27,    27,     1,    27,
      25,    25,    25,     1,    25,    58,    23,     1,    31,    64,
      72,     1,    23,    30,    58,    69,    58,    58,    58,    30,
      30,    30,     1,    30,    69,    69,    23,    64,    64
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyser.y"
    { 
                            check_main(); 
                        ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 86 "SyntaxicAnalyser.y"
    {yyerror (" erreur! mot cle class errone dans la line : "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 87 "SyntaxicAnalyser.y"
    { yyerror (" erreur! acolade ouvarnte  manquant dans la line :  "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 88 "SyntaxicAnalyser.y"
    { yyerror (" erreur! acolade FERMANT  manquant dans la line :   "); YYABORT;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 93 "SyntaxicAnalyser.y"
    {
                            insertSymbol((yyvsp[(2) - (2)]),EXTENSION,CLASS,"IDENT",0,classID);
                            level = 0;
                        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 97 "SyntaxicAnalyser.y"
    { yyerror ("  mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 98 "SyntaxicAnalyser.y"
    { yyerror ("erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 99 "SyntaxicAnalyser.y"
    {level = 0;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 108 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 109 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 110 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 111 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 114 "SyntaxicAnalyser.y"
    {yyerror ("valeur manquante  dans la line :"); YYABORT;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 127 "SyntaxicAnalyser.y"
    { yyerror (" mot cle Public class manquant ou errone dans la line "); YYABORT;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 128 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 129 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 130 "SyntaxicAnalyser.y"
    { yyerror (" acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 131 "SyntaxicAnalyser.y"
    { yyerror (" mot cle Return manquant ou errone dans la line "); YYABORT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 132 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 133 "SyntaxicAnalyser.y"
    { yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 136 "SyntaxicAnalyser.y"
    { isParam = false; level = 1;;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 137 "SyntaxicAnalyser.y"
    { isParam = false; level = 1;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 144 "SyntaxicAnalyser.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 151 "SyntaxicAnalyser.y"
    { yyerror (" acolade ouvrant  manquant dans la line : "); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 152 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 154 "SyntaxicAnalyser.y"
    { yyerror (" If acolade  manquante dans la line : "); YYABORT;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 155 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 156 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 157 "SyntaxicAnalyser.y"
    { yyerror (" mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 160 "SyntaxicAnalyser.y"
    { yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 161 "SyntaxicAnalyser.y"
    { yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 162 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 165 "SyntaxicAnalyser.y"
    { yyerror ("system.out.println errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 166 "SyntaxicAnalyser.y"
    { yyerror (" parenthese  ouvrante manquant dans la line:"); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 167 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 168 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 171 "SyntaxicAnalyser.y"
    {
                            check_declarations((yyvsp[(1) - (4)]),ASSIGNMENT,VARIABLE,level,classID)
                        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 174 "SyntaxicAnalyser.y"
    { yyerror (" erreur identifier errone dans la line :  "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 175 "SyntaxicAnalyser.y"
    { yyerror (" AFFECTATION errone dans la line : "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 176 "SyntaxicAnalyser.y"
    { yyerror ("POINT_VIRGULE  manquant dans la line : "); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 179 "SyntaxicAnalyser.y"
    {
                            check_declarations((yyvsp[(1) - (7)]),ASSIGNMENT,VARIABLE,level,classID)
                            
                        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 183 "SyntaxicAnalyser.y"
    { yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 184 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 185 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 186 "SyntaxicAnalyser.y"
    { yyerror (" AFFECTATION errone dans la line :  "); YYABORT;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 187 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE  manquant dans la line :  "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 192 "SyntaxicAnalyser.y"
    { yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 193 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Public errone ou bien manquant on line :   "); YYABORT;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 194 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Static errone ou bien manquant on line : "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 195 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Void errone ou bien manquant on line : "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 196 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Main errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 197 "SyntaxicAnalyser.y"
    { yyerror ("parenthese ouvrante manquante dans la line:  "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 198 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 199 "SyntaxicAnalyser.y"
    { yyerror ("acolade ouvrant manquant dans la line:  "); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 200 "SyntaxicAnalyser.y"
    { yyerror (" STATEMENT manquant on line :  "); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 201 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 202 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 206 "SyntaxicAnalyser.y"
    { 
                            insertSymbol("main",DECLARATION,METHOD,"void",0,classID);
                            set_param((yyvsp[(4) - (4)]),strcat((yyvsp[(1) - (4)]),"[]"));   
                        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 210 "SyntaxicAnalyser.y"
    { yyerror ("mot cle String errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 211 "SyntaxicAnalyser.y"
    { yyerror ("acolade ouvrant manquant dans la line:  "); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 212 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 213 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 218 "SyntaxicAnalyser.y"
    {   
                            classID +=1; 
                            check_class((yyvsp[(2) - (2)]),classID);
                        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 222 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Class errone ou bien manquant on line :"); YYABORT;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 223 "SyntaxicAnalyser.y"
    { yyerror (" identifier errone dans la line : "); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 229 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                                
                        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 237 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 244 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                        ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 250 "SyntaxicAnalyser.y"
    { yyerror (" type non valide dans la ligne : "); YYABORT;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 251 "SyntaxicAnalyser.y"
    { yyerror (" identifier errone dans la line :"); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 252 "SyntaxicAnalyser.y"
    { yyerror (" identifier errone dans la line : "); YYABORT;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 253 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line : "); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 257 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 262 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 267 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 271 "SyntaxicAnalyser.y"
    { yyerror (" type non valide dans la ligne :"); YYABORT;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 272 "SyntaxicAnalyser.y"
    { yyerror (" identifier errone dans la line : "); YYABORT;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 273 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line : "); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 274 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 286 "SyntaxicAnalyser.y"
    { yyerror (" VIRGULE manquant dans la line : "); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 301 "SyntaxicAnalyser.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 306 "SyntaxicAnalyser.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 313 "SyntaxicAnalyser.y"
    { 
                            method_call_index = insertSymbol((yyvsp[(2) - (2)]),USE,METHOD,"DOT_IDENT",0,classID);
                        ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 316 "SyntaxicAnalyser.y"
    { yyerror (" POINT manquant dans la line : "); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 317 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line :  "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 321 "SyntaxicAnalyser.y"
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 327 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1){
                                remove_param(method_call_index);
                                insert_param(method_call_index,"EXP","int");
                            }                              
                        ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 334 "SyntaxicAnalyser.y"
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 340 "SyntaxicAnalyser.y"
    {
                          
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                                insert_param(method_call_index,"EXP","bool");
                            }
                                
                        ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 348 "SyntaxicAnalyser.y"
    { yyerror (" Comparison operator manquant dans la line : "); YYABORT;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 350 "SyntaxicAnalyser.y"
    {
                            
                            if(method_call_index != -1) {
                                insert_param(method_call_index,"EXP","int[]");
                            }
      
                        ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 357 "SyntaxicAnalyser.y"
    { yyerror (" erreur tabulation ouvrante manquante dans la line : "); YYABORT;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 358 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation fermante manquante dans la line : "); YYABORT;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 360 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1) {
                                insert_param(method_call_index,"EXP","int");
                            }
                
                        ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 366 "SyntaxicAnalyser.y"
    { yyerror (" POINT manquant dans la line : "); YYABORT;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 367 "SyntaxicAnalyser.y"
    { yyerror ("LONGEUR manquant dans la line :"); YYABORT;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 369 "SyntaxicAnalyser.y"
    { yyerror ("parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 370 "SyntaxicAnalyser.y"
    { yyerror ("parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 372 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,(yyvsp[(1) - (1)]),"int");
                        ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 377 "SyntaxicAnalyser.y"
    {
                            
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,strcat("-",(yyvsp[(2) - (2)])),"int");
                        ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 383 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,(yyvsp[(1) - (1)]),"bool");
                        ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 388 "SyntaxicAnalyser.y"
    {

                            if(method_call_index != -1 && expression_level < 1) 
                              insert_param(method_call_index,(yyvsp[(1) - (1)]),"IDENT");

                            check_declarations((yyvsp[(1) - (1)]),USE,VARIABLE,level,classID)
                        ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 397 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle New errone dans la line:   "); YYABORT;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 398 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle Integer errone dans la line:  "); YYABORT;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 399 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation ouvrante manquante dans la line : "); YYABORT;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 400 "SyntaxicAnalyser.y"
    { yyerror (" erreur tabulation fermante manquante dans la line :  "); YYABORT;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 402 "SyntaxicAnalyser.y"
    {
                            insertSymbol((yyvsp[(2) - (4)]),INSTANTIATION,VARIABLE,"NewID",0,classID);                          
                        ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 405 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle New errone dans la line:  "); YYABORT;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 406 "SyntaxicAnalyser.y"
    { yyerror ("  erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 407 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 408 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 410 "SyntaxicAnalyser.y"
    { yyerror ("erreur Not manquant dans la line :  "); YYABORT;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 412 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 413 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 414 "SyntaxicAnalyser.y"
    { yyerror (" valeur manquante dans la ligne :  "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2900 "SyntaxicAnalyser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 420 "SyntaxicAnalyser.y"
 

    int yyerror(char const *msg) {
        
        fprintf(stderr, "%s %d\n", msg,line);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        yyparse();
    }
