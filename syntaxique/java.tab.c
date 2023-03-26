
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
#line 2 "java.y"


    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>

    #define YYSTYPE char*

    int yyparse(void);
    int yyerror(char const *msg);
    int yylex(void);

    extern int line;
    extern int yylineno;
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
#line 110 "java.tab.c"

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
     Public = 258,
     Package = 259,
     Static = 260,
     Class = 261,
     Void = 262,
     MainProg = 263,
     Nombre = 264,
     Char = 265,
     Int = 266,
     Bool = 267,
     String = 268,
     If = 269,
     Else = 270,
     While = 271,
     Affectation = 272,
     Addition = 273,
     Soustraction = 274,
     Multiplication = 275,
     Division = 276,
     Et = 277,
     Ou = 278,
     Non = 279,
     Egal = 280,
     Point_virgule = 281,
     Inferieur_egal = 282,
     Different = 283,
     Inferieur = 284,
     Parenthese_ouvrante = 285,
     Parenthese_fermante = 286,
     Commentaire_ligne = 287,
     Identifiant = 288,
     Private = 289,
     Return = 290,
     For = 291,
     Chaine_caractere = 292,
     Commentaire_bloc = 293,
     Print = 294,
     Accolade_ouvrante = 295,
     Accolade_fermante = 296,
     Extends = 297,
     Crochet_ouvrante = 298,
     Crochet_fermante = 299,
     length = 300,
     Pt = 301,
     This = 302,
     Puissance = 303,
     New = 304,
     Not = 305,
     Virgule = 306
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
#line 203 "java.tab.c"

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
#define YYLAST   644

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNRULES -- Number of states.  */
#define YYNSTATES  324

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    23,    37,    51,    65,    79,    93,
     107,   121,   135,   148,   161,   164,   167,   170,   173,   176,
     183,   189,   195,   201,   206,   208,   215,   222,   229,   232,
     234,   237,   240,   243,   245,   247,   249,   251,   253,   261,
     267,   273,   277,   282,   290,   291,   294,   296,   300,   305,
     309,   317,   319,   321,   323,   325,   327,   331,   333,   335,
     337,   343,   348,   351,   355,   357,   359,   373,   387,   401,
     415,   429,   443,   457,   471,   474,   476,   481,   486,   489,
     492,   494,   496,   498,   500,   502,   504,   506,   508,   510,
     512,   514,   516,   519,   524,   527
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    57,    -1,    55,    40,     3,     5,
       7,     8,    30,    13,    33,    43,    44,    31,    40,    62,
      41,    41,    -1,    55,     1,     3,     5,     7,     8,    30,
      67,    31,    40,    61,    41,    41,    -1,    55,    40,     1,
       5,     7,     8,    30,    67,    31,    40,    61,    41,    41,
      -1,    55,    40,     3,     1,     7,     8,    30,    67,    31,
      40,    61,    41,    41,    -1,    55,    40,     3,     5,     1,
       8,    30,    67,    31,    40,    61,    41,    41,    -1,    55,
      40,     3,     5,     7,     1,    30,    67,    31,    40,    61,
      41,    41,    -1,    55,    40,     3,     5,     5,     8,     1,
      67,    31,    40,    61,    41,    41,    -1,    55,    40,     3,
       5,    30,     8,    30,    67,     1,    40,    61,    41,    41,
      -1,    55,    40,     3,     5,     7,     8,    30,    67,    31,
       1,    61,    41,    41,    -1,    55,    40,     3,     5,     7,
       8,    30,    67,    31,    61,    41,     1,    -1,    55,    40,
       3,     5,     7,     8,    30,    67,    31,    61,     1,    41,
      -1,     6,    33,    -1,     1,    33,    -1,    42,    33,    -1,
       1,    33,    -1,    42,     1,    -1,    55,    56,    40,    59,
      65,    41,    -1,    55,    40,    59,    65,    41,    -1,    55,
      56,    40,    65,    41,    -1,    55,    56,    40,    59,    41,
      -1,    55,    56,    40,    41,    -1,    58,    -1,     1,    56,
      40,    59,    65,    41,    -1,    55,    56,     1,    59,    65,
      41,    -1,    55,    56,    40,    59,    65,     1,    -1,    57,
      58,    -1,    57,    -1,    60,    33,    -1,     1,    33,    -1,
      60,     1,    -1,    11,    -1,    12,    -1,    13,    -1,    33,
      -1,    10,    -1,    14,    30,    63,    31,    61,    15,    61,
      -1,    16,    30,    63,    31,    61,    -1,    39,    30,    63,
      31,    26,    -1,    40,    62,    41,    -1,    33,    17,    63,
      26,    -1,    33,    43,    63,    44,    17,    63,    26,    -1,
      -1,    61,    62,    -1,    61,    -1,    63,    68,    63,    -1,
      63,    43,    63,    44,    -1,    63,    46,    45,    -1,    63,
      46,    33,    30,    63,    64,    31,    -1,     9,    -1,    37,
      -1,    10,    -1,    33,    -1,    63,    -1,    63,    51,    64,
      -1,    12,    -1,    11,    -1,    47,    -1,    49,    11,    43,
      63,    44,    -1,    49,    33,    30,    31,    -1,    50,    63,
      -1,    30,    63,    31,    -1,    33,    -1,     9,    -1,     3,
      60,    33,    30,    69,    31,    40,    66,    62,    35,    63,
      26,    41,    -1,     1,    60,    33,    30,    69,    31,    40,
      66,    62,    35,    63,    26,    41,    -1,     3,     1,    33,
      30,    69,    31,    40,    66,    62,    35,    63,    26,    41,
      -1,     3,    60,     1,    30,    69,    31,    40,    66,    62,
      35,    63,    26,    41,    -1,     3,    60,    33,     1,    69,
      31,    40,    66,    62,    35,    63,    26,    41,    -1,     3,
      60,    33,    30,    69,     1,    40,    66,    62,    35,    63,
      26,    41,    -1,     3,    60,    33,    30,    69,    31,     1,
      66,    62,    35,    63,    26,    41,    -1,     3,    60,    33,
      30,    69,    31,    40,    66,    62,    35,    63,    26,     1,
      -1,    59,    66,    -1,    59,    -1,    13,    43,    44,    33,
      -1,    13,    33,    43,    44,    -1,     1,    33,    -1,    13,
       1,    -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,
      29,    -1,    27,    -1,    25,    -1,    28,    -1,    23,    -1,
      22,    -1,    24,    -1,    48,    -1,    60,    33,    -1,    60,
      33,    51,    69,    -1,     1,    33,    -1,    60,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    92,    92,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   107,   112,   114,   116,   117,   120,
     124,   128,   129,   130,   131,   132,   133,   134,   136,   137,
     139,   147,   148,   149,   150,   151,   152,   153,   155,   156,
     157,   158,   159,   160,   160,   162,   162,   164,   165,   166,
     167,   167,   167,   167,   167,   168,   168,   168,   168,   168,
     168,   168,   169,   169,   169,   169,   171,   175,   176,   177,
     178,   179,   180,   181,   183,   183,   185,   188,   189,   190,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   195,   198,   199,   200
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Public", "Package", "Static", "Class",
  "Void", "MainProg", "Nombre", "Char", "Int", "Bool", "String", "If",
  "Else", "While", "Affectation", "Addition", "Soustraction",
  "Multiplication", "Division", "Et", "Ou", "Non", "Egal", "Point_virgule",
  "Inferieur_egal", "Different", "Inferieur", "Parenthese_ouvrante",
  "Parenthese_fermante", "Commentaire_ligne", "Identifiant", "Private",
  "Return", "For", "Chaine_caractere", "Commentaire_bloc", "Print",
  "Accolade_ouvrante", "Accolade_fermante", "Extends", "Crochet_ouvrante",
  "Crochet_fermante", "length", "Pt", "This", "Puissance", "New", "Not",
  "Virgule", "$accept", "program", "MainClass", "ClassScope",
  "ClassExtension", "ClassDeclaration", "ClassDeclarationList",
  "VarDeclaration", "Type", "Statement", "StatementList", "Expression",
  "ExpressionList", "MethodDeclaration", "VarDeclarationList",
  "MainMethodParam", "Operateur", "MethodParam", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    55,    55,    56,    56,    56,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    58,    58,
      59,    59,    59,    60,    60,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    67,    67,    67,    67,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    69,    69,    69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,    16,    13,    13,    13,    13,    13,    13,
      13,    13,    12,    12,     2,     2,     2,     2,     2,     6,
       5,     5,     5,     4,     1,     6,     6,     6,     2,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     7,     5,
       5,     3,     4,     7,     0,     2,     1,     3,     4,     3,
       7,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       5,     4,     2,     3,     1,     1,    13,    13,    13,    13,
      13,    13,    13,    13,     2,     1,     4,     4,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    15,    14,     1,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,    17,    18,    16,     0,     0,
      37,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,    32,    30,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    31,    22,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,    26,    27,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    92,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    44,    44,    44,    44,    44,     0,
      44,     0,     0,     0,     0,    44,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,     0,     0,    93,     0,    44,    44,
      44,    44,    44,    44,    44,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    53,    54,    52,     0,     0,     0,
       0,     0,    45,    41,    13,    12,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     9,
       8,    44,    11,    80,    81,    82,    83,    89,    88,    90,
      86,    85,    87,    84,    44,     0,     0,    91,     0,    44,
      42,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    47,    39,     0,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      38,     0,    43,    67,    68,    69,    70,    71,    72,    73,
      66,    51,    58,    57,     0,    54,    59,     0,     0,    55,
       0,     0,     0,     0,    62,     0,    50,    63,     0,     0,
      56,     0,    61,    60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    10,    17,    20,    21,   187,    36,   181,
     182,   309,   310,    47,   188,   103,   248,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -176
static const yytype_int16 yypact[] =
{
      57,   -11,     2,    59,   120,    10,  -176,  -176,  -176,    20,
      24,   208,  -176,    66,   139,    64,    91,    67,    90,    25,
     256,  -176,   134,   144,   112,  -176,  -176,  -176,    90,   147,
    -176,  -176,  -176,  -176,  -176,   226,    97,    90,    27,   160,
     180,   186,   111,   226,  -176,   350,   220,   162,  -176,  -176,
     226,   526,  -176,    30,   174,   202,   216,   239,   243,   251,
     165,   253,   175,   201,   227,    98,  -176,   222,   232,  -176,
      31,  -176,   236,   238,   261,   262,   292,   264,   266,   267,
    -176,   269,   291,   297,    11,  -176,  -176,  -176,   109,   109,
     109,   109,   109,   109,   119,   109,   225,   225,   225,   225,
     225,   307,     9,   294,   299,   311,   321,   325,   327,    18,
     333,   364,   334,   105,   335,   337,   339,   340,   103,  -176,
    -176,   285,   329,   359,   362,   366,   367,   368,   370,   361,
     136,   371,  -176,  -176,   358,   373,   374,   376,   402,   404,
      56,   401,   414,   604,   604,   604,   604,   604,   604,   405,
     604,   420,   421,    92,   422,   604,    53,   604,   225,    90,
      90,    90,    90,    90,    90,    90,  -176,  -176,   413,   415,
     416,   418,   444,   446,   457,   449,   245,   245,   245,   245,
     245,   604,   451,   452,   493,   454,  -176,   178,   604,   604,
     604,   604,   604,   604,   604,   456,   458,   459,   461,   487,
     489,   491,   492,  -176,  -176,  -176,  -176,   221,   252,   283,
     295,   326,  -176,  -176,  -176,  -176,   494,  -176,   505,   507,
     508,   510,   533,   539,   541,  -176,  -176,  -176,  -176,  -176,
    -176,   604,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,   604,   245,   141,  -176,   245,   604,
    -176,   436,   470,  -176,   245,   245,   245,   245,   245,   245,
     245,   537,   564,   357,   550,  -176,   585,  -176,   245,  -176,
     369,   400,   412,   443,   455,   486,   498,   540,   604,  -176,
     245,   529,   543,   545,   546,   548,   558,   570,    54,  -176,
    -176,   135,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,   245,  -176,  -176,    23,   245,   177,
     551,   542,   572,   553,   585,    78,  -176,  -176,   245,   591,
    -176,   573,  -176,  -176
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,   623,   614,   621,   622,   133,   -22,  -130,
    -145,  -175,   312,   169,   172,   195,  -176,   -91
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -76
static const yytype_int16 yytable[] =
{
     156,   207,   208,   209,   210,   211,   115,   116,   117,   118,
     120,    13,    99,   168,   169,   170,   171,   172,   173,   120,
     175,    15,     6,    63,    65,    15,    37,   185,    51,    63,
      46,    45,    86,    46,   312,     7,   212,    30,    31,    32,
      33,   100,   121,   218,   219,   220,   221,   222,   223,   224,
      14,   129,   122,     6,   183,   299,   313,   164,     1,     8,
      34,   122,    16,     2,    18,    38,    16,   186,    52,    22,
     263,    69,    87,   266,   113,   113,   113,   113,   113,   270,
     271,   272,   273,   274,   275,   276,   261,   301,   204,   302,
     303,    29,    26,   281,   184,   300,   165,    25,    48,    83,
      30,    31,    32,    33,   139,   291,   133,    28,   304,   178,
     101,   305,    58,    41,   262,   206,    59,    42,    60,   267,
     101,     9,   102,    34,    27,   306,     2,   307,   308,   311,
      49,    84,   109,   314,   140,   179,   113,   150,   134,    39,
      23,    61,    24,   321,   301,   204,   302,   303,   290,    40,
     151,    35,   152,   233,   234,   235,   236,   237,   238,   239,
     240,    43,   241,   242,   243,   304,    77,    55,   305,   153,
      50,    53,   206,    78,   264,   154,   155,   -44,   245,    29,
      44,   246,   306,   247,   307,   308,   265,    56,    30,    31,
      32,    33,   -75,    57,   -75,   233,   234,   235,   236,   237,
     238,   239,   240,    66,   241,   242,   243,    54,    -2,     9,
      72,    34,    62,   -75,     2,    71,    80,   -75,   -75,    67,
     245,    64,    70,   246,    73,   247,   112,    45,   315,    46,
      30,    31,    32,    33,    81,    30,    31,    32,    33,   233,
     234,   235,   236,   237,   238,   239,   240,    74,   241,   242,
     243,    75,   244,    34,   203,   204,   -29,     9,    34,    76,
      82,    79,     2,    85,   245,   -36,    88,   246,    89,   247,
     233,   234,   235,   236,   237,   238,   239,   240,   205,   241,
     242,   243,   206,   249,   104,   105,   106,   107,   108,   110,
     111,    90,    91,    92,    93,   245,    94,    95,   246,    96,
     247,   233,   234,   235,   236,   237,   238,   239,   240,   250,
     241,   242,   243,   233,   234,   235,   236,   237,   238,   239,
     240,    97,   241,   242,   243,   123,   245,    98,   141,   246,
     124,   247,   189,   190,   191,   192,   193,   194,   245,   251,
     119,   246,   125,   247,   233,   234,   235,   236,   237,   238,
     239,   240,   126,   241,   242,   243,   127,   252,   128,   217,
      30,    31,    32,    33,   130,   131,   135,   132,   136,   245,
     137,   138,   246,   142,   247,   233,   234,   235,   236,   237,
     238,   239,   240,    34,   241,   242,   243,   233,   234,   235,
     236,   237,   238,   239,   240,   282,   241,   242,   243,   143,
     245,   279,   144,   246,   149,   247,   145,   146,   147,   158,
     148,   157,   245,   159,   160,   246,   161,   247,   233,   234,
     235,   236,   237,   238,   239,   240,   283,   241,   242,   243,
     233,   234,   235,   236,   237,   238,   239,   240,   284,   241,
     242,   243,   162,   245,   163,   166,   246,   167,   247,   174,
     176,   177,   180,   268,   195,   245,   196,   197,   246,   198,
     247,   233,   234,   235,   236,   237,   238,   239,   240,   285,
     241,   242,   243,   233,   234,   235,   236,   237,   238,   239,
     240,   286,   241,   242,   243,   199,   245,   200,   201,   246,
     202,   247,   213,   214,   215,   216,   269,   225,   245,   226,
     227,   246,   228,   247,   233,   234,   235,   236,   237,   238,
     239,   240,   287,   241,   242,   243,   233,   234,   235,   236,
     237,   238,   239,   240,   288,   241,   242,   243,   229,   245,
     230,   231,   246,   232,   247,   253,    30,    31,    32,    33,
     254,   245,   255,   256,   246,   257,   247,   233,   234,   235,
     236,   237,   238,   239,   240,   292,   241,   242,   243,    68,
     233,   234,   235,   236,   237,   238,   239,   240,   258,   241,
     242,   243,   245,   317,   259,   246,   260,   247,   277,   278,
     280,   289,   316,   319,   293,   245,   294,   295,   246,   296,
     247,   233,   234,   235,   236,   237,   238,   239,   240,   297,
     241,   242,   243,   233,   234,   235,   236,   237,   238,   239,
     240,   298,   241,   242,   243,   318,   245,   323,   151,   246,
     152,   247,   322,     5,    19,    11,    12,   320,   245,     0,
       0,   246,     0,   247,     0,     0,     0,   153,     0,     0,
       0,     0,     0,   154,   155
};

static const yytype_int16 yycheck[] =
{
     130,   176,   177,   178,   179,   180,    97,    98,    99,   100,
       1,     1,     1,   143,   144,   145,   146,   147,   148,     1,
     150,     1,    33,    45,    46,     1,     1,   157,     1,    51,
       3,     1,     1,     3,    11,    33,   181,    10,    11,    12,
      13,    30,    33,   188,   189,   190,   191,   192,   193,   194,
      40,    33,    43,    33,     1,     1,    33,     1,     1,     0,
      33,    43,    42,     6,    40,    40,    42,   158,    41,     3,
     245,    41,    41,   248,    96,    97,    98,    99,   100,   254,
     255,   256,   257,   258,   259,   260,   231,     9,    10,    11,
      12,     1,     1,   268,    41,    41,    40,    33,     1,     1,
      10,    11,    12,    13,     1,   280,     1,    40,    30,    17,
       1,    33,     1,     1,   244,    37,     5,     5,     7,   249,
       1,     1,    13,    33,    33,    47,     6,    49,    50,   304,
      33,    33,    13,   308,    31,    43,   158,     1,    33,     5,
       1,    30,     3,   318,     9,    10,    11,    12,   278,     5,
      14,    18,    16,    18,    19,    20,    21,    22,    23,    24,
      25,    28,    27,    28,    29,    30,     1,     7,    33,    33,
      37,    38,    37,     8,    33,    39,    40,    41,    43,     1,
      33,    46,    47,    48,    49,    50,    45,     7,    10,    11,
      12,    13,    14,     7,    16,    18,    19,    20,    21,    22,
      23,    24,    25,    41,    27,    28,    29,    38,     0,     1,
       8,    33,    43,    35,     6,    41,    41,    39,    40,    50,
      43,     1,    53,    46,     8,    48,     1,     1,    51,     3,
      10,    11,    12,    13,    33,    10,    11,    12,    13,    18,
      19,    20,    21,    22,    23,    24,    25,     8,    27,    28,
      29,     8,    31,    33,     9,    10,     0,     1,    33,     8,
      33,     8,     6,    41,    43,    33,    30,    46,    30,    48,
      18,    19,    20,    21,    22,    23,    24,    25,    33,    27,
      28,    29,    37,    31,    89,    90,    91,    92,    93,    94,
      95,    30,    30,     1,    30,    43,    30,    30,    46,    30,
      48,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    18,    19,    20,    21,    22,    23,    24,
      25,    30,    27,    28,    29,    31,    43,    30,    43,    46,
      31,    48,   160,   161,   162,   163,   164,   165,    43,    44,
      33,    46,    31,    48,    18,    19,    20,    21,    22,    23,
      24,    25,    31,    27,    28,    29,    31,    31,    31,   187,
      10,    11,    12,    13,    31,     1,    31,    33,    31,    43,
      31,    31,    46,    44,    48,    18,    19,    20,    21,    22,
      23,    24,    25,    33,    27,    28,    29,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    40,
      43,    44,    40,    46,    43,    48,    40,    40,    40,    51,
      40,    40,    43,    40,    40,    46,    40,    48,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    40,    43,    40,    44,    46,    33,    48,    44,
      30,    30,    30,    17,    41,    43,    41,    41,    46,    41,
      48,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    41,    43,    41,    31,    46,
      41,    48,    41,    41,     1,    41,    26,    41,    43,    41,
      41,    46,    41,    48,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    41,    43,
      41,    40,    46,    41,    48,    41,    10,    11,    12,    13,
      35,    43,    35,    35,    46,    35,    48,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    33,
      18,    19,    20,    21,    22,    23,    24,    25,    35,    27,
      28,    29,    43,    31,    35,    46,    35,    48,    41,    15,
      30,    41,    31,    30,    41,    43,    41,    41,    46,    41,
      48,    18,    19,    20,    21,    22,    23,    24,    25,    41,
      27,    28,    29,    18,    19,    20,    21,    22,    23,    24,
      25,    41,    27,    28,    29,    43,    43,    44,    14,    46,
      16,    48,    31,     0,    10,     4,     4,   315,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    39,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,    53,    54,    55,    33,    33,     0,     1,
      55,    57,    58,     1,    40,     1,    42,    56,    40,    56,
      57,    58,     3,     1,     3,    33,     1,    33,    40,     1,
      10,    11,    12,    13,    33,    59,    60,     1,    40,     5,
       5,     1,     5,    59,    33,     1,     3,    65,     1,    33,
      59,     1,    41,    59,    65,     7,     7,     7,     1,     5,
       7,    30,    65,    60,     1,    60,    41,    65,    33,    41,
      65,    41,     8,     8,     8,     8,     8,     1,     8,     8,
      41,    33,    33,     1,    33,    41,     1,    41,    30,    30,
      30,    30,     1,    30,    30,    30,    30,    30,    30,     1,
      30,     1,    13,    67,    67,    67,    67,    67,    67,    13,
      67,    67,     1,    60,    69,    69,    69,    69,    69,    33,
       1,    33,    43,    31,    31,    31,    31,    31,    31,    33,
      31,     1,    33,     1,    33,    31,    31,    31,    31,     1,
      31,    43,    44,    40,    40,    40,    40,    40,    40,    43,
       1,    14,    16,    33,    39,    40,    61,    40,    51,    40,
      40,    40,    40,    40,     1,    40,    44,    33,    61,    61,
      61,    61,    61,    61,    44,    61,    30,    30,    17,    43,
      30,    61,    62,     1,    41,    61,    69,    59,    66,    66,
      66,    66,    66,    66,    66,    41,    41,    41,    41,    41,
      41,    31,    41,     9,    10,    33,    37,    63,    63,    63,
      63,    63,    62,    41,    41,     1,    41,    66,    62,    62,
      62,    62,    62,    62,    62,    41,    41,    41,    41,    41,
      41,    40,    41,    18,    19,    20,    21,    22,    23,    24,
      25,    27,    28,    29,    31,    43,    46,    48,    68,    31,
      26,    44,    31,    41,    35,    35,    35,    35,    35,    35,
      35,    62,    61,    63,    33,    45,    63,    61,    17,    26,
      63,    63,    63,    63,    63,    63,    63,    41,    15,    44,
      30,    63,    26,    26,    26,    26,    26,    26,    26,    41,
      61,    63,    26,    41,    41,    41,    41,    41,    41,     1,
      41,     9,    11,    12,    30,    33,    47,    49,    50,    63,
      64,    63,    11,    33,    63,    51,    31,    31,    43,    30,
      64,    63,    31,    44
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
        case 4:

/* Line 1455 of yacc.c  */
#line 95 "java.y"
    { yyerror ("expected `{` after class declaration "); YYABORT;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 96 "java.y"
    { yyerror ("main function must be public "); YYABORT;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 97 "java.y"
    { yyerror ("main function must be static "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 98 "java.y"
    { yyerror ("return type must be void "); YYABORT;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 99 "java.y"
    { yyerror ("missing main class "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 100 "java.y"
    { yyerror ("missing opening parentheses"); YYABORT;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 101 "java.y"
    { yyerror ("missing closing parentheses"); YYABORT;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 102 "java.y"
    { yyerror ("missing opening brackets"); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 103 "java.y"
    { yyerror ("missing closing brackets"); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 104 "java.y"
    { yyerror ("missing closing brackets"); YYABORT;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 107 "java.y"
    {class_id +=1;
// code_index  = lookup_class($2,class_id);
                            class_name = (yyvsp[(2) - (2)]);
                            // insert_code("ENTREE",code_index,"","CLASS");
                        ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 112 "java.y"
    { yyerror ("missing class notation"); YYABORT;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 116 "java.y"
    { yyerror ("missing extends notation"); YYABORT;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 117 "java.y"
    { yyerror ("missing Identifier"); YYABORT;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 120 "java.y"
    {
                            // insert_code("SORTIE",-1,"","CLASS");
                            // insert_code("RETOUR",retour+1,"","");
                        ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 124 "java.y"
    {
                            // insert_code("SORTIE",-1,"","CLASS");
                            // insert_code("RETOUR",retour+1,"","");
                        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 133 "java.y"
    { yyerror ("missing opening"); YYABORT;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 134 "java.y"
    { yyerror ("missing closing brackets"); YYABORT;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 139 "java.y"
    {
                            if(isParam){}
                                // set_param($2,$1);
                            else {
                                // code_index = lookup_variable($2,$1,level,class_id);
                                address++;
                            }
                        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 147 "java.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 148 "java.y"
    { yyerror ("Identifier is needed  "); YYABORT;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 149 "java.y"
    { (yyvsp[(1) - (1)]) = Int;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 150 "java.y"
    { (yyvsp[(1) - (1)]) = "bool";;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 151 "java.y"
    { (yyvsp[(1) - (1)]) = "string";;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 152 "java.y"
    { (yyvsp[(1) - (1)]) = "identifier";;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 153 "java.y"
    { (yyvsp[(1) - (1)]) = "char";;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 171 "java.y"
    {
                            // insert_code("SORTIE",-1,"","METHOD");
                            // insert_code("RETOUR",retour+1,"","");
                        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 175 "java.y"
    { yyerror ("missing public"); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 176 "java.y"
    { yyerror ("missing return type"); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 177 "java.y"
    { yyerror ("missing method name"); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 178 "java.y"
    { yyerror ("missing opening parentheses"); YYABORT;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 179 "java.y"
    { yyerror ("missing closing parentheses"); YYABORT;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 180 "java.y"
    { yyerror ("missing opening brackets"); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 181 "java.y"
    { yyerror ("missing closing brackets"); YYABORT;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 185 "java.y"
    {
                            // set_param($4,$1);
                        ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 189 "java.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 190 "java.y"
    { yyerror ("Identifier is needed  "); YYABORT;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 195 "java.y"
    {
                            // set_param($2,$1);
                        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 199 "java.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 200 "java.y"
    { yyerror ("Identifier is needed  "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2020 "java.tab.c"
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
#line 202 "java.y"
 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
 
}

