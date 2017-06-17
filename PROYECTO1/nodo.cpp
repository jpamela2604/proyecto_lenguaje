#include "nodo.h"


Nodo::Nodo()
{
}

Nodo::Nodo(QString produccion)
{
    this->produccion.append(produccion);
    //this->produccion=produccion;
    hijos=QList<Nodo*>();
}
void Nodo::graficar(Nodo *raiz){
    FILE *f;
        f = fopen("/home/pam/Documents/JUNIO/PROYECTO/PROYECTO1/dibujo/arbol.dot","w");
        fputs("digraph arbol{",f);
        recorrer(raiz,f);
        fputs("}",f);
        fclose(f);
        system("dot -Tpng /home/pam/Documents/JUNIO/PROYECTO/PROYECTO1/dibujo/arbol.dot -o /home/pam/Documents/JUNIO/PROYECTO/PROYECTO1/dibujo/arbol.png");
        //system("PAUSE");
}
void Nodo::recorrer(Nodo *raiz, FILE *f){
    if(raiz!=NULL){
         raiz->produccion.replace("\""," ");
        fprintf(f,"nodo%d [label=\"%s\"];\n",raiz,raiz->produccion.toStdString().c_str());
        for(int i=0;i<raiz->hijos.length();i++){
        fprintf(f,"nodo%d ->nodo%d;\n", raiz,raiz->hijos.at(i));
            recorrer(raiz->hijos.at(i),f);
        }
    }
}

