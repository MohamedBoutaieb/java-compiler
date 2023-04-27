%{
     #include <stdio.h>
     #include <stdlib.h>
     #include <string.h>
     #include "syntaxique.tab.h"
     #include <math.h>

     #define YYSTYPE char*

     int line = 1;
%}

delim                                   ([ \t]|(" "))
bl                                      {delim}+
bl0                                     {delim}*
numberN                                 [0-9]
numberNN                                [1-9]
lettre                                  [a-zA-Z]

openParentheses                         (\()
closeParentheses                        (\))
openSquareBrackets                      (\[)
closeSquareBrackets                     (\])
openBraces                              (\{)
closeBraces                             (\})
COMMENT_LINE                            "//"

identifier                              ([A-Za-z_][A-Za-z0-9_]*)
integerLiteral                          ({numberNN}{numberN}*)
booleanLiteral                          "true"|"false"
illegalIdentifier                       {numberN}({lettre}|{numberN})*

dataType                                {primtiveType}|tableType
primtiveType                            "int"|"bool"|"String"|"byte"|"char"|"short"|"long"|"float"|"double"
tableType                               ({primtiveType}{bl}{openSquareBrackets}{bl0}{closeSquareBrackets})
chaine_char  ["][^"]*["] 
%%

{bl}                                    /* pas d'actions */
"\n"                                    {line++;printf("\n");}

"public"                                { yylval = (int)strdup(yytext); printf("__PUBLIC__"); return  _PUBLIC;            }
"static"                                { yylval = (int)strdup(yytext); printf("__STATIC__"); return  _STATIC;            }
"class"                                 { yylval = (int)strdup(yytext);  printf("__CLASS__"); return  _CLASS;             }
"void"                                  { yylval = (int)strdup(yytext);  printf("__VOID__"); return  _VOID;              }
"main"                                  { yylval = (int)strdup(yytext);  printf("__MAIN__"); return  _MAIN;              }
"extends"                               { yylval = (int)strdup(yytext);  printf("__EXTENDS__"); return  _EXTENDS;           }
"return"                                { yylval = (int)strdup(yytext);  printf("__RETURN__"); return  _RETURN;            }
"System.out.println"                    { yylval = (int)strdup(yytext);  printf("__PRNT__"); return  _SOP;               }
"length"                                { yylval = (int)strdup(yytext); printf("__LGTH__"); return  _LENGTH;            }
"this"                                  { yylval = (int)strdup(yytext); printf("__THIS__"); return  _THIS;              }
"new"                                   { yylval = (int)strdup(yytext); printf("__NEW__"); return  _NEW;               }

"if"                                    { yylval = (int)strdup(yytext);  printf("__IF__"); return  _IF;                }
"else"                                  { yylval = (int)strdup(yytext); printf("__ELSE__"); return  _ELSE;              }
"while"                                 { yylval = (int)strdup(yytext); printf("__WHILE__"); return  _WHILE;             }

"int"                                   { yylval = (int)strdup(yytext); printf("__INT__"); return  _INTEGER;           }
"String"                                { yylval = (int)strdup(yytext); printf("__STR__"); return  _STRING;            }
{dataType}                              { yylval = (int)strdup(yytext); printf("__DATATYPE__"); return  _DATATYPE;          }

{openParentheses}                       { yylval = (int)strdup(yytext); printf("("); return  _OPENPARENT;        }
{closeParentheses}                      { yylval = (int)strdup(yytext); printf(")"); return  _CLOSEPARENT;       }
{openSquareBrackets}                    { yylval = (int)strdup(yytext); printf("[");  return  _OPENSQRBRACK;      }
{closeSquareBrackets}                   { yylval = (int)strdup(yytext);  printf("]"); return  _CLOSESQRBRACK;     }
{openBraces}                            { yylval = (int)strdup(yytext); printf("{}"); return  _OPENBRAC;          }
{closeBraces}                           { yylval = (int)strdup(yytext);printf("}"); return  _CLOSEBRAC;         }
{chaine_char}                           { yylval = (int)strdup(yytext);printf("'string'"); return  _ChainChar;         }
"&&"                                    { yylval = (int)strdup(yytext);printf("&&"); return  _AND;               }
"||"                                    { yylval = (int)strdup(yytext);printf("||"); return  _OR;                }

"."                                     { yylval = (int)strdup(yytext);printf("."); return  _DOT;               }
";"                                     { yylval = (int)strdup(yytext);printf(";"); return  _SEMICOLON;         }
","                                     { yylval = (int)strdup(yytext); printf(",");return  _COMMA;             }
"\""                                    { yylval = (int)strdup(yytext); return  _DOUBLEQUOTE;       }
"\'"                                    { yylval = (int)strdup(yytext); return  _SINGLEQUOTE;       }

"+"                                     { yylval = (int)strdup(yytext); printf("+"); return  _PLUS;              }
"-"                                     { yylval = (int)strdup(yytext); printf("-"); return  _MINUS;             }
"*"                                     { yylval = (int)strdup(yytext); printf("*"); return  _MULTIPLY;          }
"!"                                     { yylval = (int)strdup(yytext); printf("!"); return  _NOT;               }
"="                                     { yylval = (int)strdup(yytext); printf(" = "); return  _EQUAL;             }
"\/"                                    { yylval = (int)strdup(yytext); return  _DIV;               }

"<"|">"|"<="|">="|"=="|"!="             { yylval = (int)strdup(yytext); return  _COMPOP;            }



{booleanLiteral}                        { yylval = (int)strdup(yytext); printf("__bool__"); return  _BOOLVALUE;         }
{integerLiteral}                        { yylval = (int)strdup(yytext);printf("__int__"); return  _INTEGERVALUE;      }
{identifier}                            { yylval = (int)strdup(yytext); printf("__ident__"); return  _IDENT;             }
{illegalIdentifier}                     { printf("\nLEXICAL ERROR on character %d (line %d): Illegal Identifier\n\n", yytext[0], line);   }

\/\/.*                                  {   /* skip */   }

"/*"                                    {
                                             int isComment = 1;
                                             char c;
                                             while(isComment) {
                                                  c = input();
                                                  if(c == '*') {
                                                       char ch = input();
                                                       if(ch == '/') isComment = 0;
                                                       else unput(ch);
                                                  }
                                                  else if(c == '\n') line++;
                                                  else if(c == EOF) {
                                                       printf("\nLEXICAL ERROR (line %d): Unterminated comment", line);
                                                       isComment = 0;
                                                  }
                                             }
                                        }

"*\/"                                 { yylval = (int)strdup(yytext); printf("\nLEXICAL ERROR on character %d (line %d)\n\n", yytext[0], line);   }

.                                     { yylval = (int)strdup(yytext); printf("\nLEXICAL ERROR on character %d (line %d)\n\n", yytext[0], line);   }

%%

int yywrap()
{
 return(1);
}