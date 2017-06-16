/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_ZZ_GRAMATICAHASKELL_H_INCLUDED
# define YY_ZZ_GRAMATICAHASKELL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int zzdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    mas = 258,
    menos = 259,
    por = 260,
    divi = 261,
    mod = 262,
    sqrt_ = 263,
    par_abre = 264,
    par_cierra = 265,
    or_ = 266,
    and_ = 267,
    mayor = 268,
    menor = 269,
    mayor_igual = 270,
    menor_igual = 271,
    igual_igual = 272,
    diferente = 273,
    let = 274,
    igual = 275,
    cor_abre = 276,
    cor_cierra = 277,
    dolar = 278,
    coma = 279,
    calcular = 280,
    succ_ = 281,
    decc_ = 282,
    min = 283,
    max = 284,
    concatenacion = 285,
    exclamacion = 286,
    sum = 287,
    product = 288,
    revers = 289,
    impr = 290,
    par = 291,
    asc = 292,
    desc = 293,
    length = 294,
    llave_abre = 295,
    llave_cierra = 296,
    if_ = 297,
    then_ = 298,
    else_ = 299,
    end = 300,
    case_ = 301,
    dos_puntos = 302,
    caracter = 303,
    cadena = 304,
    numero = 305,
    id = 306,
    porcentaje = 307,
    pot = 308,
    punto_coma = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 33 "gramaticahaskell.y" /* yacc.c:1909  */

char caden[1000];
class Nodo *nodo;

#line 114 "gramaticahaskell.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE zzlval;

int zzparse (void);

#endif /* !YY_ZZ_GRAMATICAHASKELL_H_INCLUDED  */
