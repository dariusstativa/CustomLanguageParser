# CustomLanguageParser
This project implements a compiler for a custom programming language, built using Flex (Lex) for lexical analysis and Bison (Yacc) for syntax parsing. It includes symbol table management and error reporting, and compiles source files written in a simplified custom language.
 Features

Lexical analyzer using Flex

Parser and syntax tree using Bison

Custom language grammar rules

Symbol table for variable/function declarations

Syntax error reporting

Modular C++ codebase with SymTable.cpp

How to run:
 Step 1: Generate the lexer
flex Tema.l

 Step 2: Generate the parser
bison -d Tema1.y

 Step 3: Compile all sources together
g++ -std=c++11 Tema1.tab.c lex.yy.c SymTable.cpp -o compiler /usr/lib/x86_64-linux-gnu/libfl.a

 Step 4: Run the compiler with a source file
./compiler new.txt
Replace new.txt with your own source file
