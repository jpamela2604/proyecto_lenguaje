#include "form.h"
#include "ui_form.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <qplaintextedit.h>

QString cambioRuta="";
QPlainTextEdit * nuevo;
QString File_ruta;
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    nuevo=ui->plainTextEdit;
}

Form::~Form()
{
    delete ui;
}
