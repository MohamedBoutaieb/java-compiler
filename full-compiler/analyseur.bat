flex java.lex
bison -d java.y
gcc -o app java.tab.c lex.yy.c Symtab.c codeGenerator.c
pause