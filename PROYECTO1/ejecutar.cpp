#include "ejecutar.h"
 Variable* ejecutar::ultimo;


ejecutar::ejecutar()
{


}

void ejecutar::procesarHaskell(Nodo *raiz,QPlainTextEdit* th){
Variable *objeto= new Variable();

    foreach( Nodo* item, raiz->hijos )
    {

        if(QString::compare(item->produccion, "E", Qt::CaseInsensitive)==0)
        {

            objeto=procesarExpresion(item);
            th->insertPlainText(objeto->valor);
            th->insertPlainText("\n");
            if(QString::compare(objeto->tipo,"ERROR",Qt::CaseInsensitive)!=0)
            {
                 ejecutar::ultimo=objeto;
            }



        }else if (QString::compare(item->produccion, "DECLA_FUN", Qt::CaseInsensitive)==0)
        {

        }
        else if (QString::compare(item->produccion, "NATIVAS", Qt::CaseInsensitive)==0)
        {
               if(QString::compare(item->hijos[0]->produccion,"DECC_", Qt::CaseInsensitive)==0)
               {
                    objeto=procesarExpresion(item->hijos[1]);
                    //objeto->valor =QString::number(objeto->valor.toDouble()-1);
                    objeto=Nativo_Decc(objeto);
                    th->insertPlainText(objeto->valor);
                    th->insertPlainText("\n");
                    if(QString::compare(objeto->tipo,"ERROR",Qt::CaseInsensitive)!=0)
                    {
                         ejecutar::ultimo=objeto;
                    }

               }else if(QString::compare(item->hijos[0]->produccion,"SUCC_", Qt::CaseInsensitive)==0)
               {
                    objeto=procesarExpresion(item->hijos[1]);
                    //objeto->valor =QString::number(objeto->valor.toDouble()+1);
                    objeto=Nativo_Succ(objeto);
                    th->insertPlainText(objeto->valor);
                    th  ->insertPlainText("\n");
                    if(QString::compare(objeto->tipo,"ERROR",Qt::CaseInsensitive)!=0)
                    {
                         ejecutar::ultimo=objeto;
                    }

               }else if(QString::compare(item->hijos[0]->produccion,"MIN", Qt::CaseInsensitive)==0)
               {

                    objeto=Nativo_Min(item->hijos[1]);
                    th->insertPlainText(objeto->valor);
                    th  ->insertPlainText("\n");
                    if(QString::compare(objeto->tipo,"ERROR",Qt::CaseInsensitive)!=0)
                    {
                         ejecutar::ultimo=objeto;
                    }
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
        }else if(QString::compare(raiz->hijos[0]->produccion,"%", Qt::CaseInsensitive)==0)
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
        else if(QString::compare(raiz->hijos[0]->produccion,"LLAMADA_FUN", Qt::CaseInsensitive)==0)
        {
            /*@@@@@ BUSCAR EN LA TABLA DE SIMBOLOS Y EJECUTAR FUNCION
            COMPROBAR QUE DEVUELVA NUMERO*/
        }else if(QString::compare(raiz->hijos[0]->produccion,"ACCESO", Qt::CaseInsensitive)==0)
        {
            /*@@@@@ BUSCAR EN LA TABLA DE SIMBOLOS, TRATAR DE ACCEDER A LOS INDICES
            COMPROBAR QUE DEVUELVA NUMERO*/
        }else if(QString::compare(raiz->hijos[0]->produccion,"LISTA", Qt::CaseInsensitive)==0 &&
                QString::compare(raiz->hijos[0]->hijos[0]->produccion,"ID", Qt::CaseInsensitive)==0 )
        {
            /*@@@@@ ES PERMITIDO ID PERO SOLO SI ESTA DENTRO DE UNA FUNCION PORQUE PUEDE Q SEA UN PARAMETRO*/
             qDebug("es de tipo id");
        }
        else
        {
             nuevo->tipo="ERROR";
             nuevo->valor="No se puede operar miembro de tipo "+raiz->hijos[0]->produccion;
             qDebug("no se puede operar miembro de tipo "+raiz->hijos[0]->produccion.toLatin1());
        }

        return nuevo;


    }else if(raiz->hijos.size()==2)
    {
        Variable* op1=procesarExpresion(raiz->hijos[1]);
        if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)!=0)
        {
            double resultado;
            resultado=op1->valor.toDouble()*-1;
            Variable *nuevo = new Variable();
            nuevo->tipo="NUMBER";
            nuevo->valor=QString::number(resultado);
            return nuevo;

        }else
        {
            return op1;
        }
    }
    else if(raiz->hijos.size()==3 &&(QString::compare(raiz->hijos[1]->produccion, "-", Qt::CaseInsensitive)==0))
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)!=0&&QString::compare(op2->tipo,"ERROR",Qt::CaseInsensitive)!=0)
        {
            double resultado;
            resultado=op1->valor.toDouble()-op2->valor.toDouble();
            Variable *nuevo = new Variable();
            nuevo->tipo="NUMBER";
            nuevo->valor=QString::number(resultado);
            return nuevo;
        }else
        {

            if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)==0)
            {
                //qDebug("no trato de operar devolvio el primero");
                return op1;
            }else
            {
                return op2;
            }
        }

    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "+", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)!=0&&QString::compare(op2->tipo,"ERROR",Qt::CaseInsensitive)!=0)
        {
            double resultado;
            resultado=op1->valor.toDouble()+op2->valor.toDouble();
            Variable *nuevo = new Variable();
            nuevo->tipo="NUMBER";
            nuevo->valor=QString::number(resultado);
            return nuevo;
        }else
        {

            if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)==0)
            {
                //qDebug("no trato de operar devolvio el primero");
                return op1;
            }else
            {
                return op2;
            }
        }

    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "/", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)!=0&&QString::compare(op2->tipo,"ERROR",Qt::CaseInsensitive)!=0)
        {
            double resultado;
            resultado=op1->valor.toDouble()/op2->valor.toDouble();
            Variable *nuevo = new Variable();
            nuevo->tipo="NUMBER";
            nuevo->valor=QString::number(resultado);
            return nuevo;
        }else
        {

            if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)==0)
            {
                //qDebug("no trato de operar devolvio el primero");
                return op1;
            }else
            {
                return op2;
            }
        }
    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "*", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)!=0&&QString::compare(op2->tipo,"ERROR",Qt::CaseInsensitive)!=0)
        {
            double resultado;
            resultado=op1->valor.toDouble()*op2->valor.toDouble();
            Variable *nuevo = new Variable();
            nuevo->tipo="NUMBER";
            nuevo->valor=QString::number(resultado);
            return nuevo;
        }else
        {

            if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)==0)
            {
                //qDebug("no trato de operar devolvio el primero");
                return op1;
            }else
            {
                return op2;
            }
        }
    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "%", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)!=0&&QString::compare(op2->tipo,"ERROR",Qt::CaseInsensitive)!=0)
        {
            double resultado;
            resultado=fmod(op1->valor.toDouble(),op2->valor.toDouble());
            Variable *nuevo = new Variable();
            nuevo->tipo="NUMBER";
            nuevo->valor=QString::number(resultado);
            return nuevo;
        }else
        {

            if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)==0)
            {
                //qDebug("no trato de operar devolvio el primero");
                return op1;
            }else
            {
                return op2;
            }
        }
    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "SQRT_", Qt::CaseInsensitive)==0)
    {

        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)!=0&&QString::compare(op2->tipo,"ERROR",Qt::CaseInsensitive)!=0)
        {
            double resultado;
            double elevacion=1/op1->valor.toDouble();
            resultado=pow(op2->valor.toDouble(),elevacion);
            Variable *nuevo = new Variable();
            nuevo->tipo="NUMBER";
            nuevo->valor=QString::number(resultado);
            return nuevo;
        }else
        {

            if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)==0)
            {
                //qDebug("no trato de operar devolvio el primero");
                return op1;
            }else
            {
                return op2;
            }
        }
    }
    else if(raiz->hijos.size()==3 &&QString::compare(raiz->hijos[1]->produccion, "^", Qt::CaseInsensitive)==0)
    {
        Variable* op1=procesarExpresion(raiz->hijos[0]);
        Variable* op2=procesarExpresion(raiz->hijos[2]);
        if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)!=0&&QString::compare(op2->tipo,"ERROR",Qt::CaseInsensitive)!=0)
        {
            double resultado;
            resultado=pow(op1->valor.toDouble(),op2->valor.toDouble());
            Variable *nuevo = new Variable();
            nuevo->tipo="NUMBER";
            nuevo->valor=QString::number(resultado);
            return nuevo;
        }else
        {

            if(QString::compare(op1->tipo,"ERROR",Qt::CaseInsensitive)==0)
            {
                //qDebug("no trato de operar devolvio el primero");
                return op1;
            }else
            {
                return op2;
            }
        }
    }

return objeto;

}



Variable* ejecutar::Nativo_Succ(Variable* objeto)
{
    objeto->valor=QString::number(objeto->valor.toDouble()+1);
    return objeto;
}
Variable* ejecutar::Nativo_Decc(Variable* objeto)
{
    objeto->valor=QString::number(objeto->valor.toDouble()-1);
    return objeto;
}
Variable* ejecutar::Nativo_Min(Nodo* raiz)
{
    Variable*nuevo = new Variable();

    if(QString::compare(raiz->hijos[0]->produccion,"CADENA", Qt::CaseInsensitive)==0)
    {
        nuevo->tipo="CARACTER";
        raiz->produccion.replace("\""," ");
        int minimo=1000;
        int asciiVal=0;
        int i;
        QString cad=raiz->hijos[1]->produccion;
        cad=cad.trimmed();
        for(i=0;i<cad.length();i++)
        {

            asciiVal = cad.at(i).toLatin1();
            if(asciiVal<minimo)
            {
                minimo=asciiVal;
            }
        }
       nuevo->valor=QChar(minimo);


    }else if(QString::compare(raiz->hijos[0]->produccion,"DEFICION", Qt::CaseInsensitive)==0)
    {

    }else
    {
        /*es un id hay que traerlo a la tabla de simbolos*/
    }


    return nuevo;
}
