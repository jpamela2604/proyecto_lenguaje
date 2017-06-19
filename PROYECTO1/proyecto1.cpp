#include "proyecto1.h"
#include "ui_proyecto1.h"
#include "form.h"
#include <qwidget.h>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QVector>
#include <QString>
#include <QAbstractButton>
#include <QPlainTextEdit>
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <lexicoHaskell.h>
#include <gramaticahaskell.h>
#include "nodo.h"
#include "ejecutar.h"

using namespace std;
extern Nodo *root;
extern void mostrarResultado(QWidget* th);
//Variable* ejecutar::ultimo=new Variable();
//extern void mostrarResultadoJ(QWidget* th);
//extern FILE *ccin;
//extern nodeTree *root;
extern FILE *zzin;
//Nodo *nodo;
QVector<QString> vectorrrr(20);
//QString rutaDeArchivos="/home/pam/Desktop/";
QString rutaDeArchivos="/home/pam/Desktop/Entradascorrectas/Entradascorrectas";
ejecutar * e= new ejecutar();

PROYECTO1::PROYECTO1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PROYECTO1)
{
    ui->setupUi(this);
    //this->setCentralWidget(ui->tabWidget);
    ui->tabWidget->removeTab(0);
    ui->BtnCrearProyecto->setEnabled(false);
    ui->BtnImportar->setEnabled(false);
    ui->BtnPublicar->setEnabled(false);



}

PROYECTO1::~PROYECTO1()
{
    delete ui;
}
void PROYECTO1::on_BtnTraducir_clicked()
{
    //buscar el plaintext del widget
     QPlainTextEdit* pte = NULL;
        QWidget * pWid=ui->tabWidget->widget(ui->tabWidget->currentIndex());
        if(pWid->metaObject()->className()=="QPlainTextEdit")

            pte=(QPlainTextEdit*)pWid;

        else
        {
            QList<QPlainTextEdit*>allTextEdits=pWid->findChildren<QPlainTextEdit*>();
            if(allTextEdits.count()!=1)
            {
                QMessageBox::information(this,"Advertencia","Error");
                return;
            }
            pte=allTextEdits[0];
        }

        QString yourString = ui->tabWidget->tabText(ui->tabWidget->currentIndex());
        //QString leftSide = yourString.right(5);


       if (yourString.contains(".hk", Qt::CaseInsensitive))
       {

         if(pte->toPlainText().length()>0){
             //ui->Consola->insertPlainText(pte->toPlainText());

             crearArchivo(pte->toPlainText());
             zzin=fopen("entrada.txt","rt");
             if(!zzin)
                 cout<<"error al abrir"<<endl;

             zzparse();

             mostrarResultado(this);
             if(root->hijos.size()>0)
             {
                 Nodo* nuevo = new Nodo();
                 nuevo->graficar(root);
             }else
             {
               QMessageBox::warning(this,"...","error");
             }
            /* ejecutar * e= new ejecutar();
             e->procesarHaskell(root,ui->Consola);*/
             e->CargarFuncionesHaskell(root);


         }
       }else if(yourString.contains(".gk", Qt::CaseInsensitive))
       {
          /*if(pte->toPlainText().length()>0){
             crearArchivo(pte->toPlainText());
             yyin=fopen("entrada.txt","rt");
             if(!yyin)
                 cout<<"error al abrir"<<endl;

             yyparse();

             mostrarResultadoJ(this);

            }*/
        }
}

void PROYECTO1::on_LineaComandos_returnPressed()
{
    if(ui->LineaComandos->text().length()>0){
        ui->Consola->insertPlainText(ui->LineaComandos->text());
        ui->Consola->insertPlainText("\n");
        crearArchivo(ui->LineaComandos->text());
        zzin=fopen("entrada.txt","rt");
        if(!zzin)
            cout<<"error al abrir"<<endl;

        zzparse();

        Nodo* nuevo = new Nodo();
        nuevo->graficar(root);

        e->procesarHaskell(root,ui->Consola);
    }
}

void PROYECTO1::on_BtnCerrar_clicked()
{
    ui->tabWidget->removeTab( ui->tabWidget->currentIndex());
}

void PROYECTO1::on_BtnNuevo_clicked()
{
    QString extension="";
    QMessageBox msgBox;
    msgBox.setWindowTitle("Escoja el tipo de Archivo ");
    msgBox.setText("Haskell++ o GraphiK?\n (No escriba la extension al guardar el archivo)");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.addButton(QMessageBox::YesAll);
    msgBox.setButtonText(QMessageBox::YesAll, trUtf8("Haskell++"));
    msgBox.setButtonText(QMessageBox::Yes, trUtf8("GraphiK"));
    msgBox.setButtonText(QMessageBox::No, trUtf8("NINGUNO"));
    msgBox.setDefaultButton(QMessageBox::No);
    int reply;
    reply=msgBox.exec() ;
    if(reply== QMessageBox::Yes){extension=".gk";
    }else if(reply == QMessageBox::YesAll) { extension=".hk"; }

    if (extension!="")
    {
        QString ruta =QFileDialog::getSaveFileName(this,QObject::tr("Nuevo"), rutaDeArchivos,QObject:: tr("Text files (*.gk *.hk)"));
       if (ruta!="")
       {
           ui->tabWidget->addTab(new Form(),QString("New %0").arg(ui->tabWidget->count()+1));
           ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
       }
        ruta.append(extension);
        QFile file(ruta);

        if(!file.open(QFile::WriteOnly|QFile::Text))
        {
            QMessageBox::warning(this,"...","file not open");
            return;
        }

        QTextStream out(&file);
        file.flush();
        file.close();
        ui->tabWidget->setTabText( ui->tabWidget->currentIndex(), ruta );
    }
}

void PROYECTO1::on_BtnAbrir_clicked()
{
    ui->tabWidget->addTab(new Form(),QString("New %0").arg(ui->tabWidget->count()+1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);

    QPlainTextEdit* pte = NULL;
       QWidget * pWid=ui->tabWidget->widget(ui->tabWidget->currentIndex());
       if(pWid->metaObject()->className()=="QPlainTextEdit")

           pte=(QPlainTextEdit*)pWid;

       else
       {
           QList<QPlainTextEdit*>allTextEdits=pWid->findChildren<QPlainTextEdit*>();
           if(allTextEdits.count()!=1)
           {
               QMessageBox::information(this,"Advertencia","Error");
               return;
           }
           pte=allTextEdits[0];
       }

       //Metodo de abrir
       QString ruta = QFileDialog::getOpenFileName(this,QObject::tr("Abrir"), rutaDeArchivos,QObject:: tr("Text files (*.hk *.gk)"));
       if (ruta=="")
       {
              ui->tabWidget->removeTab(ui->tabWidget->currentIndex());
       }
       QFile file(ruta);

       if(!file.open(QFile::ReadOnly|QFile::Text))
       {
           pte->setPlainText(ruta);
           QMessageBox::warning(this,"...","file not open");
           return;
       }
       QTextStream in(&file);
       QString text = in.readAll();
       pte->setPlainText(text);
       file.close();

       //fin metodo abrir
    ui->tabWidget->setTabText( ui->tabWidget->currentIndex(), ruta);
}

void PROYECTO1::on_BtnSave_clicked()
{
    //guardar
    if(ui->tabWidget->count()>0)
       {
          //buscar el plaintext del widget
           QPlainTextEdit* pte = NULL;
              QWidget * pWid=ui->tabWidget->widget(ui->tabWidget->currentIndex());
              if(pWid->metaObject()->className()=="QPlainTextEdit")

                  pte=(QPlainTextEdit*)pWid;

              else
              {
                  QList<QPlainTextEdit*>allTextEdits=pWid->findChildren<QPlainTextEdit*>();
                  if(allTextEdits.count()!=1)
                  {
                      QMessageBox::information(this,"Advertencia","Error");
                      return;
                  }
                  pte=allTextEdits[0];
              }
              //inicio el metodo
           QString File_ruta;
           File_ruta= ui->tabWidget->tabText(ui->tabWidget->currentIndex());
           if (File_ruta.contains("/")==false)
             {
               //guardar como
               QString ruta =QFileDialog::getSaveFileName(this,QObject::tr("GuardarComo"), rutaDeArchivos,QObject:: tr("Text files (*.gk *.hk)"));
               QFile file(ruta);
               File_ruta =ruta;
               if(!file.open(QFile::WriteOnly|QFile::Text))
               {
                   pte->setPlainText(ruta);
                   QMessageBox::warning(this,"...","file not open");
                   return;
               }

               QTextStream out(&file);
               QString text = pte->toPlainText();
               out<<text;
               file.flush();
               file.close();
               ui->tabWidget->setTabText( ui->tabWidget->currentIndex(), File_ruta );
             }else
             {
               //guardar
                 QFile file(File_ruta);

                 if(!file.open(QFile::WriteOnly|QFile::Text))
                 {

                     QMessageBox::warning(this,"...","file not open");
                     return;
                 }

                 QTextStream out(&file);
                 QString text = pte->toPlainText();

                 out<<text;
                 file.flush();
                 file.close();

             }
           //fin de guardar como


       }else{QMessageBox::information(this,"Aviso","No hay ningun archivo en el editor");}

}

void PROYECTO1::on_BtnSaveAs_clicked()
{
    QString extension="";
    QMessageBox msgBox;
    msgBox.setWindowTitle("Escoja el tipo de Archivo");
    msgBox.setText("Haskell++ o GrafiK?\n (No escriba la extension al guardar el archivo)");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.addButton(QMessageBox::YesAll);
    msgBox.setButtonText(QMessageBox::YesAll, trUtf8("Haskell++"));
    msgBox.setButtonText(QMessageBox::Yes, trUtf8("GrafiK"));
    msgBox.setButtonText(QMessageBox::No, trUtf8("NINGUNO"));
    msgBox.setDefaultButton(QMessageBox::No);
    int reply;
    reply=msgBox.exec() ;
    if(reply== QMessageBox::Yes){extension=".gk";
    }else if(reply == QMessageBox::YesAll) { extension=".hk"; }

    if (extension!="")
    {
        QString ruta =QFileDialog::getSaveFileName(this,QObject::tr("Nuevo"),rutaDeArchivos,QObject:: tr("Text files (*.gk *.hk)"));
       if (ruta!="")
       {
           ui->tabWidget->addTab(new Form(),QString("New %0").arg(ui->tabWidget->count()+1));
           ui->tabWidget->setCurrentIndex(ui->tabWidget->count()-1);
       }
        ruta.append(extension);
        QFile file(ruta);

        if(!file.open(QFile::WriteOnly|QFile::Text))
        {
            QMessageBox::warning(this,"...","file not open");
            return;
        }

        QTextStream out(&file);
        file.flush();
        file.close();
        ui->tabWidget->setTabText( ui->tabWidget->currentIndex(), ruta );
    }
}
void PROYECTO1::crearArchivo(QString texto){
    ofstream fichero;
    fichero.open("entrada.txt",ofstream::out|ofstream::trunc);
    fichero<<texto.toStdString()<<endl;
    fichero.close();

}

