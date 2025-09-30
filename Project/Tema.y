%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
%}
%token DOT VOID AND OR INC DEC DO OPEN_P CLOSED_P RIGHT_B LEFT_B LOGIC START_I END_I ELIF SEP STRING CARACTER ID START_CLASA FINAL_CLASA TERMINAT START FINAL TIP_DATE NU SI ORI NUMAR_INTREG VALOARE_BOOL VECTOR IF ELSE FOR REAL CLASA ASIGNARE SEMNE LT LT_EQUAL GT GT_EQUAL EQ NEQ WHILE PRINTF TYPEOF
%start program
%%

program  : declaratii START content_functie FINAL {printf("Programul e corect");}

declaratii: declaratie TERMINAT
            | declaratii declaratie TERMINAT;

declaratie: declaratie_clasa 
            | declaratie_metoda 
            | declaratie_variabila;

declaratie_clasa: CLASA ID START_CLASA content_clasa FINAL_CLASA | CLASA ID START_CLASA FINAL_CLASA ;

content_clasa: declaratie_variabila_clasa TERMINAT|
                content_clasa declaratie_variabila_clasa TERMINAT;

declaratie_variabila: TIP_DATE var 
                    | ID var;

declaratie_variabila_clasa:
            | declaratie_metoda 
            | declaratie_variabila;
         
var: ID| ID SEP var| ID ASIGNARE expresie|ID ASIGNARE expresie SEP var|VECTOR|VECTOR SEP var;

expresie: expresieAritm | valori_non_aritm;

valori_non_aritm:
        CARACTER
        | STRING
        | VALOARE_BOOL;

expresieAritm: valoare
        | valoare SEMNE expresieAritm
        | valoare SEMNE OPEN_P expresieAritm CLOSED_P
        | OPEN_P expresieAritm CLOSED_P SEMNE expresieAritm
        ;

valoare : ID
        | NUMAR_INTREG
        | REAL
        | ID LEFT_B id_vector RIGHT_B
        | apelF_block
        | ID DOT ID
        | apelFClass_block;

apelFClass_block: ID DOT apelF_block;

apelF_block: ID OPEN_P params CLOSED_P 
            | ID OPEN_P CLOSED_P ;

params: expresie | params SEP expresie;

id_vector: valoare_vector SEMNE valoare_vector 
        | valoare_vector SEMNE valoare_vector SEMNE id_vector
        | valoare_vector
        ;

valoare_vector: ID| NUMAR_INTREG | ID LEFT_B id_vector RIGHT_B;

declaratie_metoda: VOID ID OPEN_P variabile  CLOSED_P START_I content_functie END_I
                    | TIP_DATE ID OPEN_P variabile  CLOSED_P START_I content_functie END_I
                    | VOID ID OPEN_P CLOSED_P START_I content_functie END_I
                    | TIP_DATE ID OPEN_P CLOSED_P START_I content_functie END_I;

variabile: TIP_DATE ID | TIP_DATE ID  SEP  variabile | ID ID | ID ID  SEP  variabile| TIP_DATE ID DOT ID |TIP_DATE ID DOT ID SEP variabile;

content_functie: declaratie_variabila TERMINAT 
                | declaratie_variabila TERMINAT content_functie 
                | instructiuni
                | instructiuni content_functie
                ;

instructiuni:instructiune TERMINAT|instructiuni TERMINAT instructiune;

instructiune:ID ASIGNARE expresie
            |ID DOT ID ASIGNARE expresie
            |ID LEFT_B id_vector RIGHT_B ASIGNARE expresie
            |if_block            
            |printf_block
            |typeof_block
            |apelF_block
            |apelFClass_block
            |for_block
            |while_block
            ;

if_block:IF conditie START_I content_functie END_I
        |IF conditie START_I content_functie END_I else_block;

for_block: FOR OPEN_P ID ASIGNARE expresie TERMINAT conditie_for TERMINAT ID ASIGNARE expresie CLOSED_P START_I content_functie END_I;

conditie_for: expresie LOGIC expresie 
    |conditie_for AND expresie LOGIC expresie 
    |conditie_for OR  expresie LOGIC expresie;

conditie: OPEN_P expresie LOGIC expresie CLOSED_P
    |conditie AND OPEN_P expresie LOGIC expresie CLOSED_P  
    |conditie OR OPEN_P expresie LOGIC expresie CLOSED_P;

else_block:ELIF conditie START_I content_functie END_I else_block
        | ELSE START_I content_functie END_I;
        | ELIF conditie START_I content_functie END_I;

printf_block: PRINTF OPEN_P expresie CLOSED_P;

typeof_block: TYPEOF OPEN_P expresie CLOSED_P;

while_block:WHILE conditie START_I content_functie END_I;
                   
%%

int main (int argc, char *argv[]) 

{

 yyin = fopen(argv[1], "r");

	return yyparse();

	}



/* Added because panther doesn't have liby.a installed. */

int yyerror (char *msg) {

	return fprintf (stderr, "YACC: %s\n", msg);

	} 


