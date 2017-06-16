%option noyywrap
%{
#include "gramaticagrafik.h"
#include <iostream>
#include <QString>
int columnaG=0;
int lineaG=1;
%}
letra [a-zñA-ZÑ]
digito [0-9]
cadena [\"][^\"\n]+[\"]
entero	{digito}+
decimal {digito}+"."{digito}+
id {letra}({letra}|{digito}|"_")*
caracter [\"][^\"\n][\"]
bool ["verdadero"|"falso"]
%%


" "
"\t"
"\n"			{columnaG=0; lineaG++;}
"\r\n"			
"incluir_HK"       	{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return incluir_HK; }
"ALS"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return als; }
"{"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return llave_abre; }
"}"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return llave_cierra; }
"hereda"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return hereda; }
"?"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return interrogacion; }
"("       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return par_abre; }
")"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return par_cierra; }
"llamar"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return llamar; }
"llamarHK"       	{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return llamarHK; }
","       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return coma; }
"vacio"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return vacio; }
"inicio"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return inicio; }
":"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return dos_puntos; }
"Publico"     		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return publico; }
"Protegido"   		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return privado; }
"Privado"      		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return protegido; }
"="       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return igual; }
"var"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return var; }
"["       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return cor_abre; }
"]"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return cor_cierra ; }
"retornar"     		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return retornar; }
"importar"     		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return importar; }
".gk"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return extension; }
"Datos"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return datos; }
"Procesar"       	{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return procesar; }
"Donde"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return donde; }
"DondeTodo"    		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return donde_todo; }
"DondeCada"    		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return donde_cada; }
"columna"       	{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return columna; }
"graphikar_funcion"    	{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return graficar; }
"imprimir"       	{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return imprimir; }
"Si"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return si; }
"Sino"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return sino; }
"Seleccion"    		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return seleccion; }
"Caso"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return caso; }
"Defecto"      		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return defecto; }
"Para"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return para; }
"++"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return mas_mas; }
"--"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return menos_menos; }
"Mientras"     		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return mientras; }
"Hacer"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return hacer; }
"Continuar"    		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return continuar; }
"Terminar"     		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return terminar; }
"||"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return or_; }
"&|"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return xor_; }
"&&"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return and_; }
"!"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return not_; }
"<"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return menor; }
">"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return mayor; }
"<="       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return menor_igual; }
">="       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return mayor_igual; }
"=="       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return igual_igual; }
"!="       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return diferente; }
"+"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return mas; }
"-"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return menos; }
"*"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return por; }
"/"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return div; }
"^"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return pot; }
"."       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return punto; }
"nuevo"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return nuevo; }
"entero"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return entero_; }
"decimal"      		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return decimal_; }
"caracter"       	{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return caracter_; }
"cadena"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return cadena_; }
"bool"       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext);  return bool_; }
{caracter}     		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext); return caracter; }
{cadena}       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext); return cadena; }
{entero}       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext); return entero; }
{id}       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext); return id; }
{bool}       		{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext); return bool; }
{decimal}       	{columnaG=columnaG+strlen(yylval.cade); strcpy(yylval.cade, yytext); return decimal; }
.               	{ std::cout <<yytext<<"Error Lexico en linea: "<<lineaG<<" columna: "<<columnaG<< std::endl;}


%%

