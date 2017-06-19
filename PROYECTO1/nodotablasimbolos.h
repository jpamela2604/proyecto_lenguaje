#ifndef NODOTABLASIMBOLOS_H
#define NODOTABLASIMBOLOS_H
#include <nodo.h>
#include <QString>

class NodoTablaSimbolos
{
public:
    NodoTablaSimbolos();
    int ambito;
    QString id;
    QString rol;
    QString tipo;
    QString valor;
    Nodo* Codigo;
    QList<QString> Parametros;
    int Dim1;
    int Dim2;
    int NoDim;
    /*          FUNCION HASKELL CON PARAMETROS     */
    NodoTablaSimbolos(QString id,Nodo* codigo,QList<QString> Parametros);
    /*          FUNCION HASKELL SIN PARAMETROS     */
    NodoTablaSimbolos(QString id,Nodo* codigo);
    /*          VARIABLE HASKELL                   */
    NodoTablaSimbolos(QString id,QString tipo,int ambito,QString valor,int noDim);
};


#endif // NODOTABLASIMBOLOS_H
