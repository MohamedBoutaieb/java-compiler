
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
     MainProg = 263,
     Nombre = 264,
     Char = 265,
     Int = 266,
     Bool = 267,
     String = 268,
     If = 269,
     Else = 270,
     While = 271,
     Affectation = 272,
     Addition = 273,
     Soustraction = 274,
     Multiplication = 275,
     Division = 276,
     Et = 277,
     Ou = 278,
     Non = 279,
     Egal = 280,
     Point_virgule = 281,
     Inferieur_egal = 282,
     Different = 283,
     Inferieur = 284,
     Parenthese_ouvrante = 285,
     Parenthese_fermante = 286,
     Commentaire_ligne = 287,
     Identifiant = 288,
     Private = 289,
     Return = 290,
     For = 291,
     Chaine_caractere = 292,
     Commentaire_bloc = 293,
     Print = 294,
     Accolade_ouvrante = 295,
     Accolade_fermante = 296,
     Extends = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


