%{
#include "lexicoGrafik.h"
#include <iostream>
#include <QString>
#include <QTextEdit>
#include <QPlainTextEdit>
#include <QMessageBox>
extern char *yytext;
extern int columna;
extern int linea;
extern FILE *yyin;

int yyerror(const char* mens){
std::cout <<linea<<","<<columna<<"   error sintactico   "<<yytext<<" "<<mens<< std::endl;
return 0;
}
/*QString reJ="";
void mostrarResultadoJ(QWidget* th);
	typedef struct leaf{
            char produccion[1000];
            char atributo[1000];
            char contenido[1000];
            int nHijos;
            struct leaf *hijos[30];
      }nodeTree;

      nodeTree *createNode(char produccion[1000],char atributo[1000],char contenido[1000],int nHijos){
            nodeTree *nuevo = (nodeTree*)malloc(sizeof(nodeTree));
            strcpy(nuevo->produccion, produccion);
             strcpy(nuevo->atributo, atributo);
            strcpy(nuevo->contenido, contenido);
            nuevo->nHijos = nHijos;

            return nuevo;
      }

      nodeTree *addson(nodeTree *padre,nodeTree *hijo){
            padre->hijos[padre->nHijos] = hijo;
            padre->nHijos++;
            return padre;
      }



      nodeTree *root;*/
%}
%error-verbose

%union{
char cade[1000];
struct leaf *cade;
}
//TERMINALES
%token<caden> incluir_HK
%token<caden> als
%token<caden> llave_abre
%token<caden> llave_cierra
%token<caden> hereda
%token<caden> interrogacion
%token<caden> par_abre
%token<caden> par_cierra
%token<caden> llamar
%token<caden> llamarHK
%token<caden> coma
%token<caden> vacio
%token<caden> inicio
%token<caden> dos_puntos
%token<caden> publico
%token<caden> privado
%token<caden> protegido
%token<caden> igual
%token<caden> var
%token<caden> cor_abre
%token<caden> cor_cierra
%token<caden> retornar
%token<caden> importar
%token<caden> extension
%token<caden> datos
%token<caden> procesar
%token<caden> donde
%token<caden> donde_todo
%token<caden> donde_cada
%token<caden> columna
%token<caden> graficar
%token<caden> imprimir
%token<caden> si
%token<caden> sino
%token<caden> seleccion
%token<caden> caso
%token<caden> defecto
%token<caden> para
%token<caden> mas_mas
%token<caden> menos_menos
%token<caden> mientras
%token<caden> hacer
%token<caden> continuar
%token<caden> terminar
%token<caden> or_
%token<caden> xor_
%token<caden> and_
%token<caden> not_
%token<caden> menor
%token<caden> mayor
%token<caden> menor_igual
%token<caden> mayor_igual
%token<caden> igual_igual
%token<caden> diferente
%token<caden> mas
%token<caden> menos
%token<caden> por
%token<caden> div
%token<caden> pot
%token<caden> punto
%token<caden> nuevo
%token<caden> entero_
%token<caden> decimal_
%token<caden> caracter_
%token<caden> cadena_
%token<caden> bool_
%token<caden> caracter
%token<caden> cadena
%token<caden> entero
%token<caden> id
%token<caden> bool
%token<caden> decimal

//no terminales
%type<caden> S
%type<caden> IMPORTSG
%type<caden> IMPORTSH
%type<caden> IMPORTH
%type<caden> ALSS
%type<caden> ALS
%type<caden> HEREDA	
%type<caden> CUERPO
%type<caden> DECLARACION
%type<caden> DECLAFUN
%type<caden> LLAMADA_FUN
%type<caden> LPARAMETROS
%type<caden> LDECPAR
%type<caden> INICIO
%type<caden> SENTENCIAS
%type<caden> VISIBILIDAD
%type<caden> DECLAVAR
%type<caden> DECLAARR
%type<caden> ARR_MULT
%type<caden> LDIM
%type<caden> DIM
%type<caden> LDEF_DIM
%type<caden> RETORNO
%type<caden> IMPORTG
%type<caden> ASIGNACION
%type<caden> SENTENCIA
%type<caden> DATOS
%type<caden> SENTENCIAS_DATOS
%type<caden> LCOLUMNAS
%type<caden> GRAFICAR
%type<caden> IMPRIMIR
%type<caden> SI
%type<caden> SELECCION
%type<caden> CASOS
%type<caden> PARA
%type<caden> UNITARIOS
%type<caden> MIENTRAS
%type<caden> HACER
%type<caden> CONTINUAR
%type<caden> TERMINAR
%type<caden> CONDICION
%type<caden> SIG_REL
%type<caden> E
%type<caden> T
%type<caden> OBJETO
//%type<caden> DIMENSION
%type<caden> TDATO
%left mas menos 
%left por div    
%right pot       

%left or_
%left xor_
%left and_

%%
S 			:	IMPORTSG IMPORTSH ALSS
;
IMPORTSG		:	IMPORTSG IMPORTG 
			|	IMPORTG			
;
IMPORTSH		:	IMPORTSH IMPORTH
			|	IMPORTH
;
IMPORTH			:	incluir_HK id interrogacion
;
ALSS			:	ALSS ALS
			|	ALS
;
ALS			: 	als id HEREDA  VISIBILIDAD llave_abre CUERPO llave_cierra
;
HEREDA			: 	hereda id

;
CUERPO			:	CUERPO DECLARACION 
			|	DECLARACION

;
DECLARACION		: 	DECLAFUN
			|	INICIO
			|	DATOS
			|	DECLAARR interrogacion
			|	DECLAVAR interrogacion	
;		
DECLAFUN		:	TDATO id par_abre par_cierra VISIBILIDAD llave_abre SENTENCIAS llave_cierra
			|	TDATO id par_abre LDECPAR par_cierra VISIBILIDAD llave_abre SENTENCIAS llave_cierra
;
LLAMADA_FUN		:	llamar OBJETO								 
			|	llamarHK id par_abre LPARAMETROS par_cierra								
			|	llamarHK id par_abre par_cierra
;
LPARAMETROS		: 	LPARAMETROS coma CONDICION								   
			|	CONDICION
;
LDECPAR			:	LDECPAR coma TDATO id								   
			|	TDATO id
;
INICIO			: 	vacio inicio par_abre par_cierra llave_abre SENTENCIAS llave_cierra
;
SENTENCIAS		: 	SENTENCIAS SENTENCIA
			|	SENTENCIA								   

;
VISIBILIDAD		:	dos_puntos publico								   
			|	dos_puntos privado								   
			|	dos_puntos protegido								  

;
DECLAVAR		:	DECLAVAR coma id VISIBILIDAD								   
			|	DECLAVAR coma id VISIBILIDAD igual CONDICION 								  
			|	var TDATO id VISIBILIDAD									   
			|	var TDATO id VISIBILIDAD igual CONDICION
;
DECLAARR		: 	var TDATO id LDEF_DIM VISIBILIDAD								   
			|	var TDATO id LDEF_DIM VISIBILIDAD igual ARR_MULT
;
ARR_MULT		: 	llave_abre LDIM llave_cierra
;
LDIM			:	LDIM coma DIM
			|	DIM
;
DIM			:	ARR_MULT
			|	CONDICION	
;							   
LDEF_DIM		:	LDEF_DIM cor_abre entero cor_cierra 								
			|	cor_abre entero cor_cierra 		
;				   
RETORNO			:	retornar CONDICION								   
				|retornar 
;
IMPORTG			: 	importar id extension interrogacion
;
ASIGNACION		:	OBJETO igual CONDICION								   
			|	OBJETO UNITARIOS			
;
SENTENCIA		: 	RETORNO interrogacion								   
			|	LLAMADA_FUN interrogacion							   
			|	DECLAVAR interrogacion								   
			|	DECLAARR interrogacion								   
			|	ASIGNACION interrogacion								   
			|	IMPRIMIR interrogacion								   
			|	SI								   
			|	SELECCION								   
			|	PARA								   
			|	MIENTRAS								   
			|	HACER								   
			|	CONTINUAR interrogacion								   
			|	TERMINAR interrogacion								   
			|	GRAFICAR interrogacion

;
DATOS			: 	vacio datos par_abre  par_cierra llave_abre SENTENCIAS_DATOS llave_cierra
;
SENTENCIAS_DATOS	: 	procesar igual llamar id par_abre LCOLUMNAS par_cierra interrogacion donde par_abre entero par_cierra igual 
cadena interrogacion
			|	procesar igual llamar id par_abre LCOLUMNAS par_cierra interrogacion donde_cada par_abre entero par_cierra interrogacion
			|	procesar igual llamar id par_abre LCOLUMNAS par_cierra interrogacion donde_todo par_abre entero par_cierra interrogacion			
;
LCOLUMNAS		:	LCOLUMNAS coma columna par_abre entero par_cierra					
			|	columna par_abre entero par_cierra
;
GRAFICAR		:	graficar par_abre CONDICION par_cierra								  
			|	graficar par_abre CONDICION coma CONDICION par_cierra							  	
;
IMPRIMIR		:	imprimir par_abre CONDICION par_cierra
;
SI			: 	si par_abre CONDICION par_cierra llave_abre SENTENCIAS llave_cierra 				
			|	si par_abre CONDICION par_cierra llave_abre SENTENCIAS llave_cierra sino llave_abre SENTENCIAS llave_cierra 	
;
SELECCION		: 	seleccion par_abre OBJETO par_cierra llave_abre CASOS llave_cierra
;
CASOS			: 	CASOS caso entero dos_puntos SENTENCIAS 								   
			|	CASOS caso cadena dos_puntos SENTENCIAS 								 
			|	CASOS caso caracter dos_puntos SENTENCIAS 								   
			|	CASOS caso decimal dos_puntos SENTENCIAS 								 
			|	CASOS defecto dos_puntos SENTENCIAS
			|	caso entero dos_puntos SENTENCIAS 
			|	caso cadena dos_puntos SENTENCIAS 
			|	caso caracter dos_puntos SENTENCIAS 
			|	caso decimal dos_puntos SENTENCIAS 
			|	defecto dos_puntos SENTENCIAS			   

;
PARA			: 	para par_abre ASIGNACION /*id igual CONDICION*/ dos_puntos CONDICION dos_puntos ASIGNACION par_cierra llave_abre SENTENCIAS llave_cierra
			| 	para par_abre var TDATO id igual CONDICION dos_puntos CONDICION dos_puntos ASIGNACION par_cierra llave_abre SENTENCIAS llave_cierra
;
UNITARIOS		:	mas_mas								  
			|	menos_menos		
;
MIENTRAS		:	mientras par_abre CONDICION par_cierra llave_abre SENTENCIAS llave_cierra 					
;
HACER			:	hacer llave_abre SENTENCIAS llave_cierra mientras par_abre CONDICION par_cierra interrogacion
;
CONTINUAR		:	continuar
;
TERMINAR		:	terminar	
;
CONDICION 		: 	CONDICION   or_   CONDICION 								   
		    	| 	CONDICION   xor_  CONDICION								   
		    	| 	CONDICION   and_  CONDICION								   
		    	|	not_   CONDICION								   
		    	| 	E    SIG_REL   E 								   
		    	| 	E   
;
SIG_REL 		:	menor
			|	mayor								   
			|	menor_igual								  
			|	mayor_igual								   
			|	igual_igual								   
			|	diferente 
;
E			:	E mas E							   
			|	E menos E 						   
			|	E por E 							   
			|	E div E 							   
			|	E pot E 						  
			|	T
;
T			:	entero						   
			|	menos entero						   
			|	decimal						  
			|	menos decimal						  
			|	caracter								   
			|	cadena								   
			|	bool								  
			|	OBJETO								   
			|	menos OBJETO
			|	OBJETO UNITARIOS						   
			|	LLAMADA_FUN
;
OBJETO			:	OBJETO punto id DIMENSION							   
			|	OBJETO punto id par_abre LPARAMETROS par_cierra								   
			|	OBJETO punto id par_abre par_cierra
			|	OBJETO punto datos par_abre par_cierra								   
			|	id DIMENSION				   
			|	id par_abre LPARAMETROS par_cierra								   
			|	id par_abre par_cierra								   
			|	nuevo id par_abre par_cierra								   
			|	par_abre CONDICION par_cierra									  
			|	datos par_abre par_cierra									  

;
DIMENSION		:	DIMENSION cor_abre CONDICION cor_cierra  			   
			|	cor_abre CONDICION cor_cierra 

;
TDATO 			:	entero_ 							 
		   	|	decimal_ 								 
		   	|	caracter_ 								   
		  	|	cadena_ 								  
		   	|	bool_ 								   
		   	|	id								   
		   	|	vacio
;
%%
void mostrarResultado(QWidget* th) {
 QMessageBox::information(th,"Resultado",re);
 re="";
}



