/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TEMA_TAB_H_INCLUDED
# define YY_YY_TEMA_TAB_H_INCLUDED
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
    DOT = 258,                     /* DOT  */
    VOID = 259,                    /* VOID  */
    AND = 260,                     /* AND  */
    OR = 261,                      /* OR  */
    INC = 262,                     /* INC  */
    DEC = 263,                     /* DEC  */
    DO = 264,                      /* DO  */
    OPEN_P = 265,                  /* OPEN_P  */
    CLOSED_P = 266,                /* CLOSED_P  */
    RIGHT_B = 267,                 /* RIGHT_B  */
    LEFT_B = 268,                  /* LEFT_B  */
    LOGIC = 269,                   /* LOGIC  */
    START_I = 270,                 /* START_I  */
    END_I = 271,                   /* END_I  */
    ELIF = 272,                    /* ELIF  */
    SEP = 273,                     /* SEP  */
    STRING = 274,                  /* STRING  */
    CARACTER = 275,                /* CARACTER  */
    ID = 276,                      /* ID  */
    START_CLASA = 277,             /* START_CLASA  */
    FINAL_CLASA = 278,             /* FINAL_CLASA  */
    TERMINAT = 279,                /* TERMINAT  */
    START = 280,                   /* START  */
    FINAL = 281,                   /* FINAL  */
    TIP_DATE = 282,                /* TIP_DATE  */
    NU = 283,                      /* NU  */
    SI = 284,                      /* SI  */
    ORI = 285,                     /* ORI  */
    NUMAR_INTREG = 286,            /* NUMAR_INTREG  */
    VALOARE_BOOL = 287,            /* VALOARE_BOOL  */
    VECTOR = 288,                  /* VECTOR  */
    IF = 289,                      /* IF  */
    ELSE = 290,                    /* ELSE  */
    FOR = 291,                     /* FOR  */
    REAL = 292,                    /* REAL  */
    CLASA = 293,                   /* CLASA  */
    ASIGNARE = 294,                /* ASIGNARE  */
    SEMNE = 295,                   /* SEMNE  */
    LT = 296,                      /* LT  */
    LT_EQUAL = 297,                /* LT_EQUAL  */
    GT = 298,                      /* GT  */
    GT_EQUAL = 299,                /* GT_EQUAL  */
    EQ = 300,                      /* EQ  */
    NEQ = 301,                     /* NEQ  */
    WHILE = 302,                   /* WHILE  */
    PRINTF = 303,                  /* PRINTF  */
    TYPEOF = 304                   /* TYPEOF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TEMA_TAB_H_INCLUDED  */
