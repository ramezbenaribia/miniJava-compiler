
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
     QUOTE = 290,
     INT_ERROR = 291,
     STRING_ERROR = 292,
     NOT = 293
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
#line 165 "SyntaxicAnalyser.tab.c"

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
#define YYLAST   1082

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  427

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    19,    27,    35,    43,
      51,    54,    56,    59,    62,    65,    67,    70,    72,    75,
      77,    81,    89,    97,   105,   109,   113,   119,   125,   128,
     130,   134,   138,   142,   146,   148,   162,   176,   190,   204,
     218,   232,   246,   260,   274,   278,   282,   286,   288,   290,
     292,   294,   296,   298,   300,   310,   320,   330,   340,   350,
     360,   370,   377,   384,   391,   398,   405,   412,   419,   421,
     433,   443,   453,   465,   477,   489,   501,   509,   515,   523,
     531,   539,   545,   551,   557,   563,   569,   574,   579,   584,
     589,   597,   605,   613,   621,   629,   637,   641,   645,   650,
     655,   660,   664,   668,   672,   679,   686,   693,   700,   707,
     709,   711,   713,   715,   717,   723,   729,   735,   741,   747,
     752,   757,   762,   767,   772,   775,   778,   782,   786,   790,
     793,   795,   799,   803,   805
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    53,    41,    -1,    42,    41,    -1,    59,
      -1,     4,    32,    43,    26,    44,    45,    27,    -1,     1,
      32,    43,    26,    44,    45,    27,    -1,     4,     1,    43,
      26,    44,    45,    27,    -1,     4,    32,    43,     1,    44,
      45,    27,    -1,     4,    32,    43,    26,    44,    45,     1,
      -1,     9,    32,    -1,    59,    -1,     1,    32,    -1,     4,
       1,    -1,    47,    44,    -1,    59,    -1,    51,    45,    -1,
      59,    -1,    55,    46,    -1,    59,    -1,    52,    32,    19,
      -1,    52,    32,    30,    35,    32,    35,    19,    -1,    52,
      32,    30,     1,    32,    35,    19,    -1,    52,    32,    30,
      35,    32,     1,    19,    -1,    52,     1,    19,    -1,    52,
      32,     1,    -1,    52,    32,    30,    33,    19,    -1,    52,
      32,    30,     1,    19,    -1,    49,    48,    -1,    59,    -1,
      20,    52,    32,    -1,     1,    52,    32,    -1,    20,    52,
       1,    -1,    52,    32,    48,    -1,    59,    -1,     5,    52,
      32,    24,    50,    25,    26,    44,    46,    10,    56,    19,
      27,    -1,     1,    52,    32,    24,    50,    25,    26,    44,
      46,    10,    56,    19,    27,    -1,     5,    52,     1,    24,
      50,    25,    26,    44,    46,    10,    56,    19,    27,    -1,
       5,    52,    32,     1,    50,    25,    26,    44,    46,    10,
      56,    19,    27,    -1,     5,    52,    32,    24,    50,     1,
      26,    44,    46,    10,    56,    19,    27,    -1,     5,    52,
      32,    24,    50,    25,     1,    44,    46,    10,    56,    19,
      27,    -1,     5,    52,    32,    24,    50,    25,    26,    44,
      46,     1,    56,    19,    27,    -1,     5,    52,    32,    24,
      50,    25,    26,    44,    46,    10,    56,     1,    27,    -1,
       5,    52,    32,    24,    50,    25,    26,    44,    46,    10,
      56,    19,     1,    -1,    22,    29,    28,    -1,    22,     1,
      28,    -1,    22,    29,     1,    -1,    21,    -1,    22,    -1,
      23,    -1,    32,    -1,    36,    -1,    37,    -1,     1,    -1,
       4,    32,    26,     3,    54,    26,    55,    27,    27,    -1,
       1,    32,    26,     3,    54,    26,    55,    27,    27,    -1,
       4,     1,    26,     3,    54,    26,    55,    27,    27,    -1,
       4,    32,     1,     3,    54,    26,    55,    27,    27,    -1,
       4,    32,    26,     3,    54,     1,    55,    27,    27,    -1,
       4,    32,    26,     3,    54,    26,    55,     1,    27,    -1,
       4,    32,    26,     3,    54,    26,    55,    27,     1,    -1,
      24,    23,    29,    28,    32,    25,    -1,     1,    23,    29,
      28,    32,    25,    -1,    24,     1,    29,    28,    32,    25,
      -1,    24,    23,     1,    28,    32,    25,    -1,    24,    23,
      29,     1,    32,    25,    -1,    24,    23,    29,    28,     1,
      25,    -1,    24,    23,    29,    28,    32,     1,    -1,    46,
      -1,    11,    24,    56,    25,    26,    55,    27,    12,    26,
      55,    27,    -1,    11,    24,    56,    25,    26,    55,    27,
      12,    55,    -1,    11,    24,    56,    25,    55,    12,    26,
      55,    27,    -1,     1,    24,    56,    25,    26,    55,    27,
      12,    26,    55,    27,    -1,    11,     1,    56,    25,    26,
      55,    27,    12,    26,    55,    27,    -1,    11,    24,    56,
       1,    26,    55,    27,    12,    26,    55,    27,    -1,    11,
      24,    56,    25,    26,    55,    27,     1,    26,    55,    27,
      -1,    13,    24,    56,    25,    26,    55,    27,    -1,    13,
      24,    56,    25,    55,    -1,     1,    24,    56,    25,    26,
      55,    27,    -1,    13,     1,    56,    25,    26,    55,    27,
      -1,    13,    24,    56,     1,    26,    55,    27,    -1,    14,
      24,    56,    25,    19,    -1,     1,    24,    56,    25,    19,
      -1,    14,     1,    56,    25,    19,    -1,    14,    24,    56,
       1,    19,    -1,    14,    24,    56,    25,     1,    -1,    32,
      30,    56,    19,    -1,     1,    30,    56,    19,    -1,    32,
       1,    56,    19,    -1,    32,    30,    56,     1,    -1,    32,
      29,    56,    28,    30,    56,    19,    -1,     1,    29,    56,
      28,    30,    56,    19,    -1,    32,     1,    56,    28,    30,
      56,    19,    -1,    32,    29,    56,     1,    30,    56,    19,
      -1,    32,    29,    56,    28,     1,    56,    19,    -1,    32,
      29,    56,    28,    30,    56,     1,    -1,    56,    31,    56,
      -1,    56,     1,    56,    -1,    56,    29,    56,    28,    -1,
      56,     1,    56,    28,    -1,    56,    29,    56,     1,    -1,
      56,    18,    15,    -1,    56,     1,    15,    -1,    56,    18,
       1,    -1,    56,    18,    32,    24,    57,    25,    -1,    56,
       1,    32,    24,    57,    25,    -1,    56,    18,     1,    24,
      57,    25,    -1,    56,    18,    32,     1,    57,    25,    -1,
      56,    18,    32,    24,    57,     1,    -1,    33,    -1,    34,
      -1,    32,    -1,    16,    -1,     1,    -1,    17,    22,    26,
      56,    27,    -1,     1,    22,    26,    56,    27,    -1,    17,
       1,    26,    56,    27,    -1,    17,    22,     1,    56,    27,
      -1,    17,    22,    26,    56,     1,    -1,    17,    32,    24,
      25,    -1,     1,    32,    24,    25,    -1,    17,     1,    24,
      25,    -1,    17,    32,     1,    25,    -1,    17,    32,    24,
       1,    -1,    38,    56,    -1,     1,    56,    -1,    24,    56,
      25,    -1,     1,    56,    25,    -1,    24,    56,     1,    -1,
      56,    58,    -1,    59,    -1,    20,    56,    58,    -1,     1,
      56,    58,    -1,    59,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    72,    73,    76,    77,    78,    79,    80,
      82,    83,    84,    85,    88,    89,    91,    92,    94,    95,
      97,    98,    99,   100,   101,   102,   104,   105,   107,   108,
     110,   111,   112,   114,   115,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   142,   143,   144,   145,   146,   147,
     148,   151,   152,   153,   154,   155,   156,   157,   162,   163,
     164,   165,   166,   167,   168,   169,   171,   172,   173,   174,
     175,   177,   178,   179,   180,   181,   183,   184,   185,   186,
     188,   189,   190,   191,   192,   193,   196,   197,   199,   200,
     201,   203,   204,   205,   207,   208,   209,   210,   211,   214,
     215,   216,   217,   218,   220,   221,   222,   223,   224,   226,
     227,   228,   229,   230,   232,   233,   235,   236,   237,   240,
     241,   243,   244,   245,   248
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
  "OPERATOR", "ID", "NUMBER", "BOOL", "QUOTE", "INT_ERROR", "STRING_ERROR",
  "NOT", "$accept", "programme", "ClassDeclarationRepeat",
  "ClassDeclaration", "EXTENDSIDRepeat", "VarDeclarationRepeat",
  "MethodDeclarationRepeat", "STATEMENTRepeat", "VarDeclaration",
  "VTIRepeat", "VTI", "TIVTIRepeat", "MethodDeclaration", "Type",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    42,    42,    42,
      43,    43,    43,    43,    44,    44,    45,    45,    46,    46,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    48,
      49,    49,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    57,
      57,    58,    58,    58,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     7,     7,     7,     7,     7,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       3,     7,     7,     7,     3,     3,     5,     5,     2,     1,
       3,     3,     3,     3,     1,    13,    13,    13,    13,    13,
      13,    13,    13,    13,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     9,     9,     9,     9,     9,     9,
       9,     6,     6,     6,     6,     6,     6,     6,     1,    11,
       9,     9,    11,    11,    11,    11,     7,     5,     7,     7,
       7,     5,     5,     5,     5,     5,     4,     4,     4,     4,
       7,     7,     7,     7,     7,     7,     3,     3,     4,     4,
       4,     3,     3,     3,     6,     6,     6,     6,     6,     1,
       1,     1,     1,     1,     5,     5,     5,     5,     5,     4,
       4,     4,     4,     4,     2,     2,     3,     3,     3,     2,
       1,     3,     3,     1,     0
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
       0,     0,     0,     0,    53,    47,     0,    49,    50,    51,
      52,     0,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,    45,    46,    44,     0,     0,     6,    16,    24,
      25,    20,     0,     7,     8,     9,     5,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,   111,   109,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,    60,    54,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    61,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    86,     0,     0,     0,     0,    27,     0,    26,
       0,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,   126,   102,   111,     0,   103,   101,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    84,    85,    81,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,   120,
     121,     0,     0,     0,   122,   123,   119,     0,    99,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    21,   115,   116,   117,     0,
     114,     0,     0,   130,     0,     0,     0,    78,    91,     0,
       0,     0,     0,    79,    80,    76,    92,    93,    94,     0,
      90,     0,     0,     0,    33,     0,    29,     0,     0,     0,
       0,     0,     0,     0,   129,   133,   105,   106,   107,   108,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    68,    31,    32,    30,    68,
      68,    68,    68,     0,   132,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
      74,    75,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,    37,
      38,    39,    40,    41,    42,    43,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    29,    61,    88,   115,    62,   334,
     335,   259,    89,    63,     4,    35,   116,   234,   312,   344,
      79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -179
static const yytype_int16 yypact[] =
{
      18,    -5,    46,    29,    17,    77,   132,    95,  -179,   174,
      82,  -179,    17,  -179,   234,   238,   240,   269,   557,   557,
     557,  -179,     6,     6,     6,     6,   226,   273,   261,   277,
    -179,   287,   150,   291,   283,   298,   313,   324,   237,  -179,
    -179,  -179,   533,   533,   533,   533,   332,   371,   171,   645,
     645,   645,   645,   645,  -179,  -179,    55,  -179,  -179,  -179,
    -179,   180,   481,   111,  -179,   180,   180,   180,   373,   377,
     382,     3,   459,   166,   342,   363,    94,  -179,   660,  -179,
     669,   675,   684,   692,   386,   114,   289,   289,   402,   180,
    -179,  -179,   427,   223,   415,   431,   202,   422,   430,   440,
     441,   112,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   432,  -179,   590,   457,   460,   473,
     365,   220,  -179,  -179,  -179,   469,   128,  -179,  -179,  -179,
    -179,  -179,    36,  -179,  -179,  -179,  -179,   480,   482,   485,
     487,   490,   198,    48,  -179,    98,   447,  -179,  -179,  -179,
     447,   405,   508,   874,   877,   889,   898,   903,   908,   918,
     301,   804,   923,  -179,  -179,  -179,  -179,  -179,  -179,  -179,
     492,   495,   366,    -6,   503,   474,  -179,  -179,  -179,  -179,
    -179,  -179,  -179,   499,   511,   811,    92,   253,   367,   930,
     825,   436,    10,   323,   447,   447,   513,  -179,   514,    93,
     464,   515,   387,   561,   525,   201,     9,  -179,   518,   411,
     127,   181,  -179,    23,    23,    23,    23,  -179,   522,  -179,
       8,   447,   520,  -179,   534,   447,   447,   447,   538,   255,
      73,  -179,  -179,   526,   840,   540,  -179,   392,  -179,   645,
     833,   854,   447,   645,   645,   645,   385,   645,   645,   645,
     617,  -179,  -179,  -179,  -179,   447,   447,   447,   447,   542,
     544,  -179,   554,   559,   290,   563,   570,   571,   939,  -179,
    -179,   944,   945,   959,  -179,  -179,  -179,   284,  -179,   284,
     284,   284,   699,   121,  -179,   963,   707,   714,   722,   560,
     729,   737,   744,   966,   982,   986,   990,   566,   340,   579,
     580,   581,   256,  -179,  -179,  -179,  -179,  -179,  -179,   146,
    -179,   622,   583,  -179,   587,   588,   303,   597,  -179,   607,
     608,    11,   645,  -179,  -179,  -179,  -179,  -179,  -179,   254,
    -179,   510,   289,   289,  -179,   340,  -179,   510,   510,   510,
     510,   510,   436,   447,  -179,  -179,  -179,  -179,  -179,  -179,
    -179,   595,   599,   600,   606,   584,   752,   567,   609,   155,
    -179,   567,   567,   567,   567,   567,   869,   622,   645,   645,
     645,   645,   645,   623,  -179,   628,  -179,  -179,  -179,   629,
     633,   635,   638,   767,  -179,  -179,   759,   774,   781,   789,
     796,   447,   447,   447,   447,   447,   447,   447,  -179,  -179,
    -179,  -179,  -179,  1005,  1009,  1013,  1028,  1032,  1036,  1051,
     625,   627,   630,   648,   651,   652,   423,   235,  -179,  -179,
    -179,  -179,  -179,  -179,  -179,  -179,  -179
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,   650,  -179,   149,   -42,   194,   -17,  -179,   325,
    -179,   143,  -179,   -81,  -179,   384,     1,   272,   152,  -178,
      -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -135
static const yytype_int16 yytable[] =
{
      13,    65,    66,    67,   100,   125,   126,    33,    13,   266,
     253,   235,   354,   217,    30,    30,    30,  -134,     9,     1,
      91,    10,     2,   355,    54,   236,   218,     5,   254,     8,
      34,   101,    77,    77,    77,    77,    77,   173,    64,    64,
      64,    64,   237,   267,    55,    56,    57,     6,  -134,   143,
      78,    80,    81,    82,    83,    58,    84,    90,    64,    59,
      60,    90,    90,    90,   144,   145,  -113,  -113,  -113,   174,
     183,   175,   146,  -113,   143,  -113,  -113,  -113,     7,  -113,
     184,   148,   149,    19,    85,    90,   150,   -48,   232,   144,
     145,  -128,  -128,  -128,   143,   111,    16,   146,  -128,   186,
    -128,  -128,  -128,    14,  -128,   233,   148,   149,   232,   144,
     145,   150,    92,   141,    20,   123,   224,   146,   225,   244,
     187,    17,   143,   112,   113,   233,   148,   149,   257,   171,
     188,   150,   260,   260,   260,   260,   232,   144,   145,  -100,
    -100,  -100,   124,    93,   142,   146,  -100,   143,  -100,  -100,
    -100,    44,  -100,   233,   148,   149,   377,   258,    15,   150,
     172,   232,   144,   145,  -118,  -118,  -118,   105,    31,    32,
     146,  -118,    70,  -118,  -118,  -118,    45,  -118,   233,   148,
     149,    86,   143,    77,   150,    87,    77,   378,   384,   385,
     106,   -89,   -89,   -89,   -89,   -89,   232,   144,   145,   181,
      71,   246,   143,   135,   250,   146,    18,  -134,   -89,   261,
     261,   261,   261,   233,   148,   149,   232,   144,   145,   150,
     252,   168,    77,   182,   130,   146,    77,    77,    77,   136,
      77,    77,    77,   233,   148,   149,   425,    22,    52,   150,
     282,    23,   131,    24,   286,   287,   288,   169,   290,   291,
     292,   358,   359,   132,   226,   143,   275,   340,    39,    94,
      95,    96,   426,    53,   -95,   -95,   -95,   -95,   -95,   232,
     144,   145,    25,   313,    40,   313,   313,   313,   146,   227,
     276,   -95,   341,   128,    47,   143,   233,   148,   149,   357,
      54,   301,   150,    41,   336,   361,   362,   363,   364,   365,
     144,   145,   191,    42,   349,    77,    48,   345,   146,  -134,
      55,    56,    57,    43,    46,   302,   147,   148,   149,   192,
     207,    58,   150,   356,    49,    59,    60,    64,   350,   208,
     194,   336,   195,    64,    64,    64,    64,    64,    77,    50,
     375,   332,   238,   107,   379,   380,   381,   382,   383,   239,
      51,    77,    77,    77,    77,    77,   373,   262,   263,   264,
     333,    68,   345,   345,   109,  -134,   108,   215,   228,   386,
     387,   388,   389,   390,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    72,   110,   143,   102,
     216,   229,   167,   280,   103,   104,    73,   289,    74,    75,
      69,    97,   232,   144,   145,    98,   191,    36,    37,    38,
      99,   146,   143,   248,   122,   185,   281,    76,   189,   233,
     148,   149,   190,   192,   143,   150,   232,   144,   145,   127,
     193,   314,   315,   316,   194,   146,   195,   143,   232,   144,
     145,   256,   133,   233,   148,   149,   129,   146,   143,   150,
     424,   232,   144,   145,   137,   233,   148,   149,   134,   163,
     146,   150,   138,   144,   145,    72,   240,   241,   233,   148,
     149,   146,   139,   140,   150,    73,  -134,    74,    75,   147,
     148,   149,    54,   102,   164,   150,  -134,   165,   103,   104,
     245,  -134,  -134,   268,  -134,  -134,    76,   271,   272,   273,
     166,   170,    55,    56,    57,   176,   220,   177,  -134,   191,
     178,    54,   179,    58,   285,   180,   213,    59,    60,   214,
    -134,  -134,   219,  -134,  -134,   221,   192,   293,   294,   295,
     296,    55,    56,    57,    54,   222,   196,   194,  -134,   195,
     243,   247,    58,   242,   251,   269,    59,    60,   255,   311,
     277,   311,   311,   311,    55,    56,    57,   265,    26,   270,
    -134,    27,    72,   274,   279,    58,    28,   297,    72,    59,
      60,  -134,    73,  -134,    74,    75,   298,  -134,    73,   299,
      74,    75,   303,  -134,   300,    72,   322,   249,  -134,   304,
     305,    72,   331,    76,  -134,    73,  -134,    74,    75,    76,
    -134,    73,  -134,    74,    75,   337,   338,   339,   346,   351,
     372,  -134,   347,   348,   366,   367,    76,  -134,    72,   352,
     353,   368,    76,   342,    72,   369,   370,   -77,    73,   -77,
      74,    75,   371,   -70,    73,   -70,    74,    75,   391,   392,
     192,   376,   343,   393,   -77,   394,    72,  -134,   395,    76,
     -70,   194,   418,   195,   419,    76,    73,   420,    74,    75,
     360,    72,    21,   403,   404,   405,   406,   407,   408,   409,
      72,    73,  -134,    74,    75,   421,    72,    76,   422,   423,
      73,     0,    74,    75,     0,    72,    73,   114,    74,    75,
       0,     0,    76,   120,     0,    73,   117,    74,    75,     0,
      72,    76,   118,    73,     0,    74,    75,    76,    72,     0,
      73,   119,    74,    75,     0,    72,    76,     0,    73,   121,
      74,    75,     0,    72,    76,    73,   317,    74,    75,     0,
      72,    76,     0,    73,   319,    74,    75,     0,    72,    76,
      73,   320,    74,    75,     0,    72,    76,     0,    73,   321,
      74,    75,     0,    72,    76,    73,   323,    74,    75,     0,
      72,    76,     0,    73,   324,    74,    75,     0,   396,    76,
      73,   325,    74,    75,     0,    72,    76,   397,   -68,   374,
     -68,   -68,    72,     0,    76,    73,   398,    74,    75,     0,
      72,    76,    73,     0,    74,    75,     0,    72,     0,   -68,
      73,   399,    74,    75,     0,   209,    76,    73,   400,    74,
      75,     0,   191,    76,     0,     0,   401,     0,     0,     0,
       0,    76,   192,   402,     0,     0,   191,     0,    76,   192,
    -125,  -125,   210,   194,   283,   195,   223,     0,  -125,  -125,
     194,   191,   195,   192,  -124,  -124,     0,     0,     0,     0,
    -124,   192,  -124,  -124,   194,   191,   195,     0,   192,   -97,
     -97,   284,   194,     0,   195,   -97,     0,   -97,   278,   194,
     342,   195,   192,   -96,   -96,   191,     0,     0,   191,   -96,
       0,   -96,   -96,   194,     0,   195,     0,   192,     0,   343,
     199,     0,   192,   197,   -97,   192,     0,   278,   194,   191,
     195,     0,   198,   194,   202,   195,   194,   192,   195,   191,
       0,     0,     0,     0,   200,     0,   192,     0,   194,   205,
     195,   192,     0,   201,   211,     0,   192,   194,   203,   195,
       0,   230,   194,   204,   195,     0,   192,   194,     0,   195,
     191,   192,   212,   206,     0,   191,   191,   194,   192,   195,
       0,     0,   194,     0,   195,   231,     0,   192,     0,   194,
     309,   195,   192,   192,   191,     0,   306,   191,   194,     0,
     195,   307,   308,   194,   194,   195,   195,   192,     0,     0,
       0,   192,   318,   191,   192,   326,   310,   191,   194,     0,
     195,   329,   194,     0,   195,   194,     0,   195,     0,     0,
     192,   327,     0,     0,   192,   328,   191,     0,   192,   330,
     191,   194,     0,   195,   191,   194,     0,   195,     0,   194,
       0,   195,     0,   192,   410,     0,     0,   192,   411,   191,
       0,   192,   412,   191,   194,     0,   195,   191,   194,     0,
     195,     0,   194,     0,   195,     0,   192,   413,     0,     0,
     192,   414,   416,     0,   192,   415,     0,   194,     0,   195,
       0,   194,     0,   195,     0,   194,     0,   195,     0,   192,
     417,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     194,     0,   195
};

static const yytype_int16 yycheck[] =
{
       4,    43,    44,    45,     1,    86,    87,     1,    12,     1,
       1,     1,     1,    19,    18,    19,    20,     0,     1,     1,
      62,     4,     4,    12,     1,    15,    32,    32,    19,     0,
      24,    28,    49,    50,    51,    52,    53,     1,    42,    43,
      44,    45,    32,    35,    21,    22,    23,     1,    25,     1,
      49,    50,    51,    52,    53,    32,     1,    61,    62,    36,
      37,    65,    66,    67,    16,    17,    18,    19,    20,    33,
      22,    35,    24,    25,     1,    27,    28,    29,    32,    31,
      32,    33,    34,     1,    29,    89,    38,    32,    15,    16,
      17,    18,    19,    20,     1,     1,     1,    24,    25,     1,
      27,    28,    29,    26,    31,    32,    33,    34,    15,    16,
      17,    38,     1,     1,    32,     1,    24,    24,    26,    26,
      22,    26,     1,    29,    30,    32,    33,    34,     1,     1,
      32,    38,   213,   214,   215,   216,    15,    16,    17,    18,
      19,    20,    28,    32,    32,    24,    25,     1,    27,    28,
      29,     1,    31,    32,    33,    34,     1,    30,    26,    38,
      32,    15,    16,    17,    18,    19,    20,     1,    19,    20,
      24,    25,     1,    27,    28,    29,    26,    31,    32,    33,
      34,     1,     1,   200,    38,     5,   203,    32,   366,   367,
      24,    10,    11,    12,    13,    14,    15,    16,    17,     1,
      29,   200,     1,     1,   203,    24,    32,    27,    27,   213,
     214,   215,   216,    32,    33,    34,    15,    16,    17,    38,
      19,     1,   239,    25,     1,    24,   243,   244,   245,    27,
     247,   248,   249,    32,    33,    34,     1,     3,     1,    38,
     239,     3,    19,     3,   243,   244,   245,    27,   247,   248,
     249,   332,   333,    30,     1,     1,     1,     1,    32,    65,
      66,    67,    27,    26,    10,    11,    12,    13,    14,    15,
      16,    17,     3,   277,     1,   279,   280,   281,    24,    26,
      25,    27,    26,    89,     1,     1,    32,    33,    34,   331,
       1,     1,    38,    32,   298,   337,   338,   339,   340,   341,
      16,    17,     1,    26,     1,   322,    23,   311,    24,    25,
      21,    22,    23,    26,    23,    25,    32,    33,    34,    18,
      19,    32,    38,   322,    26,    36,    37,   331,    25,    28,
      29,   335,    31,   337,   338,   339,   340,   341,   355,    26,
     357,     1,    19,     1,   361,   362,   363,   364,   365,    26,
      26,   368,   369,   370,   371,   372,   355,   214,   215,   216,
      20,    29,   366,   367,     1,    25,    24,     1,     1,   368,
     369,   370,   371,   372,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     1,    24,     1,    24,
      24,    24,    27,     1,    29,    30,    11,    12,    13,    14,
      29,    28,    15,    16,    17,    28,     1,    23,    24,    25,
      28,    24,     1,    26,    28,   143,    24,    32,   146,    32,
      33,    34,   150,    18,     1,    38,    15,    16,    17,    27,
      25,   279,   280,   281,    29,    24,    31,     1,    15,    16,
      17,    30,    27,    32,    33,    34,    19,    24,     1,    38,
      27,    15,    16,    17,    32,    32,    33,    34,    27,    27,
      24,    38,    32,    16,    17,     1,   194,   195,    32,    33,
      34,    24,    32,    32,    38,    11,    12,    13,    14,    32,
      33,    34,     1,    24,    27,    38,     5,    27,    29,    30,
      26,    10,    11,   221,    13,    14,    32,   225,   226,   227,
      27,    32,    21,    22,    23,    25,    32,    25,    27,     1,
      25,     1,    25,    32,   242,    25,    24,    36,    37,    24,
      10,    11,    19,    13,    14,    26,    18,   255,   256,   257,
     258,    21,    22,    23,     1,    24,    28,    29,     5,    31,
      26,    26,    32,    30,    19,    25,    36,    37,    30,   277,
      24,   279,   280,   281,    21,    22,    23,    35,     1,    25,
      27,     4,     1,    25,    24,    32,     9,    25,     1,    36,
      37,    10,    11,    12,    13,    14,    32,    10,    11,    25,
      13,    14,    19,    26,    25,     1,    26,    26,    27,    19,
      19,     1,    26,    32,    10,    11,    12,    13,    14,    32,
      10,    11,    12,    13,    14,    26,    26,    26,    25,    12,
      26,    27,    25,    25,   342,   343,    32,    27,     1,    12,
      12,    26,    32,     1,     1,    26,    26,    10,    11,    12,
      13,    14,    26,    10,    11,    12,    13,    14,    10,    10,
      18,    32,    20,    10,    27,    10,     1,    25,    10,    32,
      27,    29,    27,    31,    27,    32,    11,    27,    13,    14,
     335,     1,    12,   391,   392,   393,   394,   395,   396,   397,
       1,    11,    27,    13,    14,    27,     1,    32,    27,    27,
      11,    -1,    13,    14,    -1,     1,    11,    27,    13,    14,
      -1,    -1,    32,     1,    -1,    11,    27,    13,    14,    -1,
       1,    32,    27,    11,    -1,    13,    14,    32,     1,    -1,
      11,    27,    13,    14,    -1,     1,    32,    -1,    11,    27,
      13,    14,    -1,     1,    32,    11,    27,    13,    14,    -1,
       1,    32,    -1,    11,    27,    13,    14,    -1,     1,    32,
      11,    27,    13,    14,    -1,     1,    32,    -1,    11,    27,
      13,    14,    -1,     1,    32,    11,    27,    13,    14,    -1,
       1,    32,    -1,    11,    27,    13,    14,    -1,     1,    32,
      11,    27,    13,    14,    -1,     1,    32,    10,    11,    27,
      13,    14,     1,    -1,    32,    11,    27,    13,    14,    -1,
       1,    32,    11,    -1,    13,    14,    -1,     1,    -1,    32,
      11,    27,    13,    14,    -1,     1,    32,    11,    27,    13,
      14,    -1,     1,    32,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    32,    18,    27,    -1,    -1,     1,    -1,    32,    18,
      19,    20,    28,    29,     1,    31,    25,    -1,    27,    28,
      29,     1,    31,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    18,    27,    28,    29,     1,    31,    -1,    18,    19,
      20,    28,    29,    -1,    31,    25,    -1,    27,    28,    29,
       1,    31,    18,    19,    20,     1,    -1,    -1,     1,    25,
      -1,    27,    28,    29,    -1,    31,    -1,    18,    -1,    20,
       1,    -1,    18,    19,    25,    18,    -1,    28,    29,     1,
      31,    -1,    25,    29,     1,    31,    29,    18,    31,     1,
      -1,    -1,    -1,    -1,    25,    -1,    18,    -1,    29,     1,
      31,    18,    -1,    25,     1,    -1,    18,    29,    25,    31,
      -1,     1,    29,    25,    31,    -1,    18,    29,    -1,    31,
       1,    18,    19,    25,    -1,     1,     1,    29,    18,    31,
      -1,    -1,    29,    -1,    31,    25,    -1,    18,    -1,    29,
       1,    31,    18,    18,     1,    -1,    27,     1,    29,    -1,
      31,    27,    27,    29,    29,    31,    31,    18,    -1,    -1,
      -1,    18,    19,     1,    18,    19,    27,     1,    29,    -1,
      31,     1,    29,    -1,    31,    29,    -1,    31,    -1,    -1,
      18,    19,    -1,    -1,    18,    19,     1,    -1,    18,    19,
       1,    29,    -1,    31,     1,    29,    -1,    31,    -1,    29,
      -1,    31,    -1,    18,    19,    -1,    -1,    18,    19,     1,
      -1,    18,    19,     1,    29,    -1,    31,     1,    29,    -1,
      31,    -1,    29,    -1,    31,    -1,    18,    19,    -1,    -1,
      18,    19,     1,    -1,    18,    19,    -1,    29,    -1,    31,
      -1,    29,    -1,    31,    -1,    29,    -1,    31,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    40,    53,    32,     1,    32,     0,     1,
       4,    41,    42,    59,    26,    26,     1,    26,    32,     1,
      32,    41,     3,     3,     3,     3,     1,     4,     9,    43,
      59,    43,    43,     1,    24,    54,    54,    54,    54,    32,
       1,    32,    26,    26,     1,    26,    23,     1,    23,    26,
      26,    26,     1,    26,     1,    21,    22,    23,    32,    36,
      37,    44,    47,    52,    59,    44,    44,    44,    29,    29,
       1,    29,     1,    11,    13,    14,    32,    46,    55,    59,
      55,    55,    55,    55,     1,    29,     1,     5,    45,    51,
      59,    44,     1,    32,    45,    45,    45,    28,    28,    28,
       1,    28,    24,    29,    30,     1,    24,     1,    24,     1,
      24,     1,    29,    30,    27,    46,    55,    27,    27,    27,
       1,    27,    28,     1,    28,    52,    52,    27,    45,    19,
       1,    19,    30,    27,    27,     1,    27,    32,    32,    32,
      32,     1,    32,     1,    16,    17,    24,    32,    33,    34,
      38,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    27,    27,    27,    27,    27,     1,    27,
      32,     1,    32,     1,    33,    35,    25,    25,    25,    25,
      25,     1,    25,    22,    32,    56,     1,    22,    32,    56,
      56,     1,    18,    25,    29,    31,    28,    19,    25,     1,
      25,    25,     1,    25,    25,     1,    25,    19,    28,     1,
      28,     1,    19,    24,    24,     1,    24,    19,    32,    19,
      32,    26,    24,    25,    24,    26,     1,    26,     1,    24,
       1,    25,    15,    32,    56,     1,    15,    32,    19,    26,
      56,    56,    30,    26,    26,    26,    55,    26,    26,    26,
      55,    19,    19,     1,    19,    30,    30,     1,    30,    50,
      52,    59,    50,    50,    50,    35,     1,    35,    56,    25,
      25,    56,    56,    56,    25,     1,    25,    24,    28,    24,
       1,    24,    55,     1,    28,    56,    55,    55,    55,    12,
      55,    55,    55,    56,    56,    56,    56,    25,    32,    25,
      25,     1,    25,    19,    19,    19,    27,    27,    27,     1,
      27,    56,    57,    59,    57,    57,    57,    27,    19,    27,
      27,    27,    26,    27,    27,    27,    19,    19,    19,     1,
      19,    26,     1,    20,    48,    49,    59,    26,    26,    26,
       1,    26,     1,    20,    58,    59,    25,    25,    25,     1,
      25,    12,    12,    12,     1,    12,    55,    44,    52,    52,
      48,    44,    44,    44,    44,    44,    56,    56,    26,    26,
      26,    26,    26,    55,    27,    46,    32,     1,    32,    46,
      46,    46,    46,    46,    58,    58,    55,    55,    55,    55,
      55,    10,    10,    10,    10,    10,     1,    10,    27,    27,
      27,    27,    27,    56,    56,    56,    56,    56,    56,    56,
      19,    19,    19,    19,    19,    19,     1,    19,    27,    27,
      27,    27,    27,    27,    27,     1,    27
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
#line 77 "SyntaxicAnalyser.y"
    {yyerror (" erreur mot cle class errone dans la line : "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 78 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 79 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade ouvarnte  manquant dans la line : "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 80 "SyntaxicAnalyser.y"
    {yyerror ("  erreur acolade FERMANT  manquant dans la line : "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 84 "SyntaxicAnalyser.y"
    {yyerror (" mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 85 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 99 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 100 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 101 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 102 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 105 "SyntaxicAnalyser.y"
    {yyerror ("valeur manquante  dans la line :"); YYABORT;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 111 "SyntaxicAnalyser.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 112 "SyntaxicAnalyser.y"
    {yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 118 "SyntaxicAnalyser.y"
    {yyerror ("mot clee class manquant ou errone dans la line :"); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 119 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 120 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 121 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyser.y"
    {yyerror ("acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 123 "SyntaxicAnalyser.y"
    {yyerror ("mot clee return manquant ou errone dans la line :"); YYABORT;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 124 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 125 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 131 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 132 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 137 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type pour INT dans la line :"); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 138 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type pour STRING dans la line :"); YYABORT;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 139 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type dans la line :"); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 143 "SyntaxicAnalyser.y"
    {yyerror ("mot cle CLASS errone ou bien manquant on line : "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 144 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 145 "SyntaxicAnalyser.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 146 "SyntaxicAnalyser.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 147 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 148 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 152 "SyntaxicAnalyser.y"
    {yyerror (" parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 153 "SyntaxicAnalyser.y"
    {yyerror (" erreur mot cle String errone dans la line:  "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 154 "SyntaxicAnalyser.y"
    {yyerror (" tabulation ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 155 "SyntaxicAnalyser.y"
    {yyerror (" tabulation fermante manquante dans la line: "); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 156 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 157 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 166 "SyntaxicAnalyser.y"
    {yyerror ("mot cle IF errone ou bien manquant on line : "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 167 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 168 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 169 "SyntaxicAnalyser.y"
    {yyerror ("mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 173 "SyntaxicAnalyser.y"
    {yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 174 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 175 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 178 "SyntaxicAnalyser.y"
    {yyerror ("system.out.println errone ou bien manquant on line : "); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 179 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 180 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 181 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 184 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 185 "SyntaxicAnalyser.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 186 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 189 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 190 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 191 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 192 "SyntaxicAnalyser.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 193 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 197 "SyntaxicAnalyser.y"
    {yyerror ("operateur manquant dans la line :"); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 200 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 201 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 204 "SyntaxicAnalyser.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 205 "SyntaxicAnalyser.y"
    {yyerror ("mot cle LENGTH manquant dans la line :"); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 208 "SyntaxicAnalyser.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 209 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 210 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 211 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 218 "SyntaxicAnalyser.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 221 "SyntaxicAnalyser.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 222 "SyntaxicAnalyser.y"
    {yyerror (" mot cle int manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 223 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 224 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade fermante  manquante dans la line : "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 227 "SyntaxicAnalyser.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 228 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 229 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 230 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 233 "SyntaxicAnalyser.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 236 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 237 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 244 "SyntaxicAnalyser.y"
    {yyerror ("erreur VIRGULE manquante dans la line :"); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2390 "SyntaxicAnalyser.tab.c"
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
#line 256 "SyntaxicAnalyser.y"
 

int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,line);
	return 0;	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
}
