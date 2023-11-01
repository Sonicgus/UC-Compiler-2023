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
#line 1 "uccompiler.y"


#include "ast.h"

int yylex(void);
void yyerror(char *);

struct node *program;


#line 82 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BITWISEAND = 258,              /* BITWISEAND  */
    BITWISEOR = 259,               /* BITWISEOR  */
    BITWISEXOR = 260,              /* BITWISEXOR  */
    AND = 261,                     /* AND  */
    ASSIGN = 262,                  /* ASSIGN  */
    MUL = 263,                     /* MUL  */
    COMMA = 264,                   /* COMMA  */
    DIV = 265,                     /* DIV  */
    EQ = 266,                      /* EQ  */
    GE = 267,                      /* GE  */
    GT = 268,                      /* GT  */
    LBRACE = 269,                  /* LBRACE  */
    LE = 270,                      /* LE  */
    LPAR = 271,                    /* LPAR  */
    LT = 272,                      /* LT  */
    MINUS = 273,                   /* MINUS  */
    MOD = 274,                     /* MOD  */
    NE = 275,                      /* NE  */
    NOT = 276,                     /* NOT  */
    OR = 277,                      /* OR  */
    PLUS = 278,                    /* PLUS  */
    RBRACE = 279,                  /* RBRACE  */
    RPAR = 280,                    /* RPAR  */
    SEMI = 281,                    /* SEMI  */
    CHAR = 282,                    /* CHAR  */
    ELSE = 283,                    /* ELSE  */
    WHILE = 284,                   /* WHILE  */
    IF = 285,                      /* IF  */
    INT = 286,                     /* INT  */
    SHORT = 287,                   /* SHORT  */
    DOUBLE = 288,                  /* DOUBLE  */
    RETURN = 289,                  /* RETURN  */
    VOID = 290,                    /* VOID  */
    CHRLIT = 291,                  /* CHRLIT  */
    IDENTIFIER = 292,              /* IDENTIFIER  */
    NATURAL = 293,                 /* NATURAL  */
    DECIMAL = 294,                 /* DECIMAL  */
    RESERVED = 295,                /* RESERVED  */
    LOW = 296,                     /* LOW  */
    assign = 297,                  /* assign  */
    bitwiseor = 298,               /* bitwiseor  */
    bitwisexor = 299,              /* bitwisexor  */
    bitwiseand = 300               /* bitwiseand  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BITWISEAND 258
#define BITWISEOR 259
#define BITWISEXOR 260
#define AND 261
#define ASSIGN 262
#define MUL 263
#define COMMA 264
#define DIV 265
#define EQ 266
#define GE 267
#define GT 268
#define LBRACE 269
#define LE 270
#define LPAR 271
#define LT 272
#define MINUS 273
#define MOD 274
#define NE 275
#define NOT 276
#define OR 277
#define PLUS 278
#define RBRACE 279
#define RPAR 280
#define SEMI 281
#define CHAR 282
#define ELSE 283
#define WHILE 284
#define IF 285
#define INT 286
#define SHORT 287
#define DOUBLE 288
#define RETURN 289
#define VOID 290
#define CHRLIT 291
#define IDENTIFIER 292
#define NATURAL 293
#define DECIMAL 294
#define RESERVED 295
#define LOW 296
#define assign 297
#define bitwiseor 298
#define bitwisexor 299
#define bitwiseand 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "uccompiler.y"

    char *token;
    struct node *node;

#line 230 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BITWISEAND = 3,                 /* BITWISEAND  */
  YYSYMBOL_BITWISEOR = 4,                  /* BITWISEOR  */
  YYSYMBOL_BITWISEXOR = 5,                 /* BITWISEXOR  */
  YYSYMBOL_AND = 6,                        /* AND  */
  YYSYMBOL_ASSIGN = 7,                     /* ASSIGN  */
  YYSYMBOL_MUL = 8,                        /* MUL  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_DIV = 10,                       /* DIV  */
  YYSYMBOL_EQ = 11,                        /* EQ  */
  YYSYMBOL_GE = 12,                        /* GE  */
  YYSYMBOL_GT = 13,                        /* GT  */
  YYSYMBOL_LBRACE = 14,                    /* LBRACE  */
  YYSYMBOL_LE = 15,                        /* LE  */
  YYSYMBOL_LPAR = 16,                      /* LPAR  */
  YYSYMBOL_LT = 17,                        /* LT  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_MOD = 19,                       /* MOD  */
  YYSYMBOL_NE = 20,                        /* NE  */
  YYSYMBOL_NOT = 21,                       /* NOT  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_PLUS = 23,                      /* PLUS  */
  YYSYMBOL_RBRACE = 24,                    /* RBRACE  */
  YYSYMBOL_RPAR = 25,                      /* RPAR  */
  YYSYMBOL_SEMI = 26,                      /* SEMI  */
  YYSYMBOL_CHAR = 27,                      /* CHAR  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_WHILE = 29,                     /* WHILE  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_INT = 31,                       /* INT  */
  YYSYMBOL_SHORT = 32,                     /* SHORT  */
  YYSYMBOL_DOUBLE = 33,                    /* DOUBLE  */
  YYSYMBOL_RETURN = 34,                    /* RETURN  */
  YYSYMBOL_VOID = 35,                      /* VOID  */
  YYSYMBOL_CHRLIT = 36,                    /* CHRLIT  */
  YYSYMBOL_IDENTIFIER = 37,                /* IDENTIFIER  */
  YYSYMBOL_NATURAL = 38,                   /* NATURAL  */
  YYSYMBOL_DECIMAL = 39,                   /* DECIMAL  */
  YYSYMBOL_RESERVED = 40,                  /* RESERVED  */
  YYSYMBOL_LOW = 41,                       /* LOW  */
  YYSYMBOL_assign = 42,                    /* assign  */
  YYSYMBOL_bitwiseor = 43,                 /* bitwiseor  */
  YYSYMBOL_bitwisexor = 44,                /* bitwisexor  */
  YYSYMBOL_bitwiseand = 45,                /* bitwiseand  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_FunctionsAndDeclarations = 49,  /* FunctionsAndDeclarations  */
  YYSYMBOL_FunctionDefinition = 50,        /* FunctionDefinition  */
  YYSYMBOL_FunctionBody = 51,              /* FunctionBody  */
  YYSYMBOL_DeclarationsAndStatements = 52, /* DeclarationsAndStatements  */
  YYSYMBOL_FunctionDeclaration = 53,       /* FunctionDeclaration  */
  YYSYMBOL_FunctionDeclarator = 54,        /* FunctionDeclarator  */
  YYSYMBOL_ParameterList = 55,             /* ParameterList  */
  YYSYMBOL_ParameterDeclaration = 56,      /* ParameterDeclaration  */
  YYSYMBOL_Declaration = 57,               /* Declaration  */
  YYSYMBOL_Aux_Declaration = 58,           /* Aux_Declaration  */
  YYSYMBOL_TypeSpec = 59,                  /* TypeSpec  */
  YYSYMBOL_Declarator = 60,                /* Declarator  */
  YYSYMBOL_Statement = 61,                 /* Statement  */
  YYSYMBOL_Aux_Statement = 62,             /* Aux_Statement  */
  YYSYMBOL_Expr = 63,                      /* Expr  */
  YYSYMBOL_Aux_Expr = 64                   /* Aux_Expr  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   465

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    46,    47,    48,    49,    50,    53,    56,
      57,    60,    61,    62,    63,    66,    69,    72,    73,    76,
      77,    80,    81,    84,    85,    88,    89,    90,    91,    92,
      95,    96,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   110,   111,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   144,   145
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
  "\"end of file\"", "error", "\"invalid token\"", "BITWISEAND",
  "BITWISEOR", "BITWISEXOR", "AND", "ASSIGN", "MUL", "COMMA", "DIV", "EQ",
  "GE", "GT", "LBRACE", "LE", "LPAR", "LT", "MINUS", "MOD", "NE", "NOT",
  "OR", "PLUS", "RBRACE", "RPAR", "SEMI", "CHAR", "ELSE", "WHILE", "IF",
  "INT", "SHORT", "DOUBLE", "RETURN", "VOID", "CHRLIT", "IDENTIFIER",
  "NATURAL", "DECIMAL", "RESERVED", "LOW", "assign", "bitwiseor",
  "bitwisexor", "bitwiseand", "'['", "']'", "$accept",
  "FunctionsAndDeclarations", "FunctionDefinition", "FunctionBody",
  "DeclarationsAndStatements", "FunctionDeclaration", "FunctionDeclarator",
  "ParameterList", "ParameterDeclaration", "Declaration",
  "Aux_Declaration", "TypeSpec", "Declarator", "Statement",
  "Aux_Statement", "Expr", "Aux_Expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-34)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     411,   -34,   -34,   -34,   -34,   -34,     2,   -34,   -34,   -34,
     -33,   -34,   -34,   -34,   -34,    53,     4,    -3,   239,   411,
      52,   -34,   -34,   -32,   -34,    54,   239,   239,   239,   239,
     -34,    43,   -34,   -34,   345,    95,   -34,    25,   105,   -34,
     -34,    55,    56,   227,    50,    79,   -32,    79,   194,    85,
     -34,   -32,   -34,   276,   446,   159,   446,   231,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   411,   -34,   -34,   -34,
     -34,   131,   239,   239,   -34,   218,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   345,   113,   345,   345,   345,   408,   345,
     159,   366,   159,     9,   429,   429,   429,   429,   446,   159,
       9,   387,   446,   -34,   -34,   -34,   299,   322,   -34,   239,
     -34,   157,   157,   366,   -34,    66,   157,   -34
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    25,    26,    28,    29,    27,     0,     2,     3,     4,
       0,     1,     5,     6,     7,    30,     0,     0,     0,     0,
       0,    15,     8,     0,    21,     0,     0,     0,     0,     0,
      68,    66,    67,    69,    31,     0,    17,    19,     0,    10,
      33,     0,     0,     0,     0,    14,     0,    13,     0,    30,
      23,     0,    22,     0,    62,    63,    61,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    20,    34,
      41,     0,     0,     0,    39,     0,     9,    12,    11,    32,
      24,    70,    64,    71,     0,    52,    53,    54,    51,    43,
      47,    44,    48,    55,    58,    60,    57,    59,    46,    49,
      56,    50,    45,    18,    35,    42,     0,     0,    40,     0,
      65,     0,     0,    72,    38,    36,     0,    37
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -34,   -34,    90,   -34,    -9,   101,   -34,   -34,    48,    61,
     -34,     1,   -20,   -23,   -34,   -18,   -34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,    22,    44,     8,    16,    35,    36,    45,
      25,    46,    17,    47,    81,    48,    94
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      34,    10,    11,    50,    15,    49,    23,    10,    53,    54,
      55,    56,    58,    59,    60,    80,    62,    63,    20,    65,
      37,    67,    68,    24,    69,    85,    70,    71,    72,     1,
      21,    90,    75,     2,     3,     4,    87,     5,    88,    93,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   115,    57,
      18,     9,    78,    51,   116,   117,    38,    14,    26,    19,
      27,    82,    83,    28,    86,    29,    39,    37,    40,     1,
      52,    41,    42,     2,     3,     4,    43,     5,    30,    31,
      32,    33,    18,    38,   126,    26,    12,    27,   124,   125,
      28,   123,    29,   127,    76,    40,     1,    13,    41,    42,
       2,     3,     4,    43,     5,    30,    31,    32,    33,    38,
      77,    26,   119,    27,   113,     0,    28,     0,    29,    79,
       0,    40,     0,     0,    41,    42,     0,     0,   120,    43,
       0,    30,    31,    32,    33,    38,     0,    26,     0,    27,
       0,     0,    28,     0,    29,   114,     0,    40,     0,     0,
      41,    42,    58,    59,    60,    43,    62,    30,    31,    32,
      33,    38,     0,    26,     0,    27,     0,     0,    28,     0,
      29,     0,     0,    40,     0,     0,    41,    42,     0,     0,
       0,    43,     0,    30,    31,    32,    33,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,    69,
       0,    70,    71,    72,    73,     0,    74,    75,     0,     0,
      89,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,    69,     0,    70,    71,    72,    73,     0,
      74,    75,     0,    26,   118,    27,     0,    26,    28,    27,
      29,     0,    28,    84,    29,    26,    92,    27,     0,     0,
      28,     0,    29,    30,    31,    32,    33,    30,    31,    32,
      33,     0,     0,     0,     0,    30,    31,    32,    33,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    69,     0,    70,    71,    72,    73,     0,    74,    75,
       0,    91,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,     0,    69,     0,    70,    71,    72,    73,
       0,    74,    75,     0,   121,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,     0,    69,     0,    70,
      71,    72,    73,     0,    74,    75,     0,   122,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     0,
      69,     0,    70,    71,    72,    73,     0,    74,    75,    58,
      59,    60,    61,    62,    63,     0,    65,    66,    67,    68,
       0,    69,     0,    70,    71,    72,    73,     0,    74,    75,
      58,    59,    60,    61,    62,    63,     0,    65,    66,    67,
      68,     0,    69,     0,    70,    71,    72,    73,     0,     0,
      75,    58,    59,    60,     0,    62,    63,     0,    65,    66,
      67,    68,     0,    69,     0,    70,    71,    72,    73,     0,
       0,    75,    58,    59,    60,     0,    62,    63,     1,    65,
       0,     0,     2,     3,     4,     0,     5,    71,    72,    58,
      59,    60,    75,    62,    63,     0,    65,     0,     0,     0,
       0,     0,     0,     0,     0,    72
};

static const yytype_int8 yycheck[] =
{
      18,     0,     0,    23,    37,    37,     9,     6,    26,    27,
      28,    29,     3,     4,     5,    38,     7,     8,    14,    10,
      19,    12,    13,    26,    15,    43,    17,    18,    19,    27,
      26,    51,    23,    31,    32,    33,    45,    35,    47,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    81,    16,
       7,     0,    37,     9,    82,    83,    14,     6,    16,    16,
      18,    16,    16,    21,    24,    23,    24,    76,    26,    27,
      26,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,     7,    14,    28,    16,     6,    18,   121,   122,
      21,   119,    23,   126,     9,    26,    27,     6,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    14,
      25,    16,     9,    18,    76,    -1,    21,    -1,    23,    24,
      -1,    26,    -1,    -1,    29,    30,    -1,    -1,    25,    34,
      -1,    36,    37,    38,    39,    14,    -1,    16,    -1,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    -1,    -1,
      29,    30,     3,     4,     5,    34,     7,    36,    37,    38,
      39,    14,    -1,    16,    -1,    18,    -1,    -1,    21,    -1,
      23,    -1,    -1,    26,    -1,    -1,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    37,    38,    39,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      -1,    17,    18,    19,    20,    -1,    22,    23,    -1,    -1,
      26,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    -1,    17,    18,    19,    20,    -1,
      22,    23,    -1,    16,    26,    18,    -1,    16,    21,    18,
      23,    -1,    21,    26,    23,    16,    25,    18,    -1,    -1,
      21,    -1,    23,    36,    37,    38,    39,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    36,    37,    38,    39,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    22,    23,
      -1,    25,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    -1,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    -1,    17,
      18,    19,    20,    -1,    22,    23,    -1,    25,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    -1,    17,    18,    19,    20,    -1,    22,    23,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    12,    13,
      -1,    15,    -1,    17,    18,    19,    20,    -1,    22,    23,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    12,
      13,    -1,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      23,     3,     4,     5,    -1,     7,     8,    -1,    10,    11,
      12,    13,    -1,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    23,     3,     4,     5,    -1,     7,     8,    27,    10,
      -1,    -1,    31,    32,    33,    -1,    35,    18,    19,     3,
       4,     5,    23,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    27,    31,    32,    33,    35,    49,    50,    53,    57,
      59,     0,    50,    53,    57,    37,    54,    60,     7,    16,
      14,    26,    51,     9,    26,    58,    16,    18,    21,    23,
      36,    37,    38,    39,    63,    55,    56,    59,    14,    24,
      26,    29,    30,    34,    52,    57,    59,    61,    63,    37,
      60,     9,    26,    63,    63,    63,    63,    16,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    15,
      17,    18,    19,    20,    22,    23,     9,    25,    37,    24,
      61,    62,    16,    16,    26,    63,    24,    52,    52,    26,
      60,    25,    25,    63,    64,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    56,    24,    61,    63,    63,    26,     9,
      25,    25,    25,    63,    61,    61,    28,    61
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    49,    49,    49,    49,    49,    50,    51,
      51,    52,    52,    52,    52,    53,    54,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    59,    59,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     2,     3,     3,
       2,     2,     2,     1,     1,     3,     4,     1,     3,     1,
       2,     3,     4,     2,     3,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     2,     3,     5,     7,     5,     2,
       3,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     3,     4,     1,     1,     1,     1,
       3,     1,     3
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
  case 2: /* FunctionsAndDeclarations: FunctionDefinition  */
#line 45 "uccompiler.y"
                                                                            {}
#line 1425 "y.tab.c"
    break;

  case 3: /* FunctionsAndDeclarations: FunctionDeclaration  */
#line 46 "uccompiler.y"
                                                                            {}
#line 1431 "y.tab.c"
    break;

  case 4: /* FunctionsAndDeclarations: Declaration  */
#line 47 "uccompiler.y"
                                                                            {}
#line 1437 "y.tab.c"
    break;

  case 5: /* FunctionsAndDeclarations: FunctionsAndDeclarations FunctionDefinition  */
#line 48 "uccompiler.y"
                                                                            {}
#line 1443 "y.tab.c"
    break;

  case 6: /* FunctionsAndDeclarations: FunctionsAndDeclarations FunctionDeclaration  */
#line 49 "uccompiler.y"
                                                                            {}
#line 1449 "y.tab.c"
    break;

  case 7: /* FunctionsAndDeclarations: FunctionsAndDeclarations Declaration  */
#line 50 "uccompiler.y"
                                                                            {}
#line 1455 "y.tab.c"
    break;

  case 8: /* FunctionDefinition: TypeSpec FunctionDeclarator FunctionBody  */
#line 53 "uccompiler.y"
                                                                            {}
#line 1461 "y.tab.c"
    break;

  case 9: /* FunctionBody: LBRACE DeclarationsAndStatements RBRACE  */
#line 56 "uccompiler.y"
                                                                            {}
#line 1467 "y.tab.c"
    break;

  case 10: /* FunctionBody: LBRACE RBRACE  */
#line 57 "uccompiler.y"
                                                                            {}
#line 1473 "y.tab.c"
    break;

  case 11: /* DeclarationsAndStatements: Statement DeclarationsAndStatements  */
#line 60 "uccompiler.y"
                                                                            {}
#line 1479 "y.tab.c"
    break;

  case 12: /* DeclarationsAndStatements: Declaration DeclarationsAndStatements  */
#line 61 "uccompiler.y"
                                                                            {}
#line 1485 "y.tab.c"
    break;

  case 13: /* DeclarationsAndStatements: Statement  */
#line 62 "uccompiler.y"
                                                                            {}
#line 1491 "y.tab.c"
    break;

  case 14: /* DeclarationsAndStatements: Declaration  */
#line 63 "uccompiler.y"
                                                                            {}
#line 1497 "y.tab.c"
    break;

  case 15: /* FunctionDeclaration: TypeSpec FunctionDeclarator SEMI  */
#line 66 "uccompiler.y"
                                                                            {}
#line 1503 "y.tab.c"
    break;

  case 16: /* FunctionDeclarator: IDENTIFIER LPAR ParameterList RPAR  */
#line 69 "uccompiler.y"
                                                                            {}
#line 1509 "y.tab.c"
    break;

  case 17: /* ParameterList: ParameterDeclaration  */
#line 72 "uccompiler.y"
                                                                            {}
#line 1515 "y.tab.c"
    break;

  case 18: /* ParameterList: ParameterList COMMA ParameterDeclaration  */
#line 73 "uccompiler.y"
                                                                            {}
#line 1521 "y.tab.c"
    break;

  case 19: /* ParameterDeclaration: TypeSpec  */
#line 76 "uccompiler.y"
                                                                            {}
#line 1527 "y.tab.c"
    break;

  case 20: /* ParameterDeclaration: TypeSpec IDENTIFIER  */
#line 77 "uccompiler.y"
                                                                            {}
#line 1533 "y.tab.c"
    break;

  case 21: /* Declaration: TypeSpec Declarator SEMI  */
#line 80 "uccompiler.y"
                                                                            {}
#line 1539 "y.tab.c"
    break;

  case 22: /* Declaration: TypeSpec Declarator Aux_Declaration SEMI  */
#line 81 "uccompiler.y"
                                                                            {}
#line 1545 "y.tab.c"
    break;

  case 23: /* Aux_Declaration: COMMA Declarator  */
#line 84 "uccompiler.y"
                                                                            {}
#line 1551 "y.tab.c"
    break;

  case 24: /* Aux_Declaration: Aux_Declaration COMMA Declarator  */
#line 85 "uccompiler.y"
                                                                            {}
#line 1557 "y.tab.c"
    break;

  case 25: /* TypeSpec: CHAR  */
#line 88 "uccompiler.y"
                                                                            {}
#line 1563 "y.tab.c"
    break;

  case 26: /* TypeSpec: INT  */
#line 89 "uccompiler.y"
                                                                            {}
#line 1569 "y.tab.c"
    break;

  case 27: /* TypeSpec: VOID  */
#line 90 "uccompiler.y"
                                                                            {}
#line 1575 "y.tab.c"
    break;

  case 28: /* TypeSpec: SHORT  */
#line 91 "uccompiler.y"
                                                                            {}
#line 1581 "y.tab.c"
    break;

  case 29: /* TypeSpec: DOUBLE  */
#line 92 "uccompiler.y"
                                                                            {}
#line 1587 "y.tab.c"
    break;

  case 30: /* Declarator: IDENTIFIER  */
#line 95 "uccompiler.y"
                                                                            {}
#line 1593 "y.tab.c"
    break;

  case 31: /* Declarator: IDENTIFIER ASSIGN Expr  */
#line 96 "uccompiler.y"
                                                                            {}
#line 1599 "y.tab.c"
    break;

  case 32: /* Statement: Expr SEMI  */
#line 99 "uccompiler.y"
                                                                            {}
#line 1605 "y.tab.c"
    break;

  case 33: /* Statement: SEMI  */
#line 100 "uccompiler.y"
                                                                            {}
#line 1611 "y.tab.c"
    break;

  case 34: /* Statement: LBRACE RBRACE  */
#line 101 "uccompiler.y"
                                                                            {}
#line 1617 "y.tab.c"
    break;

  case 35: /* Statement: LBRACE Aux_Statement RBRACE  */
#line 102 "uccompiler.y"
                                                                            {}
#line 1623 "y.tab.c"
    break;

  case 36: /* Statement: IF LPAR Expr RPAR Statement  */
#line 103 "uccompiler.y"
                                                                            {}
#line 1629 "y.tab.c"
    break;

  case 37: /* Statement: IF LPAR Expr RPAR Statement ELSE Statement  */
#line 104 "uccompiler.y"
                                                                            {}
#line 1635 "y.tab.c"
    break;

  case 38: /* Statement: WHILE LPAR Expr RPAR Statement  */
#line 105 "uccompiler.y"
                                                                            {}
#line 1641 "y.tab.c"
    break;

  case 39: /* Statement: RETURN SEMI  */
#line 106 "uccompiler.y"
                                                                            {}
#line 1647 "y.tab.c"
    break;

  case 40: /* Statement: RETURN Expr SEMI  */
#line 107 "uccompiler.y"
                                                                            {}
#line 1653 "y.tab.c"
    break;

  case 41: /* Aux_Statement: Statement  */
#line 110 "uccompiler.y"
                                                                            {}
#line 1659 "y.tab.c"
    break;

  case 42: /* Aux_Statement: Aux_Statement Statement  */
#line 111 "uccompiler.y"
                                                                            {}
#line 1665 "y.tab.c"
    break;

  case 43: /* Expr: Expr ASSIGN Expr  */
#line 114 "uccompiler.y"
                                                                            {}
#line 1671 "y.tab.c"
    break;

  case 44: /* Expr: Expr COMMA Expr  */
#line 115 "uccompiler.y"
                                                                            {}
#line 1677 "y.tab.c"
    break;

  case 45: /* Expr: Expr PLUS Expr  */
#line 116 "uccompiler.y"
                                                                            {}
#line 1683 "y.tab.c"
    break;

  case 46: /* Expr: Expr MINUS Expr  */
#line 117 "uccompiler.y"
                                                                            {}
#line 1689 "y.tab.c"
    break;

  case 47: /* Expr: Expr MUL Expr  */
#line 118 "uccompiler.y"
                                                                            {}
#line 1695 "y.tab.c"
    break;

  case 48: /* Expr: Expr DIV Expr  */
#line 119 "uccompiler.y"
                                                                            {}
#line 1701 "y.tab.c"
    break;

  case 49: /* Expr: Expr MOD Expr  */
#line 120 "uccompiler.y"
                                                                            {}
#line 1707 "y.tab.c"
    break;

  case 50: /* Expr: Expr OR Expr  */
#line 121 "uccompiler.y"
                                                                            {}
#line 1713 "y.tab.c"
    break;

  case 51: /* Expr: Expr AND Expr  */
#line 122 "uccompiler.y"
                                                                            {}
#line 1719 "y.tab.c"
    break;

  case 52: /* Expr: Expr BITWISEAND Expr  */
#line 123 "uccompiler.y"
                                                                            {}
#line 1725 "y.tab.c"
    break;

  case 53: /* Expr: Expr BITWISEOR Expr  */
#line 124 "uccompiler.y"
                                                                            {}
#line 1731 "y.tab.c"
    break;

  case 54: /* Expr: Expr BITWISEXOR Expr  */
#line 125 "uccompiler.y"
                                                                            {}
#line 1737 "y.tab.c"
    break;

  case 55: /* Expr: Expr EQ Expr  */
#line 126 "uccompiler.y"
                                                                            {}
#line 1743 "y.tab.c"
    break;

  case 56: /* Expr: Expr NE Expr  */
#line 127 "uccompiler.y"
                                                                            {}
#line 1749 "y.tab.c"
    break;

  case 57: /* Expr: Expr LE Expr  */
#line 128 "uccompiler.y"
                                                                            {}
#line 1755 "y.tab.c"
    break;

  case 58: /* Expr: Expr GE Expr  */
#line 129 "uccompiler.y"
                                                                            {}
#line 1761 "y.tab.c"
    break;

  case 59: /* Expr: Expr LT Expr  */
#line 130 "uccompiler.y"
                                                                            {}
#line 1767 "y.tab.c"
    break;

  case 60: /* Expr: Expr GT Expr  */
#line 131 "uccompiler.y"
                                                                            {}
#line 1773 "y.tab.c"
    break;

  case 61: /* Expr: PLUS Expr  */
#line 132 "uccompiler.y"
                                                                            {}
#line 1779 "y.tab.c"
    break;

  case 62: /* Expr: MINUS Expr  */
#line 133 "uccompiler.y"
                                                                            {}
#line 1785 "y.tab.c"
    break;

  case 63: /* Expr: NOT Expr  */
#line 134 "uccompiler.y"
                                                                            {}
#line 1791 "y.tab.c"
    break;

  case 64: /* Expr: IDENTIFIER LPAR RPAR  */
#line 135 "uccompiler.y"
                                                                            {}
#line 1797 "y.tab.c"
    break;

  case 65: /* Expr: IDENTIFIER LPAR Aux_Expr RPAR  */
#line 136 "uccompiler.y"
                                                                            {}
#line 1803 "y.tab.c"
    break;

  case 66: /* Expr: IDENTIFIER  */
#line 137 "uccompiler.y"
                                                                            {}
#line 1809 "y.tab.c"
    break;

  case 67: /* Expr: NATURAL  */
#line 138 "uccompiler.y"
                                                                            {}
#line 1815 "y.tab.c"
    break;

  case 68: /* Expr: CHRLIT  */
#line 139 "uccompiler.y"
                                                                            {}
#line 1821 "y.tab.c"
    break;

  case 69: /* Expr: DECIMAL  */
#line 140 "uccompiler.y"
                                                                            {}
#line 1827 "y.tab.c"
    break;

  case 70: /* Expr: LPAR Expr RPAR  */
#line 141 "uccompiler.y"
                                                                            {}
#line 1833 "y.tab.c"
    break;

  case 72: /* Aux_Expr: Aux_Expr COMMA Expr  */
#line 145 "uccompiler.y"
                                                                            {}
#line 1839 "y.tab.c"
    break;


#line 1843 "y.tab.c"

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

#line 148 "uccompiler.y"


