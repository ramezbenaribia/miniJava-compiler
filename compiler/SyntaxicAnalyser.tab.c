
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
 			
int yyerror(char const *msg);	
int yylex(void);
extern int line;



/* Line 189 of yacc.c  */
#line 85 "SyntaxicAnalyser.tab.c"

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
     PSVM = 258,
     CLASS = 259,
     PUBLIC = 260,
     STATIC = 261,
     VOID = 262,
     MAIN = 263,
     EXTENDS = 264,
     RETURN = 265,
     IF = 266,
     ELSE = 267,
     WHILE = 268,
     PRINT = 269,
     LENGTH = 270,
     THIS = 271,
     NEW = 272,
     POINT = 273,
     POINT_VIRGULE = 274,
     VIRGULE = 275,
     BOOLEAN = 276,
     INT = 277,
     STRING = 278,
     PAR_OUVRANTE = 279,
     PAR_FERMANTE = 280,
     ACO_OUVRANTE = 281,
     ACO_FERMANTE = 282,
     TAB_FERMANTE = 283,
     TAB_OUVRANTE = 284,
     AFFECTATION = 285,
     OPERATOR = 286,
     ID = 287,
     NUMBER = 288,
     BOOL = 289,
     NOT = 290
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
#line 162 "SyntaxicAnalyser.tab.c"

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1034

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNRULES -- Number of states.  */
#define YYNSTATES  415

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    19,    27,    35,    43,
      51,    54,    56,    59,    62,    65,    67,    70,    72,    75,
      77,    81,    85,    89,    95,   101,   104,   106,   110,   114,
     118,   122,   124,   138,   152,   166,   180,   194,   208,   222,
     236,   250,   254,   258,   262,   264,   266,   268,   270,   280,
     290,   300,   310,   320,   330,   340,   347,   354,   361,   368,
     375,   382,   389,   391,   403,   413,   423,   435,   447,   459,
     471,   479,   485,   493,   501,   509,   515,   521,   527,   533,
     539,   544,   549,   554,   559,   567,   575,   583,   591,   599,
     607,   611,   615,   620,   625,   630,   634,   638,   642,   649,
     656,   663,   670,   677,   679,   681,   683,   685,   687,   693,
     699,   705,   711,   717,   722,   727,   732,   737,   742,   745,
     748,   752,   756,   760,   763,   765,   769,   773,   775
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    50,    38,    -1,    39,    38,    -1,    56,
      -1,     4,    32,    40,    26,    41,    42,    27,    -1,     1,
      32,    40,    26,    41,    42,    27,    -1,     4,     1,    40,
      26,    41,    42,    27,    -1,     4,    32,    40,     1,    41,
      42,    27,    -1,     4,    32,    40,    26,    41,    42,     1,
      -1,     9,    32,    -1,    56,    -1,     1,    32,    -1,     4,
       1,    -1,    44,    41,    -1,    56,    -1,    48,    42,    -1,
      56,    -1,    52,    43,    -1,    56,    -1,    49,    32,    19,
      -1,    49,     1,    19,    -1,    49,    32,     1,    -1,    49,
      32,    30,    33,    19,    -1,    49,    32,    30,     1,    19,
      -1,    46,    45,    -1,    56,    -1,    20,    49,    32,    -1,
       1,    49,    32,    -1,    20,    49,     1,    -1,    49,    32,
      45,    -1,    56,    -1,     5,    49,    32,    24,    47,    25,
      26,    41,    43,    10,    53,    19,    27,    -1,     1,    49,
      32,    24,    47,    25,    26,    41,    43,    10,    53,    19,
      27,    -1,     5,    49,     1,    24,    47,    25,    26,    41,
      43,    10,    53,    19,    27,    -1,     5,    49,    32,     1,
      47,    25,    26,    41,    43,    10,    53,    19,    27,    -1,
       5,    49,    32,    24,    47,     1,    26,    41,    43,    10,
      53,    19,    27,    -1,     5,    49,    32,    24,    47,    25,
       1,    41,    43,    10,    53,    19,    27,    -1,     5,    49,
      32,    24,    47,    25,    26,    41,    43,     1,    53,    19,
      27,    -1,     5,    49,    32,    24,    47,    25,    26,    41,
      43,    10,    53,     1,    27,    -1,     5,    49,    32,    24,
      47,    25,    26,    41,    43,    10,    53,    19,     1,    -1,
      22,    29,    28,    -1,    22,     1,    28,    -1,    22,    29,
       1,    -1,    21,    -1,    22,    -1,    32,    -1,     1,    -1,
       4,    32,    26,     3,    51,    26,    52,    27,    27,    -1,
       1,    32,    26,     3,    51,    26,    52,    27,    27,    -1,
       4,     1,    26,     3,    51,    26,    52,    27,    27,    -1,
       4,    32,     1,     3,    51,    26,    52,    27,    27,    -1,
       4,    32,    26,     3,    51,     1,    52,    27,    27,    -1,
       4,    32,    26,     3,    51,    26,    52,     1,    27,    -1,
       4,    32,    26,     3,    51,    26,    52,    27,     1,    -1,
      24,    23,    29,    28,    32,    25,    -1,     1,    23,    29,
      28,    32,    25,    -1,    24,     1,    29,    28,    32,    25,
      -1,    24,    23,     1,    28,    32,    25,    -1,    24,    23,
      29,     1,    32,    25,    -1,    24,    23,    29,    28,     1,
      25,    -1,    24,    23,    29,    28,    32,     1,    -1,    43,
      -1,    11,    24,    53,    25,    26,    52,    27,    12,    26,
      52,    27,    -1,    11,    24,    53,    25,    26,    52,    27,
      12,    52,    -1,    11,    24,    53,    25,    52,    12,    26,
      52,    27,    -1,     1,    24,    53,    25,    26,    52,    27,
      12,    26,    52,    27,    -1,    11,     1,    53,    25,    26,
      52,    27,    12,    26,    52,    27,    -1,    11,    24,    53,
       1,    26,    52,    27,    12,    26,    52,    27,    -1,    11,
      24,    53,    25,    26,    52,    27,     1,    26,    52,    27,
      -1,    13,    24,    53,    25,    26,    52,    27,    -1,    13,
      24,    53,    25,    52,    -1,     1,    24,    53,    25,    26,
      52,    27,    -1,    13,     1,    53,    25,    26,    52,    27,
      -1,    13,    24,    53,     1,    26,    52,    27,    -1,    14,
      24,    53,    25,    19,    -1,     1,    24,    53,    25,    19,
      -1,    14,     1,    53,    25,    19,    -1,    14,    24,    53,
       1,    19,    -1,    14,    24,    53,    25,     1,    -1,    32,
      30,    53,    19,    -1,     1,    30,    53,    19,    -1,    32,
       1,    53,    19,    -1,    32,    30,    53,     1,    -1,    32,
      29,    53,    28,    30,    53,    19,    -1,     1,    29,    53,
      28,    30,    53,    19,    -1,    32,     1,    53,    28,    30,
      53,    19,    -1,    32,    29,    53,     1,    30,    53,    19,
      -1,    32,    29,    53,    28,     1,    53,    19,    -1,    32,
      29,    53,    28,    30,    53,     1,    -1,    53,    31,    53,
      -1,    53,     1,    53,    -1,    53,    29,    53,    28,    -1,
      53,     1,    53,    28,    -1,    53,    29,    53,     1,    -1,
      53,    18,    15,    -1,    53,     1,    15,    -1,    53,    18,
       1,    -1,    53,    18,    32,    24,    54,    25,    -1,    53,
       1,    32,    24,    54,    25,    -1,    53,    18,     1,    24,
      54,    25,    -1,    53,    18,    32,     1,    54,    25,    -1,
      53,    18,    32,    24,    54,     1,    -1,    33,    -1,    34,
      -1,    32,    -1,    16,    -1,     1,    -1,    17,    22,    26,
      53,    27,    -1,     1,    22,    26,    53,    27,    -1,    17,
       1,    26,    53,    27,    -1,    17,    22,     1,    53,    27,
      -1,    17,    22,    26,    53,     1,    -1,    17,    32,    24,
      25,    -1,     1,    32,    24,    25,    -1,    17,     1,    24,
      25,    -1,    17,    32,     1,    25,    -1,    17,    32,    24,
       1,    -1,    35,    53,    -1,     1,    53,    -1,    24,    53,
      25,    -1,     1,    53,    25,    -1,    24,    53,     1,    -1,
      53,    55,    -1,    56,    -1,    20,    53,    55,    -1,     1,
      53,    55,    -1,    56,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    68,    69,    72,    73,    74,    75,    76,
      78,    79,    80,    81,    84,    85,    87,    88,    90,    91,
      93,    94,    95,    97,    98,   100,   101,   103,   104,   105,
     107,   108,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   123,   124,   125,   126,   127,   128,   129,   132,   133,
     134,   135,   136,   137,   138,   141,   142,   143,   144,   145,
     146,   147,   152,   153,   154,   155,   156,   157,   158,   159,
     161,   162,   163,   164,   165,   167,   168,   169,   170,   171,
     173,   174,   175,   176,   178,   179,   180,   181,   182,   183,
     186,   187,   189,   190,   191,   193,   194,   195,   197,   198,
     199,   200,   201,   204,   205,   206,   207,   208,   210,   211,
     212,   213,   214,   216,   217,   218,   219,   220,   222,   223,
     225,   226,   227,   230,   231,   233,   234,   235,   238
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PSVM", "CLASS", "PUBLIC", "STATIC",
  "VOID", "MAIN", "EXTENDS", "RETURN", "IF", "ELSE", "WHILE", "PRINT",
  "LENGTH", "THIS", "NEW", "POINT", "POINT_VIRGULE", "VIRGULE", "BOOLEAN",
  "INT", "STRING", "PAR_OUVRANTE", "PAR_FERMANTE", "ACO_OUVRANTE",
  "ACO_FERMANTE", "TAB_FERMANTE", "TAB_OUVRANTE", "AFFECTATION",
  "OPERATOR", "ID", "NUMBER", "BOOL", "NOT", "$accept", "programme",
  "ClassDeclarationGroup", "ClassDeclaration", "EXTENDSIDG",
  "VarDeclarationGroup", "MethodDeclarationGroup", "STATEMENTG",
  "VarDeclaration", "VTIG", "VTI", "TIVTIG", "MethodDeclaration", "Type",
  "MainClass", "ARG", "STATEMENT", "EXPRESSION", "EVEXPRESSION",
  "VEXPRESSION", "epsilon", 0
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
     285,   286,   287,   288,   289,   290
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    39,    39,    39,
      40,    40,    40,    40,    41,    41,    42,    42,    43,    43,
      44,    44,    44,    44,    44,    45,    45,    46,    46,    46,
      47,    47,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    55,    55,    55,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     7,     7,     7,     7,     7,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       3,     3,     3,     5,     5,     2,     1,     3,     3,     3,
       3,     1,    13,    13,    13,    13,    13,    13,    13,    13,
      13,     3,     3,     3,     1,     1,     1,     1,     9,     9,
       9,     9,     9,     9,     9,     6,     6,     6,     6,     6,
       6,     6,     1,    11,     9,     9,    11,    11,    11,    11,
       7,     5,     7,     7,     7,     5,     5,     5,     5,     5,
       4,     4,     4,     4,     7,     7,     7,     7,     7,     7,
       3,     3,     4,     4,     4,     3,     3,     3,     6,     6,
       6,     6,     6,     1,     1,     1,     1,     1,     5,     5,
       5,     5,     5,     4,     4,     4,     4,     4,     2,     2,
       3,     3,     3,     2,     1,     3,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     2,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    44,     0,    46,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,     0,     0,    42,
      43,    41,     0,     0,     6,    16,    21,    22,    20,     0,
       7,     8,     9,     5,     0,     0,     0,     0,     0,     0,
       0,   106,     0,     0,   105,   103,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    48,     0,     0,     0,
       0,     0,    56,    57,    58,    59,    60,    61,    55,     0,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,    80,     0,
       0,     0,     0,    24,    23,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,   120,    96,   105,     0,    97,
      95,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,    78,    79,    75,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
     114,   115,     0,     0,     0,   116,   117,   113,     0,    93,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,   110,   111,     0,   108,     0,
       0,   124,     0,     0,     0,    72,    85,     0,     0,     0,
       0,    73,    74,    70,    86,    87,    88,     0,    84,     0,
       0,     0,    30,     0,    26,     0,     0,     0,     0,     0,
       0,     0,   123,   127,    99,   100,   101,   102,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    62,    28,    29,    27,    62,    62,    62,
      62,     0,   126,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    67,    68,    69,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    29,    58,    85,   112,    59,   322,
     323,   253,    86,    60,     4,    35,   113,   228,   300,   332,
      76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -75
static const yytype_int16 yypact[] =
{
     296,   -20,    65,    17,   491,    38,    43,    80,   -75,   133,
      73,   -75,   491,   -75,   177,   218,   249,   279,   282,   282,
     282,   -75,   123,   123,   123,   123,   275,   315,   300,   319,
     -75,   321,   159,   344,   325,   360,   374,   383,   183,   -75,
     -75,   -75,    99,    99,    99,    99,   376,   392,   173,   554,
     554,   554,   554,   554,   -75,   -75,    36,   -75,   176,   531,
      95,   -75,   176,   176,   176,   395,   402,   411,    55,   530,
     200,   225,   268,   149,   -75,   560,   -75,   569,   577,   584,
     592,   415,    62,   101,   101,   419,   176,   -75,   -75,   442,
     174,   438,   443,    30,   437,   444,   462,   466,   100,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   445,   -75,    35,   483,   484,   487,   665,    72,   -75,
     -75,   -75,   467,   102,   -75,   -75,   -75,   -75,   -75,    10,
     -75,   -75,   -75,   -75,   449,   493,   494,   497,   498,   216,
     341,   -75,    97,   496,   -75,   -75,   -75,   496,   802,   745,
     806,   821,   822,   837,   840,   855,   856,   786,   860,   841,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   513,   515,   316,
     521,   524,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   520,
     532,   723,   187,   186,   340,   874,   737,   472,   157,    -6,
     496,   496,   536,   -75,   546,    18,   489,   553,   421,   156,
     543,   425,   280,   -75,   559,   447,   124,   129,   -75,     0,
       0,     0,     0,   -75,   -75,   496,   574,   -75,   582,   496,
     496,   496,   589,   269,    60,   -75,   -75,   570,   752,   578,
     -75,   361,   -75,   554,   878,   766,   496,   554,   554,   554,
     370,   554,   554,   554,   261,   -75,   -75,   -75,   -75,   496,
     496,   496,   496,   597,   585,   -75,   604,   612,   276,   892,
     -75,   -75,   893,   899,   900,   -75,   -75,   -75,   492,   -75,
     492,   492,   492,   599,   379,   -75,   914,   607,   614,   622,
     558,   629,   637,   644,   933,   936,   939,   955,   606,   264,
     618,   621,   626,   199,   -75,   -75,   -75,   400,   -75,   801,
     634,   -75,   635,   642,   289,   658,   -75,   675,   679,     6,
     554,   -75,   -75,   -75,   -75,   -75,   -75,   221,   -75,   229,
     101,   101,   -75,   264,   -75,   229,   229,   229,   229,   229,
     472,   496,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   671,
     681,   688,   693,   317,   652,   667,   666,   127,   -75,   667,
     667,   667,   667,   667,   781,   801,   554,   554,   554,   554,
     554,   537,   -75,   691,   -75,   -75,   -75,   710,   718,   719,
     720,   672,   -75,   -75,   661,   689,   695,   704,   712,   496,
     496,   496,   496,   496,   496,   496,   -75,   -75,   -75,   -75,
     -75,   958,   962,   977,   981,   984,  1000,  1003,   705,   706,
     707,   708,   713,   722,   451,   170,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   725,   -75,     4,    27,   471,   -47,   -75,   422,
     -75,   167,   -75,   -74,   -75,   552,   -23,     8,   440,    96,
      -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -129
static const yytype_int16 yytable[] =
{
      13,    54,    74,    74,    74,    74,    74,   342,    13,   122,
     123,   170,     5,   232,    30,    30,    30,     8,   343,   140,
     233,    55,    56,    31,    32,  -128,    75,    77,    78,    79,
      80,   132,    57,   226,   141,   142,    69,    81,    61,    61,
      61,    61,   143,   171,   238,  -128,    70,  -128,    71,    72,
     227,   145,   146,   147,    87,    61,    97,   133,    87,    87,
      87,   140,  -128,   120,    14,    82,     6,    73,   -45,    15,
      62,    63,    64,   165,    19,   226,   141,   142,  -122,  -122,
    -122,    16,    87,    98,   143,  -122,    88,  -122,  -122,  -122,
     121,  -122,   227,   145,   146,   147,    89,     7,   182,   166,
      54,   138,    54,   168,  -128,    20,    17,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   183,
      55,    56,    55,    56,    33,   251,  -128,    90,   365,   184,
     140,    57,   139,    57,   169,   254,   254,   254,   254,   -83,
     -83,   -83,   -83,   -83,   226,   141,   142,    34,   181,    74,
     108,   185,    74,   143,   252,   186,   -83,    69,   229,   366,
      44,   227,   145,   146,   147,    18,  -128,    70,  -128,    71,
      72,   413,   230,   240,    67,   127,   244,    83,   109,   110,
      22,    84,   243,  -128,    52,    45,    74,   220,    73,   231,
      74,    74,    74,   128,    74,    74,    74,   414,   234,   235,
     328,   102,    68,  -128,   129,   255,   255,   255,   255,    53,
     273,   218,   221,   219,   277,   278,   279,   177,   281,   282,
     283,    23,   140,   259,   103,   329,   104,   262,   263,   264,
      54,   -89,   -89,   -89,   -89,   -89,   226,   141,   142,  -128,
    -128,   178,  -128,  -128,   276,   143,   346,   347,   -89,   105,
      55,    56,    24,   227,   145,   146,   147,   284,   285,   286,
     287,    57,    69,    74,   301,   320,   301,   301,   301,   106,
     266,   -71,    70,   -71,    71,    72,   299,   292,   299,   299,
     299,   247,    25,    26,   321,   324,    27,   344,   -71,  -128,
     337,    28,   107,    73,   267,   333,    74,     1,   363,   248,
       2,   293,   367,   368,   369,   370,   371,    39,  -128,    74,
      74,    74,    74,    74,   338,    61,    40,   211,    69,   324,
     361,    61,    61,    61,    61,    61,    47,  -128,    70,  -128,
      71,    72,    41,   374,   375,   376,   377,   378,   354,   355,
     212,   222,   140,   360,  -128,    42,   345,    43,    48,    73,
     333,   333,   349,   350,   351,   352,   353,   141,   142,  -107,
    -107,  -107,   271,   179,   223,   143,  -107,    46,  -107,  -107,
    -107,    69,  -107,   180,   145,   146,   147,   256,   257,   258,
     140,    70,   280,    71,    72,   272,    49,   391,   392,   393,
     394,   395,   396,   397,   226,   141,   142,   -94,   -94,   -94,
      50,   140,    73,   143,   -94,    65,   -94,   -94,   -94,    51,
     -94,   227,   145,   146,   147,   226,   141,   142,  -112,  -112,
    -112,    66,   140,    94,   143,  -112,   140,  -112,  -112,  -112,
      95,  -112,   227,   145,   146,   147,   226,   141,   142,    96,
     226,   141,   142,   119,   246,   143,   124,   242,   140,   143,
     372,   373,   140,   227,   145,   146,   147,   227,   145,   146,
     147,   126,   226,   141,   142,   130,   226,   141,   142,   134,
     131,   143,   160,   140,   172,   143,   135,   250,   412,   227,
     145,   146,   147,   227,   145,   146,   147,   226,   141,   142,
      69,  -128,     9,   140,   136,    10,   143,   140,   137,   167,
      70,  -128,    71,    72,   227,   145,   146,   147,   141,   142,
     161,   162,   141,   142,   163,   239,   143,  -128,   173,   174,
     143,    73,   175,   176,   144,   145,   146,   147,   144,   145,
     146,   147,    54,    91,    92,    93,  -128,   209,    69,   210,
     213,  -128,  -128,   214,  -128,  -128,   215,   -64,    70,   -64,
      71,    72,    55,    56,    99,    69,   216,   125,  -128,   100,
     101,    69,   245,    57,   -64,    70,   236,    71,    72,    73,
      69,    70,   237,    71,    72,    36,    37,    38,    69,   241,
      70,  -128,    71,    72,   310,    69,    73,   111,    70,   249,
      71,    72,    73,   117,   268,    70,   114,    71,    72,   260,
      69,    73,   270,    70,   115,    71,    72,   261,    69,    73,
      70,   116,    71,    72,   265,    69,    73,   289,    70,   118,
      71,    72,   288,    69,    73,    70,   305,    71,    72,   290,
      69,    73,   319,    70,   307,    71,    72,   291,    69,    73,
      70,   308,    71,    72,   325,    69,    73,   326,    70,   309,
      71,    72,   327,    69,    73,    70,   311,    71,    72,   334,
     335,    73,    69,    70,   312,    71,    72,   336,    69,    73,
     339,   313,    70,   384,    71,    72,    73,  -128,    70,   362,
      71,    72,   385,   -62,    73,   -62,   -62,   340,   386,    99,
      69,   341,   164,    73,   100,   101,    69,   356,   364,    73,
      70,   379,    71,    72,   -62,    69,    70,   357,    71,    72,
     302,   303,   304,    69,   358,    70,   387,    71,    72,   359,
     380,    73,   388,    70,   187,    71,    72,    73,   381,   382,
     383,   389,   406,   407,   408,   409,    73,    21,   187,   390,
     410,   188,  -119,  -119,    73,   348,   187,     0,   217,   411,
    -119,  -119,   190,   187,   191,   188,  -118,  -118,     0,     0,
       0,     0,  -118,   188,  -118,  -118,   190,   187,   191,     0,
     188,   -91,   -91,   192,   190,     0,   191,   -91,     0,   -91,
     269,   190,   330,   191,   188,   -90,   -90,   187,     0,     0,
       0,   -90,     0,   -90,   -90,   190,     0,   191,     0,   188,
       0,   331,   330,   187,   188,   203,   -91,   187,     0,   269,
     190,     0,   191,     0,   204,   190,     0,   191,     0,   188,
     188,   331,   187,   195,   188,   193,  -128,   189,     0,     0,
     190,   190,   191,   191,     0,   190,     0,   191,   187,   188,
     188,   198,   207,     0,     0,     0,   194,   196,     0,     0,
     190,   190,   191,   191,     0,   188,   187,   201,   188,   188,
     208,   205,   197,     0,     0,   199,   190,     0,   191,   190,
     190,   191,   191,   188,   188,   224,     0,     0,   188,   274,
     200,   202,     0,     0,   190,   190,   191,   191,   206,   190,
       0,   191,   188,   187,   187,     0,   188,     0,     0,   225,
     187,   297,     0,   190,     0,   191,   275,   190,     0,   191,
     188,   188,     0,     0,     0,   187,     0,   188,   188,   294,
     295,   190,   190,   191,   191,     0,   296,   298,   190,   190,
     191,   191,   188,   306,   187,     0,     0,   187,     0,     0,
     187,     0,     0,   190,     0,   191,     0,     0,     0,     0,
       0,   188,   314,     0,   188,   315,   317,   188,   316,   187,
       0,     0,   190,   187,   191,   190,     0,   191,   190,     0,
     191,     0,     0,   188,   318,     0,   188,   398,   187,     0,
     188,   399,   187,     0,   190,   187,   191,   190,     0,   191,
       0,   190,     0,   191,     0,   188,   400,     0,     0,   188,
     401,   187,   188,   402,   404,     0,   190,     0,   191,     0,
     190,     0,   191,   190,     0,   191,     0,     0,   188,   403,
       0,   188,   405,     0,     0,     0,     0,     0,     0,   190,
       0,   191,   190,     0,   191
};

static const yytype_int16 yycheck[] =
{
       4,     1,    49,    50,    51,    52,    53,     1,    12,    83,
      84,     1,    32,    19,    18,    19,    20,     0,    12,     1,
      26,    21,    22,    19,    20,    25,    49,    50,    51,    52,
      53,     1,    32,    15,    16,    17,     1,     1,    42,    43,
      44,    45,    24,    33,    26,    10,    11,    12,    13,    14,
      32,    33,    34,    35,    58,    59,     1,    27,    62,    63,
      64,     1,    27,     1,    26,    29,     1,    32,    32,    26,
      43,    44,    45,     1,     1,    15,    16,    17,    18,    19,
      20,     1,    86,    28,    24,    25,    59,    27,    28,    29,
      28,    31,    32,    33,    34,    35,     1,    32,     1,    27,
       1,     1,     1,     1,     5,    32,    26,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    22,
      21,    22,    21,    22,     1,     1,    27,    32,     1,    32,
       1,    32,    32,    32,    32,   209,   210,   211,   212,    10,
      11,    12,    13,    14,    15,    16,    17,    24,   140,   196,
       1,   143,   199,    24,    30,   147,    27,     1,     1,    32,
       1,    32,    33,    34,    35,    32,    10,    11,    12,    13,
      14,     1,    15,   196,     1,     1,   199,     1,    29,    30,
       3,     5,    26,    27,     1,    26,   233,     1,    32,    32,
     237,   238,   239,    19,   241,   242,   243,    27,   190,   191,
       1,     1,    29,    27,    30,   209,   210,   211,   212,    26,
     233,    24,    26,    26,   237,   238,   239,     1,   241,   242,
     243,     3,     1,   215,    24,    26,     1,   219,   220,   221,
       1,    10,    11,    12,    13,    14,    15,    16,    17,    10,
      11,    25,    13,    14,   236,    24,   320,   321,    27,    24,
      21,    22,     3,    32,    33,    34,    35,   249,   250,   251,
     252,    32,     1,   310,   268,     1,   270,   271,   272,     1,
       1,    10,    11,    12,    13,    14,   268,     1,   270,   271,
     272,     1,     3,     1,    20,   289,     4,   310,    27,    25,
       1,     9,    24,    32,    25,   299,   343,     1,   345,    19,
       4,    25,   349,   350,   351,   352,   353,    32,    26,   356,
     357,   358,   359,   360,    25,   319,     1,     1,     1,   323,
     343,   325,   326,   327,   328,   329,     1,    10,    11,    12,
      13,    14,    32,   356,   357,   358,   359,   360,   330,   331,
      24,     1,     1,    26,    27,    26,   319,    26,    23,    32,
     354,   355,   325,   326,   327,   328,   329,    16,    17,    18,
      19,    20,     1,    22,    24,    24,    25,    23,    27,    28,
      29,     1,    31,    32,    33,    34,    35,   210,   211,   212,
       1,    11,    12,    13,    14,    24,    26,   379,   380,   381,
     382,   383,   384,   385,    15,    16,    17,    18,    19,    20,
      26,     1,    32,    24,    25,    29,    27,    28,    29,    26,
      31,    32,    33,    34,    35,    15,    16,    17,    18,    19,
      20,    29,     1,    28,    24,    25,     1,    27,    28,    29,
      28,    31,    32,    33,    34,    35,    15,    16,    17,    28,
      15,    16,    17,    28,    19,    24,    27,    26,     1,    24,
     354,   355,     1,    32,    33,    34,    35,    32,    33,    34,
      35,    19,    15,    16,    17,    27,    15,    16,    17,    32,
      27,    24,    27,     1,    25,    24,    32,    30,    27,    32,
      33,    34,    35,    32,    33,    34,    35,    15,    16,    17,
       1,     0,     1,     1,    32,     4,    24,     1,    32,    32,
      11,    12,    13,    14,    32,    33,    34,    35,    16,    17,
      27,    27,    16,    17,    27,    26,    24,    25,    25,    25,
      24,    32,    25,    25,    32,    33,    34,    35,    32,    33,
      34,    35,     1,    62,    63,    64,     5,    24,     1,    24,
      19,    10,    11,    19,    13,    14,    26,    10,    11,    12,
      13,    14,    21,    22,    24,     1,    24,    86,    27,    29,
      30,     1,    19,    32,    27,    11,    30,    13,    14,    32,
       1,    11,    26,    13,    14,    23,    24,    25,     1,    26,
      11,    27,    13,    14,    26,     1,    32,    27,    11,    30,
      13,    14,    32,     1,    24,    11,    27,    13,    14,    25,
       1,    32,    24,    11,    27,    13,    14,    25,     1,    32,
      11,    27,    13,    14,    25,     1,    32,    32,    11,    27,
      13,    14,    25,     1,    32,    11,    27,    13,    14,    25,
       1,    32,    26,    11,    27,    13,    14,    25,     1,    32,
      11,    27,    13,    14,    26,     1,    32,    26,    11,    27,
      13,    14,    26,     1,    32,    11,    27,    13,    14,    25,
      25,    32,     1,    11,    27,    13,    14,    25,     1,    32,
      12,    27,    11,     1,    13,    14,    32,    10,    11,    27,
      13,    14,    10,    11,    32,    13,    14,    12,    27,    24,
       1,    12,    27,    32,    29,    30,     1,    26,    32,    32,
      11,    10,    13,    14,    32,     1,    11,    26,    13,    14,
     270,   271,   272,     1,    26,    11,    27,    13,    14,    26,
      10,    32,    27,    11,     1,    13,    14,    32,    10,    10,
      10,    27,    27,    27,    27,    27,    32,    12,     1,    27,
      27,    18,    19,    20,    32,   323,     1,    -1,    25,    27,
      27,    28,    29,     1,    31,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    18,    27,    28,    29,     1,    31,    -1,
      18,    19,    20,    28,    29,    -1,    31,    25,    -1,    27,
      28,    29,     1,    31,    18,    19,    20,     1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    -1,    31,    -1,    18,
      -1,    20,     1,     1,    18,    19,    25,     1,    -1,    28,
      29,    -1,    31,    -1,    28,    29,    -1,    31,    -1,    18,
      18,    20,     1,     1,    18,    19,    25,    25,    -1,    -1,
      29,    29,    31,    31,    -1,    29,    -1,    31,     1,    18,
      18,     1,     1,    -1,    -1,    -1,    25,    25,    -1,    -1,
      29,    29,    31,    31,    -1,    18,     1,     1,    18,    18,
      19,     1,    25,    -1,    -1,    25,    29,    -1,    31,    29,
      29,    31,    31,    18,    18,     1,    -1,    -1,    18,     1,
      25,    25,    -1,    -1,    29,    29,    31,    31,    28,    29,
      -1,    31,    18,     1,     1,    -1,    18,    -1,    -1,    25,
       1,     1,    -1,    29,    -1,    31,    28,    29,    -1,    31,
      18,    18,    -1,    -1,    -1,     1,    -1,    18,    18,    27,
      27,    29,    29,    31,    31,    -1,    27,    27,    29,    29,
      31,    31,    18,    19,     1,    -1,    -1,     1,    -1,    -1,
       1,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    18,    19,     1,    18,    19,     1,
      -1,    -1,    29,     1,    31,    29,    -1,    31,    29,    -1,
      31,    -1,    -1,    18,    19,    -1,    18,    19,     1,    -1,
      18,    19,     1,    -1,    29,     1,    31,    29,    -1,    31,
      -1,    29,    -1,    31,    -1,    18,    19,    -1,    -1,    18,
      19,     1,    18,    19,     1,    -1,    29,    -1,    31,    -1,
      29,    -1,    31,    29,    -1,    31,    -1,    -1,    18,    19,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    29,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    37,    50,    32,     1,    32,     0,     1,
       4,    38,    39,    56,    26,    26,     1,    26,    32,     1,
      32,    38,     3,     3,     3,     3,     1,     4,     9,    40,
      56,    40,    40,     1,    24,    51,    51,    51,    51,    32,
       1,    32,    26,    26,     1,    26,    23,     1,    23,    26,
      26,    26,     1,    26,     1,    21,    22,    32,    41,    44,
      49,    56,    41,    41,    41,    29,    29,     1,    29,     1,
      11,    13,    14,    32,    43,    52,    56,    52,    52,    52,
      52,     1,    29,     1,     5,    42,    48,    56,    41,     1,
      32,    42,    42,    42,    28,    28,    28,     1,    28,    24,
      29,    30,     1,    24,     1,    24,     1,    24,     1,    29,
      30,    27,    43,    52,    27,    27,    27,     1,    27,    28,
       1,    28,    49,    49,    27,    42,    19,     1,    19,    30,
      27,    27,     1,    27,    32,    32,    32,    32,     1,    32,
       1,    16,    17,    24,    32,    33,    34,    35,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      27,    27,    27,    27,    27,     1,    27,    32,     1,    32,
       1,    33,    25,    25,    25,    25,    25,     1,    25,    22,
      32,    53,     1,    22,    32,    53,    53,     1,    18,    25,
      29,    31,    28,    19,    25,     1,    25,    25,     1,    25,
      25,     1,    25,    19,    28,     1,    28,     1,    19,    24,
      24,     1,    24,    19,    19,    26,    24,    25,    24,    26,
       1,    26,     1,    24,     1,    25,    15,    32,    53,     1,
      15,    32,    19,    26,    53,    53,    30,    26,    26,    26,
      52,    26,    26,    26,    52,    19,    19,     1,    19,    30,
      30,     1,    30,    47,    49,    56,    47,    47,    47,    53,
      25,    25,    53,    53,    53,    25,     1,    25,    24,    28,
      24,     1,    24,    52,     1,    28,    53,    52,    52,    52,
      12,    52,    52,    52,    53,    53,    53,    53,    25,    32,
      25,    25,     1,    25,    27,    27,    27,     1,    27,    53,
      54,    56,    54,    54,    54,    27,    19,    27,    27,    27,
      26,    27,    27,    27,    19,    19,    19,     1,    19,    26,
       1,    20,    45,    46,    56,    26,    26,    26,     1,    26,
       1,    20,    55,    56,    25,    25,    25,     1,    25,    12,
      12,    12,     1,    12,    52,    41,    49,    49,    45,    41,
      41,    41,    41,    41,    53,    53,    26,    26,    26,    26,
      26,    52,    27,    43,    32,     1,    32,    43,    43,    43,
      43,    43,    55,    55,    52,    52,    52,    52,    52,    10,
      10,    10,    10,    10,     1,    10,    27,    27,    27,    27,
      27,    53,    53,    53,    53,    53,    53,    53,    19,    19,
      19,    19,    19,    19,     1,    19,    27,    27,    27,    27,
      27,    27,    27,     1,    27
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
        case 6:

/* Line 1455 of yacc.c  */
#line 73 "SyntaxicAnalyser.y"
    {yyerror (" erreur mot cle class errone dans la line : "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 74 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 75 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade ouvarnte  manquant dans la line : "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyser.y"
    {yyerror ("  erreur acolade FERMANT  manquant dans la line : "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 80 "SyntaxicAnalyser.y"
    {yyerror (" mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 81 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 94 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 95 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 98 "SyntaxicAnalyser.y"
    {yyerror ("valeur manquante  dans la line :"); YYABORT;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 104 "SyntaxicAnalyser.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 105 "SyntaxicAnalyser.y"
    {yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 111 "SyntaxicAnalyser.y"
    {yyerror ("mot clee class manquant ou errone dans la line :"); YYABORT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 112 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 113 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 114 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 115 "SyntaxicAnalyser.y"
    {yyerror ("acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 116 "SyntaxicAnalyser.y"
    {yyerror ("mot clee return manquant ou errone dans la line :"); YYABORT;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 117 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 118 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 124 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 125 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 129 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type dans la line :"); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 133 "SyntaxicAnalyser.y"
    {yyerror ("mot cle CLASS errone ou bien manquant on line : "); YYABORT;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 134 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 135 "SyntaxicAnalyser.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 136 "SyntaxicAnalyser.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 137 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 138 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 142 "SyntaxicAnalyser.y"
    {yyerror (" parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 143 "SyntaxicAnalyser.y"
    {yyerror (" erreur mot cle String errone dans la line:  "); YYABORT;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 144 "SyntaxicAnalyser.y"
    {yyerror (" tabulation ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 145 "SyntaxicAnalyser.y"
    {yyerror (" tabulation fermante manquante dans la line: "); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 146 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 147 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 156 "SyntaxicAnalyser.y"
    {yyerror ("mot cle IF errone ou bien manquant on line : "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 157 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 158 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 159 "SyntaxicAnalyser.y"
    {yyerror ("mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 163 "SyntaxicAnalyser.y"
    {yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 164 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 165 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 168 "SyntaxicAnalyser.y"
    {yyerror ("system.out.println errone ou bien manquant on line : "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 169 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 170 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 171 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 174 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 175 "SyntaxicAnalyser.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 176 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 179 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 180 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 181 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 182 "SyntaxicAnalyser.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 183 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 187 "SyntaxicAnalyser.y"
    {yyerror ("operateur manquant dans la line :"); YYABORT;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 190 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 191 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 194 "SyntaxicAnalyser.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 195 "SyntaxicAnalyser.y"
    {yyerror ("mot cle LENGTH manquant dans la line :"); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 198 "SyntaxicAnalyser.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 199 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 200 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 201 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 208 "SyntaxicAnalyser.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 211 "SyntaxicAnalyser.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 212 "SyntaxicAnalyser.y"
    {yyerror (" mot cle int manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 213 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 214 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade fermante  manquante dans la line : "); YYABORT;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 217 "SyntaxicAnalyser.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 218 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 219 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 220 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 223 "SyntaxicAnalyser.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 226 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 227 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 234 "SyntaxicAnalyser.y"
    {yyerror ("erreur VIRGULE manquante dans la line :"); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2338 "SyntaxicAnalyser.tab.c"
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
#line 246 "SyntaxicAnalyser.y"
 

int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,line);
	return 0;	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
}
