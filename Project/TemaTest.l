%{
#include <stdio.h>
#include<string.h>
%}
%%

"int"|"bool"|"char"|"float"|"string" {printf("TIP_DATE %s\n", yytext);}

"start" {printf("START %s\n", yytext); }
"final" {printf("FINAL %s\n", yytext); }

-?0|([1-9][0-9]*) {printf("NUMAR_INTREG %s\n", yytext); }
"TRUE"|"FALSE" {printf("VALOARE_BOOL %s\n", yytext); }

\'.\' {printf("CARACTER %s\n", yytext);} 
\".*\" {printf("STRING %s\n", yytext); }
-?(0|[1-9][0-9]*)\.[0-9]+ {printf("REAL %s\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]*\s*(\[[0-9]+\])+ {printf("VECTOR %s\n", yytext); }
"class" printf("CLASA %s\n", yytext); 

"<-" {printf("ASIGNARE %s\n", yytext); }

("+"|"-"|"*"|"/"|"%"|"=") {printf("SEMNE %s\n", yytext); }

"and" {printf("SI %s\n", yytext); }
"or"  {printf("ORI %s\n", yytext); }
"not" {printf("NU %s\n", yytext); }

"<"   {printf("LT %s\n", yytext); }
"<="  {printf("LT_EQUAL %s\n", yytext); }
">"   {printf("GT %s\n", yytext); }
">="  {printf("GT_EQUAL %s\n", yytext); }
"=="  {printf("EQ %s\n", yytext); }
"!="  {printf("NEQ %s\n", yytext); }

"if" {printf("IF %s\n", yytext); }
"else" {printf("ELSE %s\n", yytext); }
"while" {printf("WHILE %s\n", yytext); }
"for" {printf("FOR %s\n", yytext); }

[_a-zA-Z][_a-zA-Z0-9]* {printf("ID %s\n", yytext); }

[ \t]+    ;    // Ignore spaces and tabs
\n        ;    // Ignore newlines

. { printf("UNKNOWN TOKEN: %s\n", yytext); }
%%

int main(int argc, char** argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            printf("Error opening file: %s\n", argv[1]);
            return 1;
        }
        yyin = file;   // Set Lex input to the file
    }
    yylex();  // Start tokenizing
    return 0;
}