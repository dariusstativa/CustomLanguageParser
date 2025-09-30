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
#line 1 "Tema.y"

#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;

#line 78 "Tema.tab.c"

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

#include "Tema.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DOT = 3,                        /* DOT  */
  YYSYMBOL_VOID = 4,                       /* VOID  */
  YYSYMBOL_AND = 5,                        /* AND  */
  YYSYMBOL_OR = 6,                         /* OR  */
  YYSYMBOL_INC = 7,                        /* INC  */
  YYSYMBOL_DEC = 8,                        /* DEC  */
  YYSYMBOL_DO = 9,                         /* DO  */
  YYSYMBOL_OPEN_P = 10,                    /* OPEN_P  */
  YYSYMBOL_CLOSED_P = 11,                  /* CLOSED_P  */
  YYSYMBOL_RIGHT_B = 12,                   /* RIGHT_B  */
  YYSYMBOL_LEFT_B = 13,                    /* LEFT_B  */
  YYSYMBOL_LOGIC = 14,                     /* LOGIC  */
  YYSYMBOL_START_I = 15,                   /* START_I  */
  YYSYMBOL_END_I = 16,                     /* END_I  */
  YYSYMBOL_ELIF = 17,                      /* ELIF  */
  YYSYMBOL_SEP = 18,                       /* SEP  */
  YYSYMBOL_STRING = 19,                    /* STRING  */
  YYSYMBOL_CARACTER = 20,                  /* CARACTER  */
  YYSYMBOL_ID = 21,                        /* ID  */
  YYSYMBOL_START_CLASA = 22,               /* START_CLASA  */
  YYSYMBOL_FINAL_CLASA = 23,               /* FINAL_CLASA  */
  YYSYMBOL_TERMINAT = 24,                  /* TERMINAT  */
  YYSYMBOL_START = 25,                     /* START  */
  YYSYMBOL_FINAL = 26,                     /* FINAL  */
  YYSYMBOL_TIP_DATE = 27,                  /* TIP_DATE  */
  YYSYMBOL_NU = 28,                        /* NU  */
  YYSYMBOL_SI = 29,                        /* SI  */
  YYSYMBOL_ORI = 30,                       /* ORI  */
  YYSYMBOL_NUMAR_INTREG = 31,              /* NUMAR_INTREG  */
  YYSYMBOL_VALOARE_BOOL = 32,              /* VALOARE_BOOL  */
  YYSYMBOL_VECTOR = 33,                    /* VECTOR  */
  YYSYMBOL_IF = 34,                        /* IF  */
  YYSYMBOL_ELSE = 35,                      /* ELSE  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_REAL = 37,                      /* REAL  */
  YYSYMBOL_CLASA = 38,                     /* CLASA  */
  YYSYMBOL_ASIGNARE = 39,                  /* ASIGNARE  */
  YYSYMBOL_SEMNE = 40,                     /* SEMNE  */
  YYSYMBOL_LT = 41,                        /* LT  */
  YYSYMBOL_LT_EQUAL = 42,                  /* LT_EQUAL  */
  YYSYMBOL_GT = 43,                        /* GT  */
  YYSYMBOL_GT_EQUAL = 44,                  /* GT_EQUAL  */
  YYSYMBOL_EQ = 45,                        /* EQ  */
  YYSYMBOL_NEQ = 46,                       /* NEQ  */
  YYSYMBOL_WHILE = 47,                     /* WHILE  */
  YYSYMBOL_PRINTF = 48,                    /* PRINTF  */
  YYSYMBOL_TYPEOF = 49,                    /* TYPEOF  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_declaratii = 52,                /* declaratii  */
  YYSYMBOL_declaratie = 53,                /* declaratie  */
  YYSYMBOL_declaratie_clasa = 54,          /* declaratie_clasa  */
  YYSYMBOL_content_clasa = 55,             /* content_clasa  */
  YYSYMBOL_declaratie_variabila = 56,      /* declaratie_variabila  */
  YYSYMBOL_declaratie_variabila_clasa = 57, /* declaratie_variabila_clasa  */
  YYSYMBOL_var = 58,                       /* var  */
  YYSYMBOL_expresie = 59,                  /* expresie  */
  YYSYMBOL_valori_non_aritm = 60,          /* valori_non_aritm  */
  YYSYMBOL_expresieAritm = 61,             /* expresieAritm  */
  YYSYMBOL_valoare = 62,                   /* valoare  */
  YYSYMBOL_apelFClass_block = 63,          /* apelFClass_block  */
  YYSYMBOL_apelF_block = 64,               /* apelF_block  */
  YYSYMBOL_params = 65,                    /* params  */
  YYSYMBOL_id_vector = 66,                 /* id_vector  */
  YYSYMBOL_valoare_vector = 67,            /* valoare_vector  */
  YYSYMBOL_declaratie_metoda = 68,         /* declaratie_metoda  */
  YYSYMBOL_variabile = 69,                 /* variabile  */
  YYSYMBOL_content_functie = 70,           /* content_functie  */
  YYSYMBOL_instructiuni = 71,              /* instructiuni  */
  YYSYMBOL_instructiune = 72,              /* instructiune  */
  YYSYMBOL_if_block = 73,                  /* if_block  */
  YYSYMBOL_for_block = 74,                 /* for_block  */
  YYSYMBOL_conditie_for = 75,              /* conditie_for  */
  YYSYMBOL_conditie = 76,                  /* conditie  */
  YYSYMBOL_else_block = 77,                /* else_block  */
  YYSYMBOL_printf_block = 78,              /* printf_block  */
  YYSYMBOL_typeof_block = 79,              /* typeof_block  */
  YYSYMBOL_while_block = 80                /* while_block  */
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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    11,    11,    13,    14,    16,    17,    18,    20,    20,
      22,    23,    25,    26,    28,    29,    30,    32,    32,    32,
      32,    32,    32,    34,    34,    37,    38,    39,    41,    42,
      43,    44,    47,    48,    49,    50,    51,    52,    53,    55,
      57,    58,    60,    60,    62,    63,    64,    67,    67,    67,
      69,    70,    71,    72,    74,    74,    74,    74,    74,    74,
      76,    77,    78,    79,    82,    82,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    96,    97,    99,   101,
     102,   103,   111,   112,   113,   115,   116,   117,   119,   121,
     123
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
  "\"end of file\"", "error", "\"invalid token\"", "DOT", "VOID", "AND",
  "OR", "INC", "DEC", "DO", "OPEN_P", "CLOSED_P", "RIGHT_B", "LEFT_B",
  "LOGIC", "START_I", "END_I", "ELIF", "SEP", "STRING", "CARACTER", "ID",
  "START_CLASA", "FINAL_CLASA", "TERMINAT", "START", "FINAL", "TIP_DATE",
  "NU", "SI", "ORI", "NUMAR_INTREG", "VALOARE_BOOL", "VECTOR", "IF",
  "ELSE", "FOR", "REAL", "CLASA", "ASIGNARE", "SEMNE", "LT", "LT_EQUAL",
  "GT", "GT_EQUAL", "EQ", "NEQ", "WHILE", "PRINTF", "TYPEOF", "$accept",
  "program", "declaratii", "declaratie", "declaratie_clasa",
  "content_clasa", "declaratie_variabila", "declaratie_variabila_clasa",
  "var", "expresie", "valori_non_aritm", "expresieAritm", "valoare",
  "apelFClass_block", "apelF_block", "params", "id_vector",
  "valoare_vector", "declaratie_metoda", "variabile", "content_functie",
  "instructiuni", "instructiune", "if_block", "for_block", "conditie_for",
  "conditie", "else_block", "printf_block", "typeof_block", "while_block", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-90)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,    -4,    39,    72,    -3,    13,    98,    32,   -90,   -90,
     -90,    48,    -8,    24,   -90,    18,   -90,    53,   -90,    86,
      52,   -90,   176,    39,   149,    39,   193,    64,     6,    39,
      84,   104,    84,   117,   119,    71,   -90,   -90,   105,    94,
     108,   -90,   -90,   -90,   -90,   -90,   -90,   125,   124,   126,
     137,   -90,   174,   -90,   -90,    34,   -90,   -90,   -90,   140,
     -90,   -90,   120,   -90,   -90,   -90,   146,   152,   -90,   171,
     -90,   143,   -90,   151,   145,    40,   149,   149,   210,   164,
     218,   149,   149,    86,   -90,    90,   -90,   -90,    86,   172,
      23,   181,   180,   188,    40,    39,   191,    86,   187,   -90,
     186,   -90,     1,   -90,   -90,   -90,     4,   200,   -90,   209,
     189,   -90,   216,   222,   224,    86,   192,    86,   226,   227,
     -90,    20,   -90,   219,    85,   220,    85,    86,   199,   230,
     231,   -90,   174,   -90,   228,    86,   -90,   149,   -90,   149,
      40,   203,    40,   149,   149,   149,   229,   149,   232,   -90,
     -90,   -90,   -90,   233,   -90,   234,   174,   -90,   235,   -90,
     236,   -90,   -90,   237,   149,   207,   242,   240,   241,    38,
     238,   -90,    85,   -90,   -90,   199,   -90,   -90,   -90,    40,
     -90,   149,   149,    84,   243,   -90,   149,   -90,   -90,   245,
     246,   221,    86,   247,    19,   -90,   -90,    86,   244,   149,
     149,   149,   248,   249,   -90,   -90,   250,   252,   239,    38,
     149,   149,   149,   -90,   -90,   -90,   256,   253,    86,   254,
     -90
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     5,     7,
       6,     0,    17,    21,    13,    17,    12,     0,     1,     0,
       0,     3,     0,     0,     0,     0,     0,    14,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    72,     0,    62,
       0,    69,    74,    70,    71,    75,     4,     0,     0,     0,
       0,    18,     0,    26,    25,    32,    33,    27,    34,    19,
      24,    23,    28,    38,    36,    22,     0,     0,     9,    14,
      16,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     2,     0,    63,    64,     0,    56,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,    10,     0,    39,    41,    42,     0,    47,    48,     0,
      46,    66,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,    65,     0,     0,     0,     0,     0,     0,    37,
       0,    20,     0,    29,     0,     0,    11,     0,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    52,    57,    58,    55,     0,     0,    35,     0,    53,
       0,    67,    43,     0,     0,    44,     0,     0,     0,    76,
       0,    90,     0,    50,    31,    30,    51,    49,    68,     0,
      82,     0,     0,     0,     0,    77,     0,    59,    45,     0,
       0,     0,     0,     0,     0,    83,    84,     0,     0,     0,
       0,     0,     0,     0,    86,    79,     0,     0,     0,    87,
       0,     0,     0,    85,    80,    81,     0,     0,     0,     0,
      78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   -90,   257,   -90,   -90,     8,   190,     9,     7,
     -90,   -46,   -90,   -18,   -19,   -90,   -89,   129,   -20,   -23,
     -35,   -90,   194,   -90,   -90,   -90,   -30,    63,   -90,   -90,
     -90
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,     8,    69,    35,    71,    14,    59,
      60,    61,    62,    63,    64,   106,   109,   110,    10,    50,
      38,    39,    40,    41,    42,   194,    78,   185,    43,    44,
      45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      37,    36,    80,    67,    86,   130,    92,    72,     9,    73,
      23,    74,    16,    18,     9,   138,    74,    11,    17,    75,
      37,    36,   139,    73,   200,   201,   125,    12,    26,     1,
      74,    24,    51,    75,    65,    70,    23,    93,    16,    13,
     137,   126,    25,   202,    74,    76,     2,    94,   120,    72,
     133,   163,     3,   123,   103,   183,    21,    24,    22,    76,
      12,   107,   134,     4,    37,    36,    37,    36,     1,    37,
      36,   108,    13,   184,   103,    27,    46,    70,    37,    36,
     146,   105,   148,   111,   112,     2,   158,    68,   118,   119,
     188,     3,   155,    15,    77,    83,    37,    36,    37,    36,
     160,   152,     1,   154,   131,    13,    48,    28,    37,    36,
     174,   121,    49,    29,    79,    28,    37,    36,    85,     2,
      30,    29,    31,    19,    30,     3,    31,    81,    30,    82,
      31,    84,    87,    32,    33,    34,     4,    32,    33,    34,
      88,    32,    33,    34,   161,    89,   162,    90,    91,   187,
     166,   167,   168,   191,   170,    52,   104,   198,    95,    52,
      96,    97,   203,    98,    53,    54,    55,   101,    53,    54,
      55,   178,   102,    37,    36,     1,    56,    57,    37,    36,
      56,    57,    58,   219,    52,   116,    58,    47,   189,   190,
     124,   128,     2,   193,    99,    55,   127,    48,     3,    37,
      36,   132,   135,    49,    66,    56,   205,   206,   207,   129,
     136,    58,    55,   140,    48,   113,   114,   214,   215,   216,
      49,   141,    56,   113,   114,   115,   113,   114,    58,   142,
     143,   147,   144,   117,   145,   151,   197,   149,   150,   156,
      74,   153,   164,   157,   159,   169,   175,   179,   171,   177,
     173,   172,   176,   180,   181,   182,   195,   196,   192,   100,
     204,   199,   186,    20,   210,   209,   211,   217,   218,   208,
     220,   165,   213,     0,     0,     0,     0,     0,   212,   122
};

static const yytype_int16 yycheck[] =
{
      19,    19,    32,    26,    39,    94,    52,    27,     0,     3,
      18,    10,     3,     0,     6,    11,    10,    21,    21,    13,
      39,    39,    18,     3,     5,     6,     3,    21,    10,     4,
      10,    39,    23,    13,    25,    27,    18,     3,    29,    33,
      39,    18,    18,    24,    10,    39,    21,    13,    83,    69,
      96,   140,    27,    88,    73,    17,    24,    39,    10,    39,
      21,    21,    97,    38,    83,    83,    85,    85,     4,    88,
      88,    31,    33,    35,    93,    22,    24,    69,    97,    97,
     115,    74,   117,    76,    77,    21,   132,    23,    81,    82,
     179,    27,   127,    21,    10,    24,   115,   115,   117,   117,
     135,   124,     4,   126,    95,    33,    21,    21,   127,   127,
     156,    21,    27,    27,    10,    21,   135,   135,    24,    21,
      34,    27,    36,    25,    34,    27,    36,    10,    34,    10,
      36,    26,    24,    47,    48,    49,    38,    47,    48,    49,
      15,    47,    48,    49,   137,    21,   139,    21,    11,   172,
     143,   144,   145,   183,   147,    10,    11,   192,    18,    10,
      40,    15,   197,    11,    19,    20,    21,    24,    19,    20,
      21,   164,    21,   192,   192,     4,    31,    32,   197,   197,
      31,    32,    37,   218,    10,    21,    37,    11,   181,   182,
      18,    11,    21,   186,    23,    21,    15,    21,    27,   218,
     218,    10,    15,    27,    11,    31,   199,   200,   201,    21,
      24,    37,    21,    13,    21,     5,     6,   210,   211,   212,
      27,    12,    31,     5,     6,    15,     5,     6,    37,    40,
      14,    39,    10,    15,    10,    16,    15,    11,    11,    40,
      10,    21,    39,    12,    16,    16,    11,    40,    16,    12,
      16,    18,    16,    11,    14,    14,    11,    11,    15,    69,
      16,    14,    24,     6,    14,    16,    14,    11,    15,    21,
      16,   142,   209,    -1,    -1,    -1,    -1,    -1,    39,    85
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    21,    27,    38,    51,    52,    53,    54,    56,
      68,    21,    21,    33,    58,    21,    58,    21,     0,    25,
      53,    24,    10,    18,    39,    18,    10,    22,    21,    27,
      34,    36,    47,    48,    49,    56,    63,    64,    70,    71,
      72,    73,    74,    78,    79,    80,    24,    11,    21,    27,
      69,    58,    10,    19,    20,    21,    31,    32,    37,    59,
      60,    61,    62,    63,    64,    58,    11,    69,    23,    55,
      56,    57,    68,     3,    10,    13,    39,    10,    76,    10,
      76,    10,    10,    24,    26,    24,    70,    24,    15,    21,
      21,    11,    61,     3,    13,    18,    40,    15,    11,    23,
      57,    24,    21,    64,    11,    59,    65,    21,    31,    66,
      67,    59,    59,     5,     6,    15,    21,    15,    59,    59,
      70,    21,    72,    70,    18,     3,    18,    15,    11,    21,
      66,    58,    10,    61,    70,    15,    24,    39,    11,    18,
      13,    12,    40,    14,    10,    10,    70,    39,    70,    11,
      11,    16,    69,    21,    69,    70,    40,    12,    61,    16,
      70,    59,    59,    66,    39,    67,    59,    59,    59,    16,
      59,    16,    18,    16,    61,    11,    16,    12,    59,    40,
      11,    14,    14,    17,    35,    77,    24,    69,    66,    59,
      59,    76,    15,    59,    75,    11,    11,    15,    70,    14,
       5,     6,    24,    70,    16,    59,    59,    59,    21,    16,
      14,    14,    39,    77,    59,    59,    59,    11,    15,    70,
      16
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    57,    58,    58,    58,
      58,    58,    58,    59,    59,    60,    60,    60,    61,    61,
      61,    61,    62,    62,    62,    62,    62,    62,    62,    63,
      64,    64,    65,    65,    66,    66,    66,    67,    67,    67,
      68,    68,    68,    68,    69,    69,    69,    69,    69,    69,
      70,    70,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    74,    75,
      75,    75,    76,    76,    76,    77,    77,    77,    78,    79,
      80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     3,     1,     1,     1,     5,     4,
       2,     3,     2,     2,     0,     1,     1,     1,     3,     3,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       5,     5,     1,     1,     1,     4,     1,     3,     1,     3,
       4,     3,     1,     3,     3,     5,     1,     1,     1,     4,
       8,     8,     7,     7,     2,     4,     2,     4,     4,     6,
       2,     3,     1,     2,     2,     3,     3,     5,     6,     1,
       1,     1,     1,     1,     1,     1,     5,     6,    15,     3,
       5,     5,     5,     7,     7,     6,     4,     5,     4,     4,
       5
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
  case 2: /* program: declaratii START content_functie FINAL  */
#line 11 "Tema.y"
                                                  {printf("Programul e corect");}
#line 1301 "Tema.tab.c"
    break;


#line 1305 "Tema.tab.c"

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

#line 125 "Tema.y"


int main (int argc, char *argv[]) 

{

 yyin = fopen(argv[1], "r");

	return yyparse();

	}



/* Added because panther doesn't have liby.a installed. */

int yyerror (char *msg) {

	return fprintf (stderr, "YACC: %s\n", msg);

	} 


