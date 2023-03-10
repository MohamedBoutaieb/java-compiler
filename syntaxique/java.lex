
%{	
 /* We usually need these... */	
 #include <stdio.h>	
 #include <stdlib.h>	
 		
 #include "java.tab.h"	                                                                         	
 /* Local stuff we need here... */	
#include <math.h>	 			
%}


%{
int line_number = 1; 
%}
%option yylineno

delim     [ \t]
bl        {delim}+
chiffre   [0-9]
lettre    [a-zA-Z]
id        ({lettre}|$|_)({lettre}|{chiffre}|$|_)*
nb        (("+")|("-"))?{chiffre}+("."{chiffre}+)?(("E"|"e")"-"?{chiffre}+)?
iderrone  {chiffre}({lettre}|{chiffre})*
comment_line       [/][/][^*]*[\n]
multi_line_comment  [/][*][^*]*[*]+([^*/][^*]*[*]+)*[/]
chaine_char  ["][^"]*["] 
ouvrante  (\()
fermante  (\))
line .*\n 
%%
[\n]  { yylineno;   printf(" \n"); }

"package"                                       {return Package;}
"class"                                         {return Class;}
"public"                                      {return Public;}
"static"                                      {return Static;}
"void"                                        {return Void;}
"private"                                     {printf(" private "); return Private;}
"main"                                        {printf(" main "); return Main;}
"return"                                      {printf(" return "); return Return;}
"int"                                         {printf(" int "); return Int;}
"boolean"                                     {printf(" boolean "); return Bool;}
String                                        {printf(" String "); return String;}
"if"                                          {printf(" if "); return If;}
"else"                                        {printf(" else "); return Else;}
"while"                                       {printf(" while "); return While;}
"System.out.println"                          {printf(" afficher"); return Print;}
"for"                                         {printf(" for "); return For;}
"="	                                          {printf(" affectation "); return Affectation;}
"+"	                                          {printf(" addition "); return Addition;}
"-"	                                          {printf(" soustraction "); return Soustraction;}
"*"	                                          {printf(" multiplication "); return Multiplication;}
"/"	                                          {printf(" division "); return Division;}
"&&"	                                       {printf(" et "); return Et;}
"||"	                                       {printf(" ou "); return Ou;}
"!"	                                          {printf(" non "); return Non;}
"=="	                                       {printf(" egal "); return Egal;}
"!="	                                       {printf(" different "); return Different;}
"<"	                                           {printf(" inferieur "); return Inferieur;}
"<="	                                       {printf(" inferieur_egal "); return Inferieur_egal;}
";"                                            {printf(" point_virgule "); return Point_virgule;}                   
{comment_line}                                 {printf(" commentaire_ligne "); return Commentaire_ligne;}
{chaine_char}                                  {printf(" chaine_caractere "); return Chaine_caractere;}
{multi_line_comment}                           {printf(" commentaire_bloc "); return Commentaire_bloc;}
{ouvrante}                                     {printf(" parenth??se_ouvrante "); return Parenthese_ouvrante;}
{fermante}                                     {printf(" parenth??se_fermante "); return Parenthese_fermante;}
{id}                                           {printf(" Identifiant "); return Identifiant;}
{nb}                                           {printf(" Nombre "); return Nombre;}
{iderrone}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
%%

int main(int argc, char *argv[]) 
{   
    yylineno = 1;
     yyin = fopen(argv[1], "r");
     yylex();
     fclose(yyin);
}

int yywrap()
{
	return(1);
}
