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

#ifndef YY_YY_GRAMATICAGRAFIK_H_INCLUDED
# define YY_YY_GRAMATICAGRAFIK_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    incluir_HK = 258,
    als = 259,
    llave_abre = 260,
    llave_cierra = 261,
    hereda = 262,
    interrogacion = 263,
    par_abre = 264,
    par_cierra = 265,
    llamar = 266,
    llamarHK = 267,
    coma = 268,
    vacio = 269,
    inicio = 270,
    dos_puntos = 271,
    publico = 272,
    privado = 273,
    protegido = 274,
    igual = 275,
    var = 276,
    cor_abre = 277,
    cor_cierra = 278,
    retornar = 279,
    importar = 280,
    extension = 281,
    datos = 282,
    procesar = 283,
    donde = 284,
    donde_todo = 285,
    donde_cada = 286,
    columna = 287,
    graficar = 288,
    imprimir = 289,
    si = 290,
    sino = 291,
    seleccion = 292,
    caso = 293,
    defecto = 294,
    para = 295,
    mas_mas = 296,
    menos_menos = 297,
    mientras = 298,
    hacer = 299,
    continuar = 300,
    terminar = 301,
    or_ = 302,
    xor_ = 303,
    and_ = 304,
    not_ = 305,
    menor = 306,
    mayor = 307,
    menor_igual = 308,
    mayor_igual = 309,
    igual_igual = 310,
    diferente = 311,
    mas = 312,
    menos = 313,
    por = 314,
    div = 315,
    pot = 316,
    punto = 317,
    nuevo = 318,
    entero_ = 319,
    decimal_ = 320,
    caracter_ = 321,
    cadena_ = 322,
    bool_ = 323,
    caracter = 324,
    cadena = 325,
    entero = 326,
    id = 327,
    bool = 328,
    decimal = 329
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 49 "gramaticagrafik.y" /* yacc.c:1909  */

char cade[1000];
struct leaf *cade;

#line 134 "gramaticagrafik.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMATICAGRAFIK_H_INCLUDED  */
