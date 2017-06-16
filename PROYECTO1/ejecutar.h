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
    Variable* ultimo;
    void procesarHaskell(Nodo *raiz,QPlainTextEdit* th);
    Variable* procesarExpresion(Nodo *raiz);

};

#endif // EJECUTAR_H
