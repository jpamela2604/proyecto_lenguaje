%option noyywrap
%option caseless
%{
#include "gramaticahaskell.h"
#include <iostream>
#include <QString>
int columna=0;
int linea=1;
%}
letra [a-zñA-ZÑ]
digito [0-9]
cadena [\"][^\"\n]+[\"]
numero	{digito}+)|({digito}+"."{digito}+
id {letra}({letra}|{digito}|"_")*
caracter [\'][^\"\n][\']
%%



" "
"\t"
"\n"			{columna=0; linea++;}
"\r\n"			
"+"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext);  return mas; }
"-"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext);  return menos; }
"*"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext);  return por; }
"/"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext);  return divi; }
"'mod'"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return mod; }
"'sqrt'"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return sqrt_; }
"'pot'"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return pot; }
"("       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return par_abre; }
")"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return par_cierra; }
"||"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return or_; }
"&&"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return and_; }
">"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return mayor; }
"<"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return menor; }
">="       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return mayor_igual; }
"<="       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return menor_igual; }
"=="       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return igual_igual; }
"!="       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return diferente; }
"let"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return let; }
"="       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return igual; }
"["       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return cor_abre; }
"]"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return cor_cierra; }
"$"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return dolar; }
","       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return coma; }
"calcular"     		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return calcular; }
"succ"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return succ_; }
"decc"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return decc_; }
"min"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return min; }
"max"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return max; }
"++"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return concatenacion; }
"!!"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return exclamacion; }
"sum"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return sum; }
"product"      		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return product; }
"revers"      		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return revers; }
"impr"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return impr; }
"par"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return par; }
"asc"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return asc; }
"desc"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return desc; }
"%"   		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return porcentaje; }
"length"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return length; }
"{"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return llave_abre; }
"}"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return llave_cierra; }
"if"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return if_; }
"then"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return then_; }
"else"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return else_; }
"end"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return end; }
"case"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return case_; }
":"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return dos_puntos; }
";"       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return punto_coma; }
{caracter}     		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return caracter; }
{cadena}       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return cadena; }
{numero}       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return numero; }
{id}       		{columna=columna+strlen(zzlval.caden); strcpy(zzlval.caden, zztext); return id; }
.               	{ std::cout <<zztext<<"Error Lexico en linea: "<<linea<<" columna: "<<columna<< std::endl;}


%%

