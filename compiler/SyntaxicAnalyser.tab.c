
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
    #include "MachineProduction.h"
	
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
#line 106 "SyntaxicAnalyser.tab.c"

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
     INF = 296,
     INFE = 297,
     SUP = 298,
     SUPE = 299,
     DIF = 300,
     EGAL = 301,
     BOOL = 302,
     NUMBER = 303,
     ID = 304
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
#line 197 "SyntaxicAnalyser.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1798

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNRULES -- Number of states.  */
#define YYNSTATES  535

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,    11,    13,    20,    27,    34,
      41,    43,    46,    49,    52,    54,    57,    59,    62,    69,
      76,    83,    87,    90,    95,   100,   105,   107,   109,   111,
     113,   120,   127,   134,   141,   148,   155,   162,   169,   176,
     183,   190,   197,   204,   211,   218,   225,   228,   231,   234,
     236,   239,   242,   245,   248,   250,   252,   255,   257,   270,
     284,   297,   310,   323,   336,   349,   362,   375,   378,   380,
     383,   385,   388,   391,   394,   396,   398,   400,   402,   404,
     416,   428,   440,   452,   464,   476,   488,   489,   498,   504,
     510,   516,   522,   528,   534,   540,   546,   548,   550,   552,
     554,   559,   564,   569,   574,   582,   590,   598,   606,   614,
     622,   636,   650,   664,   678,   692,   706,   720,   734,   748,
     762,   776,   790,   795,   800,   805,   810,   815,   818,   821,
     824,   827,   830,   833,   836,   839,   842,   845,   848,   852,
     856,   858,   860,   864,   868,   872,   876,   878,   880,   882,
     884,   887,   888,   891,   894,   897,   898,   903,   904,   909,
     911,   915,   920,   925,   930,   934,   938,   942,   948,   954,
     960,   962,   965,   967,   971,   975,   979,   981,   983,   989,
     995,  1001,  1007,  1013,  1018,  1023,  1028,  1033,  1038,  1041,
    1044,  1048,  1052,  1056,  1058
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    -1,    52,    75,    53,    -1,    54,    53,
      -1,    87,    -1,    77,    55,    26,    56,    64,    27,    -1,
       1,    55,    26,    56,    64,    27,    -1,    77,    55,     1,
      56,    64,    27,    -1,    77,    55,    26,    56,    64,     1,
      -1,    87,    -1,     8,    49,    -1,     1,    49,    -1,     8,
       1,    -1,    87,    -1,    57,    56,    -1,    87,    -1,    62,
      30,    -1,    62,    38,    63,    49,    63,    30,    -1,    62,
      38,     1,    49,    63,    30,    -1,    62,    38,    63,    49,
       1,    30,    -1,    62,     1,    30,    -1,    62,     1,    -1,
      62,    38,    48,    30,    -1,    62,    38,     1,    30,    -1,
      49,    38,    48,    30,    -1,    58,    -1,    59,    -1,    60,
      -1,    61,    -1,    49,    38,    48,    34,    48,    30,    -1,
      49,    38,    49,    34,    48,    30,    -1,    49,    38,    48,
      34,    49,    30,    -1,    49,    38,    49,    34,    49,    30,
      -1,    49,    38,    48,    35,    48,    30,    -1,    49,    38,
      49,    35,    48,    30,    -1,    49,    38,    48,    35,    49,
      30,    -1,    49,    38,    49,    35,    49,    30,    -1,    49,
      38,    48,    36,    48,    30,    -1,    49,    38,    49,    36,
      48,    30,    -1,    49,    38,    48,    36,    49,    30,    -1,
      49,    38,    49,    36,    49,    30,    -1,    49,    38,    48,
      39,    48,    30,    -1,    49,    38,    49,    39,    48,    30,
      -1,    49,    38,    48,    39,    49,    30,    -1,    49,    38,
      49,    39,    49,    30,    -1,    21,    49,    -1,    49,    49,
      -1,    17,    49,    -1,    49,    -1,     1,    49,    -1,    49,
       1,    -1,    21,     1,    -1,    17,     1,    -1,    32,    -1,
      33,    -1,    65,    64,    -1,    87,    -1,     3,    78,    22,
      66,    23,    26,    56,    69,     9,    84,    30,    27,    -1,
       3,    78,    22,    66,    23,    26,    56,    69,    56,     9,
      84,    30,    27,    -1,     1,    78,    22,    66,    23,    26,
      56,    69,     9,    84,    30,    27,    -1,     3,     1,     1,
      66,    23,    26,    56,    69,     9,    84,    30,    27,    -1,
       3,    78,    22,    66,     1,    26,    56,    69,     9,    84,
      30,    27,    -1,     3,    78,    22,    66,    23,     1,    56,
      69,     9,    84,    30,    27,    -1,     3,    78,    22,    66,
      23,    26,    56,    69,     1,    84,    30,    27,    -1,     3,
      78,    22,    66,    23,    26,    56,    69,     9,    84,     1,
      27,    -1,     3,    78,    22,    66,    23,    26,    56,    69,
       9,    84,    30,     1,    -1,    62,    67,    -1,    87,    -1,
      68,    67,    -1,    87,    -1,    31,    62,    -1,     1,    62,
      -1,    73,    69,    -1,    87,    -1,    69,    -1,    69,    -1,
      69,    -1,    69,    -1,    14,    22,    84,    23,    26,    70,
      27,    15,    26,    71,    27,    -1,     1,    22,    84,    23,
      26,    70,    27,    15,    26,    71,    27,    -1,    14,     1,
      84,    23,    26,    70,    27,    15,    26,    71,    27,    -1,
      14,    22,    84,     1,    26,    70,    27,    15,    26,    71,
      27,    -1,    14,    22,    84,    23,    26,    70,    27,     1,
      26,    71,    27,    -1,    14,    22,    84,    23,    26,    70,
      27,    15,     1,    71,    27,    -1,    14,    22,    84,    23,
      26,    70,    27,    15,    26,    71,     1,    -1,    -1,    16,
      22,    84,    23,    26,    74,    72,    27,    -1,     1,    22,
      84,    23,    73,    -1,    16,     1,    84,    23,    73,    -1,
      16,    22,    84,     1,    73,    -1,    10,    22,    84,    23,
      30,    -1,     1,    22,    84,    23,    30,    -1,    10,     1,
      84,    23,    30,    -1,    10,    22,    84,     1,    30,    -1,
      10,    22,    84,    23,     1,    -1,    58,    -1,    59,    -1,
      60,    -1,    61,    -1,    49,    38,    84,    30,    -1,     1,
      38,    84,    30,    -1,    49,     1,    84,    30,    -1,    49,
      38,    84,     1,    -1,    49,    24,    84,    25,    38,    84,
      30,    -1,     1,    24,    84,    25,    38,    84,    30,    -1,
      49,     1,    84,    25,    38,    84,    30,    -1,    49,    24,
      84,     1,    38,    84,    30,    -1,    49,    24,    84,    25,
       1,    84,    30,    -1,    49,    24,    84,    25,    38,    84,
       1,    -1,    77,    26,     3,     4,     6,     7,    22,    76,
      23,    26,    69,    27,    27,    -1,    77,     1,     3,     4,
       6,     7,    22,    76,    23,    26,    69,    27,    27,    -1,
      77,    26,     1,     4,     6,     7,    22,    76,    23,    26,
      69,    27,    27,    -1,    77,    26,     3,     1,     6,     7,
      22,    76,    23,    26,    69,    27,    27,    -1,    77,    26,
       3,     4,     1,     7,    22,    76,    23,    26,    69,    27,
      27,    -1,    77,    26,     3,     4,     6,     1,    22,    76,
      23,    26,    69,    27,    27,    -1,    77,    26,     3,     4,
       6,     7,     1,    76,    23,    26,    69,    27,    27,    -1,
      77,    26,     3,     4,     6,     7,    22,    76,     1,    26,
      69,    27,    27,    -1,    77,    26,     3,     4,     6,     7,
      22,    76,    23,     1,    69,    27,    27,    -1,    77,    26,
       3,     4,     6,     7,    22,    76,    23,    26,     1,    27,
      27,    -1,    77,    26,     3,     4,     6,     7,    22,    76,
      23,    26,    69,     1,    27,    -1,    77,    26,     3,     4,
       6,     7,    22,    76,    23,    26,    69,    27,     1,    -1,
      19,    24,    25,    49,    -1,     1,    24,    25,    49,    -1,
      19,     1,    25,    49,    -1,    19,    24,     1,    49,    -1,
      19,    24,    25,     1,    -1,     5,    49,    -1,     1,    49,
      -1,     5,     1,    -1,    21,    49,    -1,    49,    49,    -1,
      17,    49,    -1,     6,    49,    -1,     1,    49,    -1,    49,
       1,    -1,    21,     1,    -1,    17,     1,    -1,    31,    84,
      79,    -1,     1,    84,    79,    -1,    87,    -1,    28,    -1,
      48,    40,    48,    -1,    49,    40,    48,    -1,    48,    40,
      49,    -1,    49,    40,    49,    -1,    34,    -1,    35,    -1,
      36,    -1,    39,    -1,    84,    79,    -1,    -1,    29,    49,
      -1,     1,    49,    -1,    29,     1,    -1,    -1,    84,    85,
      81,    84,    -1,    -1,    84,    86,    80,    84,    -1,    80,
      -1,    84,     1,    84,    -1,    84,    24,    84,    25,    -1,
      84,     1,    84,    25,    -1,    84,    24,    84,     1,    -1,
      84,    29,    11,    -1,    84,     1,    11,    -1,    84,    29,
       1,    -1,    84,    83,    22,    82,    23,    -1,    84,    83,
       1,    82,    23,    -1,    84,    83,    22,    82,     1,    -1,
      48,    -1,    35,    48,    -1,    47,    -1,    63,    49,    63,
      -1,    63,    49,     1,    -1,     1,    49,    63,    -1,    49,
      -1,    12,    -1,    13,    17,    24,    84,    25,    -1,     1,
      17,    24,    84,    25,    -1,    13,     1,    24,    84,    25,
      -1,    13,    17,     1,    84,    25,    -1,    13,    17,    24,
      84,     1,    -1,    13,    49,    22,    23,    -1,     1,    49,
      22,    23,    -1,    13,     1,    22,    23,    -1,    13,    49,
       1,    23,    -1,    13,    49,    22,     1,    -1,    37,    84,
      -1,     1,    84,    -1,    22,    84,    23,    -1,     1,    84,
      23,    -1,    22,    84,     1,    -1,     1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    88,    99,   100,   103,   104,   105,   106,
     107,   110,   115,   116,   117,   120,   121,   124,   125,   126,
     127,   128,   129,   131,   132,   133,   139,   140,   141,   142,
     145,   153,   160,   167,   176,   184,   191,   198,   209,   217,
     224,   231,   242,   250,   257,   264,   282,   290,   297,   304,
     305,   306,   307,   308,   312,   313,   317,   318,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   331,   332,   335,
     336,   338,   339,   341,   342,   344,   351,   358,   365,   367,
     369,   371,   372,   373,   375,   376,   379,   378,   385,   386,
     387,   389,   390,   391,   392,   393,   395,   396,   397,   398,
     399,   404,   405,   406,   408,   413,   414,   415,   416,   417,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   436,   441,   442,   443,   444,   448,   453,   454,
     461,   466,   471,   476,   481,   482,   483,   484,   495,   496,
     497,   500,   501,   506,   511,   516,   527,   528,   529,   530,
     533,   539,   545,   549,   550,   554,   553,   567,   566,   581,
     583,   584,   592,   593,   594,   601,   602,   603,   604,   605,
     606,   613,   619,   624,   625,   626,   628,   639,   640,   641,
     642,   643,   644,   645,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   661
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
  "MOINS", "MULTIPLIER", "NOT", "AFFECTATION", "DIV", "COMPOP", "INF",
  "INFE", "SUP", "SUPE", "DIF", "EGAL", "BOOL", "NUMBER", "ID", "$accept",
  "program", "$@1", "ClassDeclarationRepeat", "ClassDeclaration",
  "ExtendsID", "VarDeclarationRepeat", "VarDeclaration",
  "ADDITIONOPERATION", "SUBTRACTINGOPERATION", "MULTIPLICATIONOPERATION",
  "DIVISONOPERATION", "Type", "QUOTE", "MethodDeclarationRepeat",
  "MethodDeclaration", "TIVTIRepeat", "VTIRepeat", "VT", "STATEMENTRepeat",
  "IFSTATEMENT", "ELSESTATEMENT", "WHILETRUESTATEMENT", "STATEMENT", "$@2",
  "MainClass", "MainMethodParam", "ClassScope", "MethodType", "SectionC_E",
  "LogicOperator", "MathOperator", "SectionE_SCE", "UseFunction",
  "Expression", "$@3", "$@4", "epsilon", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    52,    51,    53,    53,    54,    54,    54,    54,
      54,    55,    55,    55,    55,    56,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      58,    58,    58,    58,    59,    59,    59,    59,    60,    60,
      60,    60,    61,    61,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    63,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    71,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    76,    76,    76,    76,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    79,    79,
      79,    80,    80,    80,    80,    80,    81,    81,    81,    81,
      82,    82,    83,    83,    83,    85,    84,    86,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     2,     1,     6,     6,     6,     6,
       1,     2,     2,     2,     1,     2,     1,     2,     6,     6,
       6,     3,     2,     4,     4,     4,     1,     1,     1,     1,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     2,     2,     2,     1,
       2,     2,     2,     2,     1,     1,     2,     1,    12,    13,
      12,    12,    12,    12,    12,    12,    12,     2,     1,     2,
       1,     2,     2,     2,     1,     1,     1,     1,     1,    11,
      11,    11,    11,    11,    11,    11,     0,     8,     5,     5,
       5,     5,     5,     5,     5,     5,     1,     1,     1,     1,
       4,     4,     4,     4,     7,     7,     7,     7,     7,     7,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,     4,     4,     4,     4,     4,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       1,     1,     3,     3,     3,     3,     1,     1,     1,     1,
       2,     0,     2,     2,     2,     0,     4,     0,     4,     1,
       3,     4,     4,     4,     3,     3,     3,     5,     5,     5,
       1,     2,     1,     3,     3,     3,     1,     1,     5,     5,
       5,     5,     5,     4,     4,     4,     4,     4,     2,     2,
       3,     3,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,   128,   129,
     127,     0,     3,     0,     0,    10,     0,     0,     0,     0,
       0,    14,     4,     0,     0,     0,     0,    12,    13,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,     0,    16,     0,
       0,     0,     0,     0,     0,     0,    50,    53,    48,    52,
      46,    51,     0,    47,     0,     0,     0,     0,    57,    15,
      22,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,    56,    21,     0,    54,    55,     0,     0,     8,
       9,     6,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   133,
     137,   132,   136,   130,   135,   131,     0,     0,     0,    24,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    32,
      34,    36,    38,    40,    42,    44,    31,    33,    35,    37,
      39,    41,    43,    45,     0,     0,    67,     0,    70,     0,
       0,     0,     0,    19,    20,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      71,    69,     0,     0,     0,     0,     0,   123,   124,   125,
     126,   122,     0,     0,     0,     0,     0,    96,    97,    98,
      99,    78,     0,    74,    78,    78,    78,    78,    78,    78,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    78,    78,    78,     0,     0,   177,     0,
       0,   141,     0,     0,   172,   170,   176,     0,   159,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,   176,     0,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   110,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,     0,     0,     0,     0,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,   100,     0,     0,
       0,     0,   176,     0,     0,     0,     0,     0,   175,   191,
       0,     0,     0,     0,     0,     0,     0,   190,   142,   144,
     143,   145,   174,   173,   165,   176,     0,     0,    92,    78,
       0,     0,   166,   164,   152,     0,     0,   146,   147,   148,
     149,     0,     0,     0,     0,     0,    93,    94,    95,    91,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   184,   185,     0,     0,     0,   186,   187,   183,   162,
      78,     0,     0,   161,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,    58,     0,   179,   180,
     181,     0,   178,     0,   168,     0,     0,   150,   140,   169,
     167,   105,     0,     0,     0,     0,    78,     0,   106,   107,
     108,     0,   104,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,   139,   138,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    79
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    12,    13,    20,    41,    42,   237,   238,
     239,   240,    47,   297,    66,    67,   160,   196,   197,   521,
     451,   522,   497,   242,   464,     6,   135,    14,    88,   487,
     298,   411,   454,   348,   396,   349,   350,   243
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -314
static const yytype_int16 yypact[] =
{
    -314,   119,    68,  -314,   172,    40,   367,    86,  -314,  -314,
    -314,    22,  -314,   367,   410,   168,   248,   308,   256,    75,
     229,  -314,  -314,   126,   311,   324,    71,  -314,  -314,  -314,
     276,   276,   276,   306,   360,   368,   108,   345,    82,    83,
     137,   275,   163,  -314,  -314,  -314,  -314,   268,  -314,   275,
     275,   417,   424,   428,   439,     2,  -314,  -314,  -314,  -314,
    -314,  -314,   447,  -314,   247,   359,   386,   275,  -314,  -314,
     387,  -314,   206,   421,    41,   443,   448,   463,   497,   509,
     380,   524,   553,   412,   458,   125,   148,   188,   516,   200,
     527,  -314,  -314,  -314,    80,  -314,  -314,   522,   508,  -314,
    -314,  -314,   303,   303,   303,   303,   303,   303,   303,  -314,
     462,   485,   567,   569,   574,   585,   622,   646,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,   164,   164,   164,  -314,
     457,  -314,   182,   541,    10,   545,   547,   555,   571,   576,
     584,    32,   556,   598,   607,   616,   635,   657,   659,   666,
     674,   681,   684,   688,   694,   695,   696,   701,    84,   204,
     603,  -314,   629,   294,   702,   703,   705,   572,   632,   181,
     656,   713,   718,   720,   733,   734,   741,   298,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,   187,   187,  -314,   204,  -314,   746,
     749,   750,   357,  -314,  -314,  -314,   693,   728,   729,   201,
     487,   487,   487,   487,   487,   487,   487,   487,   637,  -314,
    -314,  -314,   840,   840,   840,   840,   840,  -314,  -314,  -314,
    -314,  -314,   515,   411,   422,   440,    87,  -314,  -314,  -314,
    -314,   752,  1328,  -314,   759,   763,   780,   781,   782,   783,
     784,   460,   689,   127,   127,   127,   127,  1739,   928,   928,
     928,   928,   928,   928,   928,   928,   928,   928,   928,   946,
     787,  -314,   788,   798,   799,   803,   810,   815,   817,   818,
     819,   299,   822,   838,   839,   842,  1749,    69,  -314,     5,
     928,  -314,   807,   928,  -314,   828,   832,   813,  -314,  1030,
    1056,  1072,  1102,  1131,  1148,  1177,  1194,  1223,   972,  1239,
     596,   627,  1255,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,   928,   928,   928,   928,   991,
     928,   864,   852,   480,   391,   339,   198,   441,  1285,  -314,
     649,   652,   658,   208,   866,  1301,   928,   129,   442,   727,
     214,   843,  -314,   850,   680,   112,   856,   708,   859,  1328,
     534,   865,   854,  -314,   736,    36,   563,  -314,  1324,  1340,
    1356,  1382,   363,  1398,  1414,   928,   928,   867,  -314,  -314,
     870,   928,   928,   928,   872,   322,   307,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,     9,   764,   487,  -314,  -314,
    1676,  1440,   449,  -314,  -314,   874,   874,  -314,  -314,  -314,
    -314,   928,   828,   832,   928,   928,  -314,  -314,  -314,  -314,
     487,   487,   487,  1697,   122,   620,  1718,  -314,   928,   928,
     928,   928,   873,   878,   881,   883,   885,   769,   300,  1456,
    1472,  -314,  -314,  1498,  1514,  1530,  -314,  -314,  -314,  -314,
     889,   890,   444,  -314,   895,  1013,   356,   804,   835,  1556,
     892,   893,   897,   928,   487,  1572,  1588,  1614,  1630,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,   898,  -314,  -314,
    -314,   493,  -314,   915,  -314,   866,   928,  -314,  -314,  -314,
    -314,  -314,   918,   920,   251,  1660,   909,   916,  -314,  -314,
    -314,   592,  -314,  -314,   919,   903,  1013,   922,   923,   927,
     406,   361,  -314,   487,  -314,  -314,   487,   487,   487,   487,
     487,   332,   917,   930,   935,   937,   939,   346,  -314,  -314,
    -314,  -314,  -314,  -314,  -314
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -314,  -314,  -314,   933,  -314,   940,   -30,  -314,     8,    21,
      35,    48,   -99,   -68,   161,  -314,   548,   758,  -314,  -197,
      38,   234,  -314,  -313,  -314,  -314,   716,   965,   904,   217,
     621,  -314,   564,  -314,    23,  -314,  -314,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -195
static const yytype_int16 yytable[] =
{
      15,    49,    50,    79,    98,    21,   335,    15,    21,    80,
    -153,   168,    69,   241,   244,   245,   246,   247,   248,   249,
     250,   252,   336,    18,    48,    48,    48,   159,   159,   159,
      19,  -153,   400,   176,   169,    68,    48,   430,    43,    43,
      43,     9,   100,    68,    68,   271,   423,   426,  -194,   342,
      43,    44,    44,    44,   337,   177,   282,   283,   284,   285,
     286,    68,   164,    44,   166,    45,    45,    45,   101,     4,
     287,     8,    35,     5,   431,    36,    28,    45,    46,    46,
      46,   288,   289,    57,    59,    61,   332,    16,   267,    10,
      46,   290,  -193,  -193,  -193,   219,   220,   291,  -193,  -193,
    -193,    95,    96,  -193,   292,  -193,   293,   -49,  -193,    54,
     129,   268,    17,   418,    55,   -49,   294,   295,   333,     3,
     161,   161,   161,   287,    29,   269,   120,    31,   232,   130,
     402,    58,    60,    63,   288,   289,  -194,   233,    61,   332,
     403,   234,   419,   235,   463,  -193,   259,  -193,   399,   122,
     291,  -193,    32,   198,    95,    96,  -193,   292,  -193,   293,
     260,  -193,   399,   399,    37,    37,  -194,   -49,    -5,   294,
     295,   333,  -194,  -194,   121,    62,   236,  -194,   404,  -194,
      38,    38,   208,   165,    39,    39,    63,  -194,    37,   124,
    -194,   198,   253,   254,   255,   256,   257,   123,   400,   382,
     450,   127,   230,   271,    38,   194,   209,    94,    39,   392,
      73,    74,    40,   158,    95,    96,    48,    48,    48,    48,
      48,     8,   383,   450,   450,   450,   271,  -194,    92,   271,
      43,    43,    43,    43,    43,   195,   158,   125,    95,    96,
      95,    96,   291,    44,    44,    44,    44,    44,    83,   118,
     231,    24,   509,    84,    97,    30,   331,    45,    45,    45,
      45,    45,   412,   413,    85,   378,   510,   496,    86,    70,
      46,    46,    46,    46,    46,   393,    64,    37,    65,  -194,
      48,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   312,    38,    43,   201,    87,    39,    71,   217,
     323,   475,  -194,  -194,   133,    27,    72,    44,   287,    25,
     334,    26,    51,   338,   399,    33,   340,   202,   394,   288,
     289,    45,   134,   447,   218,    40,   324,   476,    34,   290,
    -192,  -192,  -192,   -76,    46,   291,  -192,  -192,  -192,    95,
      96,  -192,   292,  -192,   293,   448,  -192,   533,   368,   369,
     370,   371,   373,   374,   294,   295,   395,   489,   225,   -76,
      89,   380,   232,   381,   -50,    84,    52,  -194,    11,   401,
    -194,   233,     5,   534,    53,   234,    85,   235,  -194,   490,
      86,   107,  -194,   226,  -190,  -190,  -190,   397,  -194,  -190,
    -190,   398,   344,   -50,    56,  -190,  -190,  -190,   439,   440,
    -190,   -50,   108,   342,   443,   444,   445,   519,    87,  -190,
     236,    18,   261,    91,   379,   346,  -189,    93,    19,  -157,
     347,  -189,  -189,   263,    75,  -155,  -155,  -155,   455,   455,
    -155,    76,   520,   262,   457,    77,  -194,   458,   459,  -157,
    -157,   265,   384,   405,   264,   287,    78,   334,    99,   488,
    -154,   465,   466,   467,   468,   394,   288,   289,   460,   461,
     462,   118,   266,   385,   406,   102,   290,  -163,  -163,  -163,
     103,  -154,   291,  -163,  -163,  -163,    95,    96,  -163,   292,
    -163,   293,   258,  -163,   259,   104,   495,   279,   232,    95,
      96,   294,   295,   395,   287,    81,    82,   233,   260,   488,
     488,   234,   377,   235,   394,   288,   289,   119,   505,   506,
     142,   143,    95,    96,  -194,   290,  -182,  -182,  -182,   105,
     342,   291,  -182,  -182,  -182,    95,    96,  -182,   292,  -182,
     293,   106,  -182,   144,   145,   424,   236,   258,   126,   259,
     294,   295,   395,  -194,   233,   394,   288,   289,   234,   128,
     235,  -194,   131,   260,   109,  -194,   290,   132,   110,   111,
     112,  -194,   291,   113,   287,   167,    95,    96,   170,   292,
     171,   293,  -103,  -103,   394,   288,   289,  -103,   172,  -103,
    -103,   294,   295,   425,  -103,   290,   178,   114,   115,   116,
    -103,   291,   117,   287,   173,    95,    96,   206,   292,   174,
     293,  -109,  -109,   394,   288,   289,  -109,   175,  -109,  -109,
     294,   295,   395,  -109,   290,   146,   147,   148,   149,  -109,
     291,   267,   150,   151,    95,    96,   199,   292,   179,   293,
     110,   111,   112,   152,   153,   113,   341,   180,   251,   294,
     295,   395,  -153,  -176,   268,  -176,   181,   233,  -176,  -176,
     344,   234,   200,   235,  -176,  -176,  -176,   207,   269,  -176,
     342,   114,   115,   116,  -194,   182,   117,   342,  -176,  -176,
     154,   155,  -188,   346,  -188,   162,   163,  -157,   347,  -188,
    -188,   287,   210,  -155,  -155,  -155,   236,   183,  -155,   184,
     280,   394,   288,   289,   156,   157,   185,  -157,  -157,   -78,
     388,   389,   290,   -78,   186,   -78,   390,   391,   291,   287,
     417,   187,    95,    96,   188,   292,   281,   293,   189,   394,
     288,   289,   514,   515,   190,   191,   192,   294,   295,   395,
     290,   193,   203,   204,   421,   205,   291,   287,   -78,   211,
      95,    96,   227,   292,   212,   293,   213,   394,   288,   289,
     523,   524,   525,   526,   527,   294,   295,   395,   290,   214,
     215,   407,   408,   409,   291,   344,   410,   216,    95,    96,
     287,   292,   222,   293,   429,   223,   224,   228,   229,   270,
     394,   288,   289,   294,   295,   395,   272,  -160,   346,   449,
     273,   290,  -157,   347,  -160,  -160,   474,   291,  -155,  -155,
    -155,    95,    96,  -155,   292,   344,   293,   274,   275,   276,
     277,   278,  -157,  -157,   313,   314,   294,   295,   395,   136,
     137,   138,   139,   140,   141,   315,   316,  -156,   346,  -156,
     317,   325,  -156,   347,  -156,  -156,   344,   318,  -155,  -155,
    -155,    37,   319,  -155,   320,   321,   322,   326,   327,  -194,
    -194,   328,  -156,  -156,  -194,   339,  -194,    38,  -158,   346,
    -158,    39,   343,  -157,   347,  -158,  -158,   287,   341,  -155,
    -155,  -155,   342,   375,  -155,   287,   376,   394,   288,   289,
     416,   415,   420,  -157,  -157,   422,   288,   289,   290,    40,
     441,   427,   428,   442,   291,   446,   290,  -151,    95,    96,
     469,   292,   291,   293,   485,   470,    95,    96,   471,   292,
     472,   293,   473,   294,   295,   395,   -75,   483,   484,   492,
     493,   294,   295,   296,   494,   503,  -160,   346,   449,   287,
     504,  -157,   347,   507,   486,   508,   -77,  -155,  -155,  -155,
     288,   289,  -155,   512,   528,   513,    22,   287,   516,   517,
     290,  -157,  -157,   518,    23,   221,   291,   529,   288,   289,
      95,    96,   530,   292,   531,   293,   532,     7,   290,    90,
     456,   414,     0,   344,   291,   294,   295,   296,    95,    96,
       0,   292,     0,   293,     0,     0,     0,     0,     0,     0,
       0,     0,   287,   294,   310,   311,   346,   362,     0,     0,
    -157,   347,   363,   288,   289,     0,  -155,  -155,  -155,     0,
       0,  -155,     0,   290,   485,     0,     0,     0,     0,   291,
    -157,  -157,     0,    95,    96,     0,   292,     0,   293,     0,
       0,   344,     0,     0,     0,     0,  -194,   346,   294,   295,
     372,  -157,   347,     0,   486,     0,     0,  -155,  -155,  -155,
       0,     0,  -155,   345,   346,     0,     0,   344,  -157,   347,
       0,  -157,  -157,     0,  -155,  -155,  -155,     0,     0,  -155,
       0,     0,     0,   344,     0,     0,     0,     0,  -157,  -157,
     346,   351,     0,     0,  -157,   347,     0,     0,     0,     0,
    -155,  -155,  -155,     0,     0,  -155,   346,     0,     0,     0,
    -157,   347,   352,   344,  -157,  -157,  -155,  -155,  -155,     0,
       0,  -155,     0,     0,     0,     0,     0,     0,     0,     0,
    -157,  -157,     0,     0,     0,   353,   346,     0,     0,     0,
    -157,   347,   354,     0,     0,     0,  -155,  -155,  -155,     0,
       0,  -155,     0,     0,     0,     0,     0,     0,     0,   344,
    -157,  -157,     0,     0,   355,   346,     0,     0,     0,  -157,
     347,     0,     0,     0,     0,  -155,  -155,  -155,     0,     0,
    -155,   356,   346,     0,     0,     0,  -157,   347,   357,  -157,
    -157,     0,  -155,  -155,  -155,     0,     0,  -155,     0,     0,
       0,     0,     0,     0,     0,   344,  -157,  -157,     0,     0,
     358,   346,     0,     0,     0,  -157,   347,     0,     0,     0,
       0,  -155,  -155,  -155,     0,     0,  -155,   359,   346,     0,
       0,     0,  -157,   347,   360,  -157,  -157,     0,  -155,  -155,
    -155,     0,     0,  -155,     0,     0,     0,     0,     0,     0,
     364,     0,  -157,  -157,     0,     0,   361,   346,     0,     0,
       0,  -157,   347,     0,     0,     0,   366,  -155,  -155,  -155,
       0,     0,  -155,   346,   365,     0,     0,  -157,   347,     0,
       0,  -157,  -157,  -155,  -155,  -155,     0,     0,  -155,   346,
       0,     0,     0,  -157,   347,   367,   386,  -157,  -157,  -155,
    -155,  -155,     0,     0,  -155,     0,     0,     0,     0,     0,
       0,     0,   232,  -157,  -157,     0,     0,     0,   387,   346,
    -194,   233,     0,  -157,   347,   234,     0,   235,  -194,  -155,
    -155,  -155,  -194,     0,  -155,   344,     0,   397,  -194,   232,
       0,   398,     0,  -157,  -157,     0,     0,  -194,   233,     0,
       0,   344,   234,     0,   235,  -194,     0,     0,   346,  -194,
     236,     0,  -157,   347,   432,  -194,     0,   344,  -155,  -155,
    -155,     0,     0,  -155,   346,     0,     0,     0,  -157,   347,
     433,     0,  -157,  -157,  -155,  -155,  -155,   236,     0,  -155,
     346,     0,     0,   344,  -157,   347,   434,     0,  -157,  -157,
    -155,  -155,  -155,     0,     0,  -155,     0,     0,     0,   344,
       0,     0,     0,     0,  -157,  -157,   346,     0,     0,     0,
    -157,   347,   435,     0,     0,   437,  -155,  -155,  -155,     0,
       0,  -155,   346,     0,     0,     0,  -157,   347,   436,     0,
    -157,  -157,  -155,  -155,  -155,     0,     0,  -155,   346,     0,
       0,   452,  -157,   347,   438,     0,  -157,  -157,  -155,  -155,
    -155,     0,     0,  -155,     0,     0,     0,   344,     0,     0,
       0,     0,  -157,  -157,   346,   453,     0,     0,  -157,   347,
       0,     0,     0,   344,  -155,  -155,  -155,     0,     0,  -155,
     346,     0,     0,     0,  -157,   347,   477,     0,  -157,  -157,
    -155,  -155,  -155,     0,     0,  -155,   346,   478,     0,   344,
    -157,   347,     0,     0,  -157,  -157,  -155,  -155,  -155,     0,
       0,  -155,     0,     0,     0,   344,     0,     0,     0,     0,
    -157,  -157,   346,   479,     0,     0,  -157,   347,     0,     0,
       0,   481,  -155,  -155,  -155,     0,     0,  -155,   346,   480,
       0,     0,  -157,   347,     0,     0,  -157,  -157,  -155,  -155,
    -155,     0,     0,  -155,   346,   482,     0,   344,  -157,   347,
       0,     0,  -157,  -157,  -155,  -155,  -155,     0,     0,  -155,
       0,     0,     0,   344,     0,     0,     0,     0,  -157,  -157,
     346,     0,     0,     0,  -157,   347,   491,     0,     0,   344,
    -155,  -155,  -155,     0,     0,  -155,   346,     0,     0,     0,
    -157,   347,   498,     0,  -157,  -157,  -155,  -155,  -155,     0,
       0,  -155,   346,     0,     0,   344,  -157,   347,   499,     0,
    -157,  -157,  -155,  -155,  -155,     0,     0,  -155,     0,     0,
       0,   501,     0,     0,     0,     0,  -157,  -157,   346,     0,
       0,     0,  -157,   347,   500,     0,     0,     0,  -155,  -155,
    -155,     0,     0,  -155,   346,     0,     0,     0,  -157,   347,
     502,   386,  -157,  -157,  -155,  -155,  -155,     0,     0,  -155,
       0,     0,     0,     0,     0,     0,     0,   232,  -157,  -157,
       0,     0,     0,   511,   346,   -88,   233,     0,  -157,   347,
     234,     0,   235,   -88,  -155,  -155,  -155,   -88,   232,  -155,
       0,     0,     0,   -88,     0,     0,   -89,   233,  -157,  -157,
       0,   234,     0,   235,   -89,     0,     0,     0,   -89,   232,
       0,     0,     0,     0,   -89,   236,     0,   -90,   233,     0,
       0,     0,   234,     0,   235,   -90,     0,     0,     0,   -90,
     232,     0,     0,     0,     0,   -90,   236,     0,  -194,   233,
     329,     0,     0,   234,     0,   235,  -194,     0,   330,   -78,
    -194,     0,     0,   -78,     0,   -78,    38,   236,     0,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40
};

static const yytype_int16 yycheck[] =
{
       6,    31,    32,     1,    72,    11,     1,    13,    14,     7,
       1,     1,    42,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    17,     1,    30,    31,    32,   126,   127,   128,
       8,    22,   345,     1,    24,    41,    42,     1,    30,    31,
      32,     1,     1,    49,    50,   242,   359,   360,    26,    40,
      42,    30,    31,    32,    49,    23,   253,   254,   255,   256,
     257,    67,   130,    42,   132,    30,    31,    32,    27,     1,
       1,    49,     1,     5,    38,     4,     1,    42,    30,    31,
      32,    12,    13,     1,     1,     1,    17,     1,     1,    49,
      42,    22,    23,    24,    25,   194,   195,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    23,    39,     1,
      30,    24,    26,     1,     6,    31,    47,    48,    49,     0,
     126,   127,   128,     1,    49,    38,     1,     1,     1,    49,
       1,    49,    49,    49,    12,    13,     9,    10,     1,    17,
      11,    14,    30,    16,    22,    23,    24,    25,   345,     1,
      28,    29,    26,   159,    32,    33,    34,    35,    36,    37,
      38,    39,   359,   360,     1,     1,     3,    30,     0,    47,
      48,    49,     9,    10,    49,    38,    49,    14,    49,    16,
      17,    17,     1,     1,    21,    21,    49,    23,     1,     1,
      27,   197,   222,   223,   224,   225,   226,    49,   511,     1,
     397,     1,     1,   400,    17,     1,    25,     1,    21,     1,
      49,    50,    49,    49,    32,    33,   222,   223,   224,   225,
     226,    49,    24,   420,   421,   422,   423,    23,    67,   426,
     222,   223,   224,   225,   226,    31,    49,    49,    32,    33,
      32,    33,    28,   222,   223,   224,   225,   226,     1,    49,
      49,     3,     1,     6,    48,    26,   286,   222,   223,   224,
     225,   226,    48,    49,    17,   333,    15,   464,    21,     1,
     222,   223,   224,   225,   226,   343,     1,     1,     3,     3,
     286,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,    17,   286,     1,    49,    21,    30,     1,
       1,     1,    27,    27,     1,    49,    38,   286,     1,     1,
     287,     3,     6,   290,   511,     4,   293,    23,    11,    12,
      13,   286,    19,     1,    26,    49,    27,    27,     4,    22,
      23,    24,    25,     1,   286,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    23,    39,     1,   325,   326,
     327,   328,   329,   330,    47,    48,    49,     1,     1,    27,
       1,    22,     1,    24,     1,     6,     6,     0,     1,   346,
       9,    10,     5,    27,     6,    14,    17,    16,    17,    23,
      21,     1,    21,    26,    23,    24,    25,    26,    27,    28,
      29,    30,     1,    30,    49,    34,    35,    36,   375,   376,
      39,    38,    22,    40,   381,   382,   383,     1,    49,    48,
      49,     1,     1,    27,    23,    24,    25,    30,     8,    28,
      29,    30,    31,     1,     7,    34,    35,    36,   405,   406,
      39,     7,    26,    22,   411,     7,    26,   414,   415,    48,
      49,     1,     1,     1,    22,     1,     7,   424,    27,   455,
       1,   428,   429,   430,   431,    11,    12,    13,   420,   421,
     422,    49,    22,    22,    22,    22,    22,    23,    24,    25,
      22,    22,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    22,    39,    24,    22,   463,    27,     1,    32,
      33,    47,    48,    49,     1,    48,    49,    10,    38,   505,
     506,    14,    22,    16,    11,    12,    13,    49,   485,   486,
      48,    49,    32,    33,    27,    22,    23,    24,    25,    22,
      40,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    22,    39,    48,    49,     1,    49,    22,    22,    24,
      47,    48,    49,     9,    10,    11,    12,    13,    14,    22,
      16,    17,    30,    38,    30,    21,    22,    49,    34,    35,
      36,    27,    28,    39,     1,    24,    32,    33,    23,    35,
      23,    37,     9,    10,    11,    12,    13,    14,    23,    16,
      17,    47,    48,    49,    21,    22,    30,    34,    35,    36,
      27,    28,    39,     1,    23,    32,    33,    25,    35,    23,
      37,     9,    10,    11,    12,    13,    14,    23,    16,    17,
      47,    48,    49,    21,    22,    48,    49,    48,    49,    27,
      28,     1,    48,    49,    32,    33,    23,    35,    30,    37,
      34,    35,    36,    48,    49,    39,    40,    30,     1,    47,
      48,    49,    22,    23,    24,    25,    30,    10,    28,    29,
       1,    14,    23,    16,    34,    35,    36,    25,    38,    39,
      40,    34,    35,    36,    27,    30,    39,    40,    48,    49,
      48,    49,    23,    24,    25,   127,   128,    28,    29,    30,
      31,     1,    26,    34,    35,    36,    49,    30,    39,    30,
       1,    11,    12,    13,    48,    49,    30,    48,    49,    10,
      48,    49,    22,    14,    30,    16,    48,    49,    28,     1,
      30,    30,    32,    33,    30,    35,    27,    37,    30,    11,
      12,    13,   505,   506,    30,    30,    30,    47,    48,    49,
      22,    30,    30,    30,    26,    30,    28,     1,    49,    26,
      32,    33,    49,    35,    26,    37,    26,    11,    12,    13,
     516,   517,   518,   519,   520,    47,    48,    49,    22,    26,
      26,    34,    35,    36,    28,     1,    39,    26,    32,    33,
       1,    35,    26,    37,    38,    26,    26,    49,    49,    27,
      11,    12,    13,    47,    48,    49,    27,    23,    24,    25,
      27,    22,    28,    29,    30,    31,    27,    28,    34,    35,
      36,    32,    33,    39,    35,     1,    37,    27,    27,    27,
      27,    27,    48,    49,    27,    27,    47,    48,    49,   103,
     104,   105,   106,   107,   108,    27,    27,    23,    24,    25,
      27,     9,    28,    29,    30,    31,     1,    27,    34,    35,
      36,     1,    27,    39,    27,    27,    27,     9,     9,     9,
      10,     9,    48,    49,    14,    48,    16,    17,    23,    24,
      25,    21,    49,    28,    29,    30,    31,     1,    40,    34,
      35,    36,    40,     9,    39,     1,    24,    11,    12,    13,
      30,    38,    26,    48,    49,    26,    12,    13,    22,    49,
      23,    26,    38,    23,    28,    23,    22,    23,    32,    33,
      27,    35,    28,    37,     1,    27,    32,    33,    27,    35,
      27,    37,    27,    47,    48,    49,    27,    27,    23,    27,
      27,    47,    48,    49,    27,    27,    23,    24,    25,     1,
      15,    28,    29,    15,    31,    15,    27,    34,    35,    36,
      12,    13,    39,    27,    27,    26,    13,     1,    26,    26,
      22,    48,    49,    26,    14,   197,    28,    27,    12,    13,
      32,    33,    27,    35,    27,    37,    27,     2,    22,    65,
     406,   350,    -1,     1,    28,    47,    48,    49,    32,    33,
      -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    47,    48,    49,    24,    25,    -1,    -1,
      28,    29,    30,    12,    13,    -1,    34,    35,    36,    -1,
      -1,    39,    -1,    22,     1,    -1,    -1,    -1,    -1,    28,
      48,    49,    -1,    32,    33,    -1,    35,    -1,    37,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    23,    24,    47,    48,
      49,    28,    29,    -1,    31,    -1,    -1,    34,    35,    36,
      -1,    -1,    39,    23,    24,    -1,    -1,     1,    28,    29,
      -1,    48,    49,    -1,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    48,    49,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      34,    35,    36,    -1,    -1,    39,    24,    -1,    -1,    -1,
      28,    29,    30,     1,    48,    49,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      28,    29,     1,    -1,    -1,    -1,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      48,    49,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    34,    35,    36,    -1,    -1,
      39,    23,    24,    -1,    -1,    -1,    28,    29,     1,    48,
      49,    -1,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    48,    49,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    34,    35,    36,    -1,    -1,    39,    23,    24,    -1,
      -1,    -1,    28,    29,     1,    48,    49,    -1,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    48,    49,    -1,    -1,    23,    24,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,     1,    34,    35,    36,
      -1,    -1,    39,    24,    25,    -1,    -1,    28,    29,    -1,
      -1,    48,    49,    34,    35,    36,    -1,    -1,    39,    24,
      -1,    -1,    -1,    28,    29,    30,     1,    48,    49,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    48,    49,    -1,    -1,    -1,    23,    24,
       9,    10,    -1,    28,    29,    14,    -1,    16,    17,    34,
      35,    36,    21,    -1,    39,     1,    -1,    26,    27,     1,
      -1,    30,    -1,    48,    49,    -1,    -1,     9,    10,    -1,
      -1,     1,    14,    -1,    16,    17,    -1,    -1,    24,    21,
      49,    -1,    28,    29,    30,    27,    -1,     1,    34,    35,
      36,    -1,    -1,    39,    24,    -1,    -1,    -1,    28,    29,
      30,    -1,    48,    49,    34,    35,    36,    49,    -1,    39,
      24,    -1,    -1,     1,    28,    29,    30,    -1,    48,    49,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    48,    49,    24,    -1,    -1,    -1,
      28,    29,    30,    -1,    -1,     1,    34,    35,    36,    -1,
      -1,    39,    24,    -1,    -1,    -1,    28,    29,    30,    -1,
      48,    49,    34,    35,    36,    -1,    -1,    39,    24,    -1,
      -1,     1,    28,    29,    30,    -1,    48,    49,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    -1,    48,    49,    24,    25,    -1,    -1,    28,    29,
      -1,    -1,    -1,     1,    34,    35,    36,    -1,    -1,    39,
      24,    -1,    -1,    -1,    28,    29,    30,    -1,    48,    49,
      34,    35,    36,    -1,    -1,    39,    24,    25,    -1,     1,
      28,    29,    -1,    -1,    48,    49,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      48,    49,    24,    25,    -1,    -1,    28,    29,    -1,    -1,
      -1,     1,    34,    35,    36,    -1,    -1,    39,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    48,    49,    34,    35,
      36,    -1,    -1,    39,    24,    25,    -1,     1,    28,    29,
      -1,    -1,    48,    49,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    48,    49,
      24,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,     1,
      34,    35,    36,    -1,    -1,    39,    24,    -1,    -1,    -1,
      28,    29,    30,    -1,    48,    49,    34,    35,    36,    -1,
      -1,    39,    24,    -1,    -1,     1,    28,    29,    30,    -1,
      48,    49,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    48,    49,    24,    -1,
      -1,    -1,    28,    29,    30,    -1,    -1,    -1,    34,    35,
      36,    -1,    -1,    39,    24,    -1,    -1,    -1,    28,    29,
      30,     1,    48,    49,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    48,    49,
      -1,    -1,    -1,    23,    24,     9,    10,    -1,    28,    29,
      14,    -1,    16,    17,    34,    35,    36,    21,     1,    39,
      -1,    -1,    -1,    27,    -1,    -1,     9,    10,    48,    49,
      -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,     1,
      -1,    -1,    -1,    -1,    27,    49,    -1,     9,    10,    -1,
      -1,    -1,    14,    -1,    16,    17,    -1,    -1,    -1,    21,
       1,    -1,    -1,    -1,    -1,    27,    49,    -1,     9,    10,
       1,    -1,    -1,    14,    -1,    16,    17,    -1,     9,    10,
      21,    -1,    -1,    14,    -1,    16,    17,    49,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    52,     0,     1,     5,    75,    77,    49,     1,
      49,     1,    53,    54,    77,    87,     1,    26,     1,     8,
      55,    87,    53,    55,     3,     1,     3,    49,     1,    49,
      26,     1,    26,     4,     4,     1,     4,     1,    17,    21,
      49,    56,    57,    58,    59,    60,    61,    62,    87,    56,
      56,     6,     6,     6,     1,     6,    49,     1,    49,     1,
      49,     1,    38,    49,     1,     3,    64,    65,    87,    56,
       1,    30,    38,    64,    64,     7,     7,     7,     7,     1,
       7,    48,    49,     1,     6,    17,    21,    49,    78,     1,
      78,    27,    64,    30,     1,    32,    33,    48,    63,    27,
       1,    27,    22,    22,    22,    22,    22,     1,    22,    30,
      34,    35,    36,    39,    34,    35,    36,    39,    49,    49,
       1,    49,     1,    49,     1,    49,    22,     1,    22,    30,
      49,    30,    49,     1,    19,    76,    76,    76,    76,    76,
      76,    76,    48,    49,    48,    49,    48,    49,    48,    49,
      48,    49,    48,    49,    48,    49,    48,    49,    49,    62,
      66,    87,    66,    66,    63,     1,    63,    24,     1,    24,
      23,    23,    23,    23,    23,    23,     1,    23,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,     1,    31,    67,    68,    87,    23,
      23,     1,    23,    30,    30,    30,    25,    25,     1,    25,
      26,    26,    26,    26,    26,    26,    26,     1,    26,    62,
      62,    67,    26,    26,    26,     1,    26,    49,    49,    49,
       1,    49,     1,    10,    14,    16,    49,    58,    59,    60,
      61,    69,    73,    87,    69,    69,    69,    69,    69,    69,
      69,     1,    69,    56,    56,    56,    56,    56,    22,    24,
      38,     1,    22,     1,    22,     1,    22,     1,    24,    38,
      27,    69,    27,    27,    27,    27,    27,    27,    27,    27,
       1,    27,    69,    69,    69,    69,    69,     1,    12,    13,
      22,    28,    35,    37,    47,    48,    49,    63,    80,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      48,    49,    84,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    27,     1,    27,     9,     9,     9,     9,     1,
       9,    56,    17,    49,    84,     1,    17,    49,    84,    48,
      84,    40,    40,    49,     1,    23,    24,    29,    83,    85,
      86,    25,    30,    23,     1,    23,    23,     1,    23,    23,
       1,    23,    25,    30,     1,    25,     1,    30,    84,    84,
      84,    84,    49,    84,    84,     9,    24,    22,    63,    23,
      22,    24,     1,    24,     1,    22,     1,    23,    48,    49,
      48,    49,     1,    63,    11,    49,    84,    26,    30,    69,
      73,    84,     1,    11,    49,     1,    22,    34,    35,    36,
      39,    81,    48,    49,    80,    38,    30,    30,     1,    30,
      26,    26,    26,    73,     1,    49,    73,    26,    38,    38,
       1,    38,    30,    30,    30,    30,    30,     1,    30,    84,
      84,    23,    23,    84,    84,    84,    23,     1,    23,    25,
      69,    70,     1,    25,    82,    84,    82,    84,    84,    84,
      70,    70,    70,    22,    74,    84,    84,    84,    84,    27,
      27,    27,    27,    27,    27,     1,    27,    30,    25,    25,
      25,     1,    25,    27,    23,     1,    31,    79,    87,     1,
      23,    30,    27,    27,    27,    84,    69,    72,    30,    30,
      30,     1,    30,    27,    15,    84,    84,    15,    15,     1,
      15,    23,    27,    26,    79,    79,    26,    26,    26,     1,
      26,    69,    71,    71,    71,    71,    71,    71,    27,    27,
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
        case 2:

/* Line 1455 of yacc.c  */
#line 88 "SyntaxicAnalyser.y"
    {
                            creerTabCodeInt();
                        ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 92 "SyntaxicAnalyser.y"
    { 
                            check_main(); 
                            printf("************************* MACHINE CODE ***************** \n");
                            affichage();
                        ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 104 "SyntaxicAnalyser.y"
    {yyerror (" erreur! mot cle class errone dans la line : "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 105 "SyntaxicAnalyser.y"
    { yyerror (" erreur! acolade ouvarnte  manquant dans la line :  "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 106 "SyntaxicAnalyser.y"
    { yyerror (" erreur! acolade FERMANT  manquant dans la line :   "); YYABORT;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 111 "SyntaxicAnalyser.y"
    {
                            insertSymbol((yyvsp[(2) - (2)]),EXTENSION,CLASS,"IDENT",0,classID);
                            level = 0;
                        ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 115 "SyntaxicAnalyser.y"
    { yyerror ("  mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 116 "SyntaxicAnalyser.y"
    { yyerror ("erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 117 "SyntaxicAnalyser.y"
    {level = 0;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 126 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 127 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 128 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 129 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 132 "SyntaxicAnalyser.y"
    {yyerror ("valeur manquante  dans la line :"); YYABORT;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 134 "SyntaxicAnalyser.y"
    {
                            add_variable("LDC",(yyvsp[(3) - (4)]),"");
                            add_variable("STORE",(yyvsp[(1) - (4)]),"");

                        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 146 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");

                            ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 154 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 161 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 168 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 177 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");

                            ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 185 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 192 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 199 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 210 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");

                            ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 218 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 225 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 232 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 243 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");

                            ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 251 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 258 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 265 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 283 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                                
                        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 291 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 298 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                        ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 305 "SyntaxicAnalyser.y"
    { yyerror (" type non valide dans la ligne : "); YYABORT;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 306 "SyntaxicAnalyser.y"
    { yyerror ("Type:1 identifier errone dans la line :"); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 307 "SyntaxicAnalyser.y"
    { yyerror ("Type: identifier errone dans la line : "); YYABORT;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 308 "SyntaxicAnalyser.y"
    { yyerror ("Type: identifier errone dans la line : "); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 322 "SyntaxicAnalyser.y"
    { yyerror (" mot cle Public class manquant ou errone dans la line "); YYABORT;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 323 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 324 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 325 "SyntaxicAnalyser.y"
    { yyerror (" acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 326 "SyntaxicAnalyser.y"
    { yyerror (" mot cle Return manquant ou errone dans la line "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 327 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 328 "SyntaxicAnalyser.y"
    { yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 331 "SyntaxicAnalyser.y"
    { isParam = false; level = 1;;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 332 "SyntaxicAnalyser.y"
    { isParam = false; level = 1;;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 339 "SyntaxicAnalyser.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 345 "SyntaxicAnalyser.y"
    {
                        genCode("SIFAUX",line+1,"");
                    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 352 "SyntaxicAnalyser.y"
    {
                        genCode("SAUT",line+1,"");
                    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 359 "SyntaxicAnalyser.y"
    {
                        add_while_statement("TANQUEFAUX",line +1,"");
                    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 370 "SyntaxicAnalyser.y"
    { yyerror (" If acolade  manquante dans la line : "); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 371 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 372 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 373 "SyntaxicAnalyser.y"
    { yyerror (" mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 375 "SyntaxicAnalyser.y"
    { yyerror ("erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 376 "SyntaxicAnalyser.y"
    { yyerror ("erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 379 "SyntaxicAnalyser.y"
    {

                        genCode("TANQUE",line +1,"");

            ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 385 "SyntaxicAnalyser.y"
    { yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 386 "SyntaxicAnalyser.y"
    { yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 387 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 390 "SyntaxicAnalyser.y"
    { yyerror ("system.out.println errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 391 "SyntaxicAnalyser.y"
    { yyerror (" parenthese  ouvrante manquant dans la line:"); YYABORT;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 392 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 393 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 400 "SyntaxicAnalyser.y"
    {
                check_declarations((yyvsp[(1) - (4)]),ASSIGNMENT,VARIABLE,level,classID);
                add_variable("STORE",(yyvsp[(1) - (4)]),"");
            ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 404 "SyntaxicAnalyser.y"
    { yyerror (" erreur identifier errone dans la line :  "); YYABORT;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 405 "SyntaxicAnalyser.y"
    { yyerror (" AFFECTATION errone dans la line : "); YYABORT;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 406 "SyntaxicAnalyser.y"
    { yyerror ("POINT_VIRGULE  manquant dans la line : "); YYABORT;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 409 "SyntaxicAnalyser.y"
    {
                check_declarations((yyvsp[(1) - (7)]),ASSIGNMENT,VARIABLE,level,classID)
                
            ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 413 "SyntaxicAnalyser.y"
    { yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 414 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 415 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 416 "SyntaxicAnalyser.y"
    { yyerror (" AFFECTATION errone dans la line :  "); YYABORT;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 417 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE  manquant dans la line :  "); YYABORT;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 423 "SyntaxicAnalyser.y"
    { yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 424 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Public errone ou bien manquant on line :   "); YYABORT;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 425 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Static errone ou bien manquant on line : "); YYABORT;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 426 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Void errone ou bien manquant on line : "); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 427 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Main errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 428 "SyntaxicAnalyser.y"
    { yyerror ("parenthese ouvrante manquante dans la line:  "); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 429 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 430 "SyntaxicAnalyser.y"
    { yyerror ("acolade ouvrant manquant dans la line:  "); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 431 "SyntaxicAnalyser.y"
    { yyerror (" STATEMENT manquant on line :  "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 432 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 433 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 437 "SyntaxicAnalyser.y"
    { 
                            insertSymbol("main",DECLARATION,METHOD,"void",0,classID);
                            set_param((yyvsp[(4) - (4)]),strcat((yyvsp[(1) - (4)]),"[]"));   
                        ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 441 "SyntaxicAnalyser.y"
    { yyerror ("mot cle String errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 442 "SyntaxicAnalyser.y"
    { yyerror ("acolade ouvrant manquant dans la line:  "); YYABORT;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 443 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 444 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 449 "SyntaxicAnalyser.y"
    {   
                            classID +=1; 
                            check_class((yyvsp[(2) - (2)]),classID);
                        ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 453 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Class errone ou bien manquant on line :"); YYABORT;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 454 "SyntaxicAnalyser.y"
    { yyerror (" identifier errone dans la line : "); YYABORT;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 462 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 467 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 472 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 477 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 481 "SyntaxicAnalyser.y"
    { yyerror (" type non valide dans la ligne :"); YYABORT;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 482 "SyntaxicAnalyser.y"
    { yyerror (" MethodType :identifier errone dans la line : "); YYABORT;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 483 "SyntaxicAnalyser.y"
    { yyerror ("MethodType :identifier errone dans la line : "); YYABORT;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 484 "SyntaxicAnalyser.y"
    { yyerror ("MethodType: identifier errone dans la line :"); YYABORT;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 496 "SyntaxicAnalyser.y"
    { yyerror (" VIRGULE manquant dans la line : "); YYABORT;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 501 "SyntaxicAnalyser.y"
    {
                            add_variable("LDC",(yyvsp[(1) - (3)]),"");
                            add_variable("LDC",(yyvsp[(3) - (3)]),"");
                            add_variable((yyvsp[(2) - (3)]), 0 , "OPERATION_COMP"); 
                        ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 506 "SyntaxicAnalyser.y"
    {
                            add_variable("LDV",(yyvsp[(1) - (3)]),"");
                            add_variable("LDC",(yyvsp[(3) - (3)]),"");
                            add_variable((yyvsp[(2) - (3)]), 0 , "OPERATION_COMP"); 
                        ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 511 "SyntaxicAnalyser.y"
    {
                            add_variable("LDC",(yyvsp[(1) - (3)]),"");
                            add_variable("LDV",(yyvsp[(3) - (3)]),"");
                            add_variable((yyvsp[(2) - (3)]), 0 , "OPERATION_COMP"); 
                        ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 516 "SyntaxicAnalyser.y"
    {
                            add_variable("LDV",(yyvsp[(1) - (3)]),"");
                            add_variable("LDV",(yyvsp[(3) - (3)]),"");
                            add_variable((yyvsp[(2) - (3)]), 0 , "OPERATION_COMP"); 
                        ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 534 "SyntaxicAnalyser.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 539 "SyntaxicAnalyser.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 546 "SyntaxicAnalyser.y"
    { 
                            method_call_index = insertSymbol((yyvsp[(2) - (2)]),USE,METHOD,"DOT_IDENT",0,classID);
                        ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 549 "SyntaxicAnalyser.y"
    { yyerror (" POINT manquant dans la line : "); YYABORT;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 550 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line :  "); YYABORT;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 554 "SyntaxicAnalyser.y"
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 560 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1){
                                remove_param(method_call_index);
                                insert_param(method_call_index,"EXP","int");
                            }                              
                        ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 567 "SyntaxicAnalyser.y"
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 573 "SyntaxicAnalyser.y"
    {
                          
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                                insert_param(method_call_index,"EXP","bool");
                            }
                                
                        ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 583 "SyntaxicAnalyser.y"
    { yyerror (" Comparison operator manquant dans la line : "); YYABORT;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 585 "SyntaxicAnalyser.y"
    {
                            
                            if(method_call_index != -1) {
                                insert_param(method_call_index,"EXP","int[]");
                            }
      
                        ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 592 "SyntaxicAnalyser.y"
    { yyerror (" erreur tabulation ouvrante manquante dans la line : "); YYABORT;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 593 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation fermante manquante dans la line : "); YYABORT;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 595 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1) {
                                insert_param(method_call_index,"EXP","int");
                            }
                
                        ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 601 "SyntaxicAnalyser.y"
    { yyerror (" POINT manquant dans la line : "); YYABORT;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 602 "SyntaxicAnalyser.y"
    { yyerror ("LONGEUR manquant dans la line :"); YYABORT;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 604 "SyntaxicAnalyser.y"
    { yyerror ("parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 605 "SyntaxicAnalyser.y"
    { yyerror ("parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 607 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,(yyvsp[(1) - (1)]),"int");
                            add_variable("LDC",(yyvsp[(1) - (1)]),"");
                            
                        ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 614 "SyntaxicAnalyser.y"
    {
                            
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,strcat("-",(yyvsp[(2) - (2)])),"int");
                        ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 620 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,(yyvsp[(1) - (1)]),"bool");
                        ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 625 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE FERMANTE    manquante  dans la line :"); YYABORT;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 626 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  OUVRANTE manquante  dans la line :"); YYABORT;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 629 "SyntaxicAnalyser.y"
    {

                            if(method_call_index != -1 && expression_level < 1) 
                              insert_param(method_call_index,(yyvsp[(1) - (1)]),"IDENT");

                            check_declarations((yyvsp[(1) - (1)]),USE,VARIABLE,level,classID);
                            // add_variable("LDV",$1,"");

                        ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 641 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle New errone dans la line:   "); YYABORT;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 642 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle Integer errone dans la line:  "); YYABORT;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 643 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation ouvrante manquante dans la line : "); YYABORT;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 644 "SyntaxicAnalyser.y"
    { yyerror (" erreur tabulation fermante manquante dans la line :  "); YYABORT;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 646 "SyntaxicAnalyser.y"
    {
                            insertSymbol((yyvsp[(2) - (4)]),INSTANTIATION,VARIABLE,"NewID",0,classID);                          
                        ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 649 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle New errone dans la line:  "); YYABORT;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 650 "SyntaxicAnalyser.y"
    { yyerror ("  erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 651 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 652 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 654 "SyntaxicAnalyser.y"
    { yyerror ("erreur Not manquant dans la line :  "); YYABORT;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 656 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 657 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 658 "SyntaxicAnalyser.y"
    { yyerror (" valeur manquante dans la ligne :  "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 3334 "SyntaxicAnalyser.tab.c"
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
#line 664 "SyntaxicAnalyser.y"
 

    int yyerror(char const *msg) {
        
        fprintf(stderr, "%s %d\n", msg,line);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        yyparse();
    }
