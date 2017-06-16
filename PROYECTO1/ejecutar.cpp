#include "ejecutar.h"


ejecutar::ejecutar()
{
        //ultimo->tipo="ERROR";
        ultimo= new Variable();

}

void ejecutar::procesarHaskell(Nodo *raiz,QPlainTextEdit* th){
Variable *objeto= new Variable();

    foreach( Nodo* item, raiz->hijos )
    {

       // objeto= new Variable();

        if(QString::compare(item->produccion, "E", Qt::CaseInsensitive)==0)
        {

            objeto=procesarExpresion(item);
            th->insertPlainText(objeto->valor);
            th->insertPlainText("\n");
            ultimo= new Variable();
            ultimo->tipo=objeto->tipo;
            ultimo->valor=objeto->valor;


        }else if (QString::compare(item->produccion, "DECLA_FUN", Qt::CaseInsensitive)==0)
        {

        }
        else if (QString::compare(item->produccion, "NATIVAS", Qt::CaseInsensitive)==0)
        {
               if(QString::compare(item->hijos[0]->produccion,"DECC_", Qt::CaseInsensitive)==0)
               {
                    objeto=procesarExpresion(item->hijos[1]);
                    objeto->valor =QString::number(objeto->valor.toDouble()-1);
                    th->insertPlainText(objeto->valor);
                    th->insertPlainText("\n");
                    ultimo= new Variable();
                    ultimo->tipo=objeto->tipo;
                    ultimo->valor=objeto->valor;

               }else if(QString::compare(item->hijos[0]->produccion,"SUCC_", Qt::CaseInsensitive)==0)
               {
                    objeto=procesarExpresion(item->hijos[1]);
                    objeto->valor =QString::number(objeto->valor.toDouble()+1);
                    th->insertPlainText(objeto->valor);
                    th->insertPlainText("\n");
                    ultimo= new Variable();
                    ultimo->tipo=objeto->tipo;
                    ultimo->valor=objeto->valor;

               }else if(QString::compare(item->hijos[0]->produccion,"SUCC_", Qt::CaseInsensitive)==0)
               {

               }
        }

    }
}
Variable* ejecutar::procesarExpresion(Nodo *raiz)
{
    Variable *objeto= new Variable();
    if(raiz->hijos.size()==1)
    {

        Variable *nuevo = new Variable();
        if(QString::compare(raiz->hijos[0]->produccion,"NUMERO", Qt::CaseInsensitive)==0)
        {

            nuevo->tipo="NUMBER";
            nuevo->valor=raiz->hijos[0]->hijos[0]->produccion;
            return nuevo;
        }else if(QString::compare(raiz->produccion,"%", Qt::CaseInsensitive)==0)
        {
            std::cout <<"aqui"<< std::endl;
            if(QString::compare(ultimo->tipo,"NUMBER", Qt::CaseInsensitive)==0){
            nuevo->tipo=ultimo->tipo;
            nuevo->valor=ultimo->valor;
            return nuevo;
            }
            else{
                nuevo->tipo=ultimo->tipo;
                return nuevo;
            }
        }


        return nuevo;


    }else if(raiz->hijos.size()==3 &&(QString::compare(raiz->hijos[1]->produccion, "-", Qt::CaseInsensitive)==0))
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        double resultado;
        resultado=op1->valor.toDouble()-op2->valor.toDouble();
        Variable *nuevo = new Variable();
        nuevo->tipo="NUMBER";
        nuevo->valor=QString::number(resultado);
        return nuevo;

    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "+", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        double resultado;
        resultado=op1->valor.toDouble()+op2->valor.toDouble();
        Variable *nuevo = new Variable();
        nuevo->tipo="NUMBER";
        nuevo->valor=QString::number(resultado);
        return nuevo;

    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "/", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        double resultado;
        resultado=op1->valor.toDouble()/op2->valor.toDouble();
        Variable *nuevo = new Variable();
        nuevo->tipo="NUMBER";
        nuevo->valor=QString::number(resultado);
        return nuevo;
    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "*", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        double resultado;
        resultado=op1->valor.toDouble()*op2->valor.toDouble();
        Variable *nuevo = new Variable();
        nuevo->tipo="NUMBER";
        nuevo->valor=QString::number(resultado);
        return nuevo;
    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "%", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        double resultado;
        resultado=op1->valor.toInt()%op2->valor.toInt();
        Variable *nuevo = new Variable();
        nuevo->tipo="NUMBER";
        nuevo->valor=QString::number(resultado);
        return nuevo;
    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "SQRT_", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        double resultado;
        double elevacion=1/op1->valor.toDouble();
        resultado=pow(op2->valor.toDouble(),elevacion);
        Variable *nuevo = new Variable();
        nuevo->tipo="NUMBER";
        nuevo->valor=QString::number(resultado);
        return nuevo;
    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "^", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        double resultado;
        resultado=pow(op1->valor.toDouble(),op2->valor.toDouble());
        Variable *nuevo = new Variable();
        nuevo->tipo="NUMBER";
        nuevo->valor=QString::number(resultado);
        return nuevo;
    }

return objeto;

}


