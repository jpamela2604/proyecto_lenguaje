#include "nodotablasimbolos.h"

NodoTablaSimbolos::NodoTablaSimbolos()
{
}
NodoTablaSimbolos::NodoTablaSimbolos(QString id,Nodo* codigo,QList<QString> Parametros)
{
    this->ambito=0;
    this->id=id;
    this->rol="FUNCION";
    this->Codigo=codigo;
    this->Parametros=Parametros;
}
NodoTablaSimbolos::NodoTablaSimbolos(QString id,Nodo* codigo)
{
    this->ambito=0;
    this->id=id;
    this->rol="FUNCION";
    this->Codigo=codigo;
    QList<QString> a;
    this->Parametros= a;

}
NodoTablaSimbolos::NodoTablaSimbolos(QString id,QString tipo,int ambito,QString valor,int noDim)
{
    this->ambito=ambito;
    this->id=id;
    this->rol="VARIABLE";
    this->tipo=tipo;
    this->valor=valor;
    this->NoDim=noDim;

}
