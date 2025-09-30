%{
#include <stdio.h>
#include <string.h>
#include "Tema.tab.h"
%}

%%

"int"|"bool"|"char"|"float"|"string" { return TIP_DATE; }
"void" {return VOID;}
"clasa" { return CLASA;}

"start_clasa" { return START_CLASA; }
"final_clasa" { return FINAL_CLASA; }

"start" { return START; }
"final" { return FINAL; }

"start_i" {return START_I;}
"final_i" {return END_I;}

"[" {return LEFT_B;}
"]" {return RIGHT_B;}

"." { return DOT;}

-?0|([1-9][0-9]*) { return NUMAR_INTREG; }
"TRUE"|"FALSE" { return VALOARE_BOOL; }
\'.\' { return CARACTER; }
\"[^\"]*\" { return STRING; }
-?(0|[1-9][0-9]*)\.[0-9]+ { return REAL; }

[a-zA-Z_][a-zA-Z0-9_]*\s*(\[[0-9]+\])+ { return VECTOR; }

"<-" { return ASIGNARE; }

("+"|"-"|"*"|"/"|"%") { return SEMNE; }

"and" { return AND; }
"or"  { return OR; }
"not" { return NU; }

"<"|"<="|">"|">="|"=="|"!=" { return LOGIC; }

"++" {return INC;}
"--" {return DEC;}

"if" { return IF; }
"else" { return ELSE; }
"elif" { return ELIF; }
"while" { return WHILE; }
"for" { return FOR; }
"(" {return OPEN_P;}
")" {return CLOSED_P;}

"printf" { return PRINTF; }
"typeof" { return TYPEOF; }
"," {return SEP;}
";" { return TERMINAT; }

[_a-zA-Z][_a-zA-Z0-9]* { return ID; }

[ \t]+    ;    // Ignore spaces and tabs
\n        ;    // Ignore newlines

. { printf("UNKNOWN TOKEN: %s\n", yytext); }

%%
