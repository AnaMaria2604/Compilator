/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

#include "Compilator.h"
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <cstring>
using namespace std;

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char* s);

#line 87 "limbaj.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLASSSTOP = 3,                  /* CLASSSTOP  */
  YYSYMBOL_CLASSSTART = 4,                 /* CLASSSTART  */
  YYSYMBOL_ENDF = 5,                       /* ENDF  */
  YYSYMBOL_ENDIF = 6,                      /* ENDIF  */
  YYSYMBOL_OR = 7,                         /* OR  */
  YYSYMBOL_AND = 8,                        /* AND  */
  YYSYMBOL_ENDW = 9,                       /* ENDW  */
  YYSYMBOL_ENDFOR = 10,                    /* ENDFOR  */
  YYSYMBOL_BGIN = 11,                      /* BGIN  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_ASSIGN = 13,                    /* ASSIGN  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_TYPEOF = 18,                    /* TYPEOF  */
  YYSYMBOL_EVAL = 19,                      /* EVAL  */
  YYSYMBOL_ID = 20,                        /* ID  */
  YYSYMBOL_TYPE = 21,                      /* TYPE  */
  YYSYMBOL_CONST = 22,                     /* CONST  */
  YYSYMBOL_ADEV = 23,                      /* ADEV  */
  YYSYMBOL_FALS = 24,                      /* FALS  */
  YYSYMBOL_DATA = 25,                      /* DATA  */
  YYSYMBOL_METODE = 26,                    /* METODE  */
  YYSYMBOL_INIT = 27,                      /* INIT  */
  YYSYMBOL_NR = 28,                        /* NR  */
  YYSYMBOL_29_ = 29,                       /* ','  */
  YYSYMBOL_30_ = 30,                       /* '+'  */
  YYSYMBOL_31_ = 31,                       /* '-'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_33_ = 33,                       /* '/'  */
  YYSYMBOL_34_ = 34,                       /* '>'  */
  YYSYMBOL_35_ = 35,                       /* '<'  */
  YYSYMBOL_36_ = 36,                       /* ">="  */
  YYSYMBOL_37_ = 37,                       /* "<="  */
  YYSYMBOL_38_ = 38,                       /* "=="  */
  YYSYMBOL_39_ = 39,                       /* "!="  */
  YYSYMBOL_40_ = 40,                       /* ';'  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* '['  */
  YYSYMBOL_44_ = 44,                       /* ']'  */
  YYSYMBOL_45_ = 45,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_algoritm = 47,                  /* algoritm  */
  YYSYMBOL_declarari = 48,                 /* declarari  */
  YYSYMBOL_tipuri_declarari = 49,          /* tipuri_declarari  */
  YYSYMBOL_declarare_var = 50,             /* declarare_var  */
  YYSYMBOL_declarare_func = 51,            /* declarare_func  */
  YYSYMBOL_lista_variabile = 52,           /* lista_variabile  */
  YYSYMBOL_functie_par = 53,               /* functie_par  */
  YYSYMBOL_interior_functii_cu_param = 54, /* interior_functii_cu_param  */
  YYSYMBOL_interior_functii_fara_param = 55, /* interior_functii_fara_param  */
  YYSYMBOL_list_param = 56,                /* list_param  */
  YYSYMBOL_param = 57,                     /* param  */
  YYSYMBOL_main = 58,                      /* main  */
  YYSYMBOL_interior_main = 59,             /* interior_main  */
  YYSYMBOL_tipuri_de_structuri = 60,       /* tipuri_de_structuri  */
  YYSYMBOL_bucla_if = 61,                  /* bucla_if  */
  YYSYMBOL_bucla_while = 62,               /* bucla_while  */
  YYSYMBOL_bucla_for = 63,                 /* bucla_for  */
  YYSYMBOL_statements = 64,                /* statements  */
  YYSYMBOL_evaluare = 65,                  /* evaluare  */
  YYSYMBOL_tipeof = 66,                    /* tipeof  */
  YYSYMBOL_conditie = 67,                  /* conditie  */
  YYSYMBOL_op = 68,                        /* op  */
  YYSYMBOL_cond_for = 69,                  /* cond_for  */
  YYSYMBOL_expr2 = 70,                     /* expr2  */
  YYSYMBOL_expr = 71,                      /* expr  */
  YYSYMBOL_list_param2 = 72,               /* list_param2  */
  YYSYMBOL_param3 = 73,                    /* param3  */
  YYSYMBOL_declarare_clasa = 74,           /* declarare_clasa  */
  YYSYMBOL_INTERIORCLASA = 75,             /* INTERIORCLASA  */
  YYSYMBOL_initializare = 76               /* initializare  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,    32,    30,    29,    31,    45,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
      35,     2,    34,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    48,    49,    52,    53,    54,    57,    58,
      61,    62,    65,    66,    67,    68,    71,    72,    73,    74,
      75,    76,    77,    80,    81,    82,    85,    86,    89,    90,
      93,    96,    99,   100,   101,   102,   105,   106,   107,   110,
     111,   114,   115,   118,   121,   132,   142,   150,   158,   159,
     167,   175,   176,   179,   182,   186,   187,   188,   191,   192,
     193,   194,   195,   196,   199,   206,   207,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   223,   224,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   240,   243,   246
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CLASSSTOP",
  "CLASSSTART", "ENDF", "ENDIF", "OR", "AND", "ENDW", "ENDFOR", "BGIN",
  "END", "ASSIGN", "IF", "ELSE", "WHILE", "FOR", "TYPEOF", "EVAL", "ID",
  "TYPE", "CONST", "ADEV", "FALS", "DATA", "METODE", "INIT", "NR", "','",
  "'+'", "'-'", "'*'", "'/'", "'>'", "'<'", "\">=\"", "\"<=\"", "\"==\"",
  "\"!=\"", "';'", "'('", "')'", "'['", "']'", "'.'", "$accept",
  "algoritm", "declarari", "tipuri_declarari", "declarare_var",
  "declarare_func", "lista_variabile", "functie_par",
  "interior_functii_cu_param", "interior_functii_fara_param", "list_param",
  "param", "main", "interior_main", "tipuri_de_structuri", "bucla_if",
  "bucla_while", "bucla_for", "statements", "evaluare", "tipeof",
  "conditie", "op", "cond_for", "expr2", "expr", "list_param2", "param3",
  "declarare_clasa", "INTERIORCLASA", "initializare", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-87)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-49)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      70,    -2,     2,    28,    89,    18,   -87,   -87,   -87,    10,
      -7,    47,    42,   -87,   183,    39,   -87,   -87,    61,   103,
      74,    79,    88,    42,   110,    97,   131,   151,   154,   155,
      -5,   119,   159,   -87,   -87,   -87,   -87,   113,   -87,   -87,
     -87,    46,   180,   -87,    60,   196,   163,   -87,   -87,   -87,
      70,     9,   189,   -87,   190,   118,   176,   178,   163,    85,
     149,   163,   163,   163,   194,   203,    14,   -87,   -87,   184,
     -87,   204,    98,   198,   -87,   199,    51,   222,    66,   200,
     209,   161,   163,   163,   163,   163,   -87,   205,     8,   126,
     220,    12,   192,   104,   112,   118,   191,   221,   163,   208,
     217,   -87,   218,   212,    71,   -87,   -87,   -87,   -87,   -19,
     181,   197,   161,   149,   -87,   195,    52,   235,   -87,   163,
     -87,   189,   118,    57,    57,   -87,   -87,   201,   163,   163,
     220,   -87,   -87,   -87,   -87,   -87,   -87,   163,   233,   220,
     163,   -87,   -87,   230,   163,   118,   202,   231,   206,   228,
     105,   223,   170,   -87,   170,   170,   170,   170,   -87,   224,
     -87,     4,   149,   -87,   -87,   241,   -87,    54,   118,   -87,
     243,     6,   163,   118,   237,   163,   213,   -87,   -87,   -17,
     211,   181,    87,    87,   -87,   -87,   161,   229,   -87,   -87,
     220,   -87,   236,   118,   163,   118,   216,   -87,   -87,   200,
     215,   254,   248,   225,   118,   226,   237,   -87,   163,   220,
     -87,   118,   252,   -87
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
      12,     0,     8,     1,     0,     0,     2,     3,     0,     0,
       0,     0,    12,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    36,    37,    38,     0,    51,    52,
       4,     0,     0,    91,    67,     0,     0,    68,    69,    70,
       0,     0,    16,    28,    19,    65,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    31,    35,     0,
      32,     0,     0,     0,    30,    21,    26,     0,     0,    18,
       0,     0,     0,     0,     0,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,    44,     0,     0,     0,     0,
       0,    33,     0,     0,    80,    83,    84,    82,    73,     0,
      78,     0,     0,     0,    11,     0,    23,     0,    25,     0,
      29,    17,    66,    74,    75,    77,    76,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,     0,     0,     0,
       0,    54,    53,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,    71,    20,
      27,    12,     0,    10,    15,    55,    56,     0,    57,    42,
       0,     0,     0,    46,     0,     0,     0,    92,    85,     0,
       0,    79,    87,    88,    90,    89,     0,     0,    24,    39,
       0,    41,     0,    45,     0,    50,     0,    86,    81,    22,
       0,     0,     0,     0,    49,     0,    14,    40,     0,     0,
      93,    64,     0,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -87,   -39,    -1,   245,   193,   257,   -87,   -87,   -87,
     -60,   -75,   -86,   -87,   238,   -87,   -87,   -87,   -30,   -87,
     -87,   -52,   -87,   -87,   -45,   -20,   115,    53,   -87,   -87,
     -87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,     7,    12,    51,   117,    77,
      52,    53,    16,    32,    33,    34,    35,    36,    37,    38,
      39,    88,   137,   203,    54,    89,   109,   110,     8,    19,
     177
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    75,    69,    15,   138,   120,    79,    91,    63,   -48,
     152,    76,   152,   128,   129,   128,   129,    98,     9,   128,
     129,   121,    10,   153,    11,   197,    55,    98,    13,    44,
      92,    55,    47,    48,    20,    18,    21,    49,    64,   116,
      65,    93,    94,    95,   167,    20,   192,   187,   118,   100,
     130,    78,   159,   170,   139,     1,     1,    99,    17,   100,
     189,   122,   123,   124,   125,   126,    22,    22,    11,   190,
       1,    24,     2,     2,     1,    15,   165,   166,   145,    40,
     113,   162,    41,   160,    28,    29,    30,   115,   171,    84,
      85,     2,   122,     1,    44,    45,    46,    47,    48,   122,
      14,    72,    49,    73,   201,    44,    43,    56,    47,    48,
       2,   120,   150,    49,   151,    15,    50,   168,   104,   156,
     157,   105,   106,   212,   173,   104,   107,    90,   105,   106,
      57,    21,   188,   107,    82,    83,    84,    85,    58,    66,
     108,   199,    82,    83,    84,    85,   141,   178,    82,    83,
      84,    85,   193,    70,   142,   195,    82,    83,    84,    85,
     131,   132,   133,   134,   135,   136,    55,    28,    29,    30,
      31,    67,    59,    25,   204,    26,    27,    28,    29,    30,
      31,    44,    45,    44,    47,    48,    47,    48,   211,    49,
     104,    49,    60,   105,   106,    61,    62,    25,   107,    26,
      27,    28,    29,    30,    31,   181,    71,   182,   183,   184,
     185,   154,   155,   156,   157,   161,    74,    11,    80,    81,
      86,    87,    96,    97,   101,   102,   111,   114,   112,   119,
      45,    14,   140,   127,   144,   143,   146,   147,   148,   149,
     163,   158,   169,   172,   175,   164,   174,    20,   176,   129,
     194,   180,   191,   186,   196,   198,   202,   200,   205,   206,
     207,   208,   213,    42,   103,   179,   210,   209,    23,     0,
      68
};

static const yytype_int16 yycheck[] =
{
      20,    46,    32,     4,    90,    80,    51,    59,    13,     5,
      29,    50,    29,     7,     8,     7,     8,    13,    20,     7,
       8,    81,    20,    42,    22,    42,    46,    13,     0,    20,
      60,    51,    23,    24,    41,    25,    43,    28,    43,    78,
      45,    61,    62,    63,   130,    41,    40,    43,    78,    45,
      42,    42,   112,   139,    42,     4,     4,    43,    40,    45,
       6,    81,    82,    83,    84,    85,    20,    20,    22,    15,
       4,    29,    21,    21,     4,    76,   128,   129,    98,    40,
      29,    29,    21,   113,    18,    19,    20,    21,   140,    32,
      33,    21,   112,     4,    20,    21,    22,    23,    24,   119,
      11,    41,    28,    43,   190,    20,     3,    28,    23,    24,
      21,   186,    41,    28,    43,   116,    42,   137,    20,    32,
      33,    23,    24,   209,   144,    20,    28,    42,    23,    24,
      20,    43,   162,    28,    30,    31,    32,    33,    41,    20,
      42,   186,    30,    31,    32,    33,    42,    42,    30,    31,
      32,    33,   172,    40,    42,   175,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,   186,    18,    19,    20,
      21,    12,    41,    14,   194,    16,    17,    18,    19,    20,
      21,    20,    21,    20,    23,    24,    23,    24,   208,    28,
      20,    28,    41,    23,    24,    41,    41,    14,    28,    16,
      17,    18,    19,    20,    21,   152,    26,   154,   155,   156,
     157,    30,    31,    32,    33,    20,    20,    22,    29,    29,
      44,    43,    28,    20,    40,    21,    28,     5,    29,    29,
      21,    11,    40,    28,    13,    44,    28,    20,    20,    27,
       5,    44,     9,    13,    13,    44,    44,    41,    20,     8,
      13,    28,     9,    29,    41,    44,    20,    28,    42,    44,
       6,    13,    10,    18,    71,   150,    40,    42,    11,    -1,
      32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    21,    47,    48,    49,    50,    51,    74,    20,
      20,    22,    52,     0,    11,    49,    58,    40,    25,    75,
      41,    43,    20,    52,    29,    14,    16,    17,    18,    19,
      20,    21,    59,    60,    61,    62,    63,    64,    65,    66,
      40,    21,    50,     3,    20,    21,    22,    23,    24,    28,
      42,    53,    56,    57,    70,    71,    28,    20,    41,    41,
      41,    41,    41,    13,    43,    45,    20,    12,    60,    64,
      40,    26,    41,    43,    20,    70,    48,    55,    42,    70,
      29,    29,    30,    31,    32,    33,    44,    43,    67,    71,
      42,    67,    64,    71,    71,    71,    28,    20,    13,    43,
      45,    40,    21,    51,    20,    23,    24,    28,    42,    72,
      73,    28,    29,    29,     5,    21,    48,    54,    64,    29,
      57,    56,    71,    71,    71,    71,    71,    28,     7,     8,
      42,    34,    35,    36,    37,    38,    39,    68,    58,    42,
      40,    42,    42,    44,    13,    71,    28,    20,    20,    27,
      41,    43,    29,    42,    30,    31,    32,    33,    44,    56,
      64,    20,    29,     5,    44,    67,    67,    58,    71,     9,
      58,    67,    13,    71,    44,    13,    20,    76,    42,    72,
      28,    73,    73,    73,    73,    73,    29,    43,    64,     6,
      15,     9,    40,    71,    13,    71,    41,    42,    44,    70,
      28,    58,    20,    69,    71,    42,    44,     6,    13,    42,
      40,    71,    58,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    50,    50,
      51,    51,    52,    52,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    54,    55,    55,    56,    56,
      57,    58,    59,    59,    59,    59,    60,    60,    60,    61,
      61,    62,    62,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    66,    67,    67,    67,    68,    68,
      68,    68,    68,    68,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    72,    72,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    74,    75,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     3,     1,     1,     1,     2,     3,
       7,     6,     1,     3,     4,     6,     1,     3,     2,     1,
       4,     2,     6,     1,     3,     1,     1,     3,     1,     3,
       2,     3,     2,     3,     1,     2,     1,     1,     1,     6,
       8,     6,     5,    10,     3,     6,     5,     4,     2,     7,
       6,     1,     1,     4,     4,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     4,     4,     3,     3,     3,     3,     3,     1,     3,
       1,     4,     1,     1,     1,     3,     4,     3,     3,     3,
       3,     4,     6,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* algoritm: declarari main  */
#line 45 "limbaj.y"
                          { printf("Ai facut si tu cv bine.\n"); }
#line 1300 "limbaj.tab.c"
    break;

  case 8: /* declarare_var: TYPE lista_variabile  */
#line 57 "limbaj.y"
                                     { adaugaVariabila((yyvsp[-1].strval), "tip", 0, 0, 0, yylineno, 0, 0, '0', ""); }
#line 1306 "limbaj.tab.c"
    break;

  case 9: /* declarare_var: TYPE CONST lista_variabile  */
#line 58 "limbaj.y"
                                           { adaugaVariabila((yyvsp[-2].strval), "tip", 0, 1, 0, yylineno, 0, 0, '0', ""); }
#line 1312 "limbaj.tab.c"
    break;

  case 10: /* declarare_func: TYPE ID '(' functie_par ')' interior_functii_cu_param ENDF  */
#line 61 "limbaj.y"
                                                                            { adaugaFunctie((yyvsp[-6].strval), "tip", (yyvsp[-5].strval), (yyvsp[-3].strval), yylineno, 0); }
#line 1318 "limbaj.tab.c"
    break;

  case 11: /* declarare_func: TYPE ID '(' ')' interior_functii_fara_param ENDF  */
#line 62 "limbaj.y"
                                                                  { adaugaFunctie((yyvsp[-5].strval), "tip", (yyvsp[-4].strval), "", yylineno, 0); }
#line 1324 "limbaj.tab.c"
    break;

  case 12: /* lista_variabile: ID  */
#line 65 "limbaj.y"
                     { adaugaVariabila((yyvsp[0].strval), "variabila", 0, 0, 0, yylineno, 0, 0, '0', ""); }
#line 1330 "limbaj.tab.c"
    break;

  case 13: /* lista_variabile: lista_variabile ',' ID  */
#line 66 "limbaj.y"
                                         { adaugaVariabila((yyvsp[0].strval), "variabila", 0, 0, 0, yylineno, 0, 0, '0', ""); }
#line 1336 "limbaj.tab.c"
    break;

  case 14: /* lista_variabile: ID '[' NR ']'  */
#line 67 "limbaj.y"
                                { adaugaVariabila((yyvsp[-3].strval), "variabila", (yyvsp[-1].intval), 0, 0, yylineno, 0, 0, '0', ""); }
#line 1342 "limbaj.tab.c"
    break;

  case 15: /* lista_variabile: lista_variabile ',' ID '[' NR ']'  */
#line 68 "limbaj.y"
                                                    { adaugaVariabila((yyvsp[-3].strval), "variabila", (yyvsp[-1].intval), 0, 0, yylineno, 0, 0, '0', ""); }
#line 1348 "limbaj.tab.c"
    break;

  case 16: /* functie_par: list_param  */
#line 71 "limbaj.y"
                         { }
#line 1354 "limbaj.tab.c"
    break;

  case 17: /* functie_par: expr2 ',' list_param  */
#line 72 "limbaj.y"
                                   { }
#line 1360 "limbaj.tab.c"
    break;

  case 18: /* functie_par: functie_par expr2  */
#line 73 "limbaj.y"
                                { }
#line 1366 "limbaj.tab.c"
    break;

  case 19: /* functie_par: expr2  */
#line 74 "limbaj.y"
                    { }
#line 1372 "limbaj.tab.c"
    break;

  case 20: /* functie_par: CONST expr2 ',' list_param  */
#line 75 "limbaj.y"
                                          { }
#line 1378 "limbaj.tab.c"
    break;

  case 21: /* functie_par: CONST expr2  */
#line 76 "limbaj.y"
                          { }
#line 1384 "limbaj.tab.c"
    break;

  case 22: /* functie_par: CONST expr2 ',' list_param ',' expr2  */
#line 77 "limbaj.y"
                                                   { }
#line 1390 "limbaj.tab.c"
    break;

  case 28: /* list_param: param  */
#line 89 "limbaj.y"
                   {(yyval.strval) = (yyvsp[0].strval);}
#line 1396 "limbaj.tab.c"
    break;

  case 29: /* list_param: list_param ',' param  */
#line 90 "limbaj.y"
                                    { (yyval.strval) = strdup(lipire2Parametrii((yyvsp[-2].strval), (yyvsp[0].strval), ",").c_str());}
#line 1402 "limbaj.tab.c"
    break;

  case 30: /* param: TYPE ID  */
#line 93 "limbaj.y"
                 { (yyval.strval) = strdup(lipire2Parametrii((yyvsp[-1].strval), (yyvsp[0].strval), " ").c_str());}
#line 1408 "limbaj.tab.c"
    break;

  case 44: /* statements: ID ASSIGN expr  */
#line 121 "limbaj.y"
                            { 
                verif((yyvsp[-2].strval), yylineno, 0,0);
                string tipStanga = getType((yyvsp[-2].strval)); 
                string tipDreapta = (yyvsp[0].astnode)->getTip(); 
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile pentru atribuire la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
                tabela2((yyvsp[-2].strval),x,yylineno,0,0,"");

            }
#line 1424 "limbaj.tab.c"
    break;

  case 45: /* statements: ID '[' NR ']' ASSIGN expr  */
#line 132 "limbaj.y"
                                        {
                verif((yyvsp[-5].strval), yylineno, 1, (yyvsp[-3].intval));
                string tipStanga = getType((yyvsp[-5].strval));
                string tipDreapta = (yyvsp[0].astnode)->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile pentru atribuire la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
                tabela2((yyvsp[-5].strval),x,yylineno,0,0,"");
            }
#line 1439 "limbaj.tab.c"
    break;

  case 46: /* statements: ID '.' ID ASSIGN expr  */
#line 142 "limbaj.y"
                                     { 
                string tipStanga = (yyvsp[-4].strval); 
                string tipDreapta = (yyvsp[0].astnode)->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
            }
#line 1452 "limbaj.tab.c"
    break;

  case 47: /* statements: TYPE ID ASSIGN expr  */
#line 150 "limbaj.y"
                                  { 
                string tipStanga = (yyvsp[-3].strval); 
                string tipDreapta = (yyvsp[0].astnode)->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
            }
#line 1465 "limbaj.tab.c"
    break;

  case 49: /* statements: TYPE ID '[' NR ']' ASSIGN expr  */
#line 159 "limbaj.y"
                                             { 
                string tipStanga = (yyvsp[-5].strval); 
                string tipDreapta = (yyvsp[0].astnode)->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
            }
#line 1478 "limbaj.tab.c"
    break;

  case 50: /* statements: TYPE ID '.' ID ASSIGN expr  */
#line 167 "limbaj.y"
                                         { 
                string tipStanga = (yyvsp[-4].strval); 
                string tipDreapta = (yyvsp[0].astnode)->getTip();
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile la declarație cu inițializare la linia " + to_string(yylineno)).c_str());
                }
                int x=(yyvsp[0].astnode)->Eval(yylineno);
            }
#line 1491 "limbaj.tab.c"
    break;

  case 51: /* statements: evaluare  */
#line 175 "limbaj.y"
                       {printf("Eval: %d\n", (yyvsp[0].intval));}
#line 1497 "limbaj.tab.c"
    break;

  case 52: /* statements: tipeof  */
#line 176 "limbaj.y"
                     {printf("TypeOf: %s\n", (yyvsp[0].strval));}
#line 1503 "limbaj.tab.c"
    break;

  case 53: /* evaluare: EVAL '(' expr ')'  */
#line 179 "limbaj.y"
                              {(yyval.intval) = (yyvsp[-1].astnode)->Eval(yylineno); }
#line 1509 "limbaj.tab.c"
    break;

  case 54: /* tipeof: TYPEOF '(' expr ')'  */
#line 182 "limbaj.y"
                             { string tip = (yyvsp[-1].astnode)->TypeOf(yylineno);
    (yyval.strval) = strdup(tip.c_str());  }
#line 1516 "limbaj.tab.c"
    break;

  case 64: /* cond_for: ID ASSIGN expr  */
#line 199 "limbaj.y"
                          {string tipStanga = getType((yyvsp[-2].strval)); 
                string tipDreapta = (yyvsp[0].astnode)->getTip(); 
                if (tipStanga != tipDreapta) {
                    yyerror(("Tipuri incompatibile pentru atribuire la linia " + to_string(yylineno)).c_str());
                }}
#line 1526 "limbaj.tab.c"
    break;

  case 65: /* expr2: expr  */
#line 206 "limbaj.y"
             { (yyval.astnode) = (yyvsp[0].astnode); }
#line 1532 "limbaj.tab.c"
    break;

  case 67: /* expr: ID  */
#line 210 "limbaj.y"
          {verif((yyvsp[0].strval), yylineno, 0,0); (yyval.astnode) = new AST((yyvsp[0].strval), NULL, NULL,0, Tip_nod::IDENTIFICATOR);}
#line 1538 "limbaj.tab.c"
    break;

  case 68: /* expr: ADEV  */
#line 211 "limbaj.y"
            {(yyval.astnode) = new AST("true", nullptr, nullptr,0, Tip_nod::BOOL);}
#line 1544 "limbaj.tab.c"
    break;

  case 69: /* expr: FALS  */
#line 212 "limbaj.y"
            {(yyval.astnode) = new AST("false", nullptr, nullptr,0, Tip_nod::BOOL);}
#line 1550 "limbaj.tab.c"
    break;

  case 70: /* expr: NR  */
#line 213 "limbaj.y"
          { (yyval.astnode) = new AST(yytext, nullptr, nullptr,0, Tip_nod::NUMAR);}
#line 1556 "limbaj.tab.c"
    break;

  case 71: /* expr: ID '[' NR ']'  */
#line 214 "limbaj.y"
                     {verif((yyvsp[-3].strval), yylineno, 1,(yyvsp[-1].intval)); (yyval.astnode) = new AST((yyvsp[-3].strval), NULL, NULL, (yyvsp[-1].intval),  Tip_nod::ARRAY);}
#line 1562 "limbaj.tab.c"
    break;

  case 72: /* expr: ID '(' list_param2 ')'  */
#line 215 "limbaj.y"
                              {verifFct((yyvsp[-3].strval),(yyvsp[-1].strval), yylineno);(yyval.astnode) = new AST((yyvsp[-3].strval), nullptr,nullptr, 0,Tip_nod::FUNCTIE);}
#line 1568 "limbaj.tab.c"
    break;

  case 73: /* expr: ID '(' ')'  */
#line 216 "limbaj.y"
                  {verifFct((yyvsp[-2].strval),"", yylineno);(yyval.astnode) = new AST((yyvsp[-2].strval), nullptr,nullptr, 0,Tip_nod::FUNCTIE);}
#line 1574 "limbaj.tab.c"
    break;

  case 74: /* expr: expr '+' expr  */
#line 217 "limbaj.y"
                      {(yyval.astnode) = new AST("+", (yyvsp[-2].astnode), (yyvsp[0].astnode), 0,Tip_nod::OPERATOR);}
#line 1580 "limbaj.tab.c"
    break;

  case 75: /* expr: expr '-' expr  */
#line 218 "limbaj.y"
                     {(yyval.astnode) = new AST("-", (yyvsp[-2].astnode), (yyvsp[0].astnode), 0,Tip_nod::OPERATOR);}
#line 1586 "limbaj.tab.c"
    break;

  case 76: /* expr: expr '/' expr  */
#line 219 "limbaj.y"
                     {(yyval.astnode) = new AST("/", (yyvsp[-2].astnode), (yyvsp[0].astnode),0, Tip_nod::OPERATOR);}
#line 1592 "limbaj.tab.c"
    break;

  case 77: /* expr: expr '*' expr  */
#line 220 "limbaj.y"
                     {(yyval.astnode) = new AST("*", (yyvsp[-2].astnode), (yyvsp[0].astnode), 0,Tip_nod::OPERATOR);}
#line 1598 "limbaj.tab.c"
    break;

  case 78: /* list_param2: param3  */
#line 223 "limbaj.y"
                     {(yyval.strval) = (yyvsp[0].strval);}
#line 1604 "limbaj.tab.c"
    break;

  case 79: /* list_param2: list_param2 ',' param3  */
#line 224 "limbaj.y"
                                      { (yyval.strval) = strdup(lipire2Parametrii((yyvsp[-2].strval), (yyvsp[0].strval), ",").c_str());}
#line 1610 "limbaj.tab.c"
    break;

  case 80: /* param3: ID  */
#line 227 "limbaj.y"
            {verif((yyvsp[0].strval), yylineno, 0,0); }
#line 1616 "limbaj.tab.c"
    break;

  case 81: /* param3: ID '[' NR ']'  */
#line 228 "limbaj.y"
                       {verif((yyvsp[-3].strval), yylineno, 1,(yyvsp[-1].intval));}
#line 1622 "limbaj.tab.c"
    break;

  case 82: /* param3: NR  */
#line 229 "limbaj.y"
            {if (yytext != nullptr) {(yyval.strval)= strdup(yytext);} else {(yyval.strval) = strdup("");}}
#line 1628 "limbaj.tab.c"
    break;

  case 85: /* param3: ID '(' ')'  */
#line 232 "limbaj.y"
                    {verifFct((yyvsp[-2].strval),"", yylineno);}
#line 1634 "limbaj.tab.c"
    break;

  case 86: /* param3: ID '(' list_param2 ')'  */
#line 233 "limbaj.y"
                                {verifFct((yyvsp[-3].strval),(yyvsp[-1].strval),yylineno);}
#line 1640 "limbaj.tab.c"
    break;


#line 1644 "limbaj.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 248 "limbaj.y"


void yyerror(const char* s) 
{
    printf("error: %s at line:%d\n", s, yylineno);
     /*exit(1);*/
}

int main(int argc, char** argv) 
{
    yyin = fopen(argv[1], "r");
    yyparse();
    printare_variabile();
    printare_functii();
}
