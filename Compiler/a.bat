flex analyseurLexical.lex
bison -d syntaxique.y
gcc -o app syntaxique.tab.c lex.yy.c semantic.c CodeGenerator.c
pause