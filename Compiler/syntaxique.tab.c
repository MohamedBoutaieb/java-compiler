
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
#line 2 "syntaxique.y"


    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include "semantic.h"
    #include "CodeGenerator.h"

    #define YYSTYPE char*

    int yyparse(void);
    int yyerror(char const *msg);
    int yylex(void);

    extern int line;

    int class_id = 0;
    int level = 0;
    bool isParam = false;
    int method_call_index = -1;
    int expression_level = 0;

    //other

    int address = 0;
    int code_index = -1;
    char* method_name = "";
    char* class_name = "";
    char* math_op = "";
    char* com_op = "";
    int retour = 0;

    #define YYERROR_VERBOSE 1




/* Line 189 of yacc.c  */
#line 112 "syntaxique.tab.c"

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
     _PUBLIC = 258,
     _STATIC = 259,
     _CLASS = 260,
     _VOID = 261,
     _MAIN = 262,
     _EXTENDS = 263,
     _RETURN = 264,
     _SOP = 265,
     _LENGTH = 266,
     _THIS = 267,
     _NEW = 268,
     _IF = 269,
     _ELSE = 270,
     _WHILE = 271,
     _INTEGER = 272,
     _STRING = 273,
     _DATATYPE = 274,
     _OPENPARENT = 275,
     _CLOSEPARENT = 276,
     _OPENSQRBRACK = 277,
     _CLOSESQRBRACK = 278,
     _OPENBRAC = 279,
     _CLOSEBRAC = 280,
     _AND = 281,
     _OR = 282,
     _DOT = 283,
     _SEMICOLON = 284,
     _COMMA = 285,
     _DOUBLEQUOTE = 286,
     _SINGLEQUOTE = 287,
     _PLUS = 288,
     _MINUS = 289,
     _MULTIPLY = 290,
     _NOT = 291,
     _EQUAL = 292,
     _DIV = 293,
     _COMPOP = 294,
     _BOOLVALUE = 295,
     _INTEGERVALUE = 296,
     _IDENT = 297,
     _ChainChar = 298
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
#line 197 "syntaxique.tab.c"

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
#define YYLAST   1349

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNRULES -- Number of states.  */
#define YYNSTATES  435

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
       0,     0,     3,     6,    11,    16,    21,    26,    31,    45,
      59,    73,    87,   101,   115,   129,   143,   157,   171,   185,
     199,   202,   205,   208,   209,   212,   215,   218,   219,   228,
     236,   244,   252,   253,   256,   259,   262,   265,   268,   271,
     274,   277,   280,   283,   287,   288,   292,   296,   300,   301,
     304,   305,   306,   321,   335,   349,   363,   377,   391,   405,
     419,   420,   425,   430,   435,   436,   447,   455,   463,   471,
     479,   480,   487,   493,   499,   505,   512,   519,   526,   533,
     540,   541,   548,   554,   560,   566,   575,   584,   593,   602,
     611,   620,   622,   626,   630,   631,   633,   635,   637,   639,
     641,   643,   646,   647,   650,   653,   656,   657,   662,   663,
     668,   672,   677,   682,   687,   691,   695,   699,   705,   711,
     717,   719,   722,   724,   726,   728,   734,   740,   746,   752,
     758,   763,   768,   773,   778,   783,   786,   789,   793,   797,
     801
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    47,    50,    -1,    18,    22,    23,    42,
      -1,     1,    22,    23,    42,    -1,    18,     1,    23,    42,
      -1,    18,    22,     1,    42,    -1,    18,    22,    23,     1,
      -1,    49,    24,     3,     4,     6,     7,    20,    46,    21,
      24,    59,    25,    25,    -1,    49,     1,     3,     4,     6,
       7,    20,    46,    21,    24,    59,    25,    25,    -1,    49,
      24,     1,     4,     6,     7,    20,    46,    21,    24,    59,
      25,    25,    -1,    49,    24,     3,     1,     6,     7,    20,
      46,    21,    24,    59,    25,    25,    -1,    49,    24,     3,
       4,     1,     7,    20,    46,    21,    24,    59,    25,    25,
      -1,    49,    24,     3,     4,     6,     1,    20,    46,    21,
      24,    59,    25,    25,    -1,    49,    24,     3,     4,     6,
       7,     1,    46,    21,    24,    59,    25,    25,    -1,    49,
      24,     3,     4,     6,     7,    20,    46,     1,    24,    59,
      25,    25,    -1,    49,    24,     3,     4,     6,     7,    20,
      46,    21,     1,    59,    25,    25,    -1,    49,    24,     3,
       4,     6,     7,    20,    46,    21,    24,     1,    25,    25,
      -1,    49,    24,     3,     4,     6,     7,    20,    46,    21,
      24,    59,     1,    25,    -1,    49,    24,     3,     4,     6,
       7,    20,    46,    21,    24,    59,    25,     1,    -1,     8,
      42,    -1,     1,    42,    -1,     8,     1,    -1,    -1,     5,
      42,    -1,     1,    42,    -1,     5,     1,    -1,    -1,    49,
      48,    24,    54,    57,    25,    51,    50,    -1,     1,    48,
      24,    54,    57,    25,    50,    -1,    49,    48,     1,    54,
      57,    25,    50,    -1,    49,    48,    24,    54,    57,     1,
      50,    -1,    -1,    19,    42,    -1,    17,    42,    -1,     1,
      42,    -1,    19,     1,    -1,    17,     1,    -1,    19,    42,
      -1,    17,    42,    -1,     1,    42,    -1,    19,     1,    -1,
      17,     1,    -1,    52,    29,    54,    -1,    -1,    52,     1,
      54,    -1,    30,    52,    55,    -1,     1,    52,    55,    -1,
      -1,    52,    55,    -1,    -1,    -1,     3,    53,    20,    56,
      21,    24,    54,    59,     9,    68,    29,    25,    58,    57,
      -1,     1,    53,    20,    56,    21,    24,    54,    59,     9,
      68,    29,    25,    57,    -1,     3,     1,     1,    56,    21,
      24,    54,    59,     9,    68,    29,    25,    57,    -1,     3,
      53,    20,    56,     1,    24,    54,    59,     9,    68,    29,
      25,    57,    -1,     3,    53,    20,    56,    21,     1,    54,
      59,     9,    68,    29,    25,    57,    -1,     3,    53,    20,
      56,    21,    24,    54,    59,     1,    68,    29,    25,    57,
      -1,     3,    53,    20,    56,    21,    24,    54,    59,     9,
      68,     1,    25,    57,    -1,     3,    53,    20,    56,    21,
      24,    54,    59,     9,    68,    29,     1,    57,    -1,    -1,
      24,    59,    59,    25,    -1,     1,    59,    59,    25,    -1,
      24,    59,    59,     1,    -1,    -1,    14,    20,    68,    21,
      59,    59,    60,    15,    59,    59,    -1,     1,    20,    68,
      21,    59,    15,    59,    -1,    14,     1,    68,    21,    59,
      15,    59,    -1,    14,    20,    68,     1,    59,    15,    59,
      -1,    14,    20,    68,    21,    59,     1,    59,    -1,    -1,
      16,    20,    68,    21,    61,    59,    -1,     1,    20,    68,
      21,    59,    -1,    16,     1,    68,    21,    59,    -1,    16,
      20,    68,     1,    59,    -1,    10,    20,    68,    21,    29,
      59,    -1,     1,    20,    68,    21,    29,    59,    -1,    10,
       1,    68,    21,    29,    59,    -1,    10,    20,    68,     1,
      29,    59,    -1,    10,    20,    68,    21,     1,    59,    -1,
      -1,    42,    37,    68,    29,    62,    59,    -1,     1,    37,
      68,    29,    59,    -1,    42,     1,    68,    29,    59,    -1,
      42,    37,    68,     1,    59,    -1,    42,    22,    68,    23,
      37,    68,    29,    59,    -1,     1,    22,    68,    23,    37,
      68,    29,    59,    -1,    42,     1,    68,    23,    37,    68,
      29,    59,    -1,    42,    22,    68,     1,    37,    68,    29,
      59,    -1,    42,    22,    68,    23,     1,    68,    29,    59,
      -1,    42,    22,    68,    23,    37,    68,     1,    59,    -1,
      43,    -1,    30,    68,    63,    -1,     1,    68,    63,    -1,
      -1,    26,    -1,    39,    -1,    33,    -1,    34,    -1,    35,
      -1,    38,    -1,    68,    63,    -1,    -1,    28,    42,    -1,
       1,    42,    -1,    28,     1,    -1,    -1,    68,    69,    65,
      68,    -1,    -1,    68,    70,    64,    68,    -1,    68,     1,
      68,    -1,    68,    22,    68,    23,    -1,    68,     1,    68,
      23,    -1,    68,    22,    68,     1,    -1,    68,    28,    11,
      -1,    68,     1,    11,    -1,    68,    28,     1,    -1,    68,
      67,    20,    66,    21,    -1,    68,    67,     1,    66,    21,
      -1,    68,    67,    20,    66,     1,    -1,    41,    -1,    34,
      41,    -1,    40,    -1,    42,    -1,    12,    -1,    13,    17,
      22,    68,    25,    -1,     1,    17,    22,    68,    25,    -1,
      13,     1,    22,    68,    25,    -1,    13,    17,     1,    68,
      25,    -1,    13,    17,    22,    68,     1,    -1,    13,    42,
      20,    21,    -1,     1,    42,    20,    21,    -1,    13,     1,
      20,    21,    -1,    13,    42,     1,    21,    -1,    13,    42,
      20,     1,    -1,    36,    68,    -1,     1,    68,    -1,    20,
      68,    21,    -1,     1,    68,    21,    -1,    20,    68,     1,
      -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    89,    96,    97,    98,    99,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     116,   121,   122,   123,   126,   134,   135,   139,   138,   144,
     145,   146,   147,   150,   173,   185,   187,   188,   191,   207,
     215,   217,   218,   221,   222,   223,   226,   227,   228,   231,
     232,   236,   235,   240,   241,   242,   243,   244,   245,   246,
     247,   250,   251,   252,   254,   253,   261,   262,   263,   264,
     266,   265,   274,   275,   276,   277,   278,   279,   280,   281,
     283,   282,   289,   290,   291,   292,   297,   298,   299,   300,
     301,   302,   305,   306,   307,   310,   311,   314,   315,   316,
     317,   320,   326,   332,   338,   339,   343,   342,   375,   374,
     415,   416,   424,   425,   426,   433,   434,   435,   436,   437,
     438,   448,   459,   477,   485,   486,   487,   488,   489,   490,
     491,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_PUBLIC", "_STATIC", "_CLASS", "_VOID",
  "_MAIN", "_EXTENDS", "_RETURN", "_SOP", "_LENGTH", "_THIS", "_NEW",
  "_IF", "_ELSE", "_WHILE", "_INTEGER", "_STRING", "_DATATYPE",
  "_OPENPARENT", "_CLOSEPARENT", "_OPENSQRBRACK", "_CLOSESQRBRACK",
  "_OPENBRAC", "_CLOSEBRAC", "_AND", "_OR", "_DOT", "_SEMICOLON", "_COMMA",
  "_DOUBLEQUOTE", "_SINGLEQUOTE", "_PLUS", "_MINUS", "_MULTIPLY", "_NOT",
  "_EQUAL", "_DIV", "_COMPOP", "_BOOLVALUE", "_INTEGERVALUE", "_IDENT",
  "_ChainChar", "$accept", "program", "MainMethodParam", "MainClass",
  "SectionE_I", "ClassScope", "ClassDeclaration", "$@1", "Type",
  "MethodType", "VarDeclaration", "SectionC_T", "SectionT_SCT",
  "MethodDeclaration", "$@2", "Statement", "$@3", "$@4", "$@5",
  "SectionC_E", "LogicOperator", "MathOperator", "SectionE_SCE",
  "UseFunction", "Expression", "$@6", "$@7", 0
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
       0,    44,    45,    46,    46,    46,    46,    46,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      48,    48,    48,    48,    49,    49,    49,    51,    50,    50,
      50,    50,    50,    52,    52,    52,    52,    52,    53,    53,
      53,    53,    53,    54,    54,    54,    55,    55,    55,    56,
      56,    58,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    59,    59,    59,    60,    59,    59,    59,    59,    59,
      61,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      62,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    63,    63,    63,    64,    64,    65,    65,    65,
      65,    66,    66,    67,    67,    67,    69,    68,    70,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     4,     4,     4,     4,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
       2,     2,     2,     0,     2,     2,     2,     0,     8,     7,
       7,     7,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     0,     3,     3,     3,     0,     2,
       0,     0,    14,    13,    13,    13,    13,    13,    13,    13,
       0,     4,     4,     4,     0,    10,     7,     7,     7,     7,
       0,     6,     5,     5,     5,     6,     6,     6,     6,     6,
       0,     6,     5,     5,     5,     8,     8,     8,     8,     8,
       8,     1,     3,     3,     0,     1,     1,     1,     1,     1,
       1,     2,     0,     2,     2,     2,     0,     4,     0,     4,
       3,     4,     4,     4,     3,     3,     3,     5,     5,     5,
       1,     2,     1,     1,     1,     5,     5,     5,     5,     5,
       4,     4,     4,     4,     4,     2,     2,     3,     3,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    25,    26,    24,     1,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    37,    34,    36,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,    40,    42,    39,    41,    38,     0,     0,     0,    29,
      30,    31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     3,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,     0,
     122,   120,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     8,     0,
       0,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    63,    61,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,     0,   138,
       0,     0,     0,     0,     0,     0,     0,   137,   115,   123,
       0,     0,    72,     0,   116,   114,   103,     0,     0,    97,
      98,    99,   100,     0,    95,    96,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
       0,     0,    83,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   131,   132,     0,     0,
       0,   133,   134,   130,   112,    76,     0,     0,   111,     0,
       0,     0,     0,     0,     0,    77,    78,    79,    75,     0,
       0,     0,     0,     0,    64,    71,     0,     0,     0,     0,
      81,     0,     0,     0,     0,     0,     0,     0,    51,   126,
     127,   128,     0,   125,    66,   118,     0,     0,   101,   119,
     117,     0,    67,     0,    68,     0,     0,     0,     0,     0,
       0,     0,    53,    54,    55,    56,    57,    58,    59,     0,
       0,     0,    86,     0,     0,    87,    88,    89,    90,    85,
      52,    93,    92,     0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    95,     4,    17,    11,    12,    92,    35,    67,
      36,   120,   103,    53,   419,   177,   406,   330,   337,   398,
     316,   313,   359,   258,   300,   259,   260
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -187
static const yytype_int16 yypact[] =
{
     271,   -21,    11,   119,   359,   115,  -187,  -187,  -187,  -187,
      10,   182,  -187,   222,   184,   224,    22,   253,   208,   300,
     306,   311,  -187,  -187,  -187,   201,   201,   201,   323,   331,
     335,   107,   266,    23,    34,    96,   144,   144,   144,   336,
     346,   355,   362,   103,  -187,  -187,  -187,  -187,  -187,    12,
      12,   337,   389,   373,   377,    13,   356,   392,   394,   397,
     399,   155,  -187,  -187,   367,    48,    50,   403,    70,   410,
     359,   359,   359,  -187,   255,   255,   255,   255,   255,   255,
     255,  -187,  -187,  -187,  -187,  -187,   351,   351,   351,  -187,
    -187,  -187,   359,   388,   145,   418,   421,   425,   426,   437,
     438,   137,    90,   439,   440,   147,  -187,   452,   455,    18,
     387,   458,   459,   470,   471,   472,   473,   215,   412,   412,
    -187,   477,   478,   479,   223,   462,   463,   464,    76,   207,
     207,   207,   207,   207,   207,   207,   207,   379,    90,    90,
     172,   172,   172,   172,   172,  -187,  -187,  -187,  -187,  -187,
     357,   177,   218,   221,   207,   114,  -187,   486,   489,   493,
     494,   505,   506,   507,   508,   341,    92,  -187,  -187,   207,
     207,   207,   207,   207,   384,   384,   384,   207,   384,   384,
     384,   384,   384,   384,   207,   384,   384,   384,   512,   513,
     514,   515,   516,   517,   522,   525,   529,   530,   125,   557,
     558,   560,   565,    24,   415,  -187,    31,   384,   527,   384,
    -187,  -187,  -187,   849,   871,   885,   550,   900,   915,   930,
     945,   960,   975,   154,   807,   989,  1003,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,   384,
     384,   384,   384,   384,   384,   554,   561,   659,   280,   183,
     268,  1018,  -187,   678,   617,   285,   384,    19,   269,   353,
     204,   540,   207,  -187,   549,   559,   108,   207,   251,   207,
     207,   251,  -187,  -187,  -187,   543,   207,   572,    77,   251,
    -187,  1032,  1046,  1061,  1075,  1090,  1104,   384,   566,  -187,
     568,   384,   384,   384,   569,   239,   451,  -187,  -187,   302,
     701,   207,   567,  1126,   304,  -187,  -187,   634,   634,  -187,
    -187,  -187,  -187,   384,  -187,  -187,   384,   384,  -187,   207,
     207,   207,   207,   576,    46,   724,   579,   391,  -187,  -187,
     207,   384,  -187,   384,   384,   384,  -187,   207,   577,   578,
     582,   590,   591,   585,   176,  1144,  -187,  -187,  1162,  1180,
    1198,  -187,  -187,  -187,  -187,  -187,   207,   487,  -187,   583,
     830,   247,   747,   766,  1216,  -187,  -187,  -187,  -187,   207,
     384,   789,   207,   357,  -187,  -187,  1234,  1252,  1270,  1288,
    -187,   144,   144,   144,   144,   144,   144,   144,  -187,  -187,
    -187,  -187,   523,  -187,  -187,  -187,   617,   384,  -187,  -187,
    -187,   207,  -187,  1310,  -187,   156,   602,   207,   207,   207,
     251,   207,  -187,  -187,  -187,  -187,  -187,  -187,  -187,   144,
     610,   830,  -187,   297,   207,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,   207,  -187
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -187,   390,  -187,   609,   622,   187,  -187,    35,   571,
     -10,   195,   287,   -37,  -187,  -127,  -187,  -187,  -187,  -186,
    -187,  -187,   316,  -187,   -80,  -187,  -187
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -141
static const yytype_int16 yytable[] =
{
      54,    55,   157,   158,   159,   160,   161,   162,   163,   164,
     166,    15,     7,    32,    72,   -44,    37,    38,    16,   127,
     304,     6,   -44,    23,    45,   243,   -44,   184,   -44,    33,
     305,    34,   248,   244,   -23,    47,   -44,   -44,    73,    62,
      63,   128,   199,   200,   201,   202,   203,   324,   249,    82,
     216,    84,     6,     8,   -44,   -44,   151,   223,   205,   206,
     152,   306,   153,   245,    24,    46,   370,  -140,   175,  -140,
     154,    87,  -140,   250,  -140,  -140,    48,   148,   334,  -140,
     208,  -140,   209,   176,  -140,  -140,   210,   211,   371,   156,
      83,   118,    85,   197,   213,   214,   215,    49,   217,   218,
     219,   220,   221,   222,    60,   224,   225,   226,    42,   321,
      61,   -48,    81,    43,   335,   185,    13,   198,   149,     9,
     119,   102,   102,   102,   247,    50,   237,   251,   302,   253,
     169,   170,   171,   172,   173,   318,   186,   322,   116,    14,
     323,   326,   327,   328,   329,    51,   108,    52,   123,   332,
     238,   187,   336,   138,   139,   273,    79,   150,   117,   281,
     282,   283,   284,   285,   286,   -69,   151,   109,   124,   -60,
     152,   -69,   153,    32,   355,    80,   303,   387,   178,   274,
     154,   -69,   -44,    15,   292,    20,   -44,    21,   -44,    33,
      16,    34,   365,   366,   367,   368,   -44,   179,   155,   156,
     374,   388,    32,   375,   -44,   293,   -23,   345,   150,    26,
     380,   348,   349,   350,   -44,   -44,   136,   151,    33,   180,
      34,   152,   182,   153,   143,    19,   -44,   360,   360,   394,
     314,   154,    27,   362,   431,   432,   363,   364,   181,   137,
     352,   183,   402,   315,   247,   404,   405,   144,   399,   155,
     156,   376,   324,   377,   378,   379,    93,    89,    90,    91,
     353,   151,   298,   205,   206,   152,    22,   153,   400,   294,
     307,   207,     1,    94,   422,   154,     2,    25,   216,   106,
     425,   426,   427,   428,   429,   208,   150,   209,   295,   308,
     403,   210,   211,   325,   156,   151,   302,   433,   150,   152,
     290,   153,   291,  -104,    28,  -105,   434,   151,    44,   154,
      29,   152,    30,   153,   301,    31,   420,   421,  -137,  -137,
    -137,   154,  -104,  -137,  -105,  -137,   301,   155,   156,    39,
    -137,  -137,  -137,   167,   168,  -137,  -137,    40,    64,   155,
     156,    41,   150,    56,   412,   413,   414,   415,   416,   417,
     418,   151,    32,    57,    65,   152,    66,   153,   150,   -32,
      10,   174,    58,   175,     2,   154,   196,   151,    33,    59,
      34,   152,   -50,   153,   104,   105,    74,   174,   176,   175,
     165,   154,   430,   155,   156,   204,   309,   310,   311,   151,
      68,   312,   373,   152,   176,   153,   205,   206,    70,   155,
     156,   151,    71,   154,   207,   152,    65,   153,    66,    81,
     107,   129,    75,    32,    76,   154,   204,    77,   208,    78,
     209,   155,   156,    86,   210,   211,   212,   205,   206,    33,
      88,    34,   245,   155,   156,   207,  -140,  -140,  -140,   110,
    -140,  -140,   111,  -140,  -140,  -140,   112,   113,  -140,   208,
    -140,   209,   204,  -140,  -140,   210,   211,   246,   114,   115,
     121,   122,   298,   205,   206,    96,    97,    98,    99,   100,
     101,   207,  -139,  -139,  -139,   125,  -139,  -139,   126,  -139,
    -139,  -139,   130,   131,  -139,   208,  -139,   209,   204,  -139,
    -139,   210,   211,   299,   132,   133,   134,   135,   298,   205,
     206,   140,   141,   142,   145,   146,   147,   207,  -113,  -113,
    -113,   188,  -113,  -113,   189,  -113,  -113,  -113,   190,   191,
    -113,   208,  -113,   209,   204,  -113,  -113,   210,   211,   299,
     192,   193,   194,   195,   298,   205,   206,   227,   228,   229,
     230,   231,   232,   207,  -129,  -129,  -129,   233,  -129,  -129,
     234,  -129,  -129,  -129,   235,   236,  -129,   208,  -129,   209,
     204,  -129,  -129,   210,   211,   299,   239,   240,   252,   241,
     298,   205,   206,   204,   242,   263,   287,   317,   319,   207,
     331,   288,   356,   298,   205,   206,   204,   346,   320,   347,
     351,   369,   207,   208,   372,   209,   298,   205,   206,   210,
     211,   299,   381,   382,   395,   207,   208,   383,   209,   333,
     386,   396,   210,   211,   299,   384,   385,   424,   204,   208,
      18,   209,     5,    69,   361,   210,   211,   299,   298,   205,
     206,   -94,   256,   354,     0,   204,  -108,   207,   257,     0,
     397,     0,     0,  -106,  -106,  -106,   205,   206,  -106,  -108,
       0,   208,     0,   209,   207,  -102,     0,   210,   211,   299,
     254,     0,     0,     0,     0,     0,     0,     0,   208,     0,
     209,     0,     0,     0,   210,   211,   212,     0,     0,   254,
     289,   256,  -136,     0,  -136,  -108,     0,   257,  -136,  -136,
       0,     0,  -106,  -106,  -106,     0,     0,  -106,  -108,  -135,
     256,  -135,   254,  -135,  -108,     0,   257,  -135,  -135,     0,
       0,  -106,  -106,  -106,     0,     0,  -106,  -108,     0,     0,
       0,     0,  -110,   256,   354,   185,  -110,  -108,     0,   257,
    -110,  -110,     0,     0,  -106,  -106,  -106,     0,     0,  -106,
    -108,     0,     0,     0,  -104,  -123,   186,  -123,   254,     0,
    -123,     0,  -123,  -123,     0,     0,     0,  -123,  -123,  -123,
       0,   187,  -123,  -123,     0,     0,     0,   254,  -107,   256,
    -107,     0,  -107,  -107,     0,   257,  -107,  -107,     0,     0,
    -106,  -106,  -106,     0,     0,  -106,  -107,  -109,   256,  -109,
     185,  -109,  -108,     0,   257,  -109,  -109,     0,     0,  -106,
    -106,  -106,     0,     0,  -106,  -108,     0,     0,   254,   288,
    -123,   186,  -123,     0,     0,  -123,     0,  -123,  -123,     0,
       0,     0,  -123,  -123,  -123,     0,   187,  -123,  -123,   256,
     275,   396,     0,  -108,     0,   257,   276,     0,     0,     0,
    -106,  -106,  -106,     0,     0,  -106,  -108,     0,     0,     0,
     254,   -94,   256,     0,     0,     0,  -108,     0,   257,     0,
     397,     0,     0,  -106,  -106,  -106,     0,     0,  -106,  -108,
     255,   256,   254,     0,     0,  -108,     0,   257,     0,     0,
       0,     0,  -106,  -106,  -106,     0,   254,  -106,  -108,     0,
       0,     0,     0,   256,   261,     0,     0,  -108,     0,   257,
       0,   254,     0,     0,  -106,  -106,  -106,   256,     0,  -106,
    -108,  -108,     0,   257,   262,     0,   265,     0,  -106,  -106,
    -106,   264,   256,  -106,  -108,     0,  -108,     0,   257,     0,
       0,   254,     0,  -106,  -106,  -106,   266,   256,  -106,  -108,
       0,  -108,     0,   257,     0,     0,   268,     0,  -106,  -106,
    -106,   267,   256,  -106,  -108,     0,  -108,     0,   257,     0,
       0,   254,     0,  -106,  -106,  -106,   269,   256,  -106,  -108,
       0,  -108,     0,   257,     0,     0,   271,     0,  -106,  -106,
    -106,   270,   256,  -106,  -108,     0,  -108,     0,   257,     0,
     277,     0,     0,  -106,  -106,  -106,   272,   256,  -106,  -108,
       0,  -108,     0,   257,   279,     0,     0,     0,  -106,  -106,
    -106,   256,   278,  -106,  -108,  -108,     0,   257,     0,   296,
       0,     0,  -106,  -106,  -106,   256,     0,  -106,  -108,  -108,
       0,   257,   280,   254,     0,     0,  -106,  -106,  -106,   297,
     256,  -106,  -108,     0,  -108,     0,   257,   254,     0,     0,
       0,  -106,  -106,  -106,   256,     0,  -106,  -108,  -108,     0,
     257,   338,   254,     0,     0,  -106,  -106,  -106,   256,     0,
    -106,  -108,  -108,     0,   257,   339,   254,     0,     0,  -106,
    -106,  -106,     0,   256,  -106,  -108,     0,  -108,     0,   257,
     340,   254,     0,     0,  -106,  -106,  -106,   256,     0,  -106,
    -108,  -108,     0,   257,   341,   343,     0,     0,  -106,  -106,
    -106,     0,   256,  -106,  -108,     0,  -108,     0,   257,   342,
       0,     0,     0,  -106,  -106,  -106,   256,   357,  -106,  -108,
    -108,     0,   257,   344,     0,     0,     0,  -106,  -106,  -106,
       0,     0,  -106,  -108,     0,   254,     0,     0,   256,   358,
       0,     0,  -108,     0,   257,     0,     0,     0,     0,  -106,
    -106,  -106,     0,   254,  -106,  -108,   256,     0,     0,   389,
    -108,     0,   257,     0,     0,     0,     0,  -106,  -106,  -106,
       0,   254,  -106,  -108,   256,     0,     0,   390,  -108,     0,
     257,     0,     0,     0,     0,  -106,  -106,  -106,     0,   392,
    -106,  -108,   256,     0,     0,   391,  -108,     0,   257,     0,
       0,     0,     0,  -106,  -106,  -106,     0,   254,  -106,  -108,
     256,     0,     0,   393,  -108,     0,   257,     0,     0,     0,
       0,  -106,  -106,  -106,     0,   254,  -106,  -108,   256,     0,
       0,     0,  -108,     0,   257,   401,     0,     0,     0,  -106,
    -106,  -106,     0,   254,  -106,  -108,   256,     0,     0,     0,
    -108,     0,   257,   407,     0,     0,     0,  -106,  -106,  -106,
       0,   254,  -106,  -108,   256,     0,     0,     0,  -108,     0,
     257,   408,     0,     0,     0,  -106,  -106,  -106,     0,   410,
    -106,  -108,   256,     0,     0,     0,  -108,     0,   257,   409,
       0,     0,     0,  -106,  -106,  -106,     0,     0,  -106,  -108,
     256,   296,     0,     0,  -108,     0,   257,   411,     0,     0,
       0,  -106,  -106,  -106,     0,     0,  -106,  -108,     0,     0,
       0,   423,   256,     0,     0,     0,  -108,     0,   257,     0,
       0,     0,     0,  -106,  -106,  -106,     0,     0,  -106,  -108
};

static const yytype_int16 yycheck[] =
{
      37,    38,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     1,     1,     1,     1,     3,    26,    27,     8,     1,
       1,    42,    10,     1,     1,     1,    14,   154,    16,    17,
      11,    19,     1,     9,    24,     1,    24,    25,    25,    49,
      50,    23,   169,   170,   171,   172,   173,     1,    17,     1,
     177,     1,    42,    42,    42,    43,    10,   184,    12,    13,
      14,    42,    16,    17,    42,    42,    20,    21,    22,    23,
      24,     1,    26,    42,    28,    29,    42,     1,     1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      42,     1,    42,     1,   174,   175,   176,     1,   178,   179,
     180,   181,   182,   183,     1,   185,   186,   187,     1,     1,
       7,    21,    42,     6,    37,     1,     1,    25,    42,     0,
      30,    86,    87,    88,   204,    29,     1,   207,   255,   209,
     140,   141,   142,   143,   144,   262,    22,    29,     1,    24,
     267,   268,   269,   270,   271,     1,     1,     3,     1,   276,
      25,    37,   279,   118,   119,     1,     1,     1,    21,   239,
     240,   241,   242,   243,   244,     9,    10,    22,    21,    25,
      14,    15,    16,     1,   301,    20,   256,     1,     1,    25,
      24,    25,    10,     1,     1,     1,    14,     3,    16,    17,
       8,    19,   319,   320,   321,   322,    24,    20,    42,    43,
     327,    25,     1,   330,     3,    22,    24,   287,     1,     1,
     337,   291,   292,   293,    42,    43,     1,    10,    17,     1,
      19,    14,     1,    16,     1,     3,    25,   307,   308,   356,
      26,    24,    24,   313,   420,   421,   316,   317,    20,    24,
       1,    20,   369,    39,   324,   372,   373,    24,     1,    42,
      43,   331,     1,   333,   334,   335,     1,    70,    71,    72,
      21,    10,    11,    12,    13,    14,    42,    16,    21,     1,
       1,    20,     1,    18,   401,    24,     5,    24,   405,    92,
     407,   408,   409,   410,   411,    34,     1,    36,    20,    20,
     370,    40,    41,    42,    43,    10,   423,   424,     1,    14,
      20,    16,    22,     1,     4,     1,   433,    10,    42,    24,
       4,    14,     1,    16,    29,     4,   396,   397,    21,    22,
      23,    24,    20,    26,    20,    28,    29,    42,    43,     6,
      33,    34,    35,   138,   139,    38,    39,     6,     1,    42,
      43,     6,     1,     7,   381,   382,   383,   384,   385,   386,
     387,    10,     1,     7,    17,    14,    19,    16,     1,     0,
       1,    20,     7,    22,     5,    24,    25,    10,    17,     7,
      19,    14,    21,    16,    87,    88,    20,    20,    37,    22,
       1,    24,   419,    42,    43,     1,    33,    34,    35,    10,
       1,    38,     1,    14,    37,    16,    12,    13,    25,    42,
      43,    10,    25,    24,    20,    14,    17,    16,    19,    42,
      22,    24,    20,     1,    20,    24,     1,    20,    34,    20,
      36,    42,    43,    20,    40,    41,    42,    12,    13,    17,
      20,    19,    17,    42,    43,    20,    21,    22,    23,    21,
      25,    26,    21,    28,    29,    30,    21,    21,    33,    34,
      35,    36,     1,    38,    39,    40,    41,    42,    21,    21,
      21,    21,    11,    12,    13,    75,    76,    77,    78,    79,
      80,    20,    21,    22,    23,    23,    25,    26,    23,    28,
      29,    30,    24,    24,    33,    34,    35,    36,     1,    38,
      39,    40,    41,    42,    24,    24,    24,    24,    11,    12,
      13,    24,    24,    24,    42,    42,    42,    20,    21,    22,
      23,    25,    25,    26,    25,    28,    29,    30,    25,    25,
      33,    34,    35,    36,     1,    38,    39,    40,    41,    42,
      25,    25,    25,    25,    11,    12,    13,    25,    25,    25,
      25,    25,    25,    20,    21,    22,    23,    25,    25,    26,
      25,    28,    29,    30,    25,    25,    33,    34,    35,    36,
       1,    38,    39,    40,    41,    42,     9,     9,    41,     9,
      11,    12,    13,     1,     9,    25,    22,    37,    29,    20,
      37,    20,    15,    11,    12,    13,     1,    21,    29,    21,
      21,    15,    20,    34,    15,    36,    11,    12,    13,    40,
      41,    42,    25,    25,    21,    20,    34,    25,    36,    37,
      25,     1,    40,    41,    42,    25,    25,    15,     1,    34,
      11,    36,     0,    52,   308,    40,    41,    42,    11,    12,
      13,    21,    22,    23,    -1,     1,    26,    20,    28,    -1,
      30,    -1,    -1,    33,    34,    35,    12,    13,    38,    39,
      -1,    34,    -1,    36,    20,    21,    -1,    40,    41,    42,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,     1,
      21,    22,    23,    -1,    25,    26,    -1,    28,    29,    30,
      -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,    21,
      22,    23,     1,    25,    26,    -1,    28,    29,    30,    -1,
      -1,    33,    34,    35,    -1,    -1,    38,    39,    -1,    -1,
      -1,    -1,    21,    22,    23,     1,    25,    26,    -1,    28,
      29,    30,    -1,    -1,    33,    34,    35,    -1,    -1,    38,
      39,    -1,    -1,    -1,    20,    21,    22,    23,     1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    -1,    -1,    -1,     1,    21,    22,
      23,    -1,    25,    26,    -1,    28,    29,    30,    -1,    -1,
      33,    34,    35,    -1,    -1,    38,    39,    21,    22,    23,
       1,    25,    26,    -1,    28,    29,    30,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39,    -1,    -1,     1,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    28,    29,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,    22,
      23,     1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,
      33,    34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
       1,    21,    22,    -1,    -1,    -1,    26,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,
      21,    22,     1,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,     1,    38,    39,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    26,    -1,    28,
      -1,     1,    -1,    -1,    33,    34,    35,    22,    -1,    38,
      39,    26,    -1,    28,    29,    -1,     1,    -1,    33,    34,
      35,    21,    22,    38,    39,    -1,    26,    -1,    28,    -1,
      -1,     1,    -1,    33,    34,    35,    21,    22,    38,    39,
      -1,    26,    -1,    28,    -1,    -1,     1,    -1,    33,    34,
      35,    21,    22,    38,    39,    -1,    26,    -1,    28,    -1,
      -1,     1,    -1,    33,    34,    35,    21,    22,    38,    39,
      -1,    26,    -1,    28,    -1,    -1,     1,    -1,    33,    34,
      35,    21,    22,    38,    39,    -1,    26,    -1,    28,    -1,
       1,    -1,    -1,    33,    34,    35,    21,    22,    38,    39,
      -1,    26,    -1,    28,     1,    -1,    -1,    -1,    33,    34,
      35,    22,    23,    38,    39,    26,    -1,    28,    -1,     1,
      -1,    -1,    33,    34,    35,    22,    -1,    38,    39,    26,
      -1,    28,    29,     1,    -1,    -1,    33,    34,    35,    21,
      22,    38,    39,    -1,    26,    -1,    28,     1,    -1,    -1,
      -1,    33,    34,    35,    22,    -1,    38,    39,    26,    -1,
      28,    29,     1,    -1,    -1,    33,    34,    35,    22,    -1,
      38,    39,    26,    -1,    28,    29,     1,    -1,    -1,    33,
      34,    35,    -1,    22,    38,    39,    -1,    26,    -1,    28,
      29,     1,    -1,    -1,    33,    34,    35,    22,    -1,    38,
      39,    26,    -1,    28,    29,     1,    -1,    -1,    33,    34,
      35,    -1,    22,    38,    39,    -1,    26,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    22,     1,    38,    39,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,    -1,    38,    39,    -1,     1,    -1,    -1,    22,    23,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,     1,    38,    39,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,     1,    38,    39,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,     1,
      38,    39,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,     1,    38,    39,
      22,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,     1,    38,    39,    22,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    -1,     1,    38,    39,    22,    -1,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,     1,    38,    39,    22,    -1,    -1,    -1,    26,    -1,
      28,    29,    -1,    -1,    -1,    33,    34,    35,    -1,     1,
      38,    39,    22,    -1,    -1,    -1,    26,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,
      22,     1,    -1,    -1,    26,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    38,    39,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    45,    47,    49,    42,     1,    42,     0,
       1,    49,    50,     1,    24,     1,     8,    48,    48,     3,
       1,     3,    42,     1,    42,    24,     1,    24,     4,     4,
       1,     4,     1,    17,    19,    52,    54,    54,    54,     6,
       6,     6,     1,     6,    42,     1,    42,     1,    42,     1,
      29,     1,     3,    57,    57,    57,     7,     7,     7,     7,
       1,     7,    54,    54,     1,    17,    19,    53,     1,    53,
      25,    25,     1,    25,    20,    20,    20,    20,    20,     1,
      20,    42,     1,    42,     1,    42,    20,     1,    20,    50,
      50,    50,    51,     1,    18,    46,    46,    46,    46,    46,
      46,    46,    52,    56,    56,    56,    50,    22,     1,    22,
      21,    21,    21,    21,    21,    21,     1,    21,     1,    30,
      55,    21,    21,     1,    21,    23,    23,     1,    23,    24,
      24,    24,    24,    24,    24,    24,     1,    24,    52,    52,
      24,    24,    24,     1,    24,    42,    42,    42,     1,    42,
       1,    10,    14,    16,    24,    42,    43,    59,    59,    59,
      59,    59,    59,    59,    59,     1,    59,    55,    55,    54,
      54,    54,    54,    54,    20,    22,    37,    59,     1,    20,
       1,    20,     1,    20,    59,     1,    22,    37,    25,    25,
      25,    25,    25,    25,    25,    25,    25,     1,    25,    59,
      59,    59,    59,    59,     1,    12,    13,    20,    34,    36,
      40,    41,    42,    68,    68,    68,    59,    68,    68,    68,
      68,    68,    68,    59,    68,    68,    68,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,     1,    25,     9,
       9,     9,     9,     1,     9,    17,    42,    68,     1,    17,
      42,    68,    41,    68,     1,    21,    22,    28,    67,    69,
      70,    23,    29,    25,    21,     1,    21,    21,     1,    21,
      21,     1,    21,     1,    25,    23,    29,     1,    23,     1,
      29,    68,    68,    68,    68,    68,    68,    22,    20,    21,
      20,    22,     1,    22,     1,    20,     1,    21,    11,    42,
      68,    29,    59,    68,     1,    11,    42,     1,    20,    33,
      34,    35,    38,    65,    26,    39,    64,    37,    59,    29,
      29,     1,    29,    59,     1,    42,    59,    59,    59,    59,
      61,    37,    59,    37,     1,    37,    59,    62,    29,    29,
      29,    29,    29,     1,    29,    68,    21,    21,    68,    68,
      68,    21,     1,    21,    23,    59,    15,     1,    23,    66,
      68,    66,    68,    68,    68,    59,    59,    59,    59,    15,
      20,    42,    15,     1,    59,    59,    68,    68,    68,    68,
      59,    25,    25,    25,    25,    25,    25,     1,    25,    25,
      25,    25,     1,    25,    59,    21,     1,    30,    63,     1,
      21,    29,    59,    68,    59,    59,    60,    29,    29,    29,
       1,    29,    57,    57,    57,    57,    57,    57,    57,    58,
      68,    68,    59,    21,    15,    59,    59,    59,    59,    59,
      57,    63,    63,    59,    59
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
#line 86 "syntaxique.y"
    { print_symtab();check_main();check_code_int();print_codetab(); printf("Analyze finished with success \n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 90 "syntaxique.y"
    {
                            code_index = insert_symbol("main","DECLARATION","METHOD","void",0,class_id);
                            set_param((yyvsp[(4) - (4)]),strcat((yyvsp[(1) - (4)]),"[]"));

                            insert_code("ENTREE",code_index,"main","");
                        ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 96 "syntaxique.y"
    { yyerror (" String is needed  "); YYABORT;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 97 "syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 98 "syntaxique.y"
    { yyerror (" CLose brackets is needed  "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 99 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 102 "syntaxique.y"
    { insert_code("SORTIE",-1,"main",""); insert_code("SORTIE",-1,"","CLASS");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 103 "syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 104 "syntaxique.y"
    { yyerror (" Public is needed  "); YYABORT;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 105 "syntaxique.y"
    { yyerror (" Static is needed  "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 106 "syntaxique.y"
    { yyerror (" Void is needed  "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 107 "syntaxique.y"
    { yyerror (" Main is needed  "); YYABORT;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 108 "syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 109 "syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 110 "syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 111 "syntaxique.y"
    { yyerror (" Statement is needed  "); YYABORT;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 112 "syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 113 "syntaxique.y"
    { yyerror (" close brackets is needed  "); YYABORT;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 117 "syntaxique.y"
    {
                            insert_symbol((yyvsp[(2) - (2)]),"EXTENSION","CLASS","IDENT",0,class_id);
                            level = 0;
                        ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 121 "syntaxique.y"
    { yyerror (" Extends is needed  "); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 122 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 123 "syntaxique.y"
    {level = 0;;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 127 "syntaxique.y"
    {
                            class_id +=1;

                            code_index  = lookup_class((yyvsp[(2) - (2)]),class_id);
                            class_name = (yyvsp[(2) - (2)]);
                            insert_code("ENTREE",code_index,"","CLASS");
                        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 134 "syntaxique.y"
    { yyerror (" Class is needed  "); YYABORT;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 135 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 139 "syntaxique.y"
    {
                            insert_code("SORTIE",-1,"","CLASS");
                            insert_code("RETOUR",retour+1,"","");
                        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 145 "syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 146 "syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 151 "syntaxique.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else {
                                code_index = lookup_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,class_id);
                                insert_code("LDC",code_index,"","");
                                insert_code("STORE",address,"","");
                                address++;
                            }
                        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 174 "syntaxique.y"
    {
                            if(isParam)
                                set_param((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));
                            else {
                                code_index = lookup_variable((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),level,class_id);
                                insert_code("LDC",code_index,"","");
                                insert_code("STORE",address,"","");
                                address++;
                            }

                        ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 185 "syntaxique.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 187 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 188 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 192 "syntaxique.y"
    {
                            code_index = lookup_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),class_id);
                            isParam = true;

                            method_name = (yyvsp[(2) - (2)]);
                            insert_code("ENTREE",code_index,(yyvsp[(2) - (2)]),"");
                        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 208 "syntaxique.y"
    {
                            code_index = lookup_method((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),class_id);
                            isParam = true;

                            method_name = (yyvsp[(2) - (2)]);
                            insert_code("ENTREE",code_index,(yyvsp[(2) - (2)]),"");
                        ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 215 "syntaxique.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 217 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 218 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 223 "syntaxique.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 227 "syntaxique.y"
    { yyerror (" Comma is needed  "); YYABORT;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 231 "syntaxique.y"
    { isParam = false; level = 1;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 232 "syntaxique.y"
    { isParam = false; level = 1;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 236 "syntaxique.y"
    {
                            insert_code("SORTIE",-1,method_name,"");
                        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 240 "syntaxique.y"
    { yyerror (" Public is needed  "); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 241 "syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 242 "syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 243 "syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 244 "syntaxique.y"
    { yyerror (" Return is needed  "); YYABORT;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 245 "syntaxique.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 246 "syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 251 "syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 252 "syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 254 "syntaxique.y"
    {
                            insert_code("SAUT",-1,"","ELSE");
                        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 258 "syntaxique.y"
    {
                            insert_code("SAUT",-1,"","DONE_IF");
                        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 261 "syntaxique.y"
    { yyerror (" If brackets is needed  "); YYABORT;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 262 "syntaxique.y"
    { yyerror (" Open parentheses brackets is needed  "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 263 "syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 264 "syntaxique.y"
    { yyerror (" Else is needed  "); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 266 "syntaxique.y"
    {
                            //insert_code("TANTQUEFAUX",-1,"","");
                            change_signature();
                        ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 271 "syntaxique.y"
    {
                            insert_code("TANTQUE",-1,"","");
                        ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 274 "syntaxique.y"
    { yyerror (" While is needed  "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 275 "syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 276 "syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 278 "syntaxique.y"
    { yyerror (" System.out.println is needed  "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 279 "syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 280 "syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 281 "syntaxique.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 283 "syntaxique.y"
    {
                            insert_code("STORE",-1,"","");
                            code_index = lookup_declarations((yyvsp[(1) - (4)]),"ASSIGNMENT","VARIABLE",level,class_id);
                            insert_code_variable("STORE",(yyvsp[(1) - (4)]));
                        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 289 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 290 "syntaxique.y"
    { yyerror (" Equal operator is needed  "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 291 "syntaxique.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 293 "syntaxique.y"
    {
                            lookup_declarations((yyvsp[(1) - (8)]),"ASSIGNMENT","VARIABLE",level,class_id)

                        ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 297 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 298 "syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 299 "syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 300 "syntaxique.y"
    { yyerror (" Equal operator is needed  "); YYABORT;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 301 "syntaxique.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 306 "syntaxique.y"
    { yyerror (" Comma is needed  "); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 310 "syntaxique.y"
    {com_op = "&&";;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 311 "syntaxique.y"
    {com_op = (yyvsp[(1) - (1)]);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 314 "syntaxique.y"
    { math_op = "+";;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 315 "syntaxique.y"
    { math_op = "-";;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 316 "syntaxique.y"
    { math_op = "*";;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 317 "syntaxique.y"
    { math_op = "/";;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 321 "syntaxique.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 326 "syntaxique.y"
    {
                            method_call_index = -1;
                            expression_level=0;
                        ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 333 "syntaxique.y"
    {
                            method_call_index = insert_symbol((yyvsp[(2) - (2)]),"USE","METHOD","DOT_IDENT",0,class_id);

                            retour = insert_code("APPEL",method_call_index,(yyvsp[(2) - (2)]),"");
                        ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 338 "syntaxique.y"
    { yyerror (" Dot is needed  "); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 339 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 343 "syntaxique.y"
    {
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                            char * end;
                            long value = strtol((yyvsp[(1) - (1)]),&end,10 );
                            if(end != NULL){
                                insert_code_ldv("LDV",(yyvsp[(1) - (1)]));
                            }
                        ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 354 "syntaxique.y"
    {
                            if(method_call_index != -1){
                                remove_param(method_call_index);
                                insert_call_param(method_call_index,"EXP","int");
                            }
                            char * end;
                            long value = strtol((yyvsp[(4) - (4)]),&end,10);
                            printf("%s\n",end);
                            if(strcmp(end,"") != 0){
                                insert_code_ldv("LDV",(yyvsp[(4) - (4)]));
                            }
                            if(strcmp(math_op,"+") == 0)
                                insert_code("ADD",-1,"","");
                            else if(strcmp(math_op,"*") == 0)
                                insert_code("MUL",-1,"","");
                            else if(strcmp(math_op,"/") == 0)
                                insert_code("DIV",-1,"","");
                            else
                                insert_code("SUB",-1,"","");
                        ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 375 "syntaxique.y"
    {
                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                            }
                            char * end;
                            long value = strtol((yyvsp[(1) - (1)]),&end,10 );
                            if(end != NULL){
                                insert_code_ldv("LDV",(yyvsp[(1) - (1)]));
                            }
                        ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 386 "syntaxique.y"
    {

                            if(method_call_index != -1) {
                                remove_param(method_call_index);
                                insert_call_param(method_call_index,"EXP","bool");
                            }

                            char * end;
                            long value = strtol((yyvsp[(4) - (4)]),&end,10);
                            printf("%s\n",end);
                            if(strcmp(end,"") != 0){
                                insert_code_ldv("LDV",(yyvsp[(4) - (4)]));
                            }

                            if(strcmp(com_op,"<") == 0)
                                insert_code("INF",-1,"","");
                            else if(strcmp(com_op,"<=")== 0)
                                insert_code("INFE",-1,"","");
                            else if(strcmp(com_op,">")== 0)
                                insert_code("SUP",-1,"","");
                            else if(strcmp(com_op,">=")== 0)
                                insert_code("SUPE",-1,"","");
                            else if(strcmp(com_op,">=") == 0)
                                insert_code("SUPE",-1,"","");
                            else
                                insert_code("EGAL",-1,"","");

                            insert_code("SIFAUX",-1,"","");
                        ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 415 "syntaxique.y"
    { yyerror (" Comparison operator is needed  "); YYABORT;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 417 "syntaxique.y"
    {

                            if(method_call_index != -1) {
                                insert_call_param(method_call_index,"EXP","int[]");
                            }

                        ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 424 "syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 425 "syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 427 "syntaxique.y"
    {
                            if(method_call_index != -1) {
                                insert_call_param(method_call_index,"EXP","int");
                            }

                        ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 433 "syntaxique.y"
    { yyerror (" Dot is needed  "); YYABORT;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 434 "syntaxique.y"
    { yyerror (" Length is needed  "); YYABORT;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 436 "syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 437 "syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 439 "syntaxique.y"
    {
                            if(method_call_index != -1 && expression_level < 1)
                                insert_call_param(method_call_index,(yyvsp[(1) - (1)]),"int");
                            else {
                                insert_code("LDC",strtol((yyvsp[(1) - (1)]), NULL, 10),"","INTEGER_VALUE");
                                //address++;
                            }

                        ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 449 "syntaxique.y"
    {

                            if(method_call_index != -1 && expression_level < 1)
                                insert_call_param(method_call_index,strcat("-",(yyvsp[(2) - (2)])),"int");
                            else{
                                insert_code("LDC",-strtol((yyvsp[(2) - (2)]), NULL, 10),"","INTEGER_VALUE");
                                insert_code("STORE",-1,"","");
                                //address++;
                            }
                        ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 460 "syntaxique.y"
    {
                            if(method_call_index != -1 && expression_level < 1)
                                insert_call_param(method_call_index,(yyvsp[(1) - (1)]),"bool");
                            else {
                                if (strcmp((yyvsp[(1) - (1)]),"true") == 0)
                                {
                                    insert_code("LDC",1,"","BOOLEAN_VALUE");
                                    insert_code("STORE",-1,"","");
                                    //address++;
                                }
                                else {
                                    insert_code("LDC",0,"","BOOLEAN_VALUE");
                                    insert_code("STORE",-1,"","");
                                    //address++;
                                }
                            }
                        ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 478 "syntaxique.y"
    {
                            if(method_call_index != -1 && expression_level < 1)
                              insert_call_param(method_call_index,(yyvsp[(1) - (1)]),"IDENT");

                            code_index = lookup_declarations((yyvsp[(1) - (1)]),"USE","VARIABLE",level,class_id);
                            //insert_use_code("LDV",code_index,"");
                        ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 487 "syntaxique.y"
    { yyerror (" New is needed  "); YYABORT;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 488 "syntaxique.y"
    { yyerror (" Integer type is needed  "); YYABORT;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 489 "syntaxique.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 490 "syntaxique.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 492 "syntaxique.y"
    {
                            insert_symbol((yyvsp[(2) - (4)]),"INSTANTIATION","VARIABLE","NEW_IDENT",0,class_id);
                        ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 495 "syntaxique.y"
    { yyerror (" New is needed  "); YYABORT;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 496 "syntaxique.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 497 "syntaxique.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 498 "syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 500 "syntaxique.y"
    { yyerror (" Not operator is needed  "); YYABORT;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 502 "syntaxique.y"
    { yyerror (" open parentheses is needed  "); YYABORT;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 503 "syntaxique.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 504 "syntaxique.y"
    { yyerror (" Integer Value or boolean value or identifier or this   is needed  "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2956 "syntaxique.tab.c"
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
#line 507 "syntaxique.y"


    int yyerror(char const *msg) {

        fprintf(stderr, "%s %d\n", msg,line);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        yyparse();
    }
