
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
    extern int yylineno;
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
%token  MainProg
%token  Nombre
%Token  Char
%token  Int
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
%token Accolade_ouvrante
%token Accolade_fermant
%token Extends
//%error-verbose
%start program

%% 
program : MainClass ClassDeclaration     { print_symtab();check_main();check_code_int();print_codetab(); printf("Analyze finished with success \n");}

MainClass            : ClassScope Accolade_ouvrante Public Static Void Main Parenthese_ouvrante MainMethodParam Parenthese_fermante Accolade_ouvrante Statement Accolade_fermante Accolade_fermante     { insert_code("SORTIE",-1,"main",""); insert_code("SORTIE",-1,"","CLASS");}
                        | ClassScope error Public Static Void Main Parenthese_ouvrante MainMethodParam Parenthese_fermante Accolade_ouvrante Statement Accolade_fermante Accolade_fermante { yyerror ("expected `{` after class declaration "); YYABORT}
                        | ClassScope Accolade_ouvrante error Static Void Main Parenthese_ouvrante MainMethodParam Parenthese_fermante Accolade_ouvrante Statement Accolade_fermante Accolade_fermante { yyerror ("main function must be public "); YYABORT}
                        | ClassScope Accolade_ouvrante Public error Void Main Parenthese_ouvrante MainMethodParam Parenthese_fermante Accolade_ouvrante Statement Accolade_fermante Accolade_fermante { yyerror ("main function must be static "); YYABORT}
                        | ClassScope Accolade_ouvrante Public Static error Main Parenthese_ouvrante MainMethodParam Parenthese_fermante Accolade_ouvrante Statement Accolade_fermante Accolade_fermante { yyerror ("return type must be void "); YYABORT}        
                        | ClassScope Accolade_ouvrante Public Static Void error Parenthese_ouvrante MainMethodParam Parenthese_fermante Accolade_ouvrante Statement Accolade_fermante Accolade_fermante { yyerror ("missing main class "); YYABORT}
                        | ClassScope Accolade_ouvrante Public Static Static Main error MainMethodParam Parenthese_fermante Accolade_ouvrante Statement Accolade_fermante Accolade_fermante { yyerror ("missing opening parentheses"); YYABORT}    
                        | ClassScope Accolade_ouvrante Public Static Parenthse_ouvrante Main Parenthese_ouvrante MainMethodParam error Accolade_ouvrante Statement Accolade_fermante Accolade_fermante { yyerror ("missing closing parentheses"); YYABORT}  
                        | ClassScope Accolade_ouvrante Public Static Void Main Parenthese_ouvrante MainMethodParam Parenthese_fermante error Statement Accolade_fermante Accolade_fermante { yyerror ("missing opening brackets"); YYABORT}  
                        | ClassScope Accolade_ouvrante Public Static Void Main Parenthese_ouvrante MainMethodParam Parenthese_fermante  Statement Accolade_fermante error { yyerror ("missing closing brackets"); YYABORT}  
                        | ClassScope Accolade_ouvrante Public Static Void Main Parenthese_ouvrante MainMethodParam Parenthese_fermante Statement error Accolade_fermante{ yyerror ("missing closing brackets"); YYABORT}  
                        

ClassScope : Class Identifiant                             {class_id +=1;code_index  = lookup_class($2,class_id);
                            class_name = $2;
                            insert_code("ENTREE",code_index,"","CLASS");
                        }
            | error Identifiant { yyerror ("missing class notation"); YYABORT} 
            | Class = error { yyerror ("missing Identifier"); YYABORT} 
            ;
ClassExtension : Extends Identifiant { insert_code("EXTENDS",code_index,$2,""); }
                | error Identifiant { yyerror ("missing extends notation"); YYABORT} 
                | Extends = error { yyerror ("missing Identifier"); YYABORT} 
                ;

ClassDeclaration   : ClassScope ClassExtension Accolade_ouvrante VarDeclaration MethodDeclaration Accolade_fermante   {
                            insert_code("SORTIE",-1,"","CLASS");
                            insert_code("RETOUR",retour+1,"","");
                        }
                    |ClassDecralationList
                    | error ClassExtension Accolade_ouvrante VarDeclaration MethodDeclaration Accolade_fermante 
                    | ClassScope ClassExtension error VarDeclaration MethodDeclaration Accolade_fermante { yyerror ("missing opening"); YYABORT} 
                    | ClassScope ClassExtension Accolade_ouvrante VarDeclaration MethodDeclaration error { yyerror ("missing closing brackets"); YYABORT} 
                    ; 
ClassDeclarationList : ClassDeclaration ClassDeclarationList
                    | ClassDeclaration
                    ;
VarDeclaration : Type Identifiant {
                            if(isParam)
                                set_param($2,$1);
                            else {
                                code_index = lookup_variable($2,$1,level,class_id);
                                insert_code("LDC",code_index,"","");
                                insert_code("STORE",address,"","");
                                address++;
                            }
                        }
                | error Identifiant   { yyerror (" Valid Type is needed  "); YYABORT}
                | Type  error   { yyerror ("Identifier is needed  "); YYABORT}
Type : Int { $1 = "int";}
    | Bool { $1 = "bool";}
    | String { $1 = "string";}
    | Identifier { $1 = "identifier";}
    ;
Statement : If Parenthese_ouvrante Expression Parenthese_fermante Statement Else Statement |
            While Parenthese_ouvrante Expression Parenthese_fermante Statement |
            Print Parenthese_ouvrante Expression Parenthese_fermante Point_virgule |
            Accolade_ouvrante StatementList Accolade_fermante |
            Identifier Affectation Expression Point_virgule |
            Identifier "[" Expression "]" Affectation Expression Point_virgule |
            ;
StatementList : Statement StatementList | Statement
                ;
Expression : Expression Operateur Expression |
            Expression"[" Expression "]" |
            Expression "." Length |
            Expression "." Identifier Parenthese_ouvrante Expression ExpressionList Parenthese_fermante |
ExpressionList : Expression | Expression "," ExpressionList |Bool | Int | "this"|"new" "int" "[" Expression "]"|"new" Identifier Parenthese_ouvrante Parenthese_fermante
                 |"!" Expression |"(" Expression ")"|Identifier
                ;
MethodDeclaration : Public Type Identifiant Parenthese_ouvrante MethodParam Parenthese_fermante Accolade_ouvrante VarDeclarationList StatementList Return Expression Point_virgule Accolade_fermante {
                            insert_code("SORTIE",-1,"","METHOD");
                            insert_code("RETOUR",retour+1,"","");
                        }
                | error Type Identifiant Parenthese_ouvrante MethodParam Parenthese_fermante Accolade_ouvrante VarDeclarationList StatementList Return Expression Point_virgule Accolade_fermante { yyerror ("missing public"); YYABORT}
                | Public error Identifiant Parenthese_ouvrante MethodParam Parenthese_fermante Accolade_ouvrante VarDeclarationList StatementList Return Expression Point_virgule Accolade_fermante { yyerror ("missing return type"); YYABORT}
                | Public Type error Parenthese_ouvrante MethodParam Parenthese_fermante Accolade_ouvrante VarDeclarationList StatementList Return Expression Point_virgule Accolade_fermante { yyerror ("missing method name"); YYABORT}
                | Public Type Identifiant error MethodParam Parenthese_fermante Accolade_ouvrante VarDeclarationList StatementList Return Expression Point_virgule Accolade_fermante { yyerror ("missing opening parentheses"); YYABORT}
                | Public Type Identifiant Parenthese_ouvrante MethodParam error Accolade_ouvrante VarDeclarationList StatementList Return Expression Point_virgule Accolade_fermante { yyerror ("missing closing parentheses"); YYABORT}
                | Public Type Identifiant Parenthese_ouvrante MethodParam Parenthese_fermante error VarDeclarationList StatementList Return Expression Point_virgule Accolade_fermante { yyerror ("missing opening brackets"); YYABORT}
                | Public Type Identifiant Parenthese_ouvrante MethodParam Parenthese_fermante Accolade_ouvrante VarDeclarationList StatementList Return Expression Point_virgule error { yyerror ("missing closing brackets"); YYABORT}
                ;
VerDeclarationList : VarDeclaration VarDeclarationList | VarDeclaration
                    ;

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
