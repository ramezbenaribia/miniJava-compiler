
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


    



/* Line 189 of yacc.c  */
#line 100 "SyntaxicAnalyser.tab.c"

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
#line 185 "SyntaxicAnalyser.tab.c"

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
#define YYLAST   1724

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  158
/* YYNRULES -- Number of states.  */
#define YYNSTATES  444

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
     729,   733,   739,   745,   751,   753,   756,   758,   762,   766,
     770,   772,   774,   780,   786,   792,   798,   804,   809,   814,
     819,   824,   829,   832,   835,   839,   843,   847,   849
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
      -1,    42,    -1,    35,    42,    -1,    41,    -1,    51,    43,
      51,    -1,    51,    43,     1,    -1,     1,    43,    51,    -1,
      43,    -1,    12,    -1,    13,    17,    24,    69,    25,    -1,
       1,    17,    24,    69,    25,    -1,    13,     1,    24,    69,
      25,    -1,    13,    17,     1,    69,    25,    -1,    13,    17,
      24,    69,     1,    -1,    13,    43,    22,    23,    -1,     1,
      43,    22,    23,    -1,    13,     1,    22,    23,    -1,    13,
      43,     1,    23,    -1,    13,    43,    22,     1,    -1,    37,
      69,    -1,     1,    69,    -1,    22,    69,    23,    -1,     1,
      69,    23,    -1,    22,    69,     1,    -1,     1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    80,    81,    84,    85,    86,    87,    88,
      91,    96,    97,    98,   101,   102,   105,   106,   107,   108,
     109,   110,   112,   113,   117,   118,   122,   123,   125,   126,
     127,   128,   129,   130,   131,   132,   135,   136,   139,   140,
     142,   143,   145,   146,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   158,   159,   160,   161,   163,   164,   165,
     166,   167,   169,   173,   174,   175,   177,   182,   183,   184,
     185,   186,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   204,   209,   210,   211,   212,   216,
     221,   222,   227,   235,   242,   249,   250,   251,   252,   255,
     260,   265,   270,   271,   272,   273,   284,   285,   286,   289,
     290,   293,   294,   295,   296,   299,   305,   311,   315,   316,
     320,   319,   333,   332,   347,   348,   356,   357,   358,   365,
     366,   367,   368,   369,   370,   375,   381,   386,   387,   388,
     390,   399,   400,   401,   402,   403,   404,   405,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   421
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
      69,    69,    69,    69,    69,    69,    69,    69,    72
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
       3,     5,     5,     5,     1,     2,     1,     3,     3,     3,
       1,     1,     5,     5,     5,     5,     5,     4,     4,     4,
       4,     4,     2,     2,     3,     3,     3,     1,     0
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
      44,    44,    44,    44,     0,     0,   141,     0,     0,     0,
       0,   136,   134,   140,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    72,     0,     0,     0,     0,     0,     0,     0,   140,
       0,     0,     0,     0,     0,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,     0,     0,     0,    62,     0,     0,     0,     0,     0,
       0,     0,     0,   139,   155,     0,     0,     0,     0,     0,
       0,     0,   154,   138,   137,   129,   140,     0,    58,     0,
       0,   130,   128,   117,     0,     0,   111,   112,   113,   114,
       0,   109,   110,     0,     0,    59,    60,    61,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     149,     0,     0,     0,   150,   151,   147,   126,     0,     0,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    28,   143,   144,   145,     0,   142,
       0,   132,     0,     0,   115,   108,   133,   131,    67,     0,
       0,     0,     0,     0,    68,    69,    70,     0,    66,     0,
       0,     0,   107,   106
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    19,    40,    41,   244,    60,    61,
     123,   145,   146,   206,   187,     4,   116,    13,    42,    79,
     424,   353,   350,   391,   292,   337,   293,   294,   188
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -174
static const yytype_int16 yypact[] =
{
      14,   -25,    30,    22,   493,    69,  -174,  -174,  -174,  -174,
       9,  -174,   493,   139,   220,   229,    73,   112,    48,   225,
    -174,  -174,   232,   289,   293,   202,  -174,  -174,  -174,   641,
     641,   641,   295,   311,   331,   397,   332,    76,   105,   114,
     287,   268,   245,  -174,   287,   287,   367,   374,   377,   390,
      13,  -174,  -174,  -174,  -174,  -174,  -174,  -174,    68,   209,
     405,   287,  -174,  -174,   379,  -174,   254,   406,    23,   409,
     412,   420,   429,   434,   201,   414,   151,   152,   155,   465,
     157,   467,  -174,  -174,  -174,   -14,  -174,  -174,   469,   452,
    -174,  -174,  -174,   372,   372,   372,   372,   372,   372,   372,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,    11,    11,    11,
    -174,   185,  -174,   224,   472,   140,   474,   477,   482,   483,
     500,   501,   326,   502,   230,  -174,   503,   327,   504,   505,
     506,   507,   508,   135,   511,   517,   534,   535,   538,   539,
     540,   272,   544,   233,   233,  -174,   230,  -174,   545,   546,
     273,  -174,  -174,  -174,   487,   488,   499,   158,   353,   353,
     353,   353,   353,   353,   353,   353,   982,   195,  -174,  -174,
    -174,   195,   195,   195,   195,  -174,  -174,  -174,  -174,  -174,
      70,   299,   356,   407,   353,   175,   547,   309,  -174,   548,
     557,   558,   559,   564,   567,   568,   800,   985,  1004,  1004,
    1004,  1004,  1004,   770,   770,   770,  -174,  1005,   770,   770,
     770,   770,   770,   770,  1023,   770,   770,   770,   570,  -174,
     579,   580,   581,   582,   583,   585,   586,   587,   590,   148,
     609,   610,   611,   614,  1026,   149,  -174,     4,   770,   531,
     770,  -174,  -174,  -174,   584,  1264,  1281,  1294,   309,  1312,
    1326,  1344,  1358,  1376,  1390,    29,   309,  1232,  1407,  1420,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,   770,   770,   770,   770,   770,   770,   604,   280,
    1110,    66,   302,   419,  1438,  -174,  1128,   259,   737,   108,
     770,    67,   425,   404,    53,   591,  -174,   819,   613,   675,
       3,   111,   659,   111,   309,   329,   309,   838,   841,   603,
    -174,   702,    41,   589,  -174,  1451,  1464,  1481,  1494,  1507,
    1524,   770,   622,  -174,  -174,   625,   770,   770,   770,   626,
     345,   382,  -174,  -174,  -174,  -174,   444,  1146,  -174,   860,
    1537,   466,  -174,  -174,   754,   754,  -174,  -174,  -174,  -174,
     770,  -174,  -174,   770,   770,  -174,  -174,  -174,  -174,  1044,
     436,  1165,  1062,  1070,   879,   882,   901,   770,   770,   770,
     770,   620,   627,   628,   636,   637,   719,   192,  1550,  -174,
    -174,  1567,  1580,  1593,  -174,  -174,  -174,  -174,   309,   479,
    -174,   629,  1250,   364,  1183,  1201,  1610,   309,   770,  1092,
     309,    29,   309,  1623,  1636,  1653,  1666,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,   516,  -174,
     920,  -174,   737,   770,  -174,  -174,  -174,  -174,  -174,   923,
    1684,   942,   961,   964,  -174,  -174,  -174,   624,  -174,  1219,
    1250,   553,  -174,  -174
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,   665,  -174,   640,   -28,  -174,   -65,   383,  -174,
     239,   532,  -174,  -100,  -173,  -174,   387,   679,   172,   621,
     -50,  -174,  -174,   337,  -174,    32,  -174,  -174,    -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -159
static const yytype_int16 yytable[] =
{
      14,    89,    44,    45,   357,   281,    20,   207,    14,    20,
      17,   214,    36,    63,    73,     1,   110,    18,     6,     2,
      74,   282,     9,   207,    91,    43,    43,    43,    37,   111,
     180,     7,    38,   358,  -158,  -158,    62,    43,  -158,   181,
      62,    62,   369,   182,  -158,   183,   128,   283,   130,    27,
      92,   203,     6,   204,    39,   184,  -158,    62,   186,   189,
     190,   191,   192,   193,   194,   195,   197,   205,   341,    75,
      15,   180,   185,     8,    24,   297,    25,    52,   342,   370,
     181,   351,   307,   308,   182,    76,   183,   219,   325,    77,
     326,    28,   203,   352,   204,    16,   184,  -158,   230,   231,
     232,   233,   234,   125,   125,   125,    54,   219,   205,   180,
     343,    78,   180,   185,   219,    56,   339,  -158,   181,    53,
     147,   181,   182,  -158,   183,   182,  -158,   183,   359,   362,
     363,   364,   365,   366,   184,  -158,   156,   184,   338,   198,
      17,   132,   147,   199,   200,   201,   202,    18,    55,   270,
     235,   185,   101,   103,   185,    26,   105,    57,   108,   178,
     157,   236,   237,    43,   133,  -158,   278,    43,    43,    43,
      43,   238,  -157,  -157,  -157,   271,   215,  -157,  -157,  -157,
    -157,    86,    87,  -157,   239,  -157,   240,   207,  -157,  -157,
     241,   242,   279,   413,   102,   104,    36,   219,   106,   216,
     100,   179,    98,    34,  -158,  -158,    35,   219,   219,  -158,
      80,  -158,    37,   217,   323,   420,    38,    86,    87,   414,
      -4,  -158,   334,    99,   429,   129,    76,   431,   432,   433,
      77,   143,    23,    30,    36,   245,   246,   247,    39,   219,
     249,   250,   251,   252,   253,   254,    64,   257,   258,   259,
      37,    29,    78,  -158,    38,    85,    86,    87,    31,   219,
     333,   144,   219,   219,   219,   219,   219,   280,   339,    36,
     284,  -158,   286,   165,   173,    65,    39,  -158,  -158,   124,
     124,   124,  -158,    66,  -158,    37,    86,    87,    58,    38,
      59,    86,    87,    32,  -158,  -158,    88,    33,   166,   174,
     208,    46,   322,   327,   315,   316,   317,   318,   319,   320,
     180,    39,    86,    87,  -158,   168,   169,    47,  -158,   181,
     219,   209,   340,   182,  -158,   183,   328,   140,   149,   219,
     360,   219,   219,   219,   323,   184,  -158,    48,  -158,   181,
     335,   236,   237,   182,  -158,   183,   385,   126,   127,   141,
     150,   238,   185,   378,   180,   184,  -158,   210,   381,   382,
     383,    86,    87,   181,   239,   426,   240,   182,   386,   183,
     241,   242,   361,   114,    69,    51,   392,   392,   211,   184,
    -158,    70,   394,   235,    71,   395,   396,   427,   425,   442,
     443,   115,   280,   335,   236,   237,   185,    72,    49,   403,
     404,   405,   406,    50,   238,  -156,  -156,  -156,   212,    84,
    -156,  -156,  -156,  -156,    86,    87,  -156,   239,  -156,   240,
     329,  -156,  -156,   241,   242,   336,   344,    67,    68,   213,
     430,    93,    82,    90,    94,   425,   425,   360,   346,   347,
     348,   330,    95,   349,    83,  -118,   181,   345,   236,   237,
     182,    96,   183,   278,   439,   440,    97,   100,   398,  -157,
     204,  -157,   184,  -158,  -157,  -157,  -118,  -119,    86,    87,
    -157,   239,  -157,   240,   205,  -157,  -157,   241,   242,   399,
     235,   117,   118,   119,   120,   121,   122,   107,  -119,   109,
     335,   236,   237,  -158,    10,   113,   131,   134,     2,   112,
     135,   238,  -127,  -127,  -127,   136,   137,  -127,  -127,  -127,
    -127,    86,    87,  -127,   239,  -127,   240,   235,  -127,  -127,
     241,   242,   336,   138,   139,   142,   148,   335,   236,   237,
     175,   176,   154,   155,   151,   152,   153,   158,   238,  -146,
    -146,  -146,   177,   159,  -146,  -146,  -146,  -146,    86,    87,
    -146,   239,  -146,   240,   180,  -146,  -146,   241,   242,   336,
     160,   161,  -158,   181,   162,   163,   164,   182,  -158,   183,
     167,   171,   172,   285,   218,   220,  -154,  -154,  -154,   184,
    -158,  -154,  -154,   338,   221,   222,   223,  -154,  -154,  -154,
     235,   224,  -154,  -154,   225,   226,   185,   260,   -65,   -65,
     335,   236,   237,   -65,   -65,   -65,   261,   262,   263,   264,
     265,   238,   266,   267,   268,   -65,   -65,   269,   272,   273,
     274,    86,    87,   275,   239,   235,   240,   287,   321,   354,
     241,   242,   336,   -71,   -71,   335,   236,   237,   -71,   -71,
     -71,   367,    36,   355,  -158,   379,   238,   407,   380,   384,
     -71,   -71,   421,    22,   408,   409,    86,    87,    37,   239,
     360,   240,    38,   410,   411,   241,   242,   336,  -158,   181,
     335,   236,   237,   182,  -158,   183,   235,    21,   170,     5,
      81,   238,   393,     0,    39,   184,   335,   236,   237,     0,
       0,    86,    87,     0,   239,     0,   240,   238,     0,     0,
     241,   242,   361,   235,     0,   356,     0,    86,    87,     0,
     239,     0,   240,   335,   236,   237,   241,   242,   336,     0,
     235,     0,     0,     0,   238,     0,     0,     0,     0,     0,
     335,   236,   237,     0,    86,    87,     0,   239,   235,   240,
     368,   238,     0,   241,   242,   336,   412,     0,   335,   236,
     237,    86,    87,     0,   239,   235,   240,     0,     0,   238,
     241,   242,   336,     0,     0,     0,   236,   237,     0,    86,
      87,   235,   239,     0,   240,     0,   238,  -116,   241,   242,
     336,     0,   236,   237,     0,     0,    86,    87,     0,   239,
       0,   240,   238,     0,     0,   241,   242,   243,     0,     0,
       0,   180,    86,    87,     0,   239,     0,   240,     0,     0,
     181,   241,   242,   243,   182,     0,   183,     0,     0,     0,
     180,     0,   203,     0,   204,     0,   184,   227,   -46,   181,
       0,     0,     0,   182,   -46,   183,     0,     0,   205,   180,
       0,     0,   180,   185,     0,   184,   -46,   -47,   181,     0,
     -45,   181,   182,   -47,   183,   182,   -45,   183,     0,     0,
       0,   180,   185,     0,   184,   248,     0,   184,   -45,   -54,
     181,     0,     0,     0,   182,   388,   183,     0,     0,     0,
     180,   185,     0,   180,   185,     0,   184,   -54,   -55,   181,
       0,   -56,   181,   182,   -55,   183,   182,   -56,   183,     0,
       0,     0,   180,   185,     0,   184,   -55,     0,   184,   -56,
     -53,   181,     0,     0,     0,   182,   -53,   183,     0,     0,
       0,   180,   185,     0,   180,   185,     0,   184,   -53,   -49,
     181,     0,   -50,   181,   182,   -49,   183,   182,   -50,   183,
       0,     0,     0,   180,   185,     0,   184,   -49,     0,   184,
     -50,   -51,   181,     0,     0,     0,   182,   -51,   183,     0,
       0,     0,   180,   185,     0,   180,   185,     0,   184,   -51,
     -52,   181,     0,   -48,   181,   182,   -52,   183,   182,   -48,
     183,     0,     0,   196,     0,   185,   228,   184,   248,     0,
     184,   -48,   181,     0,     0,   -44,   182,     0,   183,   -44,
       0,   -44,     0,     0,   185,   180,   180,   185,   184,  -158,
       0,   -44,   229,  -158,   181,   181,     0,     0,   182,   182,
     183,   183,     0,     0,   255,   185,     0,   276,   -44,     0,
     184,   184,   248,   181,     0,   277,   -44,   182,     0,   183,
     -44,     0,   -44,     0,     0,   180,     0,   185,   185,   184,
     256,     0,   -44,     0,   181,     0,     0,     0,   182,   397,
     183,     0,     0,   180,     0,     0,   185,     0,     0,   -44,
     184,   401,   181,     0,     0,     0,   182,   400,   183,     0,
     181,     0,     0,     0,   182,   402,   183,   185,   184,     0,
       0,     0,     0,   215,     0,     0,   184,     0,     0,     0,
       0,     0,     0,     0,     0,   185,     0,     0,     0,     0,
       0,   288,     0,   185,   322,  -140,   216,  -140,     0,     0,
    -140,  -140,     0,     0,    86,    87,  -140,  -140,  -140,   288,
     217,  -140,  -140,   324,   290,  -153,     0,     0,  -122,   291,
    -153,  -153,     0,     0,  -120,  -120,  -120,   288,     0,  -120,
    -122,  -152,   290,  -152,     0,     0,  -122,   291,  -152,  -152,
       0,     0,  -120,  -120,  -120,     0,   215,  -120,  -122,  -124,
     290,   387,     0,     0,  -122,   291,  -124,  -124,     0,     0,
    -120,  -120,  -120,     0,   288,  -120,  -122,  -118,  -140,   216,
    -140,     0,     0,  -140,  -140,     0,     0,     0,     0,  -140,
    -140,  -140,   288,   217,  -140,  -140,  -121,   290,  -121,     0,
       0,  -121,   291,  -121,  -121,     0,     0,  -120,  -120,  -120,
     422,     0,  -120,  -121,  -123,   290,  -123,     0,     0,  -122,
     291,  -123,  -123,   288,     0,  -120,  -120,  -120,     0,     0,
    -120,  -122,  -124,   290,   387,     0,     0,  -122,   291,     0,
     423,   422,     0,  -120,  -120,  -120,   290,   309,  -120,  -122,
    -122,   291,   310,     0,     0,   288,  -120,  -120,  -120,     0,
       0,  -120,  -122,  -158,   290,     0,     0,     0,  -122,   291,
       0,   423,   288,     0,  -120,  -120,  -120,   289,   290,  -120,
    -122,     0,  -122,   291,     0,   288,     0,     0,  -120,  -120,
    -120,     0,     0,  -120,  -122,   290,   295,     0,     0,  -122,
     291,     0,     0,   288,     0,  -120,  -120,  -120,   290,     0,
    -120,  -122,  -122,   291,   296,     0,     0,   299,  -120,  -120,
    -120,     0,     0,  -120,  -122,   298,   290,     0,     0,     0,
    -122,   291,     0,     0,     0,   288,  -120,  -120,  -120,   300,
     290,  -120,  -122,     0,  -122,   291,     0,     0,     0,   302,
    -120,  -120,  -120,     0,     0,  -120,  -122,   301,   290,     0,
       0,     0,  -122,   291,     0,     0,     0,   288,  -120,  -120,
    -120,   303,   290,  -120,  -122,     0,  -122,   291,     0,     0,
       0,   305,  -120,  -120,  -120,     0,     0,  -120,  -122,   304,
     290,     0,     0,     0,  -122,   291,     0,     0,   311,     0,
    -120,  -120,  -120,   306,   290,  -120,  -122,     0,  -122,   291,
       0,   313,     0,     0,  -120,  -120,  -120,     0,     0,  -120,
    -122,   290,   312,     0,     0,  -122,   291,     0,     0,   331,
       0,  -120,  -120,  -120,   290,     0,  -120,  -122,  -122,   291,
     314,     0,   288,     0,  -120,  -120,  -120,     0,     0,  -120,
    -122,   332,   290,     0,     0,   288,  -122,   291,     0,     0,
       0,     0,  -120,  -120,  -120,   290,     0,  -120,  -122,  -122,
     291,   371,   288,     0,     0,  -120,  -120,  -120,   290,     0,
    -120,  -122,  -122,   291,   372,   288,     0,     0,  -120,  -120,
    -120,     0,     0,  -120,  -122,   290,     0,     0,   288,  -122,
     291,   373,     0,     0,     0,  -120,  -120,  -120,   290,     0,
    -120,  -122,  -122,   291,   374,   376,     0,     0,  -120,  -120,
    -120,   290,     0,  -120,  -122,  -122,   291,   375,   389,     0,
       0,  -120,  -120,  -120,     0,     0,  -120,  -122,   290,     0,
       0,   288,  -122,   291,   377,     0,     0,     0,  -120,  -120,
    -120,   290,   390,  -120,  -122,  -122,   291,     0,   288,     0,
       0,  -120,  -120,  -120,   290,   415,  -120,  -122,  -122,   291,
       0,   288,     0,     0,  -120,  -120,  -120,     0,     0,  -120,
    -122,   290,   416,     0,   418,  -122,   291,     0,     0,     0,
       0,  -120,  -120,  -120,   290,   417,  -120,  -122,  -122,   291,
       0,   288,     0,     0,  -120,  -120,  -120,   290,   419,  -120,
    -122,  -122,   291,     0,   288,     0,     0,  -120,  -120,  -120,
       0,     0,  -120,  -122,   290,     0,     0,   288,  -122,   291,
     428,     0,     0,     0,  -120,  -120,  -120,   290,     0,  -120,
    -122,  -122,   291,   434,   288,     0,     0,  -120,  -120,  -120,
     290,     0,  -120,  -122,  -122,   291,   435,   437,     0,     0,
    -120,  -120,  -120,     0,     0,  -120,  -122,   290,     0,     0,
       0,  -122,   291,   436,     0,   331,     0,  -120,  -120,  -120,
     290,     0,  -120,  -122,  -122,   291,   438,     0,     0,     0,
    -120,  -120,  -120,     0,     0,  -120,  -122,   441,   290,     0,
       0,     0,  -122,   291,     0,     0,     0,     0,  -120,  -120,
    -120,     0,     0,  -120,  -122
};

static const yytype_int16 yycheck[] =
{
       4,    66,    30,    31,     1,     1,    10,   180,    12,    13,
       1,   184,     1,    41,     1,     1,    30,     8,    43,     5,
       7,    17,     0,   196,     1,    29,    30,    31,    17,    43,
       1,     1,    21,    30,    23,    26,    40,    41,     9,    10,
      44,    45,     1,    14,    15,    16,   111,    43,   113,     1,
      27,    22,    43,    24,    43,    26,    27,    61,   158,   159,
     160,   161,   162,   163,   164,   165,   166,    38,     1,     1,
       1,     1,    43,    43,     1,   248,     3,     1,    11,    38,
      10,    28,   255,   256,    14,    17,    16,   187,    22,    21,
      24,    43,    22,    40,    24,    26,    26,    27,   198,   199,
     200,   201,   202,   107,   108,   109,     1,   207,    38,     1,
      43,    43,     1,    43,   214,     1,   289,     9,    10,    43,
     124,    10,    14,    15,    16,    14,    15,    16,   301,   302,
     303,   304,   305,   306,    26,    27,     1,    26,    30,   167,
       1,     1,   146,   171,   172,   173,   174,     8,    43,     1,
       1,    43,     1,     1,    43,    43,     1,    43,     1,     1,
      25,    12,    13,   167,    24,    26,    17,   171,   172,   173,
     174,    22,    23,    24,    25,    27,     1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,   360,    39,    40,
      41,    42,    43,     1,    43,    43,     1,   297,    43,    24,
      43,    43,     1,     1,     9,    10,     4,   307,   308,    14,
       1,    16,    17,    38,   279,   388,    21,    32,    33,    27,
       0,    26,   287,    22,   397,     1,    17,   400,   401,   402,
      21,     1,     3,     1,     1,   203,   204,   205,    43,   339,
     208,   209,   210,   211,   212,   213,     1,   215,   216,   217,
      17,    26,    43,    23,    21,     1,    32,    33,    26,   359,
       1,    31,   362,   363,   364,   365,   366,   235,   441,     1,
     238,     3,   240,     1,     1,    30,    43,     9,    10,   107,
     108,   109,    14,    38,    16,    17,    32,    33,     1,    21,
       3,    32,    33,     4,    26,    27,    42,     4,    26,    26,
       1,     6,    22,     1,   272,   273,   274,   275,   276,   277,
       1,    43,    32,    33,    27,   143,   144,     6,     9,    10,
     420,    22,   290,    14,    15,    16,    24,     1,     1,   429,
       1,   431,   432,   433,   399,    26,    27,     6,     9,    10,
      11,    12,    13,    14,    15,    16,     1,   108,   109,    23,
      23,    22,    43,   321,     1,    26,    27,     1,   326,   327,
     328,    32,    33,    10,    35,     1,    37,    14,    23,    16,
      41,    42,    43,     1,     7,    43,   344,   345,    22,    26,
      27,     7,   350,     1,     7,   353,   354,    23,   392,   439,
     440,    19,   360,    11,    12,    13,    43,     7,     1,   367,
     368,   369,   370,     6,    22,    23,    24,    25,     1,    30,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
       1,    39,    40,    41,    42,    43,     1,    44,    45,    22,
     398,    22,    27,    27,    22,   439,   440,     1,    34,    35,
      36,    22,    22,    39,    61,     1,    10,    22,    12,    13,
      14,    22,    16,    17,   422,   423,    22,    43,    22,    23,
      24,    25,    26,    27,    28,    29,    22,     1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
       1,    94,    95,    96,    97,    98,    99,    22,    22,    22,
      11,    12,    13,     0,     1,    43,    24,    23,     5,    30,
      23,    22,    23,    24,    25,    23,    23,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,     1,    39,    40,
      41,    42,    43,    23,    23,    23,    23,    11,    12,    13,
      43,    43,    25,    25,    30,    30,    30,    26,    22,    23,
      24,    25,    43,    26,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,     1,    39,    40,    41,    42,    43,
      26,    26,     9,    10,    26,    26,    26,    14,    15,    16,
      26,    26,    26,    42,    27,    27,    23,    24,    25,    26,
      27,    28,    29,    30,    27,    27,    27,    34,    35,    36,
       1,    27,    39,    40,    27,    27,    43,    27,     9,    10,
      11,    12,    13,    14,    15,    16,    27,    27,    27,    27,
      27,    22,    27,    27,    27,    26,    27,    27,     9,     9,
       9,    32,    33,     9,    35,     1,    37,    43,    24,    38,
      41,    42,    43,     9,    10,    11,    12,    13,    14,    15,
      16,    38,     1,    30,     3,    23,    22,    27,    23,    23,
      26,    27,    23,    13,    27,    27,    32,    33,    17,    35,
       1,    37,    21,    27,    27,    41,    42,    43,    27,    10,
      11,    12,    13,    14,    15,    16,     1,    12,   146,     0,
      59,    22,   345,    -1,    43,    26,    11,    12,    13,    -1,
      -1,    32,    33,    -1,    35,    -1,    37,    22,    -1,    -1,
      41,    42,    43,     1,    -1,    30,    -1,    32,    33,    -1,
      35,    -1,    37,    11,    12,    13,    41,    42,    43,    -1,
       1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    -1,    32,    33,    -1,    35,     1,    37,
      38,    22,    -1,    41,    42,    43,    27,    -1,    11,    12,
      13,    32,    33,    -1,    35,     1,    37,    -1,    -1,    22,
      41,    42,    43,    -1,    -1,    -1,    12,    13,    -1,    32,
      33,     1,    35,    -1,    37,    -1,    22,    23,    41,    42,
      43,    -1,    12,    13,    -1,    -1,    32,    33,    -1,    35,
      -1,    37,    22,    -1,    -1,    41,    42,    43,    -1,    -1,
      -1,     1,    32,    33,    -1,    35,    -1,    37,    -1,    -1,
      10,    41,    42,    43,    14,    -1,    16,    -1,    -1,    -1,
       1,    -1,    22,    -1,    24,    -1,    26,    27,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    -1,    38,     1,
      -1,    -1,     1,    43,    -1,    26,    27,     9,    10,    -1,
       9,    10,    14,    15,    16,    14,    15,    16,    -1,    -1,
      -1,     1,    43,    -1,    26,    27,    -1,    26,    27,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,
       1,    43,    -1,     1,    43,    -1,    26,    27,     9,    10,
      -1,     9,    10,    14,    15,    16,    14,    15,    16,    -1,
      -1,    -1,     1,    43,    -1,    26,    27,    -1,    26,    27,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    -1,
      -1,     1,    43,    -1,     1,    43,    -1,    26,    27,     9,
      10,    -1,     9,    10,    14,    15,    16,    14,    15,    16,
      -1,    -1,    -1,     1,    43,    -1,    26,    27,    -1,    26,
      27,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      -1,    -1,     1,    43,    -1,     1,    43,    -1,    26,    27,
       9,    10,    -1,     9,    10,    14,    15,    16,    14,    15,
      16,    -1,    -1,     1,    -1,    43,     1,    26,    27,    -1,
      26,    27,    10,    -1,    -1,    10,    14,    -1,    16,    14,
      -1,    16,    -1,    -1,    43,     1,     1,    43,    26,    27,
      -1,    26,    27,     9,    10,    10,    -1,    -1,    14,    14,
      16,    16,    -1,    -1,     1,    43,    -1,     1,    43,    -1,
      26,    26,    27,    10,    -1,     9,    10,    14,    -1,    16,
      14,    -1,    16,    -1,    -1,     1,    -1,    43,    43,    26,
      27,    -1,    26,    -1,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    -1,     1,    -1,    -1,    43,    -1,    -1,    43,
      26,     1,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      10,    -1,    -1,    -1,    14,    15,    16,    43,    26,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,     1,    -1,    43,    22,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    33,    34,    35,    36,     1,
      38,    39,    40,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,     1,    -1,    39,
      40,    23,    24,    25,    -1,    -1,    28,    29,    30,    31,
      -1,    -1,    34,    35,    36,    -1,     1,    39,    40,    23,
      24,    25,    -1,    -1,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    -1,     1,    39,    40,    22,    23,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,     1,    38,    39,    40,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    -1,    -1,    34,    35,    36,
       1,    -1,    39,    40,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,     1,    -1,    34,    35,    36,    -1,    -1,
      39,    40,    23,    24,    25,    -1,    -1,    28,    29,    -1,
      31,     1,    -1,    34,    35,    36,    24,    25,    39,    40,
      28,    29,    30,    -1,    -1,     1,    34,    35,    36,    -1,
      -1,    39,    40,    23,    24,    -1,    -1,    -1,    28,    29,
      -1,    31,     1,    -1,    34,    35,    36,    23,    24,    39,
      40,    -1,    28,    29,    -1,     1,    -1,    -1,    34,    35,
      36,    -1,    -1,    39,    40,    24,    25,    -1,    -1,    28,
      29,    -1,    -1,     1,    -1,    34,    35,    36,    24,    -1,
      39,    40,    28,    29,    30,    -1,    -1,     1,    34,    35,
      36,    -1,    -1,    39,    40,    23,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,     1,    34,    35,    36,    23,
      24,    39,    40,    -1,    28,    29,    -1,    -1,    -1,     1,
      34,    35,    36,    -1,    -1,    39,    40,    23,    24,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,     1,    34,    35,
      36,    23,    24,    39,    40,    -1,    28,    29,    -1,    -1,
      -1,     1,    34,    35,    36,    -1,    -1,    39,    40,    23,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,     1,    -1,
      34,    35,    36,    23,    24,    39,    40,    -1,    28,    29,
      -1,     1,    -1,    -1,    34,    35,    36,    -1,    -1,    39,
      40,    24,    25,    -1,    -1,    28,    29,    -1,    -1,     1,
      -1,    34,    35,    36,    24,    -1,    39,    40,    28,    29,
      30,    -1,     1,    -1,    34,    35,    36,    -1,    -1,    39,
      40,    23,    24,    -1,    -1,     1,    28,    29,    -1,    -1,
      -1,    -1,    34,    35,    36,    24,    -1,    39,    40,    28,
      29,    30,     1,    -1,    -1,    34,    35,    36,    24,    -1,
      39,    40,    28,    29,    30,     1,    -1,    -1,    34,    35,
      36,    -1,    -1,    39,    40,    24,    -1,    -1,     1,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    24,    -1,
      39,    40,    28,    29,    30,     1,    -1,    -1,    34,    35,
      36,    24,    -1,    39,    40,    28,    29,    30,     1,    -1,
      -1,    34,    35,    36,    -1,    -1,    39,    40,    24,    -1,
      -1,     1,    28,    29,    30,    -1,    -1,    -1,    34,    35,
      36,    24,    25,    39,    40,    28,    29,    -1,     1,    -1,
      -1,    34,    35,    36,    24,    25,    39,    40,    28,    29,
      -1,     1,    -1,    -1,    34,    35,    36,    -1,    -1,    39,
      40,    24,    25,    -1,     1,    28,    29,    -1,    -1,    -1,
      -1,    34,    35,    36,    24,    25,    39,    40,    28,    29,
      -1,     1,    -1,    -1,    34,    35,    36,    24,    25,    39,
      40,    28,    29,    -1,     1,    -1,    -1,    34,    35,    36,
      -1,    -1,    39,    40,    24,    -1,    -1,     1,    28,    29,
      30,    -1,    -1,    -1,    34,    35,    36,    24,    -1,    39,
      40,    28,    29,    30,     1,    -1,    -1,    34,    35,    36,
      24,    -1,    39,    40,    28,    29,    30,     1,    -1,    -1,
      34,    35,    36,    -1,    -1,    39,    40,    24,    -1,    -1,
      -1,    28,    29,    30,    -1,     1,    -1,    34,    35,    36,
      24,    -1,    39,    40,    28,    29,    30,    -1,    -1,    -1,
      34,    35,    36,    -1,    -1,    39,    40,    23,    24,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    -1,    -1,    39,    40
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
      37,    41,    42,    43,    51,    69,    69,    69,    27,    69,
      69,    69,    69,    69,    69,     1,    27,    69,    69,    69,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
       1,    27,     9,     9,     9,     9,     1,     9,    17,    43,
      69,     1,    17,    43,    69,    42,    69,    43,     1,    23,
      24,    29,    68,    70,    71,    25,    30,    58,    23,     1,
      23,    23,     1,    23,    23,     1,    23,    58,    58,    25,
      30,     1,    25,     1,    30,    69,    69,    69,    69,    69,
      69,    24,    22,    51,    23,    22,    24,     1,    24,     1,
      22,     1,    23,     1,    51,    11,    43,    69,    30,    58,
      69,     1,    11,    43,     1,    22,    34,    35,    36,    39,
      66,    28,    40,    65,    38,    30,    30,     1,    30,    58,
       1,    43,    58,    58,    58,    58,    58,    38,    38,     1,
      38,    30,    30,    30,    30,    30,     1,    30,    69,    23,
      23,    69,    69,    69,    23,     1,    23,    25,    15,     1,
      25,    67,    69,    67,    69,    69,    69,    15,    22,    43,
      15,     1,    15,    69,    69,    69,    69,    27,    27,    27,
      27,    27,    27,     1,    27,    25,    25,    25,     1,    25,
      58,    23,     1,    31,    64,    72,     1,    23,    30,    58,
      69,    58,    58,    58,    30,    30,    30,     1,    30,    69,
      69,    23,    64,    64
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
#line 75 "SyntaxicAnalyser.y"
    { 
                            check_main(); 
                        ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 85 "SyntaxicAnalyser.y"
    {yyerror (" erreur! mot cle class errone dans la line : "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 86 "SyntaxicAnalyser.y"
    { yyerror (" erreur! acolade ouvarnte  manquant dans la line :  "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 87 "SyntaxicAnalyser.y"
    { yyerror (" erreur! acolade FERMANT  manquant dans la line :   "); YYABORT;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 92 "SyntaxicAnalyser.y"
    {
                            insertSymbol((yyvsp[(2) - (2)]),EXTENSION,CLASS,"IDENT",0,classID);
                            level = 0;
                        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 96 "SyntaxicAnalyser.y"
    { yyerror ("  mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 97 "SyntaxicAnalyser.y"
    { yyerror ("erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 98 "SyntaxicAnalyser.y"
    {level = 0;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 107 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 108 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 109 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 110 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 113 "SyntaxicAnalyser.y"
    {yyerror ("valeur manquante  dans la line :"); YYABORT;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 126 "SyntaxicAnalyser.y"
    { yyerror (" mot cle Public class manquant ou errone dans la line "); YYABORT;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 127 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 128 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 129 "SyntaxicAnalyser.y"
    { yyerror (" acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 130 "SyntaxicAnalyser.y"
    { yyerror (" mot cle Return manquant ou errone dans la line "); YYABORT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 131 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 132 "SyntaxicAnalyser.y"
    { yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 135 "SyntaxicAnalyser.y"
    { isParam = false; level = 1;;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 136 "SyntaxicAnalyser.y"
    { isParam = false; level = 1;;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 143 "SyntaxicAnalyser.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 150 "SyntaxicAnalyser.y"
    { yyerror (" acolade ouvrant  manquant dans la line : "); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 151 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 153 "SyntaxicAnalyser.y"
    { yyerror (" If acolade  manquante dans la line : "); YYABORT;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 154 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 155 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 156 "SyntaxicAnalyser.y"
    { yyerror (" mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 159 "SyntaxicAnalyser.y"
    { yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 160 "SyntaxicAnalyser.y"
    { yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 161 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 164 "SyntaxicAnalyser.y"
    { yyerror ("system.out.println errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 165 "SyntaxicAnalyser.y"
    { yyerror (" parenthese  ouvrante manquant dans la line:"); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 166 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 167 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 170 "SyntaxicAnalyser.y"
    {
                            check_declarations((yyvsp[(1) - (4)]),ASSIGNMENT,VARIABLE,level,classID)
                        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 173 "SyntaxicAnalyser.y"
    { yyerror (" erreur identifier errone dans la line :  "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 174 "SyntaxicAnalyser.y"
    { yyerror (" AFFECTATION errone dans la line : "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 175 "SyntaxicAnalyser.y"
    { yyerror ("POINT_VIRGULE  manquant dans la line : "); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 178 "SyntaxicAnalyser.y"
    {
                            check_declarations((yyvsp[(1) - (7)]),ASSIGNMENT,VARIABLE,level,classID)
                            
                        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 182 "SyntaxicAnalyser.y"
    { yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 183 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 184 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 185 "SyntaxicAnalyser.y"
    { yyerror (" AFFECTATION errone dans la line :  "); YYABORT;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 186 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE  manquant dans la line :  "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 191 "SyntaxicAnalyser.y"
    { yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 192 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Public errone ou bien manquant on line :   "); YYABORT;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 193 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Static errone ou bien manquant on line : "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 194 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Void errone ou bien manquant on line : "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 195 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Main errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 196 "SyntaxicAnalyser.y"
    { yyerror ("parenthese ouvrante manquante dans la line:  "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 197 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 198 "SyntaxicAnalyser.y"
    { yyerror ("acolade ouvrant manquant dans la line:  "); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 199 "SyntaxicAnalyser.y"
    { yyerror (" STATEMENT manquant on line :  "); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 200 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 201 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 205 "SyntaxicAnalyser.y"
    { 
                            insertSymbol("main",DECLARATION,METHOD,"void",0,classID);
                            set_param((yyvsp[(4) - (4)]),strcat((yyvsp[(1) - (4)]),"[]"));   
                        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 209 "SyntaxicAnalyser.y"
    { yyerror ("mot cle String errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 210 "SyntaxicAnalyser.y"
    { yyerror ("acolade ouvrant manquant dans la line:  "); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 211 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 212 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 217 "SyntaxicAnalyser.y"
    {   
                            classID +=1; 
                            check_class((yyvsp[(2) - (2)]),classID);
                        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 221 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Class errone ou bien manquant on line :"); YYABORT;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 222 "SyntaxicAnalyser.y"
    { yyerror (" identifier errone dans la line : "); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 228 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                                
                        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 236 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 243 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                        ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 249 "SyntaxicAnalyser.y"
    { yyerror (" type non valide dans la ligne : "); YYABORT;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 250 "SyntaxicAnalyser.y"
    { yyerror (" identifier errone dans la line :"); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 251 "SyntaxicAnalyser.y"
    { yyerror (" identifier errone dans la line : "); YYABORT;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 252 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line : "); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 256 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 261 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 266 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 270 "SyntaxicAnalyser.y"
    { yyerror (" type non valide dans la ligne :"); YYABORT;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 271 "SyntaxicAnalyser.y"
    { yyerror (" identifier errone dans la line : "); YYABORT;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 272 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line : "); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 273 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 285 "SyntaxicAnalyser.y"
    { yyerror (" VIRGULE manquant dans la line : "); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 300 "SyntaxicAnalyser.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 305 "SyntaxicAnalyser.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 312 "SyntaxicAnalyser.y"
    { 
                            method_call_index = insertSymbol((yyvsp[(2) - (2)]),USE,METHOD,"DOT_IDENT",0,classID);
                        ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 315 "SyntaxicAnalyser.y"
    { yyerror (" POINT manquant dans la line : "); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 316 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line :  "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 320 "SyntaxicAnalyser.y"
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 326 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1){
                                remove_param(method_call_index);
                                insert_param(method_call_index,"EXP","int");
                            }                              
                        ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 333 "SyntaxicAnalyser.y"
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 339 "SyntaxicAnalyser.y"
    {
                          
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                                insert_param(method_call_index,"EXP","bool");
                            }
                                
                        ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 347 "SyntaxicAnalyser.y"
    { yyerror (" Comparison operator manquant dans la line : "); YYABORT;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 349 "SyntaxicAnalyser.y"
    {
                            
                            if(method_call_index != -1) {
                                insert_param(method_call_index,"EXP","int[]");
                            }
      
                        ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 356 "SyntaxicAnalyser.y"
    { yyerror (" erreur tabulation ouvrante manquante dans la line : "); YYABORT;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 357 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation fermante manquante dans la line : "); YYABORT;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 359 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1) {
                                insert_param(method_call_index,"EXP","int");
                            }
                
                        ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 365 "SyntaxicAnalyser.y"
    { yyerror (" POINT manquant dans la line : "); YYABORT;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 366 "SyntaxicAnalyser.y"
    { yyerror ("LONGEUR manquant dans la line :"); YYABORT;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 368 "SyntaxicAnalyser.y"
    { yyerror ("parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 369 "SyntaxicAnalyser.y"
    { yyerror ("parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 371 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,(yyvsp[(1) - (1)]),"int");
                        ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 376 "SyntaxicAnalyser.y"
    {
                            
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,strcat("-",(yyvsp[(2) - (2)])),"int");
                        ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 382 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,(yyvsp[(1) - (1)]),"bool");
                        ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 387 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE FERMANTE    manquante  dans la line :"); YYABORT;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 388 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  OUVRANTE manquante  dans la line :"); YYABORT;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 391 "SyntaxicAnalyser.y"
    {

                            if(method_call_index != -1 && expression_level < 1) 
                              insert_param(method_call_index,(yyvsp[(1) - (1)]),"IDENT");

                            check_declarations((yyvsp[(1) - (1)]),USE,VARIABLE,level,classID)
                        ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 401 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle New errone dans la line:   "); YYABORT;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 402 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle Integer errone dans la line:  "); YYABORT;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 403 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation ouvrante manquante dans la line : "); YYABORT;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 404 "SyntaxicAnalyser.y"
    { yyerror (" erreur tabulation fermante manquante dans la line :  "); YYABORT;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 406 "SyntaxicAnalyser.y"
    {
                            insertSymbol((yyvsp[(2) - (4)]),INSTANTIATION,VARIABLE,"NewID",0,classID);                          
                        ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 409 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle New errone dans la line:  "); YYABORT;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 410 "SyntaxicAnalyser.y"
    { yyerror ("  erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 411 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 412 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 414 "SyntaxicAnalyser.y"
    { yyerror ("erreur Not manquant dans la line :  "); YYABORT;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 416 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 417 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 418 "SyntaxicAnalyser.y"
    { yyerror (" valeur manquante dans la ligne :  "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2923 "SyntaxicAnalyser.tab.c"
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
#line 424 "SyntaxicAnalyser.y"
 

    int yyerror(char const *msg) {
        
        fprintf(stderr, "%s %d\n", msg,line);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        yyparse();
    }
