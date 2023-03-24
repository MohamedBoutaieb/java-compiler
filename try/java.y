
%{

#include <stdio.h>	
 			
int yyerror(char const *msg);	
int yylex(void);
extern int yylineno;


%}


%token  Public
%token  Static
%token Void
%token Class
%error-verbose
%start program

%% 
program : Public Static Void


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
