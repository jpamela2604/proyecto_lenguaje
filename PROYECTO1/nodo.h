#ifndef NODO_H
#define NODO_H
#include <QString>
#include <QList>
#include "iostream"
#include <stdio.h>
#include <stdlib.h>


class Nodo
{
public:
   QString produccion;
   QList<Nodo*> hijos;
   Nodo();
   Nodo(QString produccion);
   void graficar(Nodo *raiz);
   void recorrer(Nodo *raiz, FILE *f);

};

#endif // NODO_H
