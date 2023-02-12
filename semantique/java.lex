
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

class                                          printf(" class ");
"public"                                       printf(" public ");
"static"                                       printf(" static ");
"void"                                         printf(" void ");
"private"                                      printf(" private ");
"main"                                         printf(" main ");
"return"                                       printf(" return ");
"int"                                          printf(" int ");
"boolean"                                      printf(" boolean ");
String                                         printf(" String ");
"if"                                           printf(" if ");
"else"                                         printf(" else ");
"while"                                        printf(" while ");
"System.out.println"                           printf(" afficher");
"for"                                          printf(" boucle_for");
"="	                                           printf(" affectation ");
"+"	                                           printf(" addition ");
"-"	                                           printf(" soustraction ");
"*"	                                           printf(" multiplication ");
"/"	                                           printf(" division ");
"&&"	                                       printf(" et ");
"||"	                                       printf(" ou ");
"!"	                                           printf(" non ");
"=="	                                       printf(" egal ");
"!="	                                       printf(" different ");
"<"	                                           printf(" inferieur ");
"<="	                                       printf(" inferieur_ou_egal ");
";"                                            printf(" point_virgule ");                     
{comment_line}                                 printf(" commentaire_à_une_ligne \n ");
{chaine_char}                                  printf(" chaine_de_caractère ");
{multi_line_comment}                           printf(" commentaire_à_plusieurs_lignes ");
{ouvrante}                                     printf(" parenthèse_ouvrante ");
{fermante}                                     printf(" parenthèse_fermante ");
{id}                                           printf(" Identifier ");
{nb}                                           printf(" Number ");
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
