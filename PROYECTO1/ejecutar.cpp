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
                    // qDebug("pass here");
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
               }else if(QString::compare(item->hijos[0]->produccion,"MAX", Qt::CaseInsensitive)==0)
               {

                    objeto=Nativo_Max(item->hijos[1]);
                    th->insertPlainText(objeto->valor);
                    th  ->insertPlainText("\n");
                    if(QString::compare(objeto->tipo,"ERROR",Qt::CaseInsensitive)!=0)
                    {
                         ejecutar::ultimo=objeto;
                    }
               }
               else if(QString::compare(item->hijos[0]->produccion,"LENGTH", Qt::CaseInsensitive)==0)
               {

                     objeto=Nativo_Length(item->hijos[1]);
                     th->insertPlainText(objeto->valor);
                     th  ->insertPlainText("\n");
                     if(QString::compare(objeto->tipo,"ERROR",Qt::CaseInsensitive)!=0)
                     {
                        ejecutar::ultimo=objeto;
                     }
               }
               else if(QString::compare(item->hijos[0]->produccion,"SUM", Qt::CaseInsensitive)==0)
               {

                     objeto=Nativo_Sum(item->hijos[1]);
                     th->insertPlainText(objeto->valor);
                     th  ->insertPlainText("\n");
                     if(QString::compare(objeto->tipo,"ERROR",Qt::CaseInsensitive)!=0)
                     {
                        ejecutar::ultimo=objeto;
                     }
               }
               else if(QString::compare(item->hijos[0]->produccion,"PRODUCT", Qt::CaseInsensitive)==0)
               {

                     objeto=Nativo_Product(item->hijos[1]);
                     th->insertPlainText(objeto->valor);
                     th  ->insertPlainText("\n");
                     if(QString::compare(objeto->tipo,"ERROR",Qt::CaseInsensitive)!=0)
                     {
                        ejecutar::ultimo=objeto;
                     }
               } else if(QString::compare(item->hijos[0]->produccion,"REVERS", Qt::CaseInsensitive)==0)
               {

                     Nativo_Revers(item->hijos[1]);

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
        }else if(QString::compare(raiz->hijos[0]->produccion,"NATIVAS", Qt::CaseInsensitive)==0)
        {
            if(QString::compare(raiz->hijos[0]->hijos[0]->produccion,"SUCC_", Qt::CaseInsensitive)==0)
            {
                nuevo=procesarExpresion(raiz->hijos[0]->hijos[1]);
                nuevo=Nativo_Succ(nuevo);
            }
            else if(QString::compare(raiz->hijos[0]->hijos[0]->produccion,"DECC_", Qt::CaseInsensitive)==0)
            {
                nuevo=procesarExpresion(raiz->hijos[0]->hijos[1]);
                nuevo=Nativo_Decc(nuevo);
            }
            else if(QString::compare(raiz->hijos[0]->hijos[0]->produccion,"MIN", Qt::CaseInsensitive)==0)
            {
                nuevo=Nativo_Min(raiz->hijos[0]->hijos[1]);
                if(QString::compare(nuevo->tipo,"ERROR",Qt::CaseInsensitive)==0)
                {
                    return nuevo;
                }else if(QString::compare(nuevo->tipo,"CARACTER",Qt::CaseInsensitive)==0)
                {
                    nuevo->tipo="ERROR";
                    nuevo->valor="No se puede operar miembro de tipo CARACTER";
                }else
                {
                    return nuevo;
                }
            }
            else if(QString::compare(raiz->hijos[0]->hijos[0]->produccion,"MAX", Qt::CaseInsensitive)==0)
            {
                nuevo=Nativo_Max(raiz->hijos[0]->hijos[1]);
                if(QString::compare(nuevo->tipo,"ERROR",Qt::CaseInsensitive)==0)
                {
                    return nuevo;
                }else if(QString::compare(nuevo->tipo,"CARACTER",Qt::CaseInsensitive)==0)
                {
                    nuevo->tipo="ERROR";
                    nuevo->valor="No se puede operar miembro de tipo CARACTER";
                }else
                {
                    return nuevo;
                }
            } else if(QString::compare(raiz->hijos[0]->hijos[0]->produccion,"LENGTH", Qt::CaseInsensitive)==0)
            {
                nuevo=Nativo_Length(raiz->hijos[0]->hijos[1]);
                return nuevo;
            }else if(QString::compare(raiz->hijos[0]->hijos[0]->produccion,"SUM", Qt::CaseInsensitive)==0)
            {
                nuevo=Nativo_Sum(raiz->hijos[0]->hijos[1]);
                return nuevo;
            }
            else if(QString::compare(raiz->hijos[0]->hijos[0]->produccion,"PRODUCT", Qt::CaseInsensitive)==0)
            {
                nuevo=Nativo_Product(raiz->hijos[0]->hijos[1]);
                return nuevo;
            }
            else
            {
                nuevo->tipo="ERROR";
                nuevo->valor="Operacion Nativa "+raiz->hijos[0]->hijos[0]->produccion+" devuelve una lista";
            }

        }
        else
        {
             nuevo->tipo="ERROR";
             nuevo->valor="No se puede operar miembro de tipo "+raiz->hijos[0]->produccion;
             //qDebug("no se puede operar miembro de tipo "+raiz->hijos[0]->produccion.toLatin1());
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
/*   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
/*   %%%%%%%%%%%%%%%%%%%% NATIVAS COMPUESTAS %%%%%%%%%%%%%%%%%%%%%% */
/*   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
Nodo* ejecutar::Nativo_Concatenar(Nodo* listaA,Nodo* listaB)
{

}

Nodo* ejecutar::Nativo_Revers(Nodo* raiz)
{
    Nodo* nuevo= new Nodo();
    if(QString::compare(raiz->hijos[0]->produccion,"CADENA", Qt::CaseInsensitive)==0)
    {
       nuevo->produccion="LISTA";
       QString palabra= raiz->hijos[1]->produccion.replace("\""," ");
       palabra=palabra.trimmed();
       int i;
       for(i=0;i<palabra.length();i++)
       {

           QString w =palabra.at(palabra.length()-1-i);
           Nodo* padre= new Nodo("E");
           Nodo* hijo = new Nodo("CARACTER");
           padre->hijos.append(hijo);
           hijo->hijos.append(new Nodo(w));
           nuevo->hijos.append(padre);
       }
    }else if(QString::compare(raiz->hijos[0]->produccion,"DEFICION", Qt::CaseInsensitive)==0)
    {
         Variable* a=Tipo_Lista(raiz->hijos[1]);
          if(QString::compare(a->tipo,"ERROR", Qt::CaseInsensitive)!=0)
          {
                nuevo->produccion="LISTA";
                int i;
                int j=raiz->hijos[1]->hijos.size();
                for(i=0;i<j;i++)
                {

                    nuevo->hijos.append(raiz->hijos[1]->hijos[j-1-i]);
                }

          }else
          {
              nuevo->produccion="ERROR";
              nuevo->hijos.append(new Nodo("LA LISTA NO TIENE MIEMBROS DEL MISMO TIPO"));
          }

    }else
    {
        /*es un id hay que traerlo a la tabla de simbolos*/
    }


    return nuevo;
}

/*   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
/*   %%%%%%%%%%%%%%%%%%%%%% NATIVAS SIMPLES %%%%%%%%%%%%%%%%%%%%%%% */
/*   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */

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
        Variable* a=Tipo_Lista(raiz->hijos[1]);
        qDebug("LA LISTA ES DE TIPO"+a->tipo.toLatin1());
        if(QString::compare(a->tipo,"CARACTER", Qt::CaseInsensitive)==0)
        {
            int numero=1000;
            foreach(Nodo *item,raiz->hijos[1]->hijos)
            {
                QString cad=item->hijos[0]->hijos[0]->produccion;
                cad.replace("'"," ");
                cad=cad.trimmed();
                int trae=cad.at(0).toLatin1();
                if(trae<numero)
                {
                    numero=trae;
                }

            }
            qDebug("el menor valor es "+QChar(numero).toLatin1());
            nuevo->tipo="CARACTER";
            nuevo->valor=QChar(numero);

        }else if (QString::compare(a->tipo,"NUMBER", Qt::CaseInsensitive)==0)
        {
            double numero=1000;
            foreach(Nodo *item,raiz->hijos[1]->hijos)
            {
                double trae=item->hijos[0]->hijos[0]->produccion.toDouble();
                if(trae<numero)
                {
                    numero=trae;
                }

            }
            qDebug("el menor valor es "+QString::number(numero).toLatin1());
            nuevo->tipo="NUMBER";
            nuevo->valor=QString::number(numero).toLatin1();

        }else
        {
            nuevo->tipo="ERROR";
            nuevo->valor="LA LISTA NO TIENE MIEMBROS DEL MISMO TIPO";
        }

    }else
    {
        /*es un id hay que traerlo a la tabla de simbolos*/
    }


    return nuevo;
}

Variable* ejecutar::Nativo_Max(Nodo* raiz)
{
    Variable*nuevo = new Variable();

    if(QString::compare(raiz->hijos[0]->produccion,"CADENA", Qt::CaseInsensitive)==0)
    {
        nuevo->tipo="CARACTER";
        raiz->produccion.replace("\""," ");
        int max=0;
        int asciiVal=0;
        int i;
        QString cad=raiz->hijos[1]->produccion;
        cad=cad.trimmed();
        for(i=0;i<cad.length();i++)
        {

            asciiVal = cad.at(i).toLatin1();
            if(asciiVal>max)
            {
                max=asciiVal;
            }
        }
       nuevo->valor=QChar(max);


    }else if(QString::compare(raiz->hijos[0]->produccion,"DEFICION", Qt::CaseInsensitive)==0)
    {
        Variable* a=Tipo_Lista(raiz->hijos[1]);
        qDebug("LA LISTA ES DE TIPO"+a->tipo.toLatin1());
        if(QString::compare(a->tipo,"CARACTER", Qt::CaseInsensitive)==0)
        {
            int numero=0;
            foreach(Nodo *item,raiz->hijos[1]->hijos)
            {
                QString cad=item->hijos[0]->hijos[0]->produccion;
                cad.replace("'"," ");
                cad=cad.trimmed();
                int trae=cad.at(0).toLatin1();
                if(trae>numero)
                {
                    numero=trae;
                }

            }
            qDebug("el mayor valor es "+QChar(numero).toLatin1());
            nuevo->tipo="CARACTER";
            nuevo->valor=QChar(numero);

        }else if (QString::compare(a->tipo,"NUMBER", Qt::CaseInsensitive)==0)
        {
            double numero=0;
            foreach(Nodo *item,raiz->hijos[1]->hijos)
            {
                double trae=item->hijos[0]->hijos[0]->produccion.toDouble();
                if(trae>numero)
                {
                    numero=trae;
                }

            }
            qDebug("el mayor valor es "+QString::number(numero).toLatin1());
            nuevo->tipo="NUMBER";
            nuevo->valor=QString::number(numero).toLatin1();

        }else
        {
            nuevo->tipo="ERROR";
            nuevo->valor="LA LISTA NO TIENE MIEMBROS DEL MISMO TIEMPO";
        }

    }else
    {
        /*es un id hay que traerlo a la tabla de simbolos*/
    }


    return nuevo;
}

Variable* ejecutar::Tipo_Lista(Nodo* raiz)
{
    QString ant="";
    QString act="";
    Variable* nueva=new Variable();
    int bandera=0;
    foreach( Nodo* item, raiz->hijos )
    {
        if(QString::compare(item->hijos[0]->produccion,"NUMERO", Qt::CaseInsensitive)==0)
        {
            act="NUMBER";
            if(bandera==0)
            {
                ant="NUMBER";
                bandera=1;
            }else
            {
                if(QString::compare(ant,act,Qt::CaseInsensitive)!=0)
                {
                    nueva->tipo="ERROR";
                    return nueva;
                }
                ant=act;
            }

        }else if(QString::compare(item->hijos[0]->produccion,"CARACTER", Qt::CaseInsensitive)==0)
        {
            act="CARACTER";
            if(bandera==0)
            {
                ant="CARACTER";
                bandera=1;
            }else
            {
                if(QString::compare(ant,act,Qt::CaseInsensitive)!=0)
                {
                    nueva->tipo="ERROR";
                    return nueva;
                }
                ant=act;
            }
        }
    }
    nueva->tipo=act;
    return nueva;
}

Variable* ejecutar::Nativo_Length(Nodo* raiz)
{
    Variable*nuevo = new Variable();

        if(QString::compare(raiz->hijos[0]->produccion,"CADENA", Qt::CaseInsensitive)==0)
        {
            nuevo->tipo="NUMBER";
            QString cad=raiz->hijos[1]->produccion;
            cad.replace("\""," ");
            cad=cad.trimmed();
            nuevo->valor=QString::number(cad.length());
        }
        else if(QString::compare(raiz->hijos[0]->produccion,"DEFICION", Qt::CaseInsensitive)==0)
        {

            Variable* a=Tipo_Lista(raiz->hijos[1]);
            if(QString::compare(a->tipo,"ERROR", Qt::CaseInsensitive)==0)
            {
                nuevo->tipo="ERROR";
                nuevo->valor="LA LISTA NO TIENE MIEMBROS DEL MISMO TIEMPO";
            }else
            {
                nuevo->tipo="NUMBER";
                nuevo->valor=QString::number(raiz->hijos[1]->hijos.size());
            }
        }else
            {
                /*es un id hay que traerlo a la tabla de simbolos*/
            }
        return nuevo;

}

Variable* ejecutar::Nativo_Sum(Nodo* raiz)
{
    Variable*nuevo = new Variable();

        if(QString::compare(raiz->hijos[0]->produccion,"CADENA", Qt::CaseInsensitive)==0)
        {
            nuevo->tipo="ERROR";
            nuevo->valor="NO SE PUEDE SUMAR LISTA DE TIPO CARACTER";
        }
        else if(QString::compare(raiz->hijos[0]->produccion,"DEFICION", Qt::CaseInsensitive)==0)
        {

            Variable* a=Tipo_Lista(raiz->hijos[1]);
            if(QString::compare(a->tipo,"ERROR", Qt::CaseInsensitive)==0)
            {
                nuevo->tipo="ERROR";
                nuevo->valor="LA LISTA NO TIENE MIEMBROS DEL MISMO TIEMPO";
            }else if(QString::compare(a->tipo,"CARACTER", Qt::CaseInsensitive)==0)
            {
                nuevo->tipo="ERROR";
                nuevo->valor="NO SE PUEDE SUMAR LISTA DE TIPO CARACTER";
            }
            else if(QString::compare(a->tipo,"NUMBER", Qt::CaseInsensitive)==0)
            {
                nuevo->tipo="NUMBER";
                double numero=0;
                foreach(Nodo *item,raiz->hijos[1]->hijos)
                {
                    double trae=item->hijos[0]->hijos[0]->produccion.toDouble();
                    numero=numero+trae;
                }
                nuevo->valor=QString::number(numero);

            }
        }
        else
            {
                /*es un id hay que traerlo a la tabla de simbolos*/
            }
        return nuevo;

}

Variable* ejecutar::Nativo_Product(Nodo* raiz)
{
    Variable*nuevo = new Variable();

        if(QString::compare(raiz->hijos[0]->produccion,"CADENA", Qt::CaseInsensitive)==0)
        {
            nuevo->tipo="ERROR";
            nuevo->valor="NO SE PUEDE MULTIPLICAR LISTA DE TIPO CARACTER";
        }
        else if(QString::compare(raiz->hijos[0]->produccion,"DEFICION", Qt::CaseInsensitive)==0)
        {

            Variable* a=Tipo_Lista(raiz->hijos[1]);
            if(QString::compare(a->tipo,"ERROR", Qt::CaseInsensitive)==0)
            {
                nuevo->tipo="ERROR";
                nuevo->valor="LA LISTA NO TIENE MIEMBROS DEL MISMO TIEMPO";
            }else if(QString::compare(a->tipo,"CARACTER", Qt::CaseInsensitive)==0)
            {
                nuevo->tipo="ERROR";
                nuevo->valor="NO SE PUEDE MULTIPLICAR LISTA DE TIPO CARACTER";
            }
            else if(QString::compare(a->tipo,"NUMBER", Qt::CaseInsensitive)==0)
            {
                nuevo->tipo="NUMBER";
                double numero=1;
                foreach(Nodo *item,raiz->hijos[1]->hijos)
                {
                    double trae=item->hijos[0]->hijos[0]->produccion.toDouble();
                    numero=numero*trae;
                }
                nuevo->valor=QString::number(numero);

            }
        }
        else
            {
                /*es un id hay que traerlo a la tabla de simbolos*/
            }
        return nuevo;

}

