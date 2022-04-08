
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
     BOOLEAN_ERROR = 293,
     COMMENT_LINE = 294,
     COMMENT_LONG = 295,
     NOT = 296
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
#line 168 "SyntaxicAnalyser.tab.c"

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
#define YYLAST   1280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNRULES -- Number of states.  */
#define YYNSTATES  440

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

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
      35,    36,    37,    38,    39,    40,    41
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
     292,   294,   296,   300,   304,   308,   310,   312,   314,   324,
     334,   344,   354,   364,   374,   384,   391,   398,   405,   412,
     419,   426,   433,   435,   447,   457,   467,   479,   491,   503,
     515,   523,   529,   537,   545,   553,   559,   565,   571,   577,
     583,   588,   593,   598,   603,   611,   619,   627,   635,   643,
     651,   653,   655,   659,   663,   665,   667,   669,   671,   676,
     681,   686,   690,   694,   698,   705,   712,   719,   726,   733,
     737,   741,   745,   747,   753,   759,   765,   771,   777,   782,
     787,   792,   797,   802,   805,   808,   812,   816,   820,   823,
     825,   829,   833,   835
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    56,    44,    -1,    45,    44,    -1,    62,
      -1,     4,    32,    46,    26,    47,    48,    27,    -1,     1,
      32,    46,    26,    47,    48,    27,    -1,     4,     1,    46,
      26,    47,    48,    27,    -1,     4,    32,    46,     1,    47,
      48,    27,    -1,     4,    32,    46,    26,    47,    48,     1,
      -1,     9,    32,    -1,    62,    -1,     1,    32,    -1,     4,
       1,    -1,    50,    47,    -1,    62,    -1,    54,    48,    -1,
      62,    -1,    58,    49,    -1,    62,    -1,    55,    32,    19,
      -1,    55,    32,    30,    35,    32,    35,    19,    -1,    55,
      32,    30,     1,    32,    35,    19,    -1,    55,    32,    30,
      35,    32,     1,    19,    -1,    55,     1,    19,    -1,    55,
      32,     1,    -1,    55,    32,    30,    33,    19,    -1,    55,
      32,    30,     1,    19,    -1,    52,    51,    -1,    62,    -1,
      20,    55,    32,    -1,     1,    55,    32,    -1,    20,    55,
       1,    -1,    55,    32,    51,    -1,    62,    -1,     5,    55,
      32,    24,    53,    25,    26,    47,    49,    10,    59,    19,
      27,    -1,     1,    55,    32,    24,    53,    25,    26,    47,
      49,    10,    59,    19,    27,    -1,     5,    55,     1,    24,
      53,    25,    26,    47,    49,    10,    59,    19,    27,    -1,
       5,    55,    32,     1,    53,    25,    26,    47,    49,    10,
      59,    19,    27,    -1,     5,    55,    32,    24,    53,     1,
      26,    47,    49,    10,    59,    19,    27,    -1,     5,    55,
      32,    24,    53,    25,     1,    47,    49,    10,    59,    19,
      27,    -1,     5,    55,    32,    24,    53,    25,    26,    47,
      49,     1,    59,    19,    27,    -1,     5,    55,    32,    24,
      53,    25,    26,    47,    49,    10,    59,     1,    27,    -1,
       5,    55,    32,    24,    53,    25,    26,    47,    49,    10,
      59,    19,     1,    -1,    22,    29,    28,    -1,    22,     1,
      28,    -1,    22,    29,     1,    -1,    36,    -1,    21,    -1,
      38,    -1,    22,    -1,    23,    -1,    23,    29,    28,    -1,
      23,     1,    28,    -1,    23,    29,     1,    -1,    37,    -1,
      32,    -1,     1,    -1,     4,    32,    26,     3,    57,    26,
      58,    27,    27,    -1,     1,    32,    26,     3,    57,    26,
      58,    27,    27,    -1,     4,     1,    26,     3,    57,    26,
      58,    27,    27,    -1,     4,    32,     1,     3,    57,    26,
      58,    27,    27,    -1,     4,    32,    26,     3,    57,     1,
      58,    27,    27,    -1,     4,    32,    26,     3,    57,    26,
      58,     1,    27,    -1,     4,    32,    26,     3,    57,    26,
      58,    27,     1,    -1,    24,    23,    29,    28,    32,    25,
      -1,     1,    23,    29,    28,    32,    25,    -1,    24,     1,
      29,    28,    32,    25,    -1,    24,    23,     1,    28,    32,
      25,    -1,    24,    23,    29,     1,    32,    25,    -1,    24,
      23,    29,    28,     1,    25,    -1,    24,    23,    29,    28,
      32,     1,    -1,    49,    -1,    11,    24,    59,    25,    26,
      58,    27,    12,    26,    58,    27,    -1,    11,    24,    59,
      25,    26,    58,    27,    12,    58,    -1,    11,    24,    59,
      25,    58,    12,    26,    58,    27,    -1,     1,    24,    59,
      25,    26,    58,    27,    12,    26,    58,    27,    -1,    11,
       1,    59,    25,    26,    58,    27,    12,    26,    58,    27,
      -1,    11,    24,    59,     1,    26,    58,    27,    12,    26,
      58,    27,    -1,    11,    24,    59,    25,    26,    58,    27,
       1,    26,    58,    27,    -1,    13,    24,    59,    25,    26,
      58,    27,    -1,    13,    24,    59,    25,    58,    -1,     1,
      24,    59,    25,    26,    58,    27,    -1,    13,     1,    59,
      25,    26,    58,    27,    -1,    13,    24,    59,     1,    26,
      58,    27,    -1,    14,    24,    59,    25,    19,    -1,     1,
      24,    59,    25,    19,    -1,    14,     1,    59,    25,    19,
      -1,    14,    24,    59,     1,    19,    -1,    14,    24,    59,
      25,     1,    -1,    32,    30,    59,    19,    -1,     1,    30,
      59,    19,    -1,    32,     1,    59,    19,    -1,    32,    30,
      59,     1,    -1,    32,    29,    59,    28,    30,    59,    19,
      -1,     1,    29,    59,    28,    30,    59,    19,    -1,    32,
       1,    59,    28,    30,    59,    19,    -1,    32,    29,    59,
       1,    30,    59,    19,    -1,    32,    29,    59,    28,     1,
      59,    19,    -1,    32,    29,    59,    28,    30,    59,     1,
      -1,    39,    -1,    40,    -1,    59,    31,    59,    -1,    59,
       1,    59,    -1,    32,    -1,    33,    -1,    34,    -1,    16,
      -1,    59,    29,    59,    28,    -1,    59,     1,    59,    28,
      -1,    59,    29,    59,     1,    -1,    59,    18,    15,    -1,
      59,     1,    15,    -1,    59,    18,     1,    -1,    59,    18,
      32,    24,    60,    25,    -1,    59,     1,    32,    24,    60,
      25,    -1,    59,    18,     1,    24,    60,    25,    -1,    59,
      18,    32,     1,    60,    25,    -1,    59,    18,    32,    24,
      60,     1,    -1,    35,    32,    35,    -1,    35,    32,     1,
      -1,     1,    32,     1,    -1,     1,    -1,    17,    22,    26,
      59,    27,    -1,     1,    22,    26,    59,    27,    -1,    17,
       1,    26,    59,    27,    -1,    17,    22,     1,    59,    27,
      -1,    17,    22,    26,    59,     1,    -1,    17,    32,    24,
      25,    -1,     1,    32,    24,    25,    -1,    17,     1,    24,
      25,    -1,    17,    32,     1,    25,    -1,    17,    32,    24,
       1,    -1,    41,    59,    -1,     1,    59,    -1,    24,    59,
      25,    -1,     1,    59,    25,    -1,    24,    59,     1,    -1,
      59,    61,    -1,    62,    -1,    20,    59,    61,    -1,     1,
      59,    61,    -1,    62,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    69,    69,    75,    76,    79,    80,    81,    82,    83,
      85,    86,    87,    88,    91,    92,    94,    95,    97,    98,
     100,   101,   102,   103,   104,   105,   107,   108,   110,   111,
     113,   114,   115,   117,   118,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   149,   150,
     151,   152,   153,   154,   155,   158,   159,   160,   161,   162,
     163,   164,   169,   170,   171,   172,   173,   174,   175,   176,
     178,   179,   180,   181,   182,   184,   185,   186,   187,   188,
     190,   191,   192,   193,   195,   196,   197,   198,   199,   200,
     202,   203,   206,   207,   209,   210,   211,   212,   214,   215,
     216,   218,   219,   220,   222,   223,   224,   225,   226,   228,
     229,   230,   232,   234,   235,   236,   237,   238,   240,   241,
     242,   243,   244,   246,   247,   249,   250,   251,   254,   255,
     257,   258,   259,   262
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
  "BOOLEAN_ERROR", "COMMENT_LINE", "COMMENT_LONG", "NOT", "$accept",
  "programme", "ClassDeclarationRepeat", "ClassDeclaration",
  "EXTENDSIDRepeat", "VarDeclarationRepeat", "MethodDeclarationRepeat",
  "STATEMENTRepeat", "VarDeclaration", "VTIRepeat", "VTI", "TIVTIRepeat",
  "MethodDeclaration", "Type", "MainClass", "ARG", "STATEMENT",
  "EXPRESSION", "EVEXPRESSION", "VEXPRESSION", "epsilon", 0
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
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    45,    45,
      46,    46,    46,    46,    47,    47,    48,    48,    49,    49,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51,
      52,    52,    52,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      61,    61,    61,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     7,     7,     7,     7,     7,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       3,     7,     7,     7,     3,     3,     5,     5,     2,     1,
       3,     3,     3,     3,     1,    13,    13,    13,    13,    13,
      13,    13,    13,    13,     3,     3,     3,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     1,     1,     9,     9,
       9,     9,     9,     9,     9,     6,     6,     6,     6,     6,
       6,     6,     1,    11,     9,     9,    11,    11,    11,    11,
       7,     5,     7,     7,     7,     5,     5,     5,     5,     5,
       4,     4,     4,     4,     7,     7,     7,     7,     7,     7,
       1,     1,     3,     3,     1,     1,     1,     1,     4,     4,
       4,     3,     3,     3,     6,     6,     6,     6,     6,     3,
       3,     3,     1,     5,     5,     5,     5,     5,     4,     4,
       4,     4,     4,     2,     2,     3,     3,     3,     2,     1,
       3,     3,     1,     0
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
       0,     0,     0,     0,    57,    48,     0,     0,    56,    47,
      55,    49,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
      72,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,     0,    45,    46,    44,
      53,    54,    52,     0,     0,     6,    16,    24,    25,    20,
       0,     7,     8,     9,     5,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,   104,   105,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,    61,    62,    63,    64,    58,     0,
       0,     0,     0,     0,     0,    66,    67,    68,    69,    70,
      71,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,    90,     0,     0,     0,     0,    27,     0,    26,
       0,     0,   121,     0,   136,     0,     0,     0,     0,     0,
       0,     0,   135,   120,   119,   112,   104,     0,   113,   111,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,    89,    85,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,   129,   130,     0,     0,     0,   131,   132,   128,
       0,   109,     0,     0,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    21,   124,
     125,   126,     0,   123,     0,     0,   139,     0,     0,     0,
      82,    95,     0,     0,     0,     0,    83,    84,    80,    96,
      97,    98,     0,    94,     0,     0,     0,    33,     0,    29,
       0,     0,     0,     0,     0,     0,     0,   138,   142,   115,
     116,   117,   118,   114,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,    72,    31,
      32,    30,    72,    72,    72,    72,     0,   141,   140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    37,    38,    39,    40,    41,    42,    43,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    29,    62,    93,   120,    63,   347,
     348,   272,    94,    64,     4,    35,   121,   247,   325,   357,
      82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -202
static const yytype_int16 yypact[] =
{
     115,    35,    16,   118,   133,    94,   128,   112,  -202,   154,
      79,  -202,   133,  -202,   220,   234,   247,   265,   529,   529,
     529,  -202,   203,   203,   203,   203,   185,   269,   255,   277,
    -202,   291,   166,   306,   322,   308,   311,   312,   172,  -202,
    -202,  -202,  1010,  1010,  1010,  1010,   333,   334,    92,   731,
     731,   731,   731,   731,  -202,  -202,    36,    65,  -202,  -202,
    -202,  -202,   268,   616,    83,  -202,   268,   268,   268,   345,
     346,   353,    41,   389,   295,   303,   354,   160,  -202,  -202,
    -202,   754,  -202,   771,   777,   786,   801,   392,   111,   393,
     125,  1037,  1037,   390,   268,  -202,  -202,   408,   194,   396,
     401,   209,   397,   414,   415,   416,    95,   577,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,   409,
    -202,   691,   424,   428,   434,   377,   224,  -202,  -202,  -202,
    -202,  -202,  -202,   430,   108,  -202,  -202,  -202,  -202,  -202,
      12,  -202,  -202,  -202,  -202,   439,   440,   442,   443,   444,
     151,    54,  -202,    76,   577,  -202,  -202,  -202,   438,   577,
     187,   404,   156,   632,   682,  1115,  1118,  1130,  1133,   253,
     470,   983,  -202,  -202,  -202,  -202,  -202,  -202,  -202,   448,
     449,   376,   -13,   455,   451,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,   450,  1052,  1066,   -19,   202,   378,  1149,    11,
    1081,   551,    60,   309,   577,   577,   445,  -202,   474,   259,
     602,   476,   298,    17,   485,   214,     3,  -202,   475,   491,
      98,    90,  -202,  1018,  1018,  1018,  1018,  -202,   477,  -202,
      25,   577,  -202,   484,  -202,   489,   577,   577,   577,   494,
     231,   131,  -202,  -202,  -202,  -202,   486,  1095,   496,  -202,
     379,  -202,   731,   998,  1110,   577,   731,   731,   731,   266,
     731,   731,   731,   714,  -202,  -202,  -202,  -202,   577,   577,
     577,   577,   497,   499,  -202,   509,   515,   241,   518,   523,
     524,   325,  -202,  -202,  1152,  1155,  1167,  -202,  -202,  -202,
     563,  -202,   563,   563,   563,   818,   425,  -202,  1033,   833,
     842,   848,   528,   865,   882,   888,  1170,  1174,  1189,  1194,
     530,   296,   531,   533,   535,   208,  -202,  -202,  -202,  -202,
    -202,  -202,   462,  -202,   540,   537,  -202,   538,   552,   300,
     564,  -202,   569,   570,     8,   731,  -202,  -202,  -202,  -202,
    -202,  -202,   167,  -202,   659,  1037,  1037,  -202,   296,  -202,
     659,   659,   659,   659,   659,   551,   577,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,   565,   573,   574,   576,   398,   897,
     929,   557,   109,  -202,   929,   929,   929,   929,   929,   646,
     540,   731,   731,   731,   731,   731,   737,  -202,   580,  -202,
    -202,  -202,   595,   596,   597,   598,   934,  -202,  -202,   940,
     949,   964,   981,   996,   577,   577,   577,   577,   577,   577,
     577,  -202,  -202,  -202,  -202,  -202,  1203,  1208,  1223,  1227,
    1230,  1246,  1249,   592,   593,   604,   605,   613,   617,   512,
     225,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -202,  -202,   610,  -202,   116,   -42,   103,   -17,  -202,   275,
    -202,  -201,  -202,   -81,  -202,   347,     1,   280,   122,   -38,
      -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -144
static const yytype_int16 yytable[] =
{
      13,    66,    67,    68,   266,   235,   227,   236,    13,   367,
     133,   134,   243,   182,    30,    30,    30,     6,    73,   228,
     368,    96,   267,   275,   276,   277,   279,  -143,    74,  -143,
      75,    76,    80,    80,    80,    80,    80,    87,    65,    65,
      65,    65,   105,   262,  -143,   183,   244,   184,     7,    77,
      81,    83,    84,    85,    86,   151,    78,    79,    95,    65,
     280,   248,    95,    95,    95,    88,    89,     5,   -50,   106,
     152,   153,  -122,  -122,  -122,   249,   192,   195,   154,  -122,
      19,  -122,  -122,  -122,    97,  -122,   193,   156,   157,   158,
      95,   151,   250,    71,    90,   159,   149,   -51,   196,   270,
     -93,   -93,   -93,   -93,   -93,   245,   152,   153,   197,   180,
     390,    20,   128,    16,   154,    98,     1,   -93,     8,     2,
      14,    72,   246,   156,   157,   158,   131,   150,   271,   -93,
     -93,   159,   151,  -143,     9,    31,    32,    10,    17,   129,
     181,   391,   273,   273,   273,   273,   245,   152,   153,  -137,
    -137,  -137,   190,   132,    15,   154,  -137,   201,  -137,  -137,
    -137,   116,  -137,   246,   156,   157,   158,    44,   151,    99,
     100,   101,   159,    52,   202,   207,   191,   -99,   -99,   -99,
     -99,   -99,   245,   152,   153,   204,    18,   205,   201,   117,
     118,   154,    45,    80,   -99,   138,    80,   136,    53,   246,
     156,   157,   158,   237,    33,   202,   -99,   -99,   159,   353,
     143,   259,   203,   139,   263,   151,   204,    39,   205,   274,
     274,   274,   274,    22,   140,   177,   438,    34,   238,   245,
     152,   153,   288,   265,   354,    80,   144,    23,   154,    80,
      80,    80,   314,    80,    80,    80,   246,   156,   157,   158,
      24,   178,   439,   295,   201,   159,   289,   299,   300,   301,
     151,   303,   304,   305,   371,   372,   315,    73,    25,    91,
      40,   202,   217,    92,   245,   152,   153,    74,   302,    75,
      76,   218,   204,   154,   205,   257,   326,    41,   326,   326,
     326,   246,   156,   157,   158,  -143,   110,   345,    77,   151,
     159,   362,   370,    42,   112,    78,    79,   349,   374,   375,
     376,   377,   378,   245,   152,   153,   346,    43,    80,   111,
     358,  -143,   154,    47,   261,   363,   201,   113,   251,    46,
     246,   156,   157,   158,    49,   252,   369,    50,    51,   159,
      65,   397,   398,   202,   349,    48,    65,    65,    65,    65,
      65,    80,   319,   388,   204,   114,   205,   392,   393,   394,
     395,   396,    69,    70,    80,    80,    80,    80,    80,   386,
      36,    37,    38,   102,   103,   358,   358,   225,   115,   239,
     293,   104,   399,   400,   401,   402,   403,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,    73,
     226,   107,   240,   294,   176,   201,   108,   109,  -143,    74,
    -143,    75,    76,   107,   327,   328,   329,   135,   108,   109,
     127,   130,   202,   141,   385,  -143,   151,   137,   142,   145,
      77,   194,   206,   204,   198,   205,   172,    78,    79,   200,
     245,   152,   153,  -110,  -110,  -110,   146,   147,   148,   154,
    -110,   173,  -110,  -110,  -110,   174,  -110,   246,   156,   157,
     158,   175,   179,   151,   185,   186,   159,   187,   188,   189,
     199,   219,   223,   224,   229,   255,   231,   245,   152,   153,
    -127,  -127,  -127,   230,   253,   254,   154,  -127,   202,  -127,
    -127,  -127,   151,  -127,   246,   156,   157,   158,   220,   204,
     256,   205,   260,   159,   264,   268,   245,   152,   153,   282,
     290,   281,   278,   151,   283,   154,   284,   285,   286,   287,
     292,   269,   310,   246,   156,   157,   158,   245,   152,   153,
      26,   311,   159,    27,   312,   298,   154,   316,    28,   437,
     313,   355,   317,   318,   246,   156,   157,   158,   306,   307,
     308,   309,   151,   159,   335,  -143,   344,   350,   202,   351,
     356,   352,   359,   360,   151,  -143,   245,   152,   153,   204,
     324,   205,   324,   324,   324,   154,   364,   361,   151,   152,
     153,   365,   366,   246,   156,   157,   158,   154,  -143,   389,
     404,   381,   159,   152,   153,   155,   156,   157,   158,   382,
     383,   154,   384,    73,   159,   405,   406,   407,   408,   155,
     156,   157,   158,    74,  -143,    75,    76,    54,   159,   431,
     432,  -143,    21,   373,     0,     0,  -143,  -143,   258,  -143,
    -143,   433,   434,   201,    77,   379,   380,    55,    56,    57,
     435,    78,    79,  -143,   436,     0,     0,   355,    58,     0,
     202,     0,    59,    60,    61,  -143,  -143,   208,     0,     0,
      54,   204,     0,   205,   202,     0,   356,     0,     0,  -143,
    -143,  -103,  -143,  -143,   291,   204,     0,   205,     0,     0,
      55,    56,    57,   209,   416,   417,   418,   419,   420,   421,
     422,    58,    73,     0,     0,    59,    60,    61,  -143,  -143,
     202,  -143,    74,  -143,    75,    76,     0,   210,     0,     0,
       0,   204,     0,   205,     0,    73,     0,     0,  -143,     0,
       0,     0,     0,    77,   -81,    74,   -81,    75,    76,     0,
      78,    79,    73,     0,     0,     0,     0,     0,    73,     0,
       0,   -81,    74,     0,    75,    76,    77,   -74,    74,   -74,
      75,    76,     0,    78,    79,    73,     0,     0,  -143,     0,
       0,     0,     0,    77,   -74,    74,     0,    75,    76,    77,
      78,    79,    73,     0,     0,     0,    78,    79,    73,     0,
       0,   119,    74,     0,    75,    76,    77,    73,    74,     0,
      75,    76,     0,    78,    79,     0,     0,    74,   122,    75,
      76,     0,   125,    77,   123,     0,     0,     0,     0,    77,
      78,    79,    74,   124,    75,    76,    78,    79,    77,    73,
       0,     0,     0,     0,     0,    78,    79,     0,   126,    74,
       0,    75,    76,    77,    73,     0,     0,     0,     0,     0,
      78,    79,     0,    73,    74,   330,    75,    76,     0,    73,
      77,     0,     0,    74,     0,    75,    76,    78,    79,    74,
     332,    75,    76,     0,     0,    77,    73,     0,     0,   333,
       0,     0,    78,    79,    77,   334,    74,     0,    75,    76,
      77,    78,    79,    73,     0,     0,     0,    78,    79,    73,
       0,     0,   336,    74,     0,    75,    76,    77,    73,    74,
       0,    75,    76,     0,    78,    79,     0,     0,    74,   337,
      75,    76,     0,     0,    77,   338,     0,     0,     0,     0,
      77,    78,    79,     0,   387,     0,     0,    78,    79,    77,
      73,     0,     0,     0,     0,   409,    78,    79,     0,  -143,
      74,    73,    75,    76,   410,   -72,     0,   -72,   -72,     0,
      73,    74,     0,    75,    76,     0,     0,     0,     0,     0,
      74,    77,    75,    76,     0,    73,   -72,   411,    78,    79,
       0,     0,    77,   -72,   -72,    74,   412,    75,    76,    78,
      79,    77,    73,     0,   221,     0,     0,     0,    78,    79,
       0,   413,    74,     0,    75,    76,    77,    73,     0,   296,
       0,   202,   222,    78,    79,     0,     0,    74,   414,    75,
      76,    54,   204,    77,   205,  -143,   202,     0,     0,    54,
      78,    79,     0,   415,     0,     0,   297,   204,    77,   205,
       0,    55,    56,    57,   201,    78,    79,  -143,    54,    55,
      56,    57,    58,  -143,     0,     0,    59,    60,    61,     0,
      58,   202,   331,   232,    59,    60,    61,     0,    55,    56,
      57,     0,   204,     0,   205,     0,     0,   201,     0,    58,
    -104,  -104,  -104,    59,    60,    61,   233,  -104,     0,  -104,
    -104,  -104,   201,  -104,   202,  -134,  -134,     0,     0,     0,
       0,   234,     0,  -134,  -134,   204,   201,   205,     0,   202,
    -133,  -133,     0,     0,     0,     0,  -133,     0,  -133,  -133,
     204,   201,   205,   202,  -103,  -103,   201,     0,     0,   212,
    -103,     0,  -103,   291,   204,     0,   205,     0,   202,  -102,
    -102,   201,     0,   202,   215,  -102,   202,  -102,  -102,   204,
     211,   205,     0,   213,   204,     0,   205,   204,   202,   205,
     241,   202,     0,   201,     0,   214,   201,     0,   216,   204,
       0,   205,   204,     0,   205,     0,     0,   202,   322,     0,
     202,   201,     0,   202,   242,   201,     0,     0,   204,   320,
     205,   204,   321,   205,   204,   202,   205,     0,   202,   339,
     201,     0,   202,   340,   323,   342,   204,     0,   205,   204,
       0,   205,     0,   204,   201,   205,     0,   202,   341,   201,
       0,     0,   202,   343,     0,     0,     0,     0,   204,     0,
     205,   202,   423,   204,   201,   205,   202,   424,   201,     0,
       0,   201,   204,     0,   205,     0,     0,   204,     0,   205,
       0,   202,   425,     0,     0,   202,   426,   201,   202,   427,
     429,     0,   204,     0,   205,     0,   204,     0,   205,   204,
       0,   205,     0,     0,   202,   428,     0,   202,   430,     0,
       0,     0,     0,     0,     0,   204,     0,   205,   204,     0,
     205
};

static const yytype_int16 yycheck[] =
{
       4,    43,    44,    45,     1,    24,    19,    26,    12,     1,
      91,    92,     1,     1,    18,    19,    20,     1,     1,    32,
      12,    63,    19,   224,   225,   226,     1,    10,    11,    12,
      13,    14,    49,    50,    51,    52,    53,     1,    42,    43,
      44,    45,     1,    26,    27,    33,    35,    35,    32,    32,
      49,    50,    51,    52,    53,     1,    39,    40,    62,    63,
      35,     1,    66,    67,    68,    29,     1,    32,    32,    28,
      16,    17,    18,    19,    20,    15,    22,     1,    24,    25,
       1,    27,    28,    29,     1,    31,    32,    33,    34,    35,
      94,     1,    32,     1,    29,    41,     1,    32,    22,     1,
      10,    11,    12,    13,    14,    15,    16,    17,    32,     1,
       1,    32,     1,     1,    24,    32,     1,    27,     0,     4,
      26,    29,    32,    33,    34,    35,     1,    32,    30,    39,
      40,    41,     1,     0,     1,    19,    20,     4,    26,    28,
      32,    32,   223,   224,   225,   226,    15,    16,    17,    18,
      19,    20,     1,    28,    26,    24,    25,     1,    27,    28,
      29,     1,    31,    32,    33,    34,    35,     1,     1,    66,
      67,    68,    41,     1,    18,    19,    25,    10,    11,    12,
      13,    14,    15,    16,    17,    29,    32,    31,     1,    29,
      30,    24,    26,   210,    27,     1,   213,    94,    26,    32,
      33,    34,    35,     1,     1,    18,    39,    40,    41,     1,
       1,   210,    25,    19,   213,     1,    29,    32,    31,   223,
     224,   225,   226,     3,    30,     1,     1,    24,    26,    15,
      16,    17,     1,    19,    26,   252,    27,     3,    24,   256,
     257,   258,     1,   260,   261,   262,    32,    33,    34,    35,
       3,    27,    27,   252,     1,    41,    25,   256,   257,   258,
       1,   260,   261,   262,   345,   346,    25,     1,     3,     1,
       1,    18,    19,     5,    15,    16,    17,    11,    12,    13,
      14,    28,    29,    24,    31,    26,   290,    32,   292,   293,
     294,    32,    33,    34,    35,    27,     1,     1,    32,     1,
      41,     1,   344,    26,     1,    39,    40,   311,   350,   351,
     352,   353,   354,    15,    16,    17,    20,    26,   335,    24,
     324,    25,    24,     1,    26,    25,     1,    24,    19,    23,
      32,    33,    34,    35,    26,    26,   335,    26,    26,    41,
     344,   379,   380,    18,   348,    23,   350,   351,   352,   353,
     354,   368,    27,   370,    29,     1,    31,   374,   375,   376,
     377,   378,    29,    29,   381,   382,   383,   384,   385,   368,
      23,    24,    25,    28,    28,   379,   380,     1,    24,     1,
       1,    28,   381,   382,   383,   384,   385,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,     1,
      24,    24,    24,    24,    27,     1,    29,    30,    10,    11,
      12,    13,    14,    24,   292,   293,   294,    27,    29,    30,
      28,    28,    18,    27,    26,    27,     1,    19,    27,    32,
      32,   151,    28,    29,   154,    31,    27,    39,    40,   159,
      15,    16,    17,    18,    19,    20,    32,    32,    32,    24,
      25,    27,    27,    28,    29,    27,    31,    32,    33,    34,
      35,    27,    32,     1,    25,    25,    41,    25,    25,    25,
      32,     1,    24,    24,    19,    30,    26,    15,    16,    17,
      18,    19,    20,    32,   204,   205,    24,    25,    18,    27,
      28,    29,     1,    31,    32,    33,    34,    35,    28,    29,
      26,    31,    26,    41,    19,    30,    15,    16,    17,    25,
      24,   231,    35,     1,    25,    24,   236,   237,   238,    25,
      24,    30,    25,    32,    33,    34,    35,    15,    16,    17,
       1,    32,    41,     4,    25,   255,    24,    19,     9,    27,
      25,     1,    19,    19,    32,    33,    34,    35,   268,   269,
     270,   271,     1,    41,    26,    26,    26,    26,    18,    26,
      20,    26,    25,    25,     1,    25,    15,    16,    17,    29,
     290,    31,   292,   293,   294,    24,    12,    25,     1,    16,
      17,    12,    12,    32,    33,    34,    35,    24,    25,    32,
      10,    26,    41,    16,    17,    32,    33,    34,    35,    26,
      26,    24,    26,     1,    41,    10,    10,    10,    10,    32,
      33,    34,    35,    11,    12,    13,    14,     1,    41,    27,
      27,     5,    12,   348,    -1,    -1,    10,    11,    26,    13,
      14,    27,    27,     1,    32,   355,   356,    21,    22,    23,
      27,    39,    40,    27,    27,    -1,    -1,     1,    32,    -1,
      18,    -1,    36,    37,    38,    39,    40,    25,    -1,    -1,
       1,    29,    -1,    31,    18,    -1,    20,    -1,    -1,    10,
      11,    25,    13,    14,    28,    29,    -1,    31,    -1,    -1,
      21,    22,    23,     1,   404,   405,   406,   407,   408,   409,
     410,    32,     1,    -1,    -1,    36,    37,    38,    39,    40,
      18,    10,    11,    12,    13,    14,    -1,    25,    -1,    -1,
      -1,    29,    -1,    31,    -1,     1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    32,    10,    11,    12,    13,    14,    -1,
      39,    40,     1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    27,    11,    -1,    13,    14,    32,    10,    11,    12,
      13,    14,    -1,    39,    40,     1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    32,    27,    11,    -1,    13,    14,    32,
      39,    40,     1,    -1,    -1,    -1,    39,    40,     1,    -1,
      -1,    27,    11,    -1,    13,    14,    32,     1,    11,    -1,
      13,    14,    -1,    39,    40,    -1,    -1,    11,    27,    13,
      14,    -1,     1,    32,    27,    -1,    -1,    -1,    -1,    32,
      39,    40,    11,    27,    13,    14,    39,    40,    32,     1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    27,    11,
      -1,    13,    14,    32,     1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,     1,    11,    27,    13,    14,    -1,     1,
      32,    -1,    -1,    11,    -1,    13,    14,    39,    40,    11,
      27,    13,    14,    -1,    -1,    32,     1,    -1,    -1,    27,
      -1,    -1,    39,    40,    32,    27,    11,    -1,    13,    14,
      32,    39,    40,     1,    -1,    -1,    -1,    39,    40,     1,
      -1,    -1,    27,    11,    -1,    13,    14,    32,     1,    11,
      -1,    13,    14,    -1,    39,    40,    -1,    -1,    11,    27,
      13,    14,    -1,    -1,    32,    27,    -1,    -1,    -1,    -1,
      32,    39,    40,    -1,    27,    -1,    -1,    39,    40,    32,
       1,    -1,    -1,    -1,    -1,     1,    39,    40,    -1,    10,
      11,     1,    13,    14,    10,    11,    -1,    13,    14,    -1,
       1,    11,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,
      11,    32,    13,    14,    -1,     1,    32,    27,    39,    40,
      -1,    -1,    32,    39,    40,    11,    27,    13,    14,    39,
      40,    32,     1,    -1,     1,    -1,    -1,    -1,    39,    40,
      -1,    27,    11,    -1,    13,    14,    32,     1,    -1,     1,
      -1,    18,    19,    39,    40,    -1,    -1,    11,    27,    13,
      14,     1,    29,    32,    31,     5,    18,    -1,    -1,     1,
      39,    40,    -1,    27,    -1,    -1,    28,    29,    32,    31,
      -1,    21,    22,    23,     1,    39,    40,    27,     1,    21,
      22,    23,    32,    25,    -1,    -1,    36,    37,    38,    -1,
      32,    18,    19,     1,    36,    37,    38,    -1,    21,    22,
      23,    -1,    29,    -1,    31,    -1,    -1,     1,    -1,    32,
      18,    19,    20,    36,    37,    38,    24,    25,    -1,    27,
      28,    29,     1,    31,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,     1,    31,    -1,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,     1,    31,    18,    19,    20,     1,    -1,    -1,     1,
      25,    -1,    27,    28,    29,    -1,    31,    -1,    18,    19,
      20,     1,    -1,    18,     1,    25,    18,    27,    28,    29,
      25,    31,    -1,    25,    29,    -1,    31,    29,    18,    31,
       1,    18,    -1,     1,    -1,    25,     1,    -1,    25,    29,
      -1,    31,    29,    -1,    31,    -1,    -1,    18,     1,    -1,
      18,     1,    -1,    18,    25,     1,    -1,    -1,    29,    27,
      31,    29,    27,    31,    29,    18,    31,    -1,    18,    19,
       1,    -1,    18,    19,    27,     1,    29,    -1,    31,    29,
      -1,    31,    -1,    29,     1,    31,    -1,    18,    19,     1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    29,    -1,
      31,    18,    19,    29,     1,    31,    18,    19,     1,    -1,
      -1,     1,    29,    -1,    31,    -1,    -1,    29,    -1,    31,
      -1,    18,    19,    -1,    -1,    18,    19,     1,    18,    19,
       1,    -1,    29,    -1,    31,    -1,    29,    -1,    31,    29,
      -1,    31,    -1,    -1,    18,    19,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    29,    -1,
      31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    43,    56,    32,     1,    32,     0,     1,
       4,    44,    45,    62,    26,    26,     1,    26,    32,     1,
      32,    44,     3,     3,     3,     3,     1,     4,     9,    46,
      62,    46,    46,     1,    24,    57,    57,    57,    57,    32,
       1,    32,    26,    26,     1,    26,    23,     1,    23,    26,
      26,    26,     1,    26,     1,    21,    22,    23,    32,    36,
      37,    38,    47,    50,    55,    62,    47,    47,    47,    29,
      29,     1,    29,     1,    11,    13,    14,    32,    39,    40,
      49,    58,    62,    58,    58,    58,    58,     1,    29,     1,
      29,     1,     5,    48,    54,    62,    47,     1,    32,    48,
      48,    48,    28,    28,    28,     1,    28,    24,    29,    30,
       1,    24,     1,    24,     1,    24,     1,    29,    30,    27,
      49,    58,    27,    27,    27,     1,    27,    28,     1,    28,
      28,     1,    28,    55,    55,    27,    48,    19,     1,    19,
      30,    27,    27,     1,    27,    32,    32,    32,    32,     1,
      32,     1,    16,    17,    24,    32,    33,    34,    35,    41,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    27,    27,    27,    27,    27,     1,    27,    32,
       1,    32,     1,    33,    35,    25,    25,    25,    25,    25,
       1,    25,    22,    32,    59,     1,    22,    32,    59,    32,
      59,     1,    18,    25,    29,    31,    28,    19,    25,     1,
      25,    25,     1,    25,    25,     1,    25,    19,    28,     1,
      28,     1,    19,    24,    24,     1,    24,    19,    32,    19,
      32,    26,     1,    24,    25,    24,    26,     1,    26,     1,
      24,     1,    25,     1,    35,    15,    32,    59,     1,    15,
      32,    19,    26,    59,    59,    30,    26,    26,    26,    58,
      26,    26,    26,    58,    19,    19,     1,    19,    30,    30,
       1,    30,    53,    55,    62,    53,    53,    53,    35,     1,
      35,    59,    25,    25,    59,    59,    59,    25,     1,    25,
      24,    28,    24,     1,    24,    58,     1,    28,    59,    58,
      58,    58,    12,    58,    58,    58,    59,    59,    59,    59,
      25,    32,    25,    25,     1,    25,    19,    19,    19,    27,
      27,    27,     1,    27,    59,    60,    62,    60,    60,    60,
      27,    19,    27,    27,    27,    26,    27,    27,    27,    19,
      19,    19,     1,    19,    26,     1,    20,    51,    52,    62,
      26,    26,    26,     1,    26,     1,    20,    61,    62,    25,
      25,    25,     1,    25,    12,    12,    12,     1,    12,    58,
      47,    55,    55,    51,    47,    47,    47,    47,    47,    59,
      59,    26,    26,    26,    26,    26,    58,    27,    49,    32,
       1,    32,    49,    49,    49,    49,    49,    61,    61,    58,
      58,    58,    58,    58,    10,    10,    10,    10,    10,     1,
      10,    27,    27,    27,    27,    27,    59,    59,    59,    59,
      59,    59,    59,    19,    19,    19,    19,    19,    19,     1,
      19,    27,    27,    27,    27,    27,    27,    27,     1,    27
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
#line 80 "SyntaxicAnalyser.y"
    {yyerror (" erreur mot cle class errone dans la line : "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 81 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 82 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade ouvarnte  manquant dans la line : "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 83 "SyntaxicAnalyser.y"
    {yyerror ("  erreur acolade FERMANT  manquant dans la line : "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 87 "SyntaxicAnalyser.y"
    {yyerror (" mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 88 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 102 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 103 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 104 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 105 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 108 "SyntaxicAnalyser.y"
    {yyerror ("valeur manquante  dans la line :"); YYABORT;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 114 "SyntaxicAnalyser.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 115 "SyntaxicAnalyser.y"
    {yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 121 "SyntaxicAnalyser.y"
    {yyerror ("mot clee class manquant ou errone dans la line :"); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 123 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 124 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 125 "SyntaxicAnalyser.y"
    {yyerror ("acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 126 "SyntaxicAnalyser.y"
    {yyerror ("mot clee return manquant ou errone dans la line :"); YYABORT;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 127 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 128 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 134 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 135 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 136 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type pour INT dans la line :"); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 138 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type pour BOOLEAN dans la line :"); YYABORT;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 142 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 143 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 144 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type pour STRING dans la line :"); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 146 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type dans la line :"); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 150 "SyntaxicAnalyser.y"
    {yyerror ("mot cle CLASS errone ou bien manquant on line : "); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 151 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 152 "SyntaxicAnalyser.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 153 "SyntaxicAnalyser.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 154 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 155 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 159 "SyntaxicAnalyser.y"
    {yyerror (" parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 160 "SyntaxicAnalyser.y"
    {yyerror (" erreur mot cle String errone dans la line:  "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 161 "SyntaxicAnalyser.y"
    {yyerror (" tabulation ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 162 "SyntaxicAnalyser.y"
    {yyerror (" tabulation fermante manquante dans la line: "); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 163 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 164 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 173 "SyntaxicAnalyser.y"
    {yyerror ("mot cle IF errone ou bien manquant on line : "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 174 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 175 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 176 "SyntaxicAnalyser.y"
    {yyerror ("mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 180 "SyntaxicAnalyser.y"
    {yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 181 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 182 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 185 "SyntaxicAnalyser.y"
    {yyerror ("system.out.println errone ou bien manquant on line : "); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 186 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 187 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 188 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 191 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 192 "SyntaxicAnalyser.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 193 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 196 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 197 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 198 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 199 "SyntaxicAnalyser.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 200 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 207 "SyntaxicAnalyser.y"
    {yyerror ("operateur manquant dans la line :"); YYABORT;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 215 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 216 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 219 "SyntaxicAnalyser.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 220 "SyntaxicAnalyser.y"
    {yyerror ("mot cle LENGTH manquant dans la line :"); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 223 "SyntaxicAnalyser.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 224 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 225 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 226 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 229 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 230 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 232 "SyntaxicAnalyser.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 235 "SyntaxicAnalyser.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 236 "SyntaxicAnalyser.y"
    {yyerror (" mot cle int manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 237 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 238 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade fermante  manquante dans la line : "); YYABORT;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 241 "SyntaxicAnalyser.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 242 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 243 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 244 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 247 "SyntaxicAnalyser.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 250 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 251 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 258 "SyntaxicAnalyser.y"
    {yyerror ("erreur VIRGULE manquante dans la line :"); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2479 "SyntaxicAnalyser.tab.c"
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
#line 270 "SyntaxicAnalyser.y"
 

int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,line);
	return 0;	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
}
