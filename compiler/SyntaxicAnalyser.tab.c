
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
     NOT = 294
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
#line 166 "SyntaxicAnalyser.tab.c"

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
#define YYLAST   1131

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  433

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

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
      35,    36,    37,    38,    39
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
     651,   655,   659,   664,   669,   674,   678,   682,   686,   693,
     700,   707,   714,   721,   723,   725,   727,   729,   731,   737,
     743,   749,   755,   761,   766,   771,   776,   781,   786,   789,
     792,   796,   800,   804,   807,   809,   813,   817,   819
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    54,    42,    -1,    43,    42,    -1,    60,
      -1,     4,    32,    44,    26,    45,    46,    27,    -1,     1,
      32,    44,    26,    45,    46,    27,    -1,     4,     1,    44,
      26,    45,    46,    27,    -1,     4,    32,    44,     1,    45,
      46,    27,    -1,     4,    32,    44,    26,    45,    46,     1,
      -1,     9,    32,    -1,    60,    -1,     1,    32,    -1,     4,
       1,    -1,    48,    45,    -1,    60,    -1,    52,    46,    -1,
      60,    -1,    56,    47,    -1,    60,    -1,    53,    32,    19,
      -1,    53,    32,    30,    35,    32,    35,    19,    -1,    53,
      32,    30,     1,    32,    35,    19,    -1,    53,    32,    30,
      35,    32,     1,    19,    -1,    53,     1,    19,    -1,    53,
      32,     1,    -1,    53,    32,    30,    33,    19,    -1,    53,
      32,    30,     1,    19,    -1,    50,    49,    -1,    60,    -1,
      20,    53,    32,    -1,     1,    53,    32,    -1,    20,    53,
       1,    -1,    53,    32,    49,    -1,    60,    -1,     5,    53,
      32,    24,    51,    25,    26,    45,    47,    10,    57,    19,
      27,    -1,     1,    53,    32,    24,    51,    25,    26,    45,
      47,    10,    57,    19,    27,    -1,     5,    53,     1,    24,
      51,    25,    26,    45,    47,    10,    57,    19,    27,    -1,
       5,    53,    32,     1,    51,    25,    26,    45,    47,    10,
      57,    19,    27,    -1,     5,    53,    32,    24,    51,     1,
      26,    45,    47,    10,    57,    19,    27,    -1,     5,    53,
      32,    24,    51,    25,     1,    45,    47,    10,    57,    19,
      27,    -1,     5,    53,    32,    24,    51,    25,    26,    45,
      47,     1,    57,    19,    27,    -1,     5,    53,    32,    24,
      51,    25,    26,    45,    47,    10,    57,     1,    27,    -1,
       5,    53,    32,    24,    51,    25,    26,    45,    47,    10,
      57,    19,     1,    -1,    22,    29,    28,    -1,    22,     1,
      28,    -1,    22,    29,     1,    -1,    36,    -1,    21,    -1,
      38,    -1,    22,    -1,    23,    -1,    23,    29,    28,    -1,
      23,     1,    28,    -1,    23,    29,     1,    -1,    37,    -1,
      32,    -1,     1,    -1,     4,    32,    26,     3,    55,    26,
      56,    27,    27,    -1,     1,    32,    26,     3,    55,    26,
      56,    27,    27,    -1,     4,     1,    26,     3,    55,    26,
      56,    27,    27,    -1,     4,    32,     1,     3,    55,    26,
      56,    27,    27,    -1,     4,    32,    26,     3,    55,     1,
      56,    27,    27,    -1,     4,    32,    26,     3,    55,    26,
      56,     1,    27,    -1,     4,    32,    26,     3,    55,    26,
      56,    27,     1,    -1,    24,    23,    29,    28,    32,    25,
      -1,     1,    23,    29,    28,    32,    25,    -1,    24,     1,
      29,    28,    32,    25,    -1,    24,    23,     1,    28,    32,
      25,    -1,    24,    23,    29,     1,    32,    25,    -1,    24,
      23,    29,    28,     1,    25,    -1,    24,    23,    29,    28,
      32,     1,    -1,    47,    -1,    11,    24,    57,    25,    26,
      56,    27,    12,    26,    56,    27,    -1,    11,    24,    57,
      25,    26,    56,    27,    12,    56,    -1,    11,    24,    57,
      25,    56,    12,    26,    56,    27,    -1,     1,    24,    57,
      25,    26,    56,    27,    12,    26,    56,    27,    -1,    11,
       1,    57,    25,    26,    56,    27,    12,    26,    56,    27,
      -1,    11,    24,    57,     1,    26,    56,    27,    12,    26,
      56,    27,    -1,    11,    24,    57,    25,    26,    56,    27,
       1,    26,    56,    27,    -1,    13,    24,    57,    25,    26,
      56,    27,    -1,    13,    24,    57,    25,    56,    -1,     1,
      24,    57,    25,    26,    56,    27,    -1,    13,     1,    57,
      25,    26,    56,    27,    -1,    13,    24,    57,     1,    26,
      56,    27,    -1,    14,    24,    57,    25,    19,    -1,     1,
      24,    57,    25,    19,    -1,    14,     1,    57,    25,    19,
      -1,    14,    24,    57,     1,    19,    -1,    14,    24,    57,
      25,     1,    -1,    32,    30,    57,    19,    -1,     1,    30,
      57,    19,    -1,    32,     1,    57,    19,    -1,    32,    30,
      57,     1,    -1,    32,    29,    57,    28,    30,    57,    19,
      -1,     1,    29,    57,    28,    30,    57,    19,    -1,    32,
       1,    57,    28,    30,    57,    19,    -1,    32,    29,    57,
       1,    30,    57,    19,    -1,    32,    29,    57,    28,     1,
      57,    19,    -1,    32,    29,    57,    28,    30,    57,     1,
      -1,    57,    31,    57,    -1,    57,     1,    57,    -1,    57,
      29,    57,    28,    -1,    57,     1,    57,    28,    -1,    57,
      29,    57,     1,    -1,    57,    18,    15,    -1,    57,     1,
      15,    -1,    57,    18,     1,    -1,    57,    18,    32,    24,
      58,    25,    -1,    57,     1,    32,    24,    58,    25,    -1,
      57,    18,     1,    24,    58,    25,    -1,    57,    18,    32,
       1,    58,    25,    -1,    57,    18,    32,    24,    58,     1,
      -1,    33,    -1,    34,    -1,    32,    -1,    16,    -1,     1,
      -1,    17,    22,    26,    57,    27,    -1,     1,    22,    26,
      57,    27,    -1,    17,     1,    26,    57,    27,    -1,    17,
      22,     1,    57,    27,    -1,    17,    22,    26,    57,     1,
      -1,    17,    32,    24,    25,    -1,     1,    32,    24,    25,
      -1,    17,     1,    24,    25,    -1,    17,    32,     1,    25,
      -1,    17,    32,    24,     1,    -1,    39,    57,    -1,     1,
      57,    -1,    24,    57,    25,    -1,     1,    57,    25,    -1,
      24,    57,     1,    -1,    57,    59,    -1,    60,    -1,    20,
      57,    59,    -1,     1,    57,    59,    -1,    60,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    73,    74,    77,    78,    79,    80,    81,
      83,    84,    85,    86,    89,    90,    92,    93,    95,    96,
      98,    99,   100,   101,   102,   103,   105,   106,   108,   109,
     111,   112,   113,   115,   116,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   147,   148,
     149,   150,   151,   152,   153,   156,   157,   158,   159,   160,
     161,   162,   167,   168,   169,   170,   171,   172,   173,   174,
     176,   177,   178,   179,   180,   182,   183,   184,   185,   186,
     188,   189,   190,   191,   193,   194,   195,   196,   197,   198,
     201,   202,   204,   205,   206,   208,   209,   210,   212,   213,
     214,   215,   216,   219,   220,   221,   222,   223,   225,   226,
     227,   228,   229,   231,   232,   233,   234,   235,   237,   238,
     240,   241,   242,   245,   246,   248,   249,   250,   253
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
  "BOOLEAN_ERROR", "NOT", "$accept", "programme", "ClassDeclarationRepeat",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    43,    43,    43,
      44,    44,    44,    44,    45,    45,    46,    46,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    49,    49,
      50,    50,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    59,    59,    59,    60
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
       0,     0,     0,     0,    57,    48,     0,     0,    56,    47,
      55,    49,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,    45,    46,    44,    53,    54,
      52,     0,     0,     6,    16,    24,    25,    20,     0,     7,
       8,     9,     5,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,   115,   113,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,    61,    62,    63,    64,    58,     0,     0,     0,     0,
       0,     0,    66,    67,    68,    69,    70,    71,    65,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,    90,     0,
       0,     0,     0,    27,     0,    26,     0,     0,     0,   131,
       0,     0,     0,     0,     0,     0,     0,   130,   106,   115,
       0,   107,   105,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      85,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,   124,   125,     0,     0,     0,
     126,   127,   123,     0,   103,     0,     0,     0,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    21,   119,   120,   121,     0,   118,     0,     0,   134,
       0,     0,     0,    82,    95,     0,     0,     0,     0,    83,
      84,    80,    96,    97,    98,     0,    94,     0,     0,     0,
      33,     0,    29,     0,     0,     0,     0,     0,     0,     0,
     133,   137,   109,   110,   111,   112,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    72,    31,    32,    30,    72,    72,    72,    72,     0,
     136,   135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,    77,    78,    79,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,    37,    38,    39,    40,    41,
      42,    43,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,    12,    29,    62,    91,   118,    63,   340,
     341,   265,    92,    64,     4,    35,   119,   240,   318,   350,
      80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -313
static const yytype_int16 yypact[] =
{
      19,    35,    16,   113,    75,   105,   106,   149,  -313,   167,
      24,  -313,    75,  -313,   211,   224,   226,   245,   259,   259,
     259,  -313,   242,   242,   242,   242,   217,   197,   230,   272,
    -313,   308,   221,   293,   208,   310,   312,   319,   241,  -313,
    -313,  -313,   203,   203,   203,   203,   337,   338,    99,   699,
     699,   699,   699,   699,  -313,  -313,    36,    41,  -313,  -313,
    -313,  -313,   218,   589,    70,  -313,   218,   218,   218,   345,
     346,   364,    73,   657,   256,   295,   296,   135,  -313,   703,
    -313,   707,   727,   731,   735,   372,   115,   376,   124,   451,
     451,   378,   218,  -313,  -313,   395,   175,   388,   389,   111,
     385,   387,   393,   394,    71,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   412,  -313,    17,
     415,   419,   432,   369,   150,  -313,  -313,  -313,  -313,  -313,
    -313,   429,    79,  -313,  -313,  -313,  -313,  -313,    10,  -313,
    -313,  -313,  -313,   440,   444,   452,   453,   459,   195,    65,
    -313,    25,   553,  -313,  -313,  -313,   553,   166,   577,   562,
     937,   938,   947,   952,   970,   973,   439,   634,   578,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,   397,   420,   311,   -13,
     466,   458,  -313,  -313,  -313,  -313,  -313,  -313,  -313,   467,
     468,   857,   -19,   243,   370,   978,   871,   550,    54,   101,
     553,   553,   464,  -313,   469,   417,   683,   473,   421,   515,
     491,   447,     3,  -313,   479,   481,   136,   260,  -313,   285,
     285,   285,   285,  -313,   477,  -313,    11,   553,   493,  -313,
     494,   553,   553,   553,   496,   263,    90,  -313,  -313,   500,
     886,   506,  -313,   371,  -313,   699,   879,   900,   553,   699,
     699,   699,   189,   699,   699,   699,   656,  -313,  -313,  -313,
    -313,   553,   553,   553,   553,   509,   503,  -313,   519,   520,
     264,   527,   533,   534,   979,  -313,  -313,   993,   999,  1011,
    -313,  -313,  -313,   331,  -313,   331,   331,   331,   742,   129,
    -313,  1014,   759,   765,   774,   530,   782,   789,   797,  1017,
    1033,  1036,  1040,   531,   289,   538,   542,   545,   252,  -313,
    -313,  -313,  -313,  -313,  -313,   154,  -313,   929,   547,  -313,
     548,   551,   290,   563,  -313,   576,   586,    12,   699,  -313,
    -313,  -313,  -313,  -313,  -313,   396,  -313,   618,   451,   451,
    -313,   289,  -313,   618,   618,   618,   618,   618,   550,   553,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,   575,   587,   588,
     591,   632,   804,   317,   572,    94,  -313,   317,   317,   317,
     317,   317,   915,   929,   699,   699,   699,   699,   699,   679,
    -313,   549,  -313,  -313,  -313,   605,   608,   610,   612,   490,
    -313,  -313,   812,   819,   827,   834,   842,   553,   553,   553,
     553,   553,   553,   553,  -313,  -313,  -313,  -313,  -313,  1055,
    1059,  1062,  1078,  1081,  1084,  1100,   603,   607,   609,   611,
     620,   621,   516,   179,  -313,  -313,  -313,  -313,  -313,  -313,
    -313,  -313,  -313
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -313,  -313,   625,  -313,    58,   -42,    67,   -17,  -313,   320,
    -313,    -9,  -313,   -80,  -313,   301,     1,   275,   116,  -312,
      -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -139
static const yytype_int16 yytable[] =
{
      13,    66,    67,    68,   259,   230,   223,   231,    13,   131,
     132,   179,   272,   360,    30,    30,    30,     6,    73,   224,
       1,    94,   260,     2,   361,    19,   192,  -138,    74,  -138,
      75,    76,    78,    78,    78,    78,    78,    85,    65,    65,
      65,    65,    87,   180,  -138,   181,   273,   193,     7,    77,
      79,    81,    82,    83,    84,   241,    20,   194,    93,    65,
     390,   391,    93,    93,    93,    86,   149,     5,   -50,   242,
      88,    95,   147,   -51,   103,  -138,     9,    31,    32,    10,
     177,   150,   151,  -117,  -117,  -117,   243,   189,    93,   152,
    -117,   149,  -117,  -117,  -117,   383,  -117,   190,   154,   155,
      71,   104,    96,   148,   156,   238,   150,   151,  -132,  -132,
    -132,   178,   141,     8,   152,  -132,   126,  -132,  -132,  -132,
     244,  -132,   239,   154,   155,   129,   384,   245,    72,   156,
     149,    14,    15,    97,    98,    99,   114,   263,   142,   266,
     266,   266,   266,   127,   238,   150,   151,  -104,  -104,  -104,
      16,   174,   130,   152,  -104,   149,  -104,  -104,  -104,   134,
    -104,   239,   154,   155,   115,   116,   264,   197,   156,   238,
     150,   151,  -122,  -122,  -122,    17,   136,   175,   152,  -122,
     431,  -122,  -122,  -122,   198,  -122,   239,   154,   155,    78,
      73,   199,    78,   156,   137,   200,   187,   201,    40,    18,
      74,   295,    75,    76,    54,   138,   432,   252,  -138,    47,
     256,   268,   269,   270,    22,   267,   267,   267,   267,    89,
     188,    77,    44,    90,    55,    56,    57,    23,    78,    24,
    -138,    48,    78,    78,    78,    58,    78,    78,    78,    59,
      60,    61,    52,    33,   232,  -138,   288,    45,    25,    39,
     292,   293,   294,   346,   296,   297,   298,   108,   364,   365,
      26,   149,    41,    27,   281,   307,    34,    53,    28,   233,
     -93,   -93,   -93,   -93,   -93,   238,   150,   151,   347,   319,
     109,   319,   319,   319,   152,  -138,    54,   -93,   282,   308,
     338,   355,   239,   154,   155,   363,   110,   112,    42,   156,
     342,   367,   368,   369,   370,   371,    55,    56,    57,   339,
    -138,    78,   221,   351,  -138,   356,    46,    58,    73,   111,
     113,    59,    60,    61,    36,    37,    38,  -138,    74,   362,
      75,    76,   149,    65,    43,   222,    49,   342,    50,    65,
      65,    65,    65,    65,    78,    51,   381,   150,   151,    77,
     385,   386,   387,   388,   389,   152,  -138,    78,    78,    78,
      78,    78,   379,   153,   154,   155,    69,    70,   351,   351,
     156,   234,   286,   100,   101,   392,   393,   394,   395,   396,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   102,   105,   235,   287,   173,   149,   106,   107,
     125,   320,   321,   322,   128,   133,   -99,   -99,   -99,   -99,
     -99,   238,   150,   151,   135,   139,   140,   143,   149,   144,
     152,   219,   149,   -99,   191,   145,   146,   195,   239,   154,
     155,   196,   238,   150,   151,   156,   238,   150,   151,   169,
     197,   152,   170,   250,   220,   152,   171,   254,   149,   239,
     154,   155,    54,   239,   154,   155,   156,   198,   213,   172,
     156,   176,   238,   150,   151,   182,   258,   214,   200,   183,
     201,   152,    55,    56,    57,   246,   247,   184,   185,   239,
     154,   155,   149,    58,   186,   225,   156,    59,    60,    61,
     226,   402,   228,   227,   248,   249,   238,   150,   151,   253,
     403,   -72,   274,   -72,   -72,   152,   277,   278,   279,   261,
     257,   262,   271,   239,   154,   155,    73,   149,   275,   276,
     156,   280,   -72,   291,   283,  -138,    74,  -138,    75,    76,
     285,   238,   150,   151,   303,   304,   299,   300,   301,   302,
     152,   255,  -138,   430,   305,   306,   309,    77,   239,   154,
     155,   149,   310,   311,   149,   156,   328,   337,   317,   397,
     317,   317,   317,   197,   343,   238,   150,   151,   344,   150,
     151,   345,   352,   353,   152,   357,   354,   152,   197,   217,
     198,   203,   239,   154,   155,   153,   154,   155,   358,   156,
      54,   200,   156,   201,  -138,   198,   198,   218,   359,  -138,
    -138,   374,  -138,  -138,   382,   202,   200,   200,   201,   201,
      55,    56,    57,   375,   376,   398,  -138,   377,   399,    54,
     400,    58,   401,   372,   373,    59,    60,    61,  -138,  -138,
     424,  -138,  -138,    73,   425,   215,   426,    21,   427,    55,
      56,    57,  -138,    74,  -138,    75,    76,   428,   429,     0,
      58,     0,   198,     0,    59,    60,    61,    73,   378,  -138,
       0,   366,   216,   200,    77,   201,   -81,    74,   -81,    75,
      76,     0,   409,   410,   411,   412,   413,   414,   415,     0,
      73,   105,     0,   -81,    73,     0,   106,   107,    77,   -74,
      74,   -74,    75,    76,    74,  -138,    75,    76,     0,     0,
      73,     0,     0,     0,    73,     0,   -74,     0,    73,   251,
      74,    77,    75,    76,    74,    77,    75,    76,    74,     0,
      75,    76,     0,     0,     0,     0,  -138,     0,    73,     0,
     117,    77,    73,     0,   120,    77,   123,     0,    74,    77,
      75,    76,    74,    73,    75,    76,    74,     0,    75,    76,
       0,     0,     0,    74,   121,    75,    76,     0,   122,    77,
      73,     0,   124,    77,     0,     0,    73,    77,     0,   323,
      74,     0,    75,    76,    77,    73,    74,     0,    75,    76,
       0,     0,     0,    73,     0,    74,   325,    75,    76,     0,
      73,    77,   326,    74,     0,    75,    76,    77,    73,     0,
      74,   327,    75,    76,     0,    73,    77,     0,    74,   329,
      75,    76,     0,    73,    77,    74,   330,    75,    76,     0,
      73,    77,     0,    74,   331,    75,    76,     0,    73,    77,
      74,   380,    75,    76,     0,    73,    77,     0,    74,   404,
      75,    76,     0,    73,    77,    74,   405,    75,    76,     0,
       0,    77,     0,    74,   406,    75,    76,     0,   197,    77,
       0,   407,     0,     0,     0,     0,    77,     0,     0,   408,
       0,     0,   197,     0,    77,   198,  -129,  -129,     0,     0,
     289,     0,   229,     0,  -129,  -129,   200,   197,   201,   198,
    -128,  -128,     0,     0,     0,     0,  -128,   198,  -128,  -128,
     200,   197,   201,     0,   198,  -101,  -101,   290,   200,     0,
     201,  -101,     0,  -101,   284,   200,   348,   201,   198,  -100,
    -100,     0,     0,     0,     0,  -100,     0,  -100,  -100,   200,
     348,   201,     0,   198,     0,   349,     0,     0,   197,   205,
    -101,     0,     0,   284,   200,     0,   201,   198,   197,   349,
       0,     0,     0,   208,  -138,   198,   198,     0,   200,     0,
     201,     0,   204,   206,     0,   198,   200,   200,   201,   201,
     198,   197,   207,     0,   211,     0,   200,   209,   201,   236,
     197,   200,     0,   201,     0,     0,     0,     0,   198,     0,
       0,   198,     0,     0,   197,   210,   198,   198,   212,   200,
     197,   201,   200,   237,   201,     0,   312,   200,   200,   201,
     201,   198,   315,     0,     0,   197,     0,   198,   197,     0,
     313,     0,   200,     0,   201,     0,   314,     0,   200,   198,
     201,     0,   198,   324,   197,   198,   332,   197,   316,     0,
     200,   335,   201,   200,     0,   201,   200,     0,   201,     0,
       0,   198,   333,     0,   198,   334,   197,     0,   198,   336,
     197,     0,   200,   197,   201,   200,     0,   201,     0,   200,
       0,   201,     0,   198,   416,     0,     0,   198,   417,   197,
     198,   418,   197,     0,   200,   197,   201,     0,   200,     0,
     201,   200,     0,   201,     0,     0,   198,   419,     0,   198,
     420,   422,   198,   421,     0,     0,     0,   200,     0,   201,
     200,     0,   201,   200,     0,   201,     0,     0,   198,   423,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,   201
};

static const yytype_int16 yycheck[] =
{
       4,    43,    44,    45,     1,    24,    19,    26,    12,    89,
      90,     1,     1,     1,    18,    19,    20,     1,     1,    32,
       1,    63,    19,     4,    12,     1,     1,    10,    11,    12,
      13,    14,    49,    50,    51,    52,    53,     1,    42,    43,
      44,    45,     1,    33,    27,    35,    35,    22,    32,    32,
      49,    50,    51,    52,    53,     1,    32,    32,    62,    63,
     372,   373,    66,    67,    68,    29,     1,    32,    32,    15,
      29,     1,     1,    32,     1,     0,     1,    19,    20,     4,
       1,    16,    17,    18,    19,    20,    32,    22,    92,    24,
      25,     1,    27,    28,    29,     1,    31,    32,    33,    34,
       1,    28,    32,    32,    39,    15,    16,    17,    18,    19,
      20,    32,     1,     0,    24,    25,     1,    27,    28,    29,
      19,    31,    32,    33,    34,     1,    32,    26,    29,    39,
       1,    26,    26,    66,    67,    68,     1,     1,    27,   219,
     220,   221,   222,    28,    15,    16,    17,    18,    19,    20,
       1,     1,    28,    24,    25,     1,    27,    28,    29,    92,
      31,    32,    33,    34,    29,    30,    30,     1,    39,    15,
      16,    17,    18,    19,    20,    26,     1,    27,    24,    25,
       1,    27,    28,    29,    18,    31,    32,    33,    34,   206,
       1,    25,   209,    39,    19,    29,     1,    31,     1,    32,
      11,    12,    13,    14,     1,    30,    27,   206,     5,     1,
     209,   220,   221,   222,     3,   219,   220,   221,   222,     1,
      25,    32,     1,     5,    21,    22,    23,     3,   245,     3,
      27,    23,   249,   250,   251,    32,   253,   254,   255,    36,
      37,    38,     1,     1,     1,    27,   245,    26,     3,    32,
     249,   250,   251,     1,   253,   254,   255,     1,   338,   339,
       1,     1,    32,     4,     1,     1,    24,    26,     9,    26,
      10,    11,    12,    13,    14,    15,    16,    17,    26,   283,
      24,   285,   286,   287,    24,    26,     1,    27,    25,    25,
       1,     1,    32,    33,    34,   337,     1,     1,    26,    39,
     304,   343,   344,   345,   346,   347,    21,    22,    23,    20,
      25,   328,     1,   317,    25,    25,    23,    32,     1,    24,
      24,    36,    37,    38,    23,    24,    25,    10,    11,   328,
      13,    14,     1,   337,    26,    24,    26,   341,    26,   343,
     344,   345,   346,   347,   361,    26,   363,    16,    17,    32,
     367,   368,   369,   370,   371,    24,    25,   374,   375,   376,
     377,   378,   361,    32,    33,    34,    29,    29,   372,   373,
      39,     1,     1,    28,    28,   374,   375,   376,   377,   378,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    28,    24,    24,    24,    27,     1,    29,    30,
      28,   285,   286,   287,    28,    27,    10,    11,    12,    13,
      14,    15,    16,    17,    19,    27,    27,    32,     1,    32,
      24,    24,     1,    27,   149,    32,    32,   152,    32,    33,
      34,   156,    15,    16,    17,    39,    15,    16,    17,    27,
       1,    24,    27,    26,    24,    24,    27,    26,     1,    32,
      33,    34,     1,    32,    33,    34,    39,    18,    19,    27,
      39,    32,    15,    16,    17,    25,    19,    28,    29,    25,
      31,    24,    21,    22,    23,   200,   201,    25,    25,    32,
      33,    34,     1,    32,    25,    19,    39,    36,    37,    38,
      32,     1,    24,    26,    30,    26,    15,    16,    17,    26,
      10,    11,   227,    13,    14,    24,   231,   232,   233,    30,
      19,    30,    35,    32,    33,    34,     1,     1,    25,    25,
      39,    25,    32,   248,    24,    10,    11,    12,    13,    14,
      24,    15,    16,    17,    25,    32,   261,   262,   263,   264,
      24,    26,    27,    27,    25,    25,    19,    32,    32,    33,
      34,     1,    19,    19,     1,    39,    26,    26,   283,    10,
     285,   286,   287,     1,    26,    15,    16,    17,    26,    16,
      17,    26,    25,    25,    24,    12,    25,    24,     1,     1,
      18,    19,    32,    33,    34,    32,    33,    34,    12,    39,
       1,    29,    39,    31,     5,    18,    18,    19,    12,    10,
      11,    26,    13,    14,    32,    28,    29,    29,    31,    31,
      21,    22,    23,    26,    26,    10,    27,    26,    10,     1,
      10,    32,    10,   348,   349,    36,    37,    38,    10,    11,
      27,    13,    14,     1,    27,     1,    27,    12,    27,    21,
      22,    23,    10,    11,    12,    13,    14,    27,    27,    -1,
      32,    -1,    18,    -1,    36,    37,    38,     1,    26,    27,
      -1,   341,    28,    29,    32,    31,    10,    11,    12,    13,
      14,    -1,   397,   398,   399,   400,   401,   402,   403,    -1,
       1,    24,    -1,    27,     1,    -1,    29,    30,    32,    10,
      11,    12,    13,    14,    11,    12,    13,    14,    -1,    -1,
       1,    -1,    -1,    -1,     1,    -1,    27,    -1,     1,    26,
      11,    32,    13,    14,    11,    32,    13,    14,    11,    -1,
      13,    14,    -1,    -1,    -1,    -1,    27,    -1,     1,    -1,
      27,    32,     1,    -1,    27,    32,     1,    -1,    11,    32,
      13,    14,    11,     1,    13,    14,    11,    -1,    13,    14,
      -1,    -1,    -1,    11,    27,    13,    14,    -1,    27,    32,
       1,    -1,    27,    32,    -1,    -1,     1,    32,    -1,    27,
      11,    -1,    13,    14,    32,     1,    11,    -1,    13,    14,
      -1,    -1,    -1,     1,    -1,    11,    27,    13,    14,    -1,
       1,    32,    27,    11,    -1,    13,    14,    32,     1,    -1,
      11,    27,    13,    14,    -1,     1,    32,    -1,    11,    27,
      13,    14,    -1,     1,    32,    11,    27,    13,    14,    -1,
       1,    32,    -1,    11,    27,    13,    14,    -1,     1,    32,
      11,    27,    13,    14,    -1,     1,    32,    -1,    11,    27,
      13,    14,    -1,     1,    32,    11,    27,    13,    14,    -1,
      -1,    32,    -1,    11,    27,    13,    14,    -1,     1,    32,
      -1,    27,    -1,    -1,    -1,    -1,    32,    -1,    -1,    27,
      -1,    -1,     1,    -1,    32,    18,    19,    20,    -1,    -1,
       1,    -1,    25,    -1,    27,    28,    29,     1,    31,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    18,    27,    28,
      29,     1,    31,    -1,    18,    19,    20,    28,    29,    -1,
      31,    25,    -1,    27,    28,    29,     1,    31,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
       1,    31,    -1,    18,    -1,    20,    -1,    -1,     1,     1,
      25,    -1,    -1,    28,    29,    -1,    31,    18,     1,    20,
      -1,    -1,    -1,     1,    25,    18,    18,    -1,    29,    -1,
      31,    -1,    25,    25,    -1,    18,    29,    29,    31,    31,
      18,     1,    25,    -1,     1,    -1,    29,    25,    31,     1,
       1,    29,    -1,    31,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    18,    -1,    -1,     1,    25,    18,    18,    25,    29,
       1,    31,    29,    25,    31,    -1,    27,    29,    29,    31,
      31,    18,     1,    -1,    -1,     1,    -1,    18,     1,    -1,
      27,    -1,    29,    -1,    31,    -1,    27,    -1,    29,    18,
      31,    -1,    18,    19,     1,    18,    19,     1,    27,    -1,
      29,     1,    31,    29,    -1,    31,    29,    -1,    31,    -1,
      -1,    18,    19,    -1,    18,    19,     1,    -1,    18,    19,
       1,    -1,    29,     1,    31,    29,    -1,    31,    -1,    29,
      -1,    31,    -1,    18,    19,    -1,    -1,    18,    19,     1,
      18,    19,     1,    -1,    29,     1,    31,    -1,    29,    -1,
      31,    29,    -1,    31,    -1,    -1,    18,    19,    -1,    18,
      19,     1,    18,    19,    -1,    -1,    -1,    29,    -1,    31,
      29,    -1,    31,    29,    -1,    31,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    41,    54,    32,     1,    32,     0,     1,
       4,    42,    43,    60,    26,    26,     1,    26,    32,     1,
      32,    42,     3,     3,     3,     3,     1,     4,     9,    44,
      60,    44,    44,     1,    24,    55,    55,    55,    55,    32,
       1,    32,    26,    26,     1,    26,    23,     1,    23,    26,
      26,    26,     1,    26,     1,    21,    22,    23,    32,    36,
      37,    38,    45,    48,    53,    60,    45,    45,    45,    29,
      29,     1,    29,     1,    11,    13,    14,    32,    47,    56,
      60,    56,    56,    56,    56,     1,    29,     1,    29,     1,
       5,    46,    52,    60,    45,     1,    32,    46,    46,    46,
      28,    28,    28,     1,    28,    24,    29,    30,     1,    24,
       1,    24,     1,    24,     1,    29,    30,    27,    47,    56,
      27,    27,    27,     1,    27,    28,     1,    28,    28,     1,
      28,    53,    53,    27,    46,    19,     1,    19,    30,    27,
      27,     1,    27,    32,    32,    32,    32,     1,    32,     1,
      16,    17,    24,    32,    33,    34,    39,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    27,
      27,    27,    27,    27,     1,    27,    32,     1,    32,     1,
      33,    35,    25,    25,    25,    25,    25,     1,    25,    22,
      32,    57,     1,    22,    32,    57,    57,     1,    18,    25,
      29,    31,    28,    19,    25,     1,    25,    25,     1,    25,
      25,     1,    25,    19,    28,     1,    28,     1,    19,    24,
      24,     1,    24,    19,    32,    19,    32,    26,    24,    25,
      24,    26,     1,    26,     1,    24,     1,    25,    15,    32,
      57,     1,    15,    32,    19,    26,    57,    57,    30,    26,
      26,    26,    56,    26,    26,    26,    56,    19,    19,     1,
      19,    30,    30,     1,    30,    51,    53,    60,    51,    51,
      51,    35,     1,    35,    57,    25,    25,    57,    57,    57,
      25,     1,    25,    24,    28,    24,     1,    24,    56,     1,
      28,    57,    56,    56,    56,    12,    56,    56,    56,    57,
      57,    57,    57,    25,    32,    25,    25,     1,    25,    19,
      19,    19,    27,    27,    27,     1,    27,    57,    58,    60,
      58,    58,    58,    27,    19,    27,    27,    27,    26,    27,
      27,    27,    19,    19,    19,     1,    19,    26,     1,    20,
      49,    50,    60,    26,    26,    26,     1,    26,     1,    20,
      59,    60,    25,    25,    25,     1,    25,    12,    12,    12,
       1,    12,    56,    45,    53,    53,    49,    45,    45,    45,
      45,    45,    57,    57,    26,    26,    26,    26,    26,    56,
      27,    47,    32,     1,    32,    47,    47,    47,    47,    47,
      59,    59,    56,    56,    56,    56,    56,    10,    10,    10,
      10,    10,     1,    10,    27,    27,    27,    27,    27,    57,
      57,    57,    57,    57,    57,    57,    19,    19,    19,    19,
      19,    19,     1,    19,    27,    27,    27,    27,    27,    27,
      27,     1,    27
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
#line 78 "SyntaxicAnalyser.y"
    {yyerror (" erreur mot cle class errone dans la line : "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 79 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 80 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade ouvarnte  manquant dans la line : "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 81 "SyntaxicAnalyser.y"
    {yyerror ("  erreur acolade FERMANT  manquant dans la line : "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 85 "SyntaxicAnalyser.y"
    {yyerror (" mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 86 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 100 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 101 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 102 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 103 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 106 "SyntaxicAnalyser.y"
    {yyerror ("valeur manquante  dans la line :"); YYABORT;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 112 "SyntaxicAnalyser.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 113 "SyntaxicAnalyser.y"
    {yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 119 "SyntaxicAnalyser.y"
    {yyerror ("mot clee class manquant ou errone dans la line :"); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 120 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 121 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 122 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 123 "SyntaxicAnalyser.y"
    {yyerror ("acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 124 "SyntaxicAnalyser.y"
    {yyerror ("mot clee return manquant ou errone dans la line :"); YYABORT;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 125 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 126 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 132 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 133 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 134 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type pour INT dans la line :"); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 136 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type pour BOOLEAN dans la line :"); YYABORT;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 140 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 141 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 142 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type pour STRING dans la line :"); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 144 "SyntaxicAnalyser.y"
    {yyerror ("erreur de type dans la line :"); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 148 "SyntaxicAnalyser.y"
    {yyerror ("mot cle CLASS errone ou bien manquant on line : "); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 149 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 150 "SyntaxicAnalyser.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 151 "SyntaxicAnalyser.y"
    {yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 152 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 153 "SyntaxicAnalyser.y"
    {yyerror ("acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 157 "SyntaxicAnalyser.y"
    {yyerror (" parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 158 "SyntaxicAnalyser.y"
    {yyerror (" erreur mot cle String errone dans la line:  "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 159 "SyntaxicAnalyser.y"
    {yyerror (" tabulation ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 160 "SyntaxicAnalyser.y"
    {yyerror (" tabulation fermante manquante dans la line: "); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 161 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 162 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 171 "SyntaxicAnalyser.y"
    {yyerror ("mot cle IF errone ou bien manquant on line : "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 172 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 173 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 174 "SyntaxicAnalyser.y"
    {yyerror ("mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 178 "SyntaxicAnalyser.y"
    {yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT;}
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

  case 86:

/* Line 1455 of yacc.c  */
#line 183 "SyntaxicAnalyser.y"
    {yyerror ("system.out.println errone ou bien manquant on line : "); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 184 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 185 "SyntaxicAnalyser.y"
    {yyerror (" parenthese  fermante manquant dans la line: "); YYABORT;}
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
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 191 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 194 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 195 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 196 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 197 "SyntaxicAnalyser.y"
    {yyerror ("AFFECTATION errone dans la line :"); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 198 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 202 "SyntaxicAnalyser.y"
    {yyerror ("operateur manquant dans la line :"); YYABORT;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 205 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 206 "SyntaxicAnalyser.y"
    {yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 209 "SyntaxicAnalyser.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 210 "SyntaxicAnalyser.y"
    {yyerror ("mot cle LENGTH manquant dans la line :"); YYABORT;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 213 "SyntaxicAnalyser.y"
    {yyerror ("POINT manquant dans la line :"); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 214 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 215 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 216 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 223 "SyntaxicAnalyser.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 226 "SyntaxicAnalyser.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 227 "SyntaxicAnalyser.y"
    {yyerror (" mot cle int manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 228 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 229 "SyntaxicAnalyser.y"
    {yyerror (" erreur acolade fermante  manquante dans la line : "); YYABORT;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 232 "SyntaxicAnalyser.y"
    {yyerror (" mot cle NEW manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 233 "SyntaxicAnalyser.y"
    {yyerror (" erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 234 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 235 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 238 "SyntaxicAnalyser.y"
    {yyerror ("erreur dans la line :"); YYABORT;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 241 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 242 "SyntaxicAnalyser.y"
    {yyerror ("erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 249 "SyntaxicAnalyser.y"
    {yyerror ("erreur VIRGULE manquante dans la line :"); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2426 "SyntaxicAnalyser.tab.c"
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
#line 261 "SyntaxicAnalyser.y"
 

int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,line);
	return 0;	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
}
