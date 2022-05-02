
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
#define YYLAST   1850

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  197
/* YYNRULES -- Number of states.  */
#define YYNSTATES  547

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
       0,     0,     3,     4,     8,    11,    13,    20,    28,    35,
      42,    49,    51,    54,    57,    60,    62,    65,    67,    70,
      77,    84,    91,    95,    98,   103,   108,   113,   115,   117,
     119,   121,   128,   135,   142,   149,   156,   163,   170,   177,
     184,   191,   198,   205,   212,   219,   226,   233,   236,   239,
     242,   244,   247,   250,   253,   256,   258,   260,   263,   265,
     266,   267,   282,   296,   309,   322,   335,   348,   361,   374,
     387,   390,   392,   395,   397,   400,   403,   406,   408,   410,
     412,   414,   416,   428,   440,   452,   464,   476,   488,   500,
     501,   510,   516,   522,   528,   534,   540,   546,   552,   558,
     560,   562,   564,   566,   571,   576,   581,   586,   594,   602,
     610,   618,   626,   634,   648,   662,   676,   690,   704,   718,
     732,   746,   760,   774,   788,   802,   807,   812,   817,   822,
     827,   830,   833,   836,   839,   842,   845,   848,   851,   854,
     857,   860,   864,   868,   870,   872,   876,   880,   884,   888,
     890,   892,   894,   896,   899,   900,   903,   906,   909,   910,
     915,   916,   921,   923,   927,   932,   937,   942,   946,   950,
     954,   960,   966,   972,   974,   977,   979,   983,   987,   991,
     993,   995,  1001,  1007,  1013,  1019,  1025,  1030,  1035,  1040,
    1045,  1050,  1053,  1056,  1060,  1064,  1068,  1070
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    -1,    52,    77,    53,    -1,    54,    53,
      -1,    89,    -1,    79,    55,    26,    56,    64,    27,    -1,
      79,    55,    26,    56,    64,    75,    27,    -1,     1,    55,
      26,    56,    64,    27,    -1,    79,    55,     1,    56,    64,
      27,    -1,    79,    55,    26,    56,    64,     1,    -1,    89,
      -1,     8,    49,    -1,     1,    49,    -1,     8,     1,    -1,
      89,    -1,    57,    56,    -1,    89,    -1,    62,    30,    -1,
      62,    38,    63,    49,    63,    30,    -1,    62,    38,     1,
      49,    63,    30,    -1,    62,    38,    63,    49,     1,    30,
      -1,    62,     1,    30,    -1,    62,     1,    -1,    62,    38,
      48,    30,    -1,    62,    38,     1,    30,    -1,    49,    38,
      48,    30,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      -1,    49,    38,    48,    34,    48,    30,    -1,    49,    38,
      49,    34,    48,    30,    -1,    49,    38,    48,    34,    49,
      30,    -1,    49,    38,    49,    34,    49,    30,    -1,    49,
      38,    48,    35,    48,    30,    -1,    49,    38,    49,    35,
      48,    30,    -1,    49,    38,    48,    35,    49,    30,    -1,
      49,    38,    49,    35,    49,    30,    -1,    49,    38,    48,
      36,    48,    30,    -1,    49,    38,    49,    36,    48,    30,
      -1,    49,    38,    48,    36,    49,    30,    -1,    49,    38,
      49,    36,    49,    30,    -1,    49,    38,    48,    39,    48,
      30,    -1,    49,    38,    49,    39,    48,    30,    -1,    49,
      38,    48,    39,    49,    30,    -1,    49,    38,    49,    39,
      49,    30,    -1,    21,    49,    -1,    49,    49,    -1,    17,
      49,    -1,    49,    -1,     1,    49,    -1,    49,     1,    -1,
      21,     1,    -1,    17,     1,    -1,    32,    -1,    33,    -1,
      65,    64,    -1,    89,    -1,    -1,    -1,     3,    80,    22,
      66,    68,    23,    26,    67,    56,    71,     9,    86,    30,
      27,    -1,     3,    80,    22,    68,    23,    26,    56,    71,
      56,     9,    86,    30,    27,    -1,     1,    80,    22,    68,
      23,    26,    56,    71,     9,    86,    30,    27,    -1,     3,
       1,     1,    68,    23,    26,    56,    71,     9,    86,    30,
      27,    -1,     3,    80,    22,    68,     1,    26,    56,    71,
       9,    86,    30,    27,    -1,     3,    80,    22,    68,    23,
       1,    56,    71,     9,    86,    30,    27,    -1,     3,    80,
      22,    68,    23,    26,    56,    71,     1,    86,    30,    27,
      -1,     3,    80,    22,    68,    23,    26,    56,    71,     9,
      86,     1,    27,    -1,     3,    80,    22,    68,    23,    26,
      56,    71,     9,    86,    30,     1,    -1,    62,    69,    -1,
      89,    -1,    70,    69,    -1,    89,    -1,    31,    62,    -1,
       1,    62,    -1,    75,    71,    -1,    89,    -1,    71,    -1,
      71,    -1,    71,    -1,    71,    -1,    14,    22,    86,    23,
      26,    72,    27,    15,    26,    73,    27,    -1,     1,    22,
      86,    23,    26,    72,    27,    15,    26,    73,    27,    -1,
      14,     1,    86,    23,    26,    72,    27,    15,    26,    73,
      27,    -1,    14,    22,    86,     1,    26,    72,    27,    15,
      26,    73,    27,    -1,    14,    22,    86,    23,    26,    72,
      27,     1,    26,    73,    27,    -1,    14,    22,    86,    23,
      26,    72,    27,    15,     1,    73,    27,    -1,    14,    22,
      86,    23,    26,    72,    27,    15,    26,    73,     1,    -1,
      -1,    16,    22,    86,    23,    26,    76,    74,    27,    -1,
       1,    22,    86,    23,    75,    -1,    16,     1,    86,    23,
      75,    -1,    16,    22,    86,     1,    75,    -1,    10,    22,
      86,    23,    30,    -1,     1,    22,    86,    23,    30,    -1,
      10,     1,    86,    23,    30,    -1,    10,    22,    86,     1,
      30,    -1,    10,    22,    86,    23,     1,    -1,    58,    -1,
      59,    -1,    60,    -1,    61,    -1,    49,    38,    86,    30,
      -1,     1,    38,    86,    30,    -1,    49,     1,    86,    30,
      -1,    49,    38,    86,     1,    -1,    49,    24,    86,    25,
      38,    86,    30,    -1,     1,    24,    86,    25,    38,    86,
      30,    -1,    49,     1,    86,    25,    38,    86,    30,    -1,
      49,    24,    86,     1,    38,    86,    30,    -1,    49,    24,
      86,    25,     1,    86,    30,    -1,    49,    24,    86,    25,
      38,    86,     1,    -1,    79,    26,     3,     4,     6,     7,
      22,    78,    23,    26,    71,    27,    27,    -1,    79,     1,
       3,     4,     6,     7,    22,    78,    23,    26,    71,    27,
      27,    -1,    79,    26,     1,     4,     6,     7,    22,    78,
      23,    26,    71,    27,    27,    -1,    79,    26,     3,     1,
       6,     7,    22,    78,    23,    26,    71,    27,    27,    -1,
      79,    26,     3,     4,     1,     7,    22,    78,    23,    26,
      71,    27,    27,    -1,    79,    26,     3,     4,     6,     1,
      22,    78,    23,    26,    71,    27,    27,    -1,    79,    26,
       3,     4,     6,     7,     1,    78,    23,    26,    71,    27,
      27,    -1,    79,    26,     3,     4,     6,     7,    22,    78,
       1,    26,    71,    27,    27,    -1,    79,    26,     3,     4,
       6,     7,    22,    78,    23,     1,    71,    27,    27,    -1,
      79,    26,     3,     4,     6,     7,    22,    78,    23,    26,
       1,    27,    27,    -1,    79,    26,     3,     4,     6,     7,
      22,    78,    23,    26,    71,     1,    27,    -1,    79,    26,
       3,     4,     6,     7,    22,    78,    23,    26,    71,    27,
       1,    -1,    19,    24,    25,    49,    -1,     1,    24,    25,
      49,    -1,    19,     1,    25,    49,    -1,    19,    24,     1,
      49,    -1,    19,    24,    25,     1,    -1,     5,    49,    -1,
       1,    49,    -1,     5,     1,    -1,    21,    49,    -1,    49,
      49,    -1,    17,    49,    -1,     6,    49,    -1,     1,    49,
      -1,    49,     1,    -1,    21,     1,    -1,    17,     1,    -1,
      31,    86,    81,    -1,     1,    86,    81,    -1,    89,    -1,
      28,    -1,    48,    40,    48,    -1,    49,    40,    48,    -1,
      48,    40,    49,    -1,    49,    40,    49,    -1,    34,    -1,
      35,    -1,    36,    -1,    39,    -1,    86,    81,    -1,    -1,
      29,    49,    -1,     1,    49,    -1,    29,     1,    -1,    -1,
      86,    87,    83,    86,    -1,    -1,    86,    88,    82,    86,
      -1,    82,    -1,    86,     1,    86,    -1,    86,    24,    86,
      25,    -1,    86,     1,    86,    25,    -1,    86,    24,    86,
       1,    -1,    86,    29,    11,    -1,    86,     1,    11,    -1,
      86,    29,     1,    -1,    86,    85,    22,    84,    23,    -1,
      86,    85,     1,    84,    23,    -1,    86,    85,    22,    84,
       1,    -1,    48,    -1,    35,    48,    -1,    47,    -1,    63,
      49,    63,    -1,    63,    49,     1,    -1,     1,    49,    63,
      -1,    49,    -1,    12,    -1,    13,    17,    24,    86,    25,
      -1,     1,    17,    24,    86,    25,    -1,    13,     1,    24,
      86,    25,    -1,    13,    17,     1,    86,    25,    -1,    13,
      17,    24,    86,     1,    -1,    13,    49,    22,    23,    -1,
       1,    49,    22,    23,    -1,    13,     1,    22,    23,    -1,
      13,    49,     1,    23,    -1,    13,    49,    22,     1,    -1,
      37,    86,    -1,     1,    86,    -1,    22,    86,    23,    -1,
       1,    86,    23,    -1,    22,    86,     1,    -1,     1,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    88,    99,   100,   103,   104,   105,   106,
     107,   108,   111,   116,   117,   118,   121,   122,   125,   126,
     127,   128,   129,   130,   132,   133,   134,   140,   141,   142,
     143,   146,   154,   161,   168,   177,   185,   192,   199,   210,
     218,   225,   232,   243,   251,   258,   265,   283,   291,   298,
     305,   306,   307,   308,   309,   313,   314,   318,   319,   321,
     322,   321,   331,   332,   333,   334,   335,   336,   337,   338,
     341,   342,   345,   346,   348,   349,   351,   352,   354,   361,
     368,   375,   377,   379,   381,   382,   383,   385,   386,   389,
     388,   395,   396,   397,   399,   400,   401,   402,   403,   405,
     406,   407,   408,   409,   414,   415,   416,   418,   423,   424,
     425,   426,   427,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   446,   451,   452,   453,   454,
     458,   463,   464,   471,   476,   481,   487,   492,   493,   494,
     495,   506,   507,   508,   511,   512,   517,   522,   527,   538,
     539,   540,   541,   544,   550,   556,   563,   564,   568,   567,
     581,   580,   595,   597,   598,   606,   607,   608,   615,   616,
     617,   619,   620,   621,   628,   634,   639,   640,   641,   643,
     654,   655,   656,   657,   658,   659,   660,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   676
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
  "MethodDeclaration", "$@2", "$@3", "TIVTIRepeat", "VTIRepeat", "VT",
  "STATEMENTRepeat", "IFSTATEMENT", "ELSESTATEMENT", "WHILETRUESTATEMENT",
  "STATEMENT", "$@4", "MainClass", "MainMethodParam", "ClassScope",
  "MethodType", "SectionC_E", "LogicOperator", "MathOperator",
  "SectionE_SCE", "UseFunction", "Expression", "$@5", "$@6", "epsilon", 0
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
      54,    54,    55,    55,    55,    55,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    58,    59,    59,    59,    59,    60,
      60,    60,    60,    61,    61,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    64,    64,    66,
      67,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      68,    68,    69,    69,    70,    70,    71,    71,    72,    73,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    76,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    78,
      79,    79,    79,    80,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    82,    82,    82,    82,    82,    83,
      83,    83,    83,    84,    84,    85,    85,    85,    87,    86,
      88,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     2,     1,     6,     7,     6,     6,
       6,     1,     2,     2,     2,     1,     2,     1,     2,     6,
       6,     6,     3,     2,     4,     4,     4,     1,     1,     1,
       1,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     2,     2,     2,
       1,     2,     2,     2,     2,     1,     1,     2,     1,     0,
       0,    14,    13,    12,    12,    12,    12,    12,    12,    12,
       2,     1,     2,     1,     2,     2,     2,     1,     1,     1,
       1,     1,    11,    11,    11,    11,    11,    11,    11,     0,
       8,     5,     5,     5,     5,     5,     5,     5,     5,     1,
       1,     1,     1,     4,     4,     4,     4,     7,     7,     7,
       7,     7,     7,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    13,    13,     4,     4,     4,     4,     4,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     1,     1,     3,     3,     3,     3,     1,
       1,     1,     1,     2,     0,     2,     2,     2,     0,     4,
       0,     4,     1,     3,     4,     4,     4,     3,     3,     3,
       5,     5,     5,     1,     2,     1,     3,     3,     3,     1,
       1,     5,     5,     5,     5,     5,     4,     4,     4,     4,
       4,     2,     2,     3,     3,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,   131,   132,
     130,     0,     3,     0,     0,    11,     0,     0,     0,     0,
       0,    15,     4,     0,     0,     0,     0,    13,    14,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,    17,     0,
       0,     0,     0,     0,     0,     0,    51,    54,    49,    53,
      47,    52,     0,    48,     0,     0,     0,     0,    58,    16,
      23,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,    57,    22,     0,    55,    56,     0,     0,     9,
      10,     0,     0,     0,     6,     0,    99,   100,   101,   102,
      81,     0,    77,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,   137,
     136,   140,   135,   139,   133,   138,   134,     0,     0,     0,
      25,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,     0,     0,     0,     0,   180,     0,     0,   144,
       0,     0,   175,   173,   179,     0,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   173,   179,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    33,    35,    37,    39,    41,    43,    45,
      32,    34,    36,    38,    40,    42,    44,    46,     0,     0,
      70,     0,    73,     0,     0,     0,     0,     0,    20,    21,
      19,     0,   179,     0,     0,     0,     0,     0,   174,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    74,    72,     0,     0,     0,     0,     0,     0,     0,
       0,   178,   194,     0,     0,     0,     0,     0,     0,     0,
     193,   145,   147,   146,   148,   177,   176,   168,   179,     0,
       0,    95,     0,     0,   169,   167,   155,     0,     0,   149,
     150,   151,   152,     0,     0,     0,     0,     0,    96,    97,
      98,    94,     0,     0,     0,     0,     0,     0,     0,    89,
       0,     0,     0,     0,   126,   127,   128,   129,   125,    81,
      81,    81,    81,    81,    81,    81,    81,     0,     0,     0,
       0,    60,     0,     0,     0,     0,   187,   188,     0,     0,
       0,   189,   190,   186,   165,    81,     0,     0,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    81,     0,    81,    81,
       0,   182,   183,   184,     0,   181,     0,   171,     0,     0,
     153,   143,   172,   170,   108,     0,     0,     0,     0,    81,
       0,   109,   110,   111,     0,   107,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,    81,     0,     0,
     179,     0,     0,     0,     0,   142,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,     0,     0,     0,    63,    64,
       0,    65,    66,    67,    68,    69,     0,    83,    84,    85,
      86,    87,    88,    82,     0,    62,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    12,    13,    20,    41,    42,   106,   107,
     108,   109,    47,   205,    66,    67,   190,   437,   187,   250,
     251,   521,   406,   522,   460,   159,   419,     6,   162,    14,
      88,   450,   206,   353,   409,   277,   339,   278,   279,   112
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -126
static const yytype_int16 yypact[] =
{
    -126,    48,   111,  -126,   -39,    28,   505,   220,  -126,  -126,
    -126,    41,  -126,   505,   404,   213,   125,   263,   170,    86,
     211,  -126,  -126,   250,   333,   350,   407,  -126,  -126,  -126,
     156,   156,  1725,   354,   388,   396,   300,   369,   157,   165,
     219,     3,  1713,  -126,  -126,  -126,  -126,   304,  -126,     3,
      65,   420,   458,   476,   496,    14,  -126,  -126,  -126,  -126,
    -126,  -126,     7,  -126,    68,   418,   445,    65,  -126,  -126,
     479,  -126,   323,   490,   379,   498,   511,   526,   534,   542,
       1,   706,   539,   523,   531,   174,   178,   207,   561,   209,
     563,  -126,  -126,  -126,   245,  -126,  -126,   571,   544,  -126,
     432,   452,   462,   463,  -126,   363,  -126,  -126,  -126,  -126,
    -126,   459,  -126,   206,   206,   206,   206,   206,   206,   206,
    -126,   119,   431,   519,   599,   613,   618,   628,   632,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,    10,    10,   292,
    -126,   658,  -126,   108,   974,   974,   974,   974,   974,   974,
     974,   974,   974,   974,   974,  1012,   432,  -126,  -126,   238,
     585,   110,   589,   591,   610,   615,   620,   626,   329,   592,
     611,   621,   623,   642,   652,   667,   672,   677,   685,   702,
     703,   705,   720,   723,   727,   129,    90,   737,  -126,   739,
      10,   380,   734,   747,   748,    71,  -126,    33,   974,  -126,
     680,   974,  -126,   741,   744,   730,  -126,  1069,  1086,  1108,
    1125,  1154,  1171,  1200,  1217,  1246,  1028,  1262,   773,   787,
    1278,   760,   763,    97,   764,   766,   770,   771,   772,   774,
     779,   356,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,   153,   153,
    -126,    90,  -126,   780,   790,   776,   792,   360,  -126,  -126,
    -126,   800,   646,   664,   525,   239,   510,  1308,  -126,   695,
     656,   698,   210,   911,   155,   974,    21,   514,   568,   393,
     794,  -126,   795,   726,   223,   802,   754,   811,   238,   549,
     817,   798,  -126,   782,    59,   578,  -126,   799,   807,   808,
     221,   918,   918,   918,   918,   918,   918,   918,   918,  1165,
    -126,  -126,  -126,   700,   700,   821,   700,   700,   700,   974,
     837,  -126,  -126,   838,   974,   974,   974,   839,   424,   114,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,    36,   810,
     918,  -126,  1744,  1324,   515,  -126,  -126,   941,   941,  -126,
    -126,  -126,  -126,   974,   741,   744,   974,   974,  -126,  -126,
    -126,  -126,   918,   918,   918,  1763,   506,   635,  1782,  -126,
     974,   974,   974,   974,  -126,  -126,  -126,  -126,  -126,   836,
     840,   847,   852,   854,   855,   856,   857,   684,  1211,   636,
     636,  -126,   636,   636,   877,  1340,  -126,  -126,  1366,  1382,
    1398,  -126,  -126,  -126,  -126,   858,   861,   249,  -126,   845,
     409,   428,   841,   872,  1424,   865,   878,   882,   974,   918,
    1440,  1456,  1482,  1498,   883,   886,   890,   891,   900,   902,
     910,   914,   920,   922,   128,   946,   947,   700,   948,   952,
    1801,  -126,  -126,  -126,   465,  -126,   884,  -126,   911,   974,
    -126,  -126,  -126,  -126,  -126,   950,   951,   435,  1528,   935,
     944,  -126,  -126,  -126,   607,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,   974,   974,
     636,   974,   974,  1053,   974,   959,   953,   969,   409,   954,
     955,   956,   391,   349,  -126,  1544,  1560,   963,  1586,  1602,
     313,  1618,  1644,   974,   918,  -126,  -126,   918,   918,   918,
     918,   918,   957,   958,   974,   964,   968,   972,   903,   976,
    1660,   185,   983,   985,   987,   988,   989,   199,  -126,  -126,
    1676,  -126,  -126,  -126,  -126,  -126,   992,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,   993,  -126,  -126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,   970,  -126,  1013,    31,  -126,   -14,     9,
      15,    22,  -125,   -63,   502,  -126,  -126,  -126,  -119,   750,
    -126,   -73,   268,   261,  -126,   -71,  -126,  -126,   736,  1024,
     965,   264,   749,  -126,   683,  -126,    43,  -126,  -126,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -198
static const yytype_int16 yytable[] =
{
      15,   110,   118,   111,    64,    21,    65,    15,    21,    98,
       8,    37,   186,   186,   186,    79,    43,    43,    43,   189,
     191,    80,   344,   119,    48,    48,    48,    38,    43,     9,
    -197,    39,   345,  -197,   264,    68,    48,  -156,   158,    44,
      44,    44,    18,    68,    68,    45,    45,    45,     3,    19,
     265,    44,    46,    46,    46,    81,    82,    45,  -156,   185,
     372,    68,    49,    50,    46,   186,    64,  -197,    65,    83,
     346,   255,   195,    69,    84,  -197,   271,    10,   192,  -197,
     194,  -197,   266,   196,   197,    85,   158,    28,   261,    86,
       8,   248,  -197,   198,  -196,  -196,  -196,   373,   299,   199,
    -196,  -196,  -196,    95,    96,  -196,   200,  -196,   201,   193,
    -196,   222,     4,  -197,  -197,   195,     5,    87,   202,   203,
     262,   249,   300,   310,   311,   337,   196,   197,    24,   476,
      61,   188,   188,   188,   223,    29,   198,  -195,  -195,  -195,
      95,    96,   199,  -195,  -195,  -195,    95,    96,  -195,   200,
    -195,   201,   -50,  -195,    37,   477,   156,    37,    57,  -197,
     -50,   202,   203,   338,  -197,   101,    59,   169,   170,   102,
      38,   103,  -197,    38,    39,   131,  -197,    39,    63,   133,
     252,   340,  -197,  -197,   188,   341,   -79,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   220,   321,
     542,   110,   185,   342,   105,    40,    58,   160,   135,   336,
     138,   335,   -79,    -5,    60,   110,   110,   365,   368,    27,
      61,    16,   377,   132,   360,   161,   543,   134,   379,   380,
     381,   382,   383,   384,   385,   386,   388,    30,   263,   156,
     325,   267,    95,    96,   269,   252,    17,  -197,   101,   -50,
     195,    31,   102,   361,   103,  -197,   136,    62,   129,  -197,
     337,   196,   197,   326,    25,  -197,    26,   405,    63,   158,
     378,   198,  -166,  -166,  -166,   140,    32,   199,  -166,  -166,
    -166,    95,    96,  -166,   200,  -166,   201,   105,  -166,   405,
     405,   405,   158,    37,   141,   158,   202,   203,   338,    43,
      43,    54,    43,    43,    43,    70,    55,    48,    48,    38,
      48,    48,    48,    39,   -51,   -59,   435,   436,   343,   438,
     439,   440,    44,    44,    94,    44,    44,    44,    45,    45,
     230,    45,    45,    45,    71,    46,    46,    33,    46,    46,
      46,   185,    72,   -51,   389,   390,   459,   392,   393,   394,
     156,   -51,   231,   271,    34,    95,    96,   308,  -197,   101,
      51,   317,   395,   102,   153,   103,  -197,   398,   399,   400,
    -197,    97,  -193,  -193,  -193,   340,  -197,  -193,  -193,   341,
     100,   256,   309,  -193,  -193,  -193,   318,   154,  -193,   101,
     410,   410,   510,   102,    52,   103,   412,  -193,   105,   413,
     414,   155,    53,   257,   451,    18,   104,   497,    35,   263,
     448,    36,    19,   420,   421,   422,   423,   511,    56,    89,
     110,   199,   342,    43,    84,   402,    43,    75,   105,   452,
    -197,    48,  -197,   275,    48,    85,   491,  -160,   276,    86,
     449,   354,   355,  -158,  -158,  -158,    44,   403,  -158,    44,
     492,   453,    45,   147,   144,    45,   145,  -160,  -160,    46,
     156,   458,    46,   149,   151,    76,   195,    87,   480,   101,
     146,   485,    91,   102,   148,   103,   337,   196,   197,   171,
     172,   451,   451,    77,   150,   152,   157,   198,  -185,  -185,
    -185,   487,   488,   199,  -185,  -185,  -185,    95,    96,  -185,
     200,  -185,   201,    78,  -185,  -197,    11,   195,   105,    93,
       5,   327,   202,   203,   338,   347,  -157,    99,   196,   197,
     113,   495,   496,   261,   498,   499,   501,   502,   418,  -196,
     145,  -196,   328,   114,   199,  -196,   348,  -157,    95,    96,
    -196,   200,  -196,   201,   146,  -196,   520,   323,   115,   324,
     366,    73,    74,   202,   203,   262,   116,   530,  -197,   101,
     337,   196,   197,   102,   117,   103,  -197,   173,   174,    92,
    -197,   198,   129,   125,   126,   127,  -197,   199,   128,   195,
     130,    95,    96,   137,   200,   139,   201,  -106,  -106,   337,
     196,   197,  -106,   143,  -106,  -106,   202,   203,   367,  -106,
     198,   142,   349,   350,   351,  -106,   199,   352,   195,   221,
      95,    96,   224,   200,   225,   201,  -112,  -112,   337,   196,
     197,  -112,   232,  -112,  -112,   202,   203,   338,  -112,   198,
     415,   416,   417,   226,  -112,   199,   153,   156,   227,    95,
      96,   233,   200,   228,   201,  -197,   101,   175,   176,   229,
     102,   234,   103,   235,   202,   203,   338,  -156,  -179,   154,
    -179,   177,   178,  -179,  -179,   273,   179,   180,   320,  -179,
    -179,  -179,   236,   155,  -179,   271,   181,   182,    95,    96,
     183,   184,   237,  -179,  -179,   105,   271,   322,   275,  -192,
      95,    96,  -160,   276,  -192,  -192,   273,   238,  -158,  -158,
    -158,    37,   239,  -158,   331,   332,   144,   240,   145,  -197,
    -197,   432,  -160,  -160,  -197,   241,  -197,    38,  -191,   275,
    -191,    39,   146,  -160,   276,  -191,  -191,   195,   268,  -158,
    -158,  -158,   242,   243,  -158,   244,   120,   337,   196,   197,
     121,   122,   123,  -160,  -160,   124,   333,   334,   198,    40,
     245,   505,   506,   246,   199,   195,   359,   247,    95,    96,
     253,   200,   254,   201,   258,   337,   196,   197,   523,   524,
     525,   526,   527,   202,   203,   338,   198,   259,   260,   272,
     363,   270,   199,   195,   271,   297,    95,    96,   298,   200,
     301,   201,   302,   337,   196,   197,   303,   304,   305,   315,
     306,   202,   203,   338,   198,   307,   313,   121,   122,   123,
     199,   273,   124,   270,    95,    96,   314,   200,   316,   201,
     371,   125,   126,   127,   319,   358,   128,   271,   362,   202,
     203,   338,   357,  -163,   275,   404,   370,   364,  -160,   276,
    -163,  -163,   273,   369,  -158,  -158,  -158,   391,   374,  -158,
     163,   164,   165,   166,   167,   168,   375,   376,  -160,  -160,
     396,   397,   401,   424,  -159,   275,  -159,   425,   447,  -159,
     276,  -159,  -159,   273,   426,  -158,  -158,  -158,   156,   427,
    -158,   428,   429,   430,   431,   -78,  -197,   101,   446,  -159,
    -159,   102,   455,   103,  -197,  -161,   275,  -161,  -197,   486,
    -160,   276,  -161,  -161,   195,   456,  -158,  -158,  -158,   457,
     466,  -158,   195,   467,   337,   196,   197,   468,   469,   156,
    -160,  -160,   337,   196,   197,   198,   105,   470,   101,   471,
     534,   199,   102,   198,   103,    95,    96,   472,   200,   199,
     201,   473,   195,    95,    96,  -197,   200,   474,   201,   475,
     202,   203,   338,   196,   197,   478,   479,   481,   202,   203,
     338,   482,   -80,   198,  -154,   489,   490,   105,   503,   199,
     448,   494,   514,    95,    96,   195,   200,   535,   201,   504,
     507,   508,   509,    22,   528,   529,   196,   197,   202,   203,
     204,   531,  -163,   275,   404,   532,   198,  -160,   276,   533,
     449,   312,   199,  -158,  -158,  -158,    95,    96,  -158,   200,
     537,   201,   538,   195,   539,   540,   541,  -160,  -160,   545,
     546,   202,   203,   204,   196,   197,     7,    23,   356,   273,
      90,   411,     0,     0,   198,     0,     0,     0,     0,     0,
     199,     0,     0,     0,    95,    96,     0,   200,     0,   201,
       0,     0,   275,   291,   195,     0,  -160,   276,   292,   202,
     218,   219,  -158,  -158,  -158,   196,   197,  -158,     0,     0,
     273,     0,     0,     0,     0,   198,  -160,  -160,     0,     0,
       0,   199,     0,     0,     0,    95,    96,   273,   200,     0,
     201,     0,   274,   275,     0,     0,     0,  -160,   276,     0,
     202,   203,   500,  -158,  -158,  -158,     0,     0,  -158,   273,
     275,   280,     0,     0,  -160,   276,     0,  -160,  -160,     0,
    -158,  -158,  -158,     0,     0,  -158,   273,     0,     0,     0,
       0,     0,   275,     0,  -160,  -160,  -160,   276,   281,     0,
       0,     0,  -158,  -158,  -158,     0,     0,  -158,   282,   275,
       0,     0,     0,  -160,   276,   283,  -160,  -160,     0,  -158,
    -158,  -158,     0,     0,  -158,     0,   387,     0,     0,     0,
       0,     0,   273,  -160,  -160,   101,     0,   284,   275,   102,
       0,   103,  -160,   276,     0,     0,     0,     0,  -158,  -158,
    -158,     0,  -197,  -158,   285,   275,     0,     0,     0,  -160,
     276,   286,  -160,  -160,     0,  -158,  -158,  -158,     0,     0,
    -158,     0,   433,     0,   105,     0,     0,     0,   273,  -160,
    -160,   -81,     0,   287,   275,   -81,     0,   -81,  -160,   276,
       0,     0,     0,     0,  -158,  -158,  -158,     0,   434,  -158,
     288,   275,     0,     0,     0,  -160,   276,   289,  -160,  -160,
       0,  -158,  -158,  -158,     0,     0,  -158,     0,     0,     0,
     -81,     0,     0,   293,     0,  -160,  -160,     0,     0,   290,
     275,     0,     0,     0,  -160,   276,     0,     0,     0,   295,
    -158,  -158,  -158,     0,     0,  -158,   275,   294,     0,     0,
    -160,   276,     0,     0,  -160,  -160,  -158,  -158,  -158,     0,
       0,  -158,   275,     0,     0,     0,  -160,   276,   296,   329,
    -160,  -160,  -158,  -158,  -158,     0,     0,  -158,     0,     0,
       0,     0,     0,     0,     0,   407,  -160,  -160,     0,     0,
       0,   330,   275,     0,     0,     0,  -160,   276,     0,     0,
       0,   273,  -158,  -158,  -158,     0,     0,  -158,   275,   408,
       0,     0,  -160,   276,     0,     0,  -160,  -160,  -158,  -158,
    -158,     0,     0,  -158,   275,   441,     0,   273,  -160,   276,
       0,     0,  -160,  -160,  -158,  -158,  -158,     0,     0,  -158,
       0,     0,     0,   273,     0,     0,     0,     0,  -160,  -160,
     275,   442,     0,     0,  -160,   276,     0,     0,     0,   444,
    -158,  -158,  -158,     0,     0,  -158,   275,   443,     0,     0,
    -160,   276,     0,     0,  -160,  -160,  -158,  -158,  -158,     0,
       0,  -158,   275,   445,     0,   273,  -160,   276,     0,     0,
    -160,  -160,  -158,  -158,  -158,     0,     0,  -158,     0,     0,
       0,   273,     0,     0,     0,     0,  -160,  -160,   275,     0,
       0,     0,  -160,   276,   454,     0,     0,   273,  -158,  -158,
    -158,     0,     0,  -158,   275,     0,     0,     0,  -160,   276,
     461,     0,  -160,  -160,  -158,  -158,  -158,     0,     0,  -158,
     275,     0,     0,   273,  -160,   276,   462,     0,  -160,  -160,
    -158,  -158,  -158,     0,     0,  -158,     0,     0,     0,   464,
       0,     0,     0,     0,  -160,  -160,   275,     0,     0,     0,
    -160,   276,   463,     0,     0,     0,  -158,  -158,  -158,     0,
       0,  -158,   275,     0,     0,     0,  -160,   276,   465,   329,
    -160,  -160,  -158,  -158,  -158,     0,     0,  -158,     0,     0,
       0,     0,     0,     0,     0,   273,  -160,  -160,     0,     0,
       0,   493,   275,     0,     0,     0,  -160,   276,     0,     0,
       0,   273,  -158,  -158,  -158,     0,     0,  -158,   275,     0,
       0,     0,  -160,   276,   512,     0,  -160,  -160,  -158,  -158,
    -158,     0,     0,  -158,   275,     0,     0,   273,  -160,   276,
     513,     0,  -160,  -160,  -158,  -158,  -158,     0,     0,  -158,
       0,     0,     0,   273,     0,     0,     0,     0,  -160,  -160,
     275,     0,     0,     0,  -160,   276,   515,     0,     0,   273,
    -158,  -158,  -158,     0,     0,  -158,   275,     0,     0,     0,
    -160,   276,   516,     0,  -160,  -160,  -158,  -158,  -158,     0,
       0,  -158,   275,     0,     0,   518,  -160,   276,   517,     0,
    -160,  -160,  -158,  -158,  -158,     0,     0,  -158,     0,     0,
       0,   273,     0,     0,     0,     0,  -160,  -160,   275,     0,
       0,     0,  -160,   276,   519,     0,     0,   273,  -158,  -158,
    -158,     0,     0,  -158,   275,     0,     0,     0,  -160,   276,
     536,     0,  -160,  -160,  -158,  -158,  -158,     0,     0,  -158,
     275,     0,     0,     0,  -160,   276,   544,     0,  -160,  -160,
    -158,  -158,  -158,     0,    37,  -158,  -197,     0,     0,     0,
       0,     0,  -197,  -197,  -160,  -160,    37,  -197,  -197,  -197,
      38,     0,     0,     0,    39,  -197,     0,     0,     0,  -197,
    -197,  -197,    38,     0,     0,   156,    39,     0,     0,     0,
       0,     0,  -197,   -91,   101,     0,     0,     0,   102,     0,
     103,   -91,    40,     0,   156,   -91,     0,     0,     0,     0,
       0,   -91,   -92,   101,    40,     0,     0,   102,     0,   103,
     -92,     0,     0,   156,   -92,     0,     0,     0,     0,     0,
     -92,   -93,   101,   105,     0,     0,   102,     0,   103,   -93,
       0,     0,   483,   -93,     0,     0,     0,     0,     0,   -93,
     484,   -81,   105,     0,     0,   -81,     0,   -81,    38,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40
};

static const yytype_int16 yycheck[] =
{
       6,    74,     1,    74,     1,    11,     3,    13,    14,    72,
      49,     1,   137,   138,   139,     1,    30,    31,    32,   138,
     139,     7,     1,    22,    30,    31,    32,    17,    42,     1,
      27,    21,    11,    23,     1,    41,    42,     1,   111,    30,
      31,    32,     1,    49,    50,    30,    31,    32,     0,     8,
      17,    42,    30,    31,    32,    48,    49,    42,    22,    49,
       1,    67,    31,    32,    42,   190,     1,    26,     3,     1,
      49,   190,     1,    42,     6,    10,    40,    49,   141,    14,
     143,    16,    49,    12,    13,    17,   159,     1,    17,    21,
      49,     1,    27,    22,    23,    24,    25,    38,     1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,     1,
      39,     1,     1,    23,    49,     1,     5,    49,    47,    48,
      49,    31,    25,   248,   249,    11,    12,    13,     3,     1,
       1,   137,   138,   139,    24,    49,    22,    23,    24,    25,
      32,    33,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    23,    39,     1,    27,     1,     1,     1,     3,
      31,    47,    48,    49,     9,    10,     1,    48,    49,    14,
      17,    16,    17,    17,    21,     1,    21,    21,    49,     1,
     186,    26,    27,    27,   190,    30,     1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   262,
       1,   274,    49,   274,    49,    49,    49,     1,     1,   272,
       1,     1,    27,     0,    49,   288,   289,   288,   289,    49,
       1,     1,     1,    49,     1,    19,    27,    49,   301,   302,
     303,   304,   305,   306,   307,   308,   309,    26,   195,     1,
       1,   198,    32,    33,   201,   251,    26,     9,    10,    30,
       1,     1,    14,    30,    16,    17,    49,    38,    49,    21,
      11,    12,    13,    24,     1,    27,     3,   340,    49,   342,
      49,    22,    23,    24,    25,    30,    26,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    49,    39,   362,
     363,   364,   365,     1,    49,   368,    47,    48,    49,   313,
     314,     1,   316,   317,   318,     1,     6,   313,   314,    17,
     316,   317,   318,    21,     1,    23,   389,   390,   275,   392,
     393,   394,   313,   314,     1,   316,   317,   318,   313,   314,
       1,   316,   317,   318,    30,   313,   314,     4,   316,   317,
     318,    49,    38,    30,   313,   314,   419,   316,   317,   318,
       1,    38,    23,    40,     4,    32,    33,     1,     9,    10,
       6,     1,   319,    14,     1,    16,    17,   324,   325,   326,
      21,    48,    23,    24,    25,    26,    27,    28,    29,    30,
       1,     1,    26,    34,    35,    36,    26,    24,    39,    10,
     347,   348,     1,    14,     6,    16,   353,    48,    49,   356,
     357,    38,     6,    23,   410,     1,    27,   480,     1,   366,
       1,     4,     8,   370,   371,   372,   373,    26,    49,     1,
     493,    28,   493,   437,     6,     1,   440,     7,    49,     1,
      26,   437,    23,    24,   440,    17,     1,    28,    29,    21,
      31,    48,    49,    34,    35,    36,   437,    23,    39,   440,
      15,    23,   437,     1,    22,   440,    24,    48,    49,   437,
       1,   418,   440,     1,     1,     7,     1,    49,   437,    10,
      38,   440,    27,    14,    22,    16,    11,    12,    13,    48,
      49,   487,   488,     7,    22,    22,    27,    22,    23,    24,
      25,   448,   449,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,     7,    39,     0,     1,     1,    49,    30,
       5,     1,    47,    48,    49,     1,     1,    27,    12,    13,
      22,   478,   479,    17,   481,   482,   483,   484,    22,    23,
      24,    25,    22,    22,    28,    29,    22,    22,    32,    33,
      34,    35,    36,    37,    38,    39,   503,    22,    22,    24,
       1,    49,    50,    47,    48,    49,    22,   514,     9,    10,
      11,    12,    13,    14,    22,    16,    17,    48,    49,    67,
      21,    22,    49,    34,    35,    36,    27,    28,    39,     1,
      49,    32,    33,    22,    35,    22,    37,     9,    10,    11,
      12,    13,    14,    49,    16,    17,    47,    48,    49,    21,
      22,    30,    34,    35,    36,    27,    28,    39,     1,    24,
      32,    33,    23,    35,    23,    37,     9,    10,    11,    12,
      13,    14,    30,    16,    17,    47,    48,    49,    21,    22,
     362,   363,   364,    23,    27,    28,     1,     1,    23,    32,
      33,    30,    35,    23,    37,     9,    10,    48,    49,    23,
      14,    30,    16,    30,    47,    48,    49,    22,    23,    24,
      25,    48,    49,    28,    29,     1,    48,    49,    22,    34,
      35,    36,    30,    38,    39,    40,    48,    49,    32,    33,
      48,    49,    30,    48,    49,    49,    40,    23,    24,    25,
      32,    33,    28,    29,    30,    31,     1,    30,    34,    35,
      36,     1,    30,    39,    48,    49,    22,    30,    24,     9,
      10,    27,    48,    49,    14,    30,    16,    17,    23,    24,
      25,    21,    38,    28,    29,    30,    31,     1,    48,    34,
      35,    36,    30,    30,    39,    30,    30,    11,    12,    13,
      34,    35,    36,    48,    49,    39,    48,    49,    22,    49,
      30,   487,   488,    30,    28,     1,    30,    30,    32,    33,
      23,    35,    23,    37,    30,    11,    12,    13,   507,   508,
     509,   510,   511,    47,    48,    49,    22,    30,    30,    49,
      26,    40,    28,     1,    40,    25,    32,    33,    25,    35,
      26,    37,    26,    11,    12,    13,    26,    26,    26,    23,
      26,    47,    48,    49,    22,    26,    26,    34,    35,    36,
      28,     1,    39,    40,    32,    33,    26,    35,    26,    37,
      38,    34,    35,    36,    24,    30,    39,    40,    26,    47,
      48,    49,    38,    23,    24,    25,    38,    26,    28,    29,
      30,    31,     1,    26,    34,    35,    36,    26,    49,    39,
     114,   115,   116,   117,   118,   119,    49,    49,    48,    49,
      23,    23,    23,    27,    23,    24,    25,    27,    23,    28,
      29,    30,    31,     1,    27,    34,    35,    36,     1,    27,
      39,    27,    27,    27,    27,    27,     9,    10,    27,    48,
      49,    14,    27,    16,    17,    23,    24,    25,    21,    15,
      28,    29,    30,    31,     1,    27,    34,    35,    36,    27,
      27,    39,     1,    27,    11,    12,    13,    27,    27,     1,
      48,    49,    11,    12,    13,    22,    49,    27,    10,    27,
      27,    28,    14,    22,    16,    32,    33,    27,    35,    28,
      37,    27,     1,    32,    33,    27,    35,    27,    37,    27,
      47,    48,    49,    12,    13,     9,     9,     9,    47,    48,
      49,     9,    27,    22,    23,    15,    15,    49,     9,    28,
       1,    27,     9,    32,    33,     1,    35,     1,    37,    26,
      26,    26,    26,    13,    27,    27,    12,    13,    47,    48,
      49,    27,    23,    24,    25,    27,    22,    28,    29,    27,
      31,   251,    28,    34,    35,    36,    32,    33,    39,    35,
      27,    37,    27,     1,    27,    27,    27,    48,    49,    27,
      27,    47,    48,    49,    12,    13,     2,    14,   279,     1,
      65,   348,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    -1,    35,    -1,    37,
      -1,    -1,    24,    25,     1,    -1,    28,    29,    30,    47,
      48,    49,    34,    35,    36,    12,    13,    39,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    22,    48,    49,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,     1,    35,    -1,
      37,    -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,
      47,    48,    49,    34,    35,    36,    -1,    -1,    39,     1,
      24,    25,    -1,    -1,    28,    29,    -1,    48,    49,    -1,
      34,    35,    36,    -1,    -1,    39,     1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    48,    49,    28,    29,    30,    -1,
      -1,    -1,    34,    35,    36,    -1,    -1,    39,    23,    24,
      -1,    -1,    -1,    28,    29,     1,    48,    49,    -1,    34,
      35,    36,    -1,    -1,    39,    -1,     1,    -1,    -1,    -1,
      -1,    -1,     1,    48,    49,    10,    -1,    23,    24,    14,
      -1,    16,    28,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    -1,    27,    39,    23,    24,    -1,    -1,    -1,    28,
      29,     1,    48,    49,    -1,    34,    35,    36,    -1,    -1,
      39,    -1,     1,    -1,    49,    -1,    -1,    -1,     1,    48,
      49,    10,    -1,    23,    24,    14,    -1,    16,    28,    29,
      -1,    -1,    -1,    -1,    34,    35,    36,    -1,    27,    39,
      23,    24,    -1,    -1,    -1,    28,    29,     1,    48,    49,
      -1,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      49,    -1,    -1,     1,    -1,    48,    49,    -1,    -1,    23,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,     1,
      34,    35,    36,    -1,    -1,    39,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    48,    49,    34,    35,    36,    -1,
      -1,    39,    24,    -1,    -1,    -1,    28,    29,    30,     1,
      48,    49,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    48,    49,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,     1,    34,    35,    36,    -1,    -1,    39,    24,    25,
      -1,    -1,    28,    29,    -1,    -1,    48,    49,    34,    35,
      36,    -1,    -1,    39,    24,    25,    -1,     1,    28,    29,
      -1,    -1,    48,    49,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    48,    49,
      24,    25,    -1,    -1,    28,    29,    -1,    -1,    -1,     1,
      34,    35,    36,    -1,    -1,    39,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    48,    49,    34,    35,    36,    -1,
      -1,    39,    24,    25,    -1,     1,    28,    29,    -1,    -1,
      48,    49,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    48,    49,    24,    -1,
      -1,    -1,    28,    29,    30,    -1,    -1,     1,    34,    35,
      36,    -1,    -1,    39,    24,    -1,    -1,    -1,    28,    29,
      30,    -1,    48,    49,    34,    35,    36,    -1,    -1,    39,
      24,    -1,    -1,     1,    28,    29,    30,    -1,    48,    49,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    48,    49,    24,    -1,    -1,    -1,
      28,    29,    30,    -1,    -1,    -1,    34,    35,    36,    -1,
      -1,    39,    24,    -1,    -1,    -1,    28,    29,    30,     1,
      48,    49,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    48,    49,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,     1,    34,    35,    36,    -1,    -1,    39,    24,    -1,
      -1,    -1,    28,    29,    30,    -1,    48,    49,    34,    35,
      36,    -1,    -1,    39,    24,    -1,    -1,     1,    28,    29,
      30,    -1,    48,    49,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    48,    49,
      24,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,     1,
      34,    35,    36,    -1,    -1,    39,    24,    -1,    -1,    -1,
      28,    29,    30,    -1,    48,    49,    34,    35,    36,    -1,
      -1,    39,    24,    -1,    -1,     1,    28,    29,    30,    -1,
      48,    49,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    48,    49,    24,    -1,
      -1,    -1,    28,    29,    30,    -1,    -1,     1,    34,    35,
      36,    -1,    -1,    39,    24,    -1,    -1,    -1,    28,    29,
      30,    -1,    48,    49,    34,    35,    36,    -1,    -1,    39,
      24,    -1,    -1,    -1,    28,    29,    30,    -1,    48,    49,
      34,    35,    36,    -1,     1,    39,     3,    -1,    -1,    -1,
      -1,    -1,     9,    10,    48,    49,     1,    14,     3,    16,
      17,    -1,    -1,    -1,    21,    10,    -1,    -1,    -1,    14,
      27,    16,    17,    -1,    -1,     1,    21,    -1,    -1,    -1,
      -1,    -1,    27,     9,    10,    -1,    -1,    -1,    14,    -1,
      16,    17,    49,    -1,     1,    21,    -1,    -1,    -1,    -1,
      -1,    27,     9,    10,    49,    -1,    -1,    14,    -1,    16,
      17,    -1,    -1,     1,    21,    -1,    -1,    -1,    -1,    -1,
      27,     9,    10,    49,    -1,    -1,    14,    -1,    16,    17,
      -1,    -1,     1,    21,    -1,    -1,    -1,    -1,    -1,    27,
       9,    10,    49,    -1,    -1,    14,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    52,     0,     1,     5,    77,    79,    49,     1,
      49,     1,    53,    54,    79,    89,     1,    26,     1,     8,
      55,    89,    53,    55,     3,     1,     3,    49,     1,    49,
      26,     1,    26,     4,     4,     1,     4,     1,    17,    21,
      49,    56,    57,    58,    59,    60,    61,    62,    89,    56,
      56,     6,     6,     6,     1,     6,    49,     1,    49,     1,
      49,     1,    38,    49,     1,     3,    64,    65,    89,    56,
       1,    30,    38,    64,    64,     7,     7,     7,     7,     1,
       7,    48,    49,     1,     6,    17,    21,    49,    80,     1,
      80,    27,    64,    30,     1,    32,    33,    48,    63,    27,
       1,    10,    14,    16,    27,    49,    58,    59,    60,    61,
      71,    75,    89,    22,    22,    22,    22,    22,     1,    22,
      30,    34,    35,    36,    39,    34,    35,    36,    39,    49,
      49,     1,    49,     1,    49,     1,    49,    22,     1,    22,
      30,    49,    30,    49,    22,    24,    38,     1,    22,     1,
      22,     1,    22,     1,    24,    38,     1,    27,    71,    75,
       1,    19,    78,    78,    78,    78,    78,    78,    78,    48,
      49,    48,    49,    48,    49,    48,    49,    48,    49,    48,
      49,    48,    49,    48,    49,    49,    62,    68,    89,    68,
      66,    68,    63,     1,    63,     1,    12,    13,    22,    28,
      35,    37,    47,    48,    49,    63,    82,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    48,    49,
      86,    24,     1,    24,    23,    23,    23,    23,    23,    23,
       1,    23,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,     1,    31,
      69,    70,    89,    23,    23,    68,     1,    23,    30,    30,
      30,    17,    49,    86,     1,    17,    49,    86,    48,    86,
      40,    40,    49,     1,    23,    24,    29,    85,    87,    88,
      25,    30,    23,     1,    23,    23,     1,    23,    23,     1,
      23,    25,    30,     1,    25,     1,    30,    25,    25,     1,
      25,    26,    26,    26,    26,    26,    26,    26,     1,    26,
      62,    62,    69,    26,    26,    23,    26,     1,    26,    24,
      22,    63,    23,    22,    24,     1,    24,     1,    22,     1,
      23,    48,    49,    48,    49,     1,    63,    11,    49,    86,
      26,    30,    75,    86,     1,    11,    49,     1,    22,    34,
      35,    36,    39,    83,    48,    49,    82,    38,    30,    30,
       1,    30,    26,    26,    26,    75,     1,    49,    75,    26,
      38,    38,     1,    38,    49,    49,    49,     1,    49,    71,
      71,    71,    71,    71,    71,    71,    71,     1,    71,    56,
      56,    26,    56,    56,    56,    86,    23,    23,    86,    86,
      86,    23,     1,    23,    25,    71,    72,     1,    25,    84,
      86,    84,    86,    86,    86,    72,    72,    72,    22,    76,
      86,    86,    86,    86,    27,    27,    27,    27,    27,    27,
      27,    27,    27,     1,    27,    71,    71,    67,    71,    71,
      71,    25,    25,    25,     1,    25,    27,    23,     1,    31,
      81,    89,     1,    23,    30,    27,    27,    27,    86,    71,
      74,    30,    30,    30,     1,    30,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,     1,    27,     9,     9,
      56,     9,     9,     1,     9,    56,    15,    86,    86,    15,
      15,     1,    15,    23,    27,    86,    86,    71,    86,    86,
      49,    86,    86,     9,    26,    81,    81,    26,    26,    26,
       1,    26,    30,    30,     9,    30,    30,    30,     1,    30,
      86,    71,    73,    73,    73,    73,    73,    73,    27,    27,
      86,    27,    27,    27,    27,     1,    30,    27,    27,    27,
      27,    27,     1,    27,    30,    27,    27
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

  case 8:

/* Line 1455 of yacc.c  */
#line 105 "SyntaxicAnalyser.y"
    {yyerror (" erreur! mot cle class errone dans la line : "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 106 "SyntaxicAnalyser.y"
    { yyerror (" erreur! acolade ouvarnte  manquant dans la line :  "); YYABORT;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 107 "SyntaxicAnalyser.y"
    { yyerror (" erreur! acolade FERMANT  manquant dans la line :   "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 112 "SyntaxicAnalyser.y"
    {
                            insertSymbol((yyvsp[(2) - (2)]),EXTENSION,CLASS,"IDENT",0,classID);
                            level = 0;
                        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 116 "SyntaxicAnalyser.y"
    { yyerror ("  mot cle EXTENDS manquant ou bien errone dans la line : "); YYABORT;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 117 "SyntaxicAnalyser.y"
    { yyerror ("erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 118 "SyntaxicAnalyser.y"
    {level = 0;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 127 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 128 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  manquante  dans la line :"); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 129 "SyntaxicAnalyser.y"
    {yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 130 "SyntaxicAnalyser.y"
    {yyerror ("POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 133 "SyntaxicAnalyser.y"
    {yyerror ("valeur manquante  dans la line :"); YYABORT;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 135 "SyntaxicAnalyser.y"
    {
                            add_variable("LDC",(yyvsp[(3) - (4)]),"");
                            add_variable("STORE",(yyvsp[(1) - (4)]),"");

                        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 147 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");

                            ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 155 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 162 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 169 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("ADD", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 178 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");

                            ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 186 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 193 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 200 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("SUB", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 211 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");

                            ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 219 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 226 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 233 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("MUL", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 244 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");

                            ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 252 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDC",(yyvsp[(5) - (6)]),"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 259 "SyntaxicAnalyser.y"
    {
                                add_variable("LDC",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 266 "SyntaxicAnalyser.y"
    {
                                add_variable("LDV",(yyvsp[(3) - (6)]),"");
                                add_variable("LDV",(yyvsp[(5) - (6)]),"");
                                genCode("DIV", 0 , "OPERATION"); 
                                add_variable("STORE",(yyvsp[(1) - (6)]),"");
                            ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 284 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                                
                        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 292 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 299 "SyntaxicAnalyser.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else 
                                check_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,classID);
                        ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 306 "SyntaxicAnalyser.y"
    { yyerror (" type non valide dans la ligne : "); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 307 "SyntaxicAnalyser.y"
    { yyerror ("Type:1 identifier errone dans la line :"); YYABORT;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 308 "SyntaxicAnalyser.y"
    { yyerror ("Type: identifier errone dans la line : "); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 309 "SyntaxicAnalyser.y"
    { yyerror ("Type: identifier errone dans la line : "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 321 "SyntaxicAnalyser.y"
    { ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 322 "SyntaxicAnalyser.y"
    {
                              genCode("ENTREE", line, "ENTSORT");
                          ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 326 "SyntaxicAnalyser.y"
    {
                              genCode("SORTIE", line, "ENTSORT");
                              genCode("RETOUR",line,"");

                          ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 332 "SyntaxicAnalyser.y"
    { yyerror (" mot cle Public class manquant ou errone dans la line "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 333 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 334 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 335 "SyntaxicAnalyser.y"
    { yyerror (" acolade ouvrant  manquant dans la line :"); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 336 "SyntaxicAnalyser.y"
    { yyerror (" mot cle Return manquant ou errone dans la line "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 337 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE manquant  dans la line :"); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 338 "SyntaxicAnalyser.y"
    { yyerror ("acolade fermant  manquante dans la line :"); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 341 "SyntaxicAnalyser.y"
    { isParam = false; level = 1;;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 342 "SyntaxicAnalyser.y"
    { isParam = false; level = 1;;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 349 "SyntaxicAnalyser.y"
    {yyerror ("VIRGULE manquant dans la line :"); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 355 "SyntaxicAnalyser.y"
    {
                        genCode("SIFAUX",line+1,"");
                    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 362 "SyntaxicAnalyser.y"
    {
                        genCode("SAUT",line+1,"");
                    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 369 "SyntaxicAnalyser.y"
    {
                        add_while_statement("TANQUEFAUX",line +1,"");
                    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 380 "SyntaxicAnalyser.y"
    { yyerror (" If acolade  manquante dans la line : "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 381 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 382 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 383 "SyntaxicAnalyser.y"
    { yyerror (" mot cle ELSE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 385 "SyntaxicAnalyser.y"
    { yyerror ("erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 386 "SyntaxicAnalyser.y"
    { yyerror ("erreur acolade ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 389 "SyntaxicAnalyser.y"
    {

                        genCode("TANQUE",line +1,"");

            ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 395 "SyntaxicAnalyser.y"
    { yyerror ("mot cle WHILE errone ou bien manquant on line : "); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 396 "SyntaxicAnalyser.y"
    { yyerror (" parenthese  ouvrante manquant dans la line: "); YYABORT;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 397 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 400 "SyntaxicAnalyser.y"
    { yyerror ("system.out.println errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 401 "SyntaxicAnalyser.y"
    { yyerror (" parenthese  ouvrante manquant dans la line:"); YYABORT;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 402 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermante manquant dans la line: "); YYABORT;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 403 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE  manquant dans la line :"); YYABORT;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 410 "SyntaxicAnalyser.y"
    {
                check_declarations((yyvsp[(1) - (4)]),ASSIGNMENT,VARIABLE,level,classID);
                add_variable("STORE",(yyvsp[(1) - (4)]),"");
            ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 414 "SyntaxicAnalyser.y"
    { yyerror (" erreur identifier errone dans la line :  "); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 415 "SyntaxicAnalyser.y"
    { yyerror (" AFFECTATION errone dans la line : "); YYABORT;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 416 "SyntaxicAnalyser.y"
    { yyerror ("POINT_VIRGULE  manquant dans la line : "); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 419 "SyntaxicAnalyser.y"
    {
                check_declarations((yyvsp[(1) - (7)]),ASSIGNMENT,VARIABLE,level,classID)
                
            ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 423 "SyntaxicAnalyser.y"
    { yyerror ("erreur identifier errone dans la line :"); YYABORT;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 424 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation ouvrante manquante dans la line :"); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 425 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation fermante manquante dans la line :"); YYABORT;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 426 "SyntaxicAnalyser.y"
    { yyerror (" AFFECTATION errone dans la line :  "); YYABORT;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 427 "SyntaxicAnalyser.y"
    { yyerror (" POINT_VIRGULE  manquant dans la line :  "); YYABORT;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 433 "SyntaxicAnalyser.y"
    { yyerror (" acolade ouvrant manquant dans la line: "); YYABORT;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 434 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Public errone ou bien manquant on line :   "); YYABORT;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 435 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Static errone ou bien manquant on line : "); YYABORT;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 436 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Void errone ou bien manquant on line : "); YYABORT;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 437 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Main errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 438 "SyntaxicAnalyser.y"
    { yyerror ("parenthese ouvrante manquante dans la line:  "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 439 "SyntaxicAnalyser.y"
    { yyerror ("  parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 440 "SyntaxicAnalyser.y"
    { yyerror ("acolade ouvrant manquant dans la line:  "); YYABORT;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 441 "SyntaxicAnalyser.y"
    { yyerror (" STATEMENT manquant on line :  "); YYABORT;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 442 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 443 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line: "); YYABORT;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 447 "SyntaxicAnalyser.y"
    { 
                            insertSymbol("main",DECLARATION,METHOD,"void",0,classID);
                            set_param((yyvsp[(4) - (4)]),strcat((yyvsp[(1) - (4)]),"[]"));   
                        ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 451 "SyntaxicAnalyser.y"
    { yyerror ("mot cle String errone ou bien manquant on line :  "); YYABORT;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 452 "SyntaxicAnalyser.y"
    { yyerror ("acolade ouvrant manquant dans la line:  "); YYABORT;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 453 "SyntaxicAnalyser.y"
    { yyerror (" acolade fermant  manquant dans la line:"); YYABORT;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 454 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line :"); YYABORT;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 459 "SyntaxicAnalyser.y"
    {   
                            classID +=1; 
                            check_class((yyvsp[(2) - (2)]),classID);
                        ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 463 "SyntaxicAnalyser.y"
    { yyerror ("mot cle Class errone ou bien manquant on line :"); YYABORT;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 464 "SyntaxicAnalyser.y"
    { yyerror (" identifier errone dans la line : "); YYABORT;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 472 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 477 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 482 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                            add_method("APPEL", line, (yyvsp[(2) - (2)]));
                        ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 488 "SyntaxicAnalyser.y"
    {
                            check_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),classID);
                            isParam = true;
                        ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 492 "SyntaxicAnalyser.y"
    { yyerror (" type non valide dans la ligne :"); YYABORT;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 493 "SyntaxicAnalyser.y"
    { yyerror (" MethodType :identifier errone dans la line : "); YYABORT;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 494 "SyntaxicAnalyser.y"
    { yyerror ("MethodType :identifier errone dans la line : "); YYABORT;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 495 "SyntaxicAnalyser.y"
    { yyerror ("MethodType: identifier errone dans la line :"); YYABORT;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 507 "SyntaxicAnalyser.y"
    { yyerror (" VIRGULE manquant dans la line : "); YYABORT;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 512 "SyntaxicAnalyser.y"
    {
                            add_variable("LDC",(yyvsp[(1) - (3)]),"");
                            add_variable("LDC",(yyvsp[(3) - (3)]),"");
                            add_variable((yyvsp[(2) - (3)]), 0 , "OPERATION_COMP"); 
                        ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 517 "SyntaxicAnalyser.y"
    {
                            add_variable("LDV",(yyvsp[(1) - (3)]),"");
                            add_variable("LDC",(yyvsp[(3) - (3)]),"");
                            add_variable((yyvsp[(2) - (3)]), 0 , "OPERATION_COMP"); 
                        ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 522 "SyntaxicAnalyser.y"
    {
                            add_variable("LDC",(yyvsp[(1) - (3)]),"");
                            add_variable("LDV",(yyvsp[(3) - (3)]),"");
                            add_variable((yyvsp[(2) - (3)]), 0 , "OPERATION_COMP"); 
                        ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 527 "SyntaxicAnalyser.y"
    {
                            add_variable("LDV",(yyvsp[(1) - (3)]),"");
                            add_variable("LDV",(yyvsp[(3) - (3)]),"");
                            add_variable((yyvsp[(2) - (3)]), 0 , "OPERATION_COMP"); 
                        ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 545 "SyntaxicAnalyser.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 550 "SyntaxicAnalyser.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 557 "SyntaxicAnalyser.y"
    { 
                            method_call_index = insertSymbol((yyvsp[(2) - (2)]),USE,METHOD,"DOT_IDENT",0,classID);
                            add_method("RETOUR",line,(yyvsp[(2) - (2)]));


                        ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 563 "SyntaxicAnalyser.y"
    { yyerror (" POINT manquant dans la line : "); YYABORT;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 564 "SyntaxicAnalyser.y"
    { yyerror ("identifier errone dans la line :  "); YYABORT;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 568 "SyntaxicAnalyser.y"
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 574 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1){
                                remove_param(method_call_index);
                                insert_param(method_call_index,"EXP","int");
                            }                              
                        ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 581 "SyntaxicAnalyser.y"
    { 
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                        ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 587 "SyntaxicAnalyser.y"
    {
                          
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                                insert_param(method_call_index,"EXP","bool");
                            }
                                
                        ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 597 "SyntaxicAnalyser.y"
    { yyerror (" Comparison operator manquant dans la line : "); YYABORT;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 599 "SyntaxicAnalyser.y"
    {
                            
                            if(method_call_index != -1) {
                                insert_param(method_call_index,"EXP","int[]");
                            }
      
                        ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 606 "SyntaxicAnalyser.y"
    { yyerror (" erreur tabulation ouvrante manquante dans la line : "); YYABORT;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 607 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation fermante manquante dans la line : "); YYABORT;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 609 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1) {
                                insert_param(method_call_index,"EXP","int");
                            }
                
                        ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 615 "SyntaxicAnalyser.y"
    { yyerror (" POINT manquant dans la line : "); YYABORT;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 616 "SyntaxicAnalyser.y"
    { yyerror ("LONGEUR manquant dans la line :"); YYABORT;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 619 "SyntaxicAnalyser.y"
    { yyerror ("parenthese ouvrante manquante dans la line: "); YYABORT;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 620 "SyntaxicAnalyser.y"
    { yyerror ("parenthese  fermant manquant dans la line: "); YYABORT;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 622 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,(yyvsp[(1) - (1)]),"int");
                            add_variable("LDC",(yyvsp[(1) - (1)]),"");
                            
                        ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 629 "SyntaxicAnalyser.y"
    {
                            
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,strcat("-",(yyvsp[(2) - (2)])),"int");
                        ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 635 "SyntaxicAnalyser.y"
    {
                            if(method_call_index != -1 && expression_level < 1) 
                                insert_param(method_call_index,(yyvsp[(1) - (1)]),"bool");
                        ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 640 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE FERMANTE    manquante  dans la line :"); YYABORT;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 641 "SyntaxicAnalyser.y"
    {yyerror ("  QUOTE  OUVRANTE manquante  dans la line :"); YYABORT;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 644 "SyntaxicAnalyser.y"
    {

                            if(method_call_index != -1 && expression_level < 1) 
                              insert_param(method_call_index,(yyvsp[(1) - (1)]),"IDENT");

                            check_declarations((yyvsp[(1) - (1)]),USE,VARIABLE,level,classID);
                            // add_variable("LDV",$1,"");

                        ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 656 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle New errone dans la line:   "); YYABORT;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 657 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle Integer errone dans la line:  "); YYABORT;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 658 "SyntaxicAnalyser.y"
    { yyerror ("erreur tabulation ouvrante manquante dans la line : "); YYABORT;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 659 "SyntaxicAnalyser.y"
    { yyerror (" erreur tabulation fermante manquante dans la line :  "); YYABORT;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 661 "SyntaxicAnalyser.y"
    {
                            insertSymbol((yyvsp[(2) - (4)]),INSTANTIATION,VARIABLE,"NewID",0,classID);                          
                        ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 664 "SyntaxicAnalyser.y"
    { yyerror ("erreur mot cle New errone dans la line:  "); YYABORT;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 665 "SyntaxicAnalyser.y"
    { yyerror ("  erreur identifier errone dans la line : "); YYABORT;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 666 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line : "); YYABORT;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 667 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line : "); YYABORT;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 669 "SyntaxicAnalyser.y"
    { yyerror ("erreur Not manquant dans la line :  "); YYABORT;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 671 "SyntaxicAnalyser.y"
    { yyerror ("erreur parenthese ouvarnte  manquante dans la line :"); YYABORT;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 672 "SyntaxicAnalyser.y"
    { yyerror (" erreur parenthese fermante  manquante dans la line :"); YYABORT;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 673 "SyntaxicAnalyser.y"
    { yyerror (" valeur manquante dans la ligne :  "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 3382 "SyntaxicAnalyser.tab.c"
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
#line 679 "SyntaxicAnalyser.y"
 

    int yyerror(char const *msg) {
        
        fprintf(stderr, "%s %d\n", msg,line);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        yyparse();
    }
