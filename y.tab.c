/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "project.y" /* yacc.c:339  */

    #include <stdio.h>
    #include "symboltable.h"
    #include "file.h"
    void yyerror(char *);
    int yylex(void);
    extern FILE *yyin;
    extern int linenum;
    char writeBuffer[100];
    FILE *outputFile;
    char writeBuf[100];
    char writeBuf2[100];
    char writeBuf3[100];
    int memory=10;int tmpco=1;int mulco=1; int flagIF=1;int ifco=1; int elseco=1; int exco=1; 
    int IFBLOCK=0;

#line 83 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    VARIABLE = 259,
    MINUSOP = 260,
    PLUSOP = 261,
    OPENPAR = 262,
    CLOSEPAR = 263,
    DIVIDEOP = 264,
    MULTOP = 265,
    ASSIGNOP = 266,
    ECHOSTMT = 267,
    SEMICOLON = 268,
    INTRSW = 269,
    INCLD = 270,
    MAIN = 271,
    ELSE = 272,
    IF = 273,
    RTN = 274,
    OPNBRCKT = 275,
    CLSBRCKT = 276,
    COMMA = 277,
    BIGGER = 278,
    LESS = 279,
    EQUAL = 280
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define VARIABLE 259
#define MINUSOP 260
#define PLUSOP 261
#define OPENPAR 262
#define CLOSEPAR 263
#define DIVIDEOP 264
#define MULTOP 265
#define ASSIGNOP 266
#define ECHOSTMT 267
#define SEMICOLON 268
#define INTRSW 269
#define INCLD 270
#define MAIN 271
#define ELSE 272
#define IF 273
#define RTN 274
#define OPNBRCKT 275
#define CLSBRCKT 276
#define COMMA 277
#define BIGGER 278
#define LESS 279
#define EQUAL 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "project.y" /* yacc.c:355  */

int number;
char *string;

#line 178 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   112

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  26
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  100

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    32,    34,    36,    39,    41,    43,    45,
      47,    49,    51,    53,    55,    57,    60,    62,    64,    66,
      68,    70,    73,    92,   111,   113,   116,   125,   132,   146,
     160,   173,   187,   200,   213,   232,   246,   261,   280,   282,
     295,   338,   376,   420
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "VARIABLE", "MINUSOP",
  "PLUSOP", "OPENPAR", "CLOSEPAR", "DIVIDEOP", "MULTOP", "ASSIGNOP",
  "ECHOSTMT", "SEMICOLON", "INTRSW", "INCLD", "MAIN", "ELSE", "IF", "RTN",
  "OPNBRCKT", "CLSBRCKT", "COMMA", "BIGGER", "LESS", "EQUAL", "$accept",
  "first", "second", "program", "elseblock", "checkIf", "noElse",
  "printBRA", "checkElse", "endofIfBlock", "state", "statement",
  "expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -37

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -12,    58,     6,    -2,    15,   -60,     9,   -60,    73,    27,
      19,    58,    16,   -60,    78,    69,    10,    42,    52,   -60,
     -60,    63,    78,    78,    78,    43,    39,   -60,    44,   -60,
      53,    53,   -60,    42,    75,    42,    41,   -60,    61,   -60,
      62,    77,    68,    76,    42,    78,    85,    41,   -60,    82,
      30,    79,   -60,     0,    78,    78,    70,    41,    80,    69,
      69,   -60,    74,    81,    81,    83,    41,   -60,    41,   -60,
      84,     4,   -60,    41,   -60,    41,    87,    41,    86,   -60,
     -60,    78,    88,   -60,    89,   -60,   -60,    37,   -60,    41,
      90,    91,    81,    81,   -60,   -60,   -60,   -60,   -60,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     0,     1,     0,    35,
       0,     3,    38,    39,     0,    37,     0,     0,     0,     4,
      38,     0,     0,     0,     0,    34,    28,    32,     0,    43,
      41,    40,    42,     0,     0,     0,     0,    33,    30,    29,
       0,     0,     0,     0,     0,     0,     0,     6,    31,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,    22,
      23,     5,     0,    24,    24,    26,    11,    27,     9,    27,
       0,     0,    10,    12,     8,    15,     0,     0,     0,    13,
      14,     0,     0,    27,     0,    27,    16,     0,    17,     0,
       0,     0,    25,    25,    19,    27,    20,    27,    18,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,    93,   -45,   -59,    24,    32,   -50,   -60,   -58,
      23,    -1,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     5,    42,    66,    49,    67,    70,    71,    73,
      27,    43,    50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       6,    15,    52,     1,     3,    68,     7,    21,     3,     8,
       6,    75,    62,    25,    40,    30,    31,    32,    40,     9,
      57,    72,    11,    74,    77,    86,    18,    88,    79,   -36,
      80,    10,    82,    94,    96,    22,    23,    98,    16,    99,
      24,     3,    95,    97,    91,     3,    26,    59,    60,    17,
      34,    40,    58,    54,    55,    40,    37,    89,    39,    41,
      28,    35,     3,    24,    36,    33,     9,    48,    22,    23,
      78,    29,     4,    24,    22,    23,    12,    13,    38,    24,
      14,    20,    13,    44,    45,    14,    90,    46,    51,    47,
      53,    61,    56,    63,    81,    64,    69,    87,    65,    83,
       0,   -25,    76,    92,    19,    84,     0,     0,     0,    85,
       0,     0,    93
};

static const yytype_int8 yycheck[] =
{
       1,     8,    47,    15,     4,    64,     0,    14,     4,    11,
      11,    69,    57,     3,    14,    22,    23,    24,    14,     4,
      20,    66,    13,    68,    20,    83,     7,    85,    73,    13,
      75,    16,    77,    92,    93,     5,     6,    95,    11,    97,
      10,     4,    92,    93,    89,     4,     4,    54,    55,    22,
      11,    14,    53,    23,    24,    14,    33,    20,    35,    18,
       8,    22,     4,    10,    20,    22,     4,    44,     5,     6,
      71,     8,    14,    10,     5,     6,     3,     4,     3,    10,
       7,     3,     4,    22,     7,     7,    87,    19,     3,    13,
       8,    21,    13,    13,     7,    21,    64,     8,    17,    13,
      -1,    18,    18,    13,    11,    81,    -1,    -1,    -1,    21,
      -1,    -1,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    27,     4,    14,    28,    37,     0,    11,     4,
      16,    13,     3,     4,     7,    38,    11,    22,     7,    28,
       3,    38,     5,     6,    10,     3,     4,    36,     8,     8,
      38,    38,    38,    22,    11,    22,    20,    36,     3,    36,
      14,    18,    29,    37,    22,     7,    19,    13,    36,    31,
      38,     3,    29,     8,    23,    24,    13,    20,    37,    38,
      38,    21,    29,    13,    21,    17,    30,    32,    30,    32,
      33,    34,    29,    35,    29,    35,    18,    20,    37,    29,
      29,     7,    29,    13,    31,    21,    35,     8,    35,    20,
      37,    29,    13,    21,    30,    33,    30,    33,    35,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    26,    27,    28,    28,    28,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    30,    30,    30,    30,
      30,    30,    31,    31,    32,    33,    34,    35,    36,    36,
      36,    36,    37,    37,    37,    37,    37,    37,    38,    38,
      38,    38,    38,    38
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,    10,     2,     3,     9,     8,
       8,     7,     8,     9,    10,     9,     5,     6,    10,     9,
      10,    11,     3,     3,     0,     0,     0,     0,     1,     3,
       3,     5,     4,     6,     4,     2,     3,     3,     1,     1,
       3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 22:
#line 73 "project.y" /* yacc.c:1646  */
    { 
		printf("CHECKIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK);
		symbol_table_entry *entry,*entry2; int firstval,secondval;
		entry=findIdent((yyvsp[-2].string),symbol_table_head); 
		if(entry==NULL){  sprintf(writeBuf,"\tLDAA #%s\n",(yyvsp[-2].string));writeLinetoFile(writeBuf,outputFile);firstval=atoi((yyvsp[-2].string));
		}else {sprintf(writeBuf,"\tLDAA $%d\n",entry->mem);writeLinetoFile(writeBuf,outputFile);firstval=atoi(entry->val);}

		entry2=findIdent((yyvsp[0].string),symbol_table_head);
	        if(entry2==NULL){ sprintf(writeBuf,"IF%d     CMPA #%s\n\tBLE ELSE%d\n",ifco,(yyvsp[0].string),elseco);ifco++;  writeLinetoFile(writeBuf,outputFile); secondval=atoi((yyvsp[0].string));}
		else {sprintf(writeBuf,"IF%d     CMPA $%d\n\tBLE ELSE%d\n",ifco,entry2->mem,elseco);ifco++;  writeLinetoFile(writeBuf,outputFile); 
			secondval=atoi(entry2->val);}

		if(firstval>secondval)	{
			if(IFBLOCK==0){ flagIF=1; IFBLOCK=1;}else {flagIF=0;}
		}else { flagIF=0;}
		printf("CHECKIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK);
	
	}
#line 1350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 92 "project.y" /* yacc.c:1646  */
    { 
		printf("CHECKIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK);
		symbol_table_entry *entry,*entry2; int firstval,secondval;
		entry=findIdent((yyvsp[-2].string),symbol_table_head); 
		if(entry==NULL){  sprintf(writeBuf,"\tLDAA #%s\n",(yyvsp[-2].string));writeLinetoFile(writeBuf,outputFile);firstval=atoi((yyvsp[-2].string));
		}else {sprintf(writeBuf,"\tLDAA $%d\n",entry->mem);writeLinetoFile(writeBuf,outputFile);firstval=atoi(entry->val);}

		entry2=findIdent((yyvsp[0].string),symbol_table_head);
	        if(entry2==NULL){ sprintf(writeBuf,"IF%d     CMPA #%s\n\tBGE ELSE%d\n",ifco,(yyvsp[0].string),elseco);ifco++;  writeLinetoFile(writeBuf,outputFile); secondval=atoi((yyvsp[0].string));}
		else {sprintf(writeBuf,"IF%d     CMPA $%d\n\tBGE ELSE%d\n",ifco,entry2->mem,elseco);ifco++;  writeLinetoFile(writeBuf,outputFile); 
			secondval=atoi(entry2->val);}

		if(firstval<secondval)	{
			if(IFBLOCK==0){ flagIF=1; IFBLOCK=1;}else {flagIF=0;}
		}else { flagIF=0;}
		printf("CHECKIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK);
	
	}
#line 1373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 111 "project.y" /* yacc.c:1646  */
    { sprintf(writeBuf,"\tBRA EXIT%d\nELSE%d   NOP\n",exco,elseco);elseco++;writeLinetoFile(writeBuf,outputFile);  }
#line 1379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 113 "project.y" /* yacc.c:1646  */
    {sprintf(writeBuf,"\tBRA EXIT%d\nELSE%d   NOP\n",exco,elseco);elseco++;writeLinetoFile(writeBuf,outputFile);}
#line 1385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "project.y" /* yacc.c:1646  */
    {  sprintf(writeBuf,"\tBRA EXIT%d\nELSE%d   NOP\n",exco,elseco);elseco++;writeLinetoFile(writeBuf,outputFile); 
		 printf("FLAGIF:%d\n",flagIF);
		if(IFBLOCK==0){
			flagIF=1;
			IFBLOCK=1;
		 }else { flagIF=0;  }
		printf("FLAGIF:%d\n",flagIF);
}
#line 1398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 125 "project.y" /* yacc.c:1646  */
    {sprintf(writeBuf,"EXIT%d   NOP\n",exco); exco++;writeLinetoFile(writeBuf,outputFile); 
		printf("ENDIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK);
		flagIF=1;IFBLOCK=0;
		printf("ENDIF->FLAGIF:%d ->IFBLOCK:%d\n",flagIF,IFBLOCK); }
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 132 "project.y" /* yacc.c:1646  */
    { 
		symbol_table_entry *entry;
		entry=findIdent((yyvsp[0].string),symbol_table_head);
		if(entry==NULL){
		printf("sa:%s ->mem:%d",(yyvsp[0].string),memory);
		sprintf(writeBuf,"\tLDAA #0\n\tSTAA $%d\n",memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable("0",memory,(yyvsp[0].string),&symbol_table_head); 
			memory++;
			}
		}
	 }
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 146 "project.y" /* yacc.c:1646  */
    { printf("SA4:::%s\n",(yyvsp[-2].string));
		symbol_table_entry *entry;
		entry=findIdent((yyvsp[-2].string),symbol_table_head);
		if(entry==NULL){
		printf("sa:%s ->mem:%d",(yyvsp[-2].string),memory);
		sprintf(writeBuf,"\tLDAA #0\n\tSTAA $%d\n",memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable("0",memory,(yyvsp[-2].string),&symbol_table_head);
			memory++;
			}
		}
	 }
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 160 "project.y" /* yacc.c:1646  */
    { printf("SA2:::%s -> %s\n",(yyvsp[-2].string),(yyvsp[0].string));
		symbol_table_entry *entry;
		entry=findIdent((yyvsp[-2].string),symbol_table_head);
		if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",(yyvsp[0].string),memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable((yyvsp[0].string),memory,(yyvsp[-2].string),&symbol_table_head);
			memory++;
			} 
		}
	}
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 173 "project.y" /* yacc.c:1646  */
    { printf("SA3:::%s -> %s\n",(yyvsp[-4].string),(yyvsp[-2].string));
		symbol_table_entry *entry;
		entry=findIdent((yyvsp[-4].string),symbol_table_head);
		if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",(yyvsp[-2].string),memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable((yyvsp[-2].string),memory,(yyvsp[-4].string),&symbol_table_head);
			memory++;
			}
		} 
	}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 187 "project.y" /* yacc.c:1646  */
    { 
		symbol_table_entry *entry;
		entry=findIdent((yyvsp[-2].string),symbol_table_head);
		if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #0\n\tSTAA $%d\n",memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable("0",memory,(yyvsp[-2].string),&symbol_table_head);
			memory++;
			}
		} 
	}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 200 "project.y" /* yacc.c:1646  */
    { 
		symbol_table_entry *entry;
		entry=findIdent((yyvsp[-4].string),symbol_table_head);
		if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",(yyvsp[-2].string),memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable((yyvsp[-2].string),memory,(yyvsp[-4].string),&symbol_table_head);
			memory++;
			} 
		}
	}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 213 "project.y" /* yacc.c:1646  */
    {

		symbol_table_entry *entry;
		entry=findIdent((yyvsp[-2].string),symbol_table_head);
		if(entry!=NULL){
		sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",(yyvsp[0].string),entry->mem);
		writeLinetoFile(writeBuf,outputFile);
		if(flagIF==1){
			entry->val=(yyvsp[0].string);
			}
		}else if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",(yyvsp[0].string),memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			addToSymbolTable((yyvsp[0].string),memory,(yyvsp[-2].string),&symbol_table_head);
			memory++;
			}
		} }
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 232 "project.y" /* yacc.c:1646  */
    { 

		symbol_table_entry *entry;
		entry=findIdent((yyvsp[0].string),symbol_table_head);
		if(entry==NULL){
		sprintf(writeBuf,"\tLDAA #0\n\tSTAA $%d\n",memory);
		writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
				addToSymbolTable("0",memory,(yyvsp[0].string),&symbol_table_head);
				memory++;
			}	
		} 
	}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 247 "project.y" /* yacc.c:1646  */
    {
		symbol_table_entry *entry,*entry2;
  		entry=findIdent((yyvsp[-2].string),symbol_table_head);
		if(entry==NULL){
			exit(0);
		}else{
			sprintf(writeBuf,"\tLDAA #%s\n\tSTAA $%d\n",(yyvsp[0].string),entry->mem);
			writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			entry->val=(yyvsp[0].string);
			}
		} 
	}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 262 "project.y" /* yacc.c:1646  */
    { 
		symbol_table_entry *entry,*entry2;
  		entry=findIdent((yyvsp[-2].string),symbol_table_head);
		if(entry==NULL){
			exit(0);
		}else{
			entry2=findIdent((yyvsp[0].string),symbol_table_head);	
			int val=atoi(entry2->val);
			printf("VAL:%d\n",val);
			sprintf(writeBuf,"\tLDAA $%d\n\tSTAA $%d\n",entry2->mem,entry->mem);
			writeLinetoFile(writeBuf,outputFile);
			if(flagIF==1){
			entry->val=entry2->val;
			}
		}
  }
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 280 "project.y" /* yacc.c:1646  */
    { (yyval.string)=(yyvsp[0].string);}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 283 "project.y" /* yacc.c:1646  */
    { 
		symbol_table_entry *entry;
		entry=findIdent((yyvsp[0].string),symbol_table_head);
		if(entry==NULL){
			exit(0);
		}else{
			
			(yyval.string)=entry->ident;	
		//printf("%s",writeBuf3);		
		}
	}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 295 "project.y" /* yacc.c:1646  */
    { printf("$1:%s\n",(yyvsp[-2].string)); printf("$3:%s\n",(yyvsp[0].string));
						
						symbol_table_entry *entry;
						int firstval,secondval;
						entry=findIdent((yyvsp[-2].string),symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tLDAA #%s\n",(yyvsp[-2].string));
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi((yyvsp[-2].string));
						}else {
							printf("MEM:%d\n",entry->mem);
							sprintf(writeBuf,"\tLDAA $%d\n",entry->mem);
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi(entry->val);
							printf("val:%d\n",firstval);
						}	
						entry=findIdent((yyvsp[0].string),symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tADDA #%s\n",(yyvsp[0].string));
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi((yyvsp[0].string));
						}else {
							//printf("%d",entry->mem);
							sprintf(writeBuf,"\tADDA $%d\n",entry->mem);
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi(entry->val);
							//printf("val:%d",secondval);
						}	
						char *ident=malloc(sizeof(writeBuf));
						char *w=malloc(sizeof(ident));
						sprintf(ident,"tmp%d",tmpco);tmpco++;
						printf("%s->",ident);
						printf("first:%d second:%d\n",firstval,secondval);
						printf("THIS:%d\n",firstval+secondval);
						sprintf(w,"%d",firstval+secondval);
						sprintf(writeBuf,"\tSTAA $%d\n",memory);
						writeLinetoFile(writeBuf,outputFile);
						addToSymbolTable(w,memory,ident,&symbol_table_head);
						memory++;
		
						(yyval.string)=ident;
					}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 338 "project.y" /* yacc.c:1646  */
    { 	
						symbol_table_entry *entry;
						int firstval,secondval;
						entry=findIdent((yyvsp[-2].string),symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tLDAA #%s\n",(yyvsp[-2].string));
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi((yyvsp[-2].string));
						}else {
							sprintf(writeBuf,"\tLDAA $%d\n",entry->mem);
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi(entry->val);
						}
						entry=findIdent((yyvsp[0].string),symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tSUBA #%s\n",(yyvsp[0].string));
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi((yyvsp[0].string));
						}else {
							sprintf(writeBuf,"\tSUBA $%d\n",entry->mem);
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi(entry->val);
						}
						char *ident=malloc(sizeof(writeBuf));
						char *w=malloc(sizeof(writeBuf));
						sprintf(ident,"tmp%d",tmpco);tmpco++;
						printf("%s->",ident);
						printf("first:%d second:%d\n",firstval,secondval);
						printf("THIS:%d\n",firstval-secondval);
						sprintf(w,"%d",firstval-secondval);
						sprintf(writeBuf,"\tSTAA $%d\n",memory);
						writeLinetoFile(writeBuf,outputFile);
						addToSymbolTable(w,memory,ident,&symbol_table_head);
						memory++;
						
						(yyval.string)=ident;
}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 376 "project.y" /* yacc.c:1646  */
    { 	

						symbol_table_entry *entry;
						int firstval,secondval;
						entry=findIdent((yyvsp[-2].string),symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tCLRA\n");
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi((yyvsp[-2].string));
							sprintf(writeBuf3,"#%s",(yyvsp[-2].string));
						}else {
							sprintf(writeBuf,"\tCLRA\n");
							writeLinetoFile(writeBuf,outputFile);
							firstval=atoi(entry->val);
							sprintf(writeBuf3,"$%d",entry->mem);
						}
						entry=findIdent((yyvsp[0].string),symbol_table_head);
						if(entry==NULL){
							sprintf(writeBuf,"\tLDAB #%s\n",(yyvsp[0].string));
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi((yyvsp[0].string));
						}else {
							sprintf(writeBuf,"\tLDAB $%d\n",entry->mem);
							writeLinetoFile(writeBuf,outputFile);
							secondval=atoi(entry->val);
						}
						char *ident=malloc(sizeof(writeBuf));
						char *w=malloc(sizeof(ident));
						sprintf(ident,"tmp%d",tmpco);tmpco++;
						printf("%s->",ident);
						printf("first:%d second:%d\n",firstval,secondval);
						printf("THIS:%d\n",firstval*secondval);
						sprintf(w,"%d",firstval*secondval);
						sprintf(writeBuf2,"MUL%d    BEQ STOP%d\n\tADDA %s\n\tDECB\n\tBRA MUL%d\n",mulco,mulco,writeBuf3,mulco);
						writeLinetoFile(writeBuf2,outputFile);
						sprintf(writeBuf,"STOP%d   STAA $%d\n",mulco,memory);
						writeLinetoFile(writeBuf,outputFile);
						addToSymbolTable(w,memory,ident,&symbol_table_head);
						memory++;mulco++;
						
						
						(yyval.string)=ident; 
			}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 420 "project.y" /* yacc.c:1646  */
    { (yyval.string) = strdup((yyvsp[-1].string)); }
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1760 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 423 "project.y" /* yacc.c:1906  */

void yyerror(char *s) {
    fprintf(stderr, "%s\n ++++ %d", s,linenum);
}
int yywrap(){
	return 1;
}
int main(int argc, char *argv[])
{
    /* Call the lexer, then quit. */
    symbol_table_head=NULL;
    openFile(argv[2],&outputFile);
    yyin=fopen(argv[1],"r");
    yyparse();
    fclose(yyin);
    printAllSymbolElementsToFile(symbol_table_head,outputFile);
    closeFile(outputFile);
    return 0;
}
