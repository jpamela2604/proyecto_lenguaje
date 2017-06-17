
%{
#include "nodo.h"
#include "lexicoHaskell.h"
#include <iostream>
#include <QString>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QMessageBox>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>

extern char *zztext;
extern int columna;
extern int linea;
extern FILE *zzin;

int zzerror(const char* mens){
std::cout <<linea<<","<<columna<<"   error sintactico   "<<zztext<<" "<<mens<< std::endl;
return 0;
}
QString re="";
     void mostrarResultadoJ(QWidget* th);

     // Nodo * root=new Nodo();
     Nodo *root;
%}

%error-verbose

%union{
char caden[1000];
class Nodo *nodo;
}
//TERMINALES
%token<caden> mas
%token<caden> menos
%token<caden> por
%token<caden> divi 
%token<caden> mod
%token<caden> sqrt_
%token<caden> par_abre
%token<caden> par_cierra
%token<caden> or_
%token<caden> and_
%token<caden> mayor
%token<caden> menor
%token<caden> mayor_igual
%token<caden> menor_igual
%token<caden> igual_igual
%token<caden> diferente
%token<caden> let
%token<caden> igual
%token<caden> cor_abre
%token<caden> cor_cierra
%token<caden> dolar
%token<caden> coma
%token<caden> calcular
%token<caden> succ_
%token<caden> decc_
%token<caden> min
%token<caden> max
%token<caden> concatenacion
%token<caden> exclamacion
%token<caden> sum
%token<caden> product
%token<caden> revers
%token<caden> impr
%token<caden> par
%token<caden> asc
%token<caden> desc
%token<caden> length
%token<caden> llave_abre
%token<caden> llave_cierra
%token<caden> if_
%token<caden> then_
%token<caden> else_
%token<caden> end
%token<caden> case_
%token<caden> dos_puntos
%token<caden> caracter
%token<caden> cadena
%token<caden> numero
%token<caden> id
%token<caden> porcentaje
%token<caden> pot
%token<caden> punto_coma

//no terminales
%type<nodo> S
%type<nodo> SENTENCIAS
%type<nodo> SENTENCIA
%type<nodo> T
%type<nodo> NUMERO
%type<nodo> CONDICION
%type<nodo> OR
%type<nodo> E
%type<nodo> LLAMADA_FUN
%type<nodo> PARAMETROS
%type<nodo> LVAL
%type<nodo> DECLA_LISTA
%type<nodo> LISTA
%type<nodo> NATIVAS
%type<nodo> DECLA_FUN
%type<nodo> LPARAMS
%type<nodo> CUERPO
%type<nodo> SF
%type<nodo> IF
%type<nodo> CASE
%type<nodo> LCASOS
%type<nodo> CASO
%left exclamacion
%left mas menos 
%left por divi mod
%right pot sqrt_
%left concatenacion

%left or_
%left and_ 
%right id
%right igual

%%
S 			: 	SENTENCIAS {re ="termino haskells2";

                                root=$1;$$=$1;}
;
SENTENCIAS 		: 	SENTENCIAS SENTENCIA
                        {
                                $1->hijos.append($2);
                                $$=$1;
                        }
                        |	SENTENCIA
                        {
                                Nodo *padre= new Nodo("SENTENCIAS");
                                padre->hijos.append($1);
                                $$=padre;
                        }
;
SENTENCIA		: 	DECLA_LISTA{$$=$1;}
                        |	DECLA_FUN{$$=$1;}
                        |	T{$$=$1;}
;
T 			:	LLAMADA_FUN{$$=$1;}
                        |	NUMERO{$$=$1;}
                        |	NATIVAS{$$=$1;}
                        |	LISTA{/*std::cout <<"pasa por aqui"<< std::endl;*/$$=$1;}
                        |	LISTA exclamacion NUMERO
                        {

                                Nodo *padre= new Nodo("ACCESO");
                                padre->hijos.append($1);
                                padre->hijos.append($3);

                                $$=padre;
                        }
                        |	LISTA exclamacion NUMERO exclamacion NUMERO
                        {       //acceder a indices
                                Nodo *padre= new Nodo("ACCESO");
                                padre->hijos.append($1);
                                padre->hijos.append($3);
                                padre->hijos.append($5);
                                $$=padre;
                        }
                        |	porcentaje
                        {       //ultimo valor valido solo en consola
                                Nodo *padre= new Nodo("%");
                                //padre->hijos.append(new Nodo("%"));
                                $$=padre;
                                //lista bidimensional
                        }
                        |	caracter
                        {
                                Nodo *padre= new Nodo("CARACTER");
                                padre->hijos.append(new Nodo($1));
                                $$=padre;
                        }
                        |	T concatenacion T
                        {
                                Nodo *padre= new Nodo("LISTA");
                                padre->hijos.append(new Nodo("CONCATENACION"));
                                padre->hijos.append($1);
                                padre->hijos.append($3);
                                $$=padre;
                         }

;
NUMERO 			:	dolar calcular E dolar
                        {
                                $$=$3;
                        }
;
CONDICION		: 	CONDICION and_ CONDICION
                        {
                                Nodo *padre= new Nodo("COND");
                                padre->hijos.append($1);
                                padre->hijos.append(new Nodo("&&"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			|	CONDICION or_ CONDICION
                        {
                                Nodo *padre= new Nodo("COND");
                                padre->hijos.append($1);
                                padre->hijos.append(new Nodo("||"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			|	par_abre CONDICION par_cierra
                        {
                                Nodo *padre= new Nodo("COND");
                                padre->hijos.append($2);
                                $$=padre;
                        }
			|	E OR E
                        {
                                Nodo *padre= new Nodo("COND");
                                padre->hijos.append($1);
                                padre->hijos.append($2);
                                padre->hijos.append($3);
                                $$=padre;
                        }
;
OR			: 	mayor
                        {
                                Nodo *padre= new Nodo(">");
                                $$=padre;

                        }
			|	menor
                        {
                                Nodo *padre= new Nodo("<");
                                $$=padre;
                        }
			|	mayor_igual
                        {
                                Nodo *padre= new Nodo(">=");
                                $$=padre;
                        }
			|	menor_igual
                        {
                                Nodo *padre= new Nodo("<=");
                                $$=padre;
                        }
			|	igual_igual
                        {
                                Nodo *padre= new Nodo("==");
                                $$=padre;
                        }
			|	diferente
                        {
                                Nodo *padre= new Nodo("!=");
                                $$=padre;
                        }
;
E 			: 	E mas E
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append($1);
                                padre->hijos.append(new Nodo("+"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			| 	E menos  E
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append($1);
                                padre->hijos.append(new Nodo("-"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			| 	E por  E
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append($1);
                                padre->hijos.append(new Nodo("*"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			| 	E divi  E
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append($1);
                                padre->hijos.append(new Nodo("/"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			| 	E mod E
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append($1);
                                padre->hijos.append(new Nodo("%"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
                        | 	E sqrt_ E
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append($1);
                                padre->hijos.append(new Nodo("SQRT_"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			| 	E pot E
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append($1);
                                padre->hijos.append(new Nodo("^"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
                        | 	menos E
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append(new Nodo("-"));
                                padre->hijos.append($2);
                                $$=padre;
                        }
			| 	par_abre E par_cierra
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append($2);
                                $$=padre;
                        }
                        | 	T
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append($1);
                                $$=padre;
                        }
                        | 	numero
                        {
                                Nodo *padre= new Nodo("E");
                                Nodo *hijo = new Nodo("NUMERO");
                                hijo->hijos.append(new Nodo($1));
                                padre->hijos.append(hijo);
                                $$=padre;
                        }
                       /* | 	COND
                        {
                                Nodo *padre= new Nodo("E");
                                padre->hijos.append($1);
                        }*/

;
LLAMADA_FUN		:	dolar id llave_abre llave_cierra dolar
                        {
                                Nodo *padre= new Nodo("LLAMADA_FUN");
                                padre->hijos.append(new Nodo($2));
                                $$=padre;
                        }
                        |	dolar id llave_abre LVAL llave_cierra dolar
                        {
                                Nodo *padre= new Nodo("LLAMADA_FUN");
                                padre->hijos.append(new Nodo($2));
                                padre->hijos.append($4);
                                $$=padre;

                        }
;
PARAMETROS		: 	PARAMETROS coma E//T
                        {
                                $1->hijos.append($3);
                                $$=$1;
                        }
                        |	E//T
                        {
                                 Nodo *padre= new Nodo("PARAMETROS");
                                 padre->hijos.append($1);
                                 $$=padre;
                        }
;		
LVAL			: 	LVAL coma E
                        {
                                $1->hijos.append($3);
                                $$=$1;
                        }
                        |	E
                        {
                                 Nodo *padre= new Nodo("PARAMETROS");
                                 padre->hijos.append($1);
                                 $$=padre;
                        }
;
DECLA_LISTA		:	dolar let id igual T dolar
                        {
                                Nodo *padre= new Nodo("DECLA_LISTA");
                                padre->hijos.append(new Nodo($3));
                                padre->hijos.append($5);
                                $$=padre;
                        }
;
LISTA			: 	cadena
                        {
                                Nodo *padre= new Nodo("LISTA");
                                padre->hijos.append(new Nodo("CADENA"));
                                padre->hijos.append(new Nodo($1));
                                $$=padre;
                        }
                        | 	cor_abre PARAMETROS cor_cierra
                        {
                                Nodo *padre= new Nodo("LISTA");
                                padre->hijos.append(new Nodo("DEFICION"));
                                padre->hijos.append($2);
                                $$=padre;
                        }
			|	id
                        {
                                Nodo *padre= new Nodo("LISTA");
                                padre->hijos.append(new Nodo("ID"));
                                padre->hijos.append(new Nodo($1));
                                $$=padre;

                        }
;
NATIVAS			: 	dolar succ_ T dolar
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("SUCC_"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
                        |	dolar decc_ T dolar
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("DECC_"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			|	dolar min T dolar
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("MIN"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			|	dolar max T dolar
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("MAX"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
                        |	dolar sum  T dolar
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("SUM"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			|	dolar product  T  dolar 
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("PRODUCT"));
                                padre->hijos.append($3);
                                $$=padre;

                        }
			|	dolar length  T  dolar 
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("LENGTH"));
                                padre->hijos.append($3);
                                $$=padre;

                        }
			|	dolar revers  T  dolar 
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("REVERS"));
                                padre->hijos.append($3);
                                $$=padre;

                        }
			|	dolar impr  T  dolar 
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("IMPR"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			|	dolar par  T  dolar 
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("PAR"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			|	dolar asc  T  dolar 
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("ASC"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			|	dolar desc  T  dolar 
                        {
                                Nodo *padre= new Nodo("NATIVAS");
                                padre->hijos.append(new Nodo("DESC"));
                                padre->hijos.append($3);
                                $$=padre;
                        }
;
DECLA_FUN		:	id  igual  CUERPO  end
                        {
                                Nodo *padre= new Nodo("DECLA_FUN");
                                padre->hijos.append(new Nodo($1));
                                padre->hijos.append($3);
                                $$=padre;
                        }
			|	id   LPARAMS  igual  CUERPO  end 
                        {
                                Nodo *padre= new Nodo("DECLA_FUN");
                                padre->hijos.append(new Nodo($1));
                                padre->hijos.append($2);
                                padre->hijos.append($4);
                                $$=padre;
                        }
;
LPARAMS			:	LPARAMS  coma  id 
                        {
                                $1->hijos.append(new Nodo($3));
                                $$=$1;
                        }
			|	id 
                        {
                                Nodo *padre= new Nodo("LPARAMS");
                                padre->hijos.append(new Nodo($1));
                                $$=padre;
                        }
;
CUERPO			: 	CUERPO  SF 
                        {
                                $1->hijos.append($2);
                                $$=$1;
                        }
                        |	SF
                        {
                                Nodo *padre= new Nodo("CUERPO");
                                padre->hijos.append($1);
                                $$=padre;
                        }
;
SF			:	IF {$$=$1;}
                        |	CASE {$$=$1;}
                        |	DECLA_LISTA {$$=$1;}
                        |	T {$$=$1;}
;
IF			:	if_  CONDICION  then_  CUERPO  else_  CUERPO end
                        {
                                Nodo *padre= new Nodo("IF");
                                padre->hijos.append($2);
                                padre->hijos.append($4);
                                padre->hijos.append($6);
                                $$=padre;

                        }
;
CASE			:	case_  id  LCASOS  end 
                        {
                                Nodo *padre= new Nodo("CASE");
                                padre->hijos.append(new Nodo($2));
                                padre->hijos.append($3);
                                $$=padre;

                        }
;
LCASOS			: 	LCASOS  CASO 
                        {
                                $1->hijos.append($2);
                                $$=$1;
                        }
                        |	CASO
                        {
                                Nodo *padre= new Nodo("CASOS");
                                padre->hijos.append($1);
                                $$=padre;
                        }
;
CASO			: 	numero  dos_puntos  CUERPO  punto_coma 
                        {
                                Nodo *padre= new Nodo("CASO");
                                Nodo *hijo= new Nodo("NUMERO");
                                hijo->hijos.append(new Nodo($1));
                                padre->hijos.append(hijo);
                                padre->hijos.append($3);
                                $$=padre;
                        }
			|	caracter dos_puntos  CUERPO  punto_coma 
                        {
                                Nodo *padre= new Nodo("CASO");
                                Nodo *hijo= new Nodo("CARACTER");
                                hijo->hijos.append(new Nodo($1));
                                padre->hijos.append(hijo);
                                padre->hijos.append($3);
                                $$=padre;
                        }

;
%%
void mostrarResultado(QWidget* th) {
 QMessageBox::information(th,"Resultado",re);
 re="";
}

