flex java.lex
bison -d java.y
gcc -o output java.tab.c lex.yy.c
pause