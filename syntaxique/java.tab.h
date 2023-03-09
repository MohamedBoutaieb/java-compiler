
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     Public = 258,
     Package = 259,
     Static = 260,
     Class = 261,
     Void = 262,
     Main = 263,
     Nombre = 264,
     Bool = 265,
     String = 266,
     If = 267,
     Else = 268,
     While = 269,
     Affectation = 270,
     Addition = 271,
     Soustraction = 272,
     Multiplication = 273,
     Division = 274,
     Et = 275,
     Ou = 276,
     Non = 277,
     Egal = 278,
     Point_virgule = 279,
     Inferieur_egal = 280,
     Different = 281,
     Inferieur = 282,
     Parenthese_ouvrante = 283,
     Parenthese_fermante = 284,
     Commentaire_ligne = 285,
     Identifiant = 286,
     Private = 287,
     Return = 288,
     Int = 289,
     For = 290,
     Chaine_caractere = 291,
     Commentaire_bloc = 292,
     Print = 293
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


