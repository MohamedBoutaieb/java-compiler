
%{

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>

    #define YYSTYPE char*

    int yyparse(void);
    int yyerror(char const *msg);
    int yylex(void);

    extern int line;

    int class_id = 0;
    int level = 0;
    bool isParam = false;
    int method_call_index = -1;
    int expression_level = 0;

    //other

    int address = 0;
    int code_index = -1;
    char* method_name = "";
    char* class_name = "";
    char* math_op = "";
    char* com_op = "";
    int retour = 0;

    #define YYERROR_VERBOSE 1


%}


%token  Public
%token  Package
%token  Static
%token  Class
%token  Void
%token  Main
%token  Nombre
%token  Bool
%token  String
%token  If
%token  Else
%token  While
%token  Affectation
%token  Addition
%token  Soustraction
%token  Multiplication
%token  Division
%token  Et
%token  Ou
%token  Non
%token  Egal
%token  Point_virgule
%token  Inferieur_egal
%token  Different
%token  Inferieur
%token  Parenthese_ouvrante
%token  Parenthese_fermante
%token  Commentaire_ligne
%token  Identifiant
%token  Private 
%token  Return
%token  Int
%token  For 
%token Chaine_caractere
%token  Commentaire_bloc
%token Print
/*%error-verbose*/
%start program

%% 
program : Public Static Void Main Parenthese_ouvrante String Parenthese_ouvrante Parenthese_fermante Identifiant Parenthese_fermante
        | Public Static Void error Parenthese_ouvrante String Parenthese_ouvrante Parenthese_fermante Identifiant 
        Parenthese_fermante {yyerror (" main class is not defined "); YYABORT}
         | Public error Main Void Main Parenthese_ouvrante String Parenthese_ouvrante Parenthese_fermante Identifiant 
         Parenthese_fermante {yyerror (" return type is not defined "); YYABORT}


%% 

int yyerror(char const *msg) {
       
	
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
	
	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
 
}
