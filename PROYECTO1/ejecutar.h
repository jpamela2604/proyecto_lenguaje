#ifndef EJECUTAR_H
#define EJECUTAR_H
#include "nodo.h"
#include <QString>
#include <string>
#include <string.h>
#include <iostream>
#include <QObject>
#include <QList>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <variable.h>
#include <QMessageBox>
#include <QPlainTextEdit>

class ejecutar
{
public:
    ejecutar();
    static Variable* ultimo;
    void procesarHaskell(Nodo *raiz,QPlainTextEdit* th);
    Variable* procesarExpresion(Nodo *raiz);
    /*      NATIVOS         */
    Variable* Nativo_Succ(Variable* objeto);
    Variable* Nativo_Decc(Variable* objeto);
    Variable* Nativo_Min(Nodo* raiz);
    Variable* Tipo_Lista(Nodo* raiz);
    Variable* Nativo_Max(Nodo* raiz);
    Variable* Nativo_Length(Nodo* raiz);
    Variable* Nativo_Sum(Nodo* raiz);
    Variable* Nativo_Product(Nodo* raiz);
    Nodo* Nativo_Revers(Nodo* raiz);
    /*Nodo* Nativo_Asc(Nodo* raiz);
    Nodo* Nativo_Desc(Nodo* raiz);
    Nodo* Nativo_Impar(Nodo* raiz);
    Nodo* Nativo_Par(Nodo* raiz);*/
    Nodo* Nativo_Concatenar(Nodo* listaA,Nodo* listaB);


};


#endif // EJECUTAR_H
