flex java.lex
bison -d java.y
gcc -o output java.tab.h lex.yy.c
pause