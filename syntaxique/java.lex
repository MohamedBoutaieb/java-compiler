
%{	
 /* We usually need these... */	
 		
 #include "java.tab.h"	                                                                         	
 /* Local stuff we need here... */	
  
    		
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
"public"                                      {printf("__public__"); return Public;}
"static"                                      {printf("__static__"); return Static;}
"void"                                        {printf("__void__"); return Void;}
"private"                                     {printf(" private "); return Private;}
"main"                                        {printf(" main "); return MainProg;}
"return"                                      {printf(" return "); return Return;}
"int"                                         {printf(" int "); return Int;}
"boolean"                                     {printf(" boolean "); return Bool;}
"char"                                        {printf(" char "); return Char;}
String                                        {printf(" String "); return String;}
"if"                                          {printf(" _if "); return If;}
"else"                                        {printf(" _else "); return Else;}
"while"                                       {printf(" _while "); return While;}
"System.out.println"                          {printf(" _afficher"); return Print;}
"for"                                         {printf(" for "); return For;}
"extends"                                     {printf(" extends "); return Extends;}
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
{ouvrante}                                     {printf(" parenthèse_ouvrante "); return Parenthese_ouvrante;}
{fermante}                                     {printf(" parenthèse_fermante "); return Parenthese_fermante;}
{id}                                           {printf(" Identifiant "); return Identifiant;}
{nb}                                           {printf(" Nombre "); return Nombre;}
{iderrone}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
"{"                                            {printf(" accolade_ouvrante "); return Accolade_ouvrante;}
"}"                                            {printf(" accolade_fermante "); return Accolade_fermante;}
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
