/********************************************************************************
** Form generated from reading UI file 'proyecto1.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROYECTO1_H
#define UI_PROYECTO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PROYECTO1
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *BtnLogin;
    QPushButton *BtnCrearProyecto;
    QPushButton *BtnPublicar;
    QPushButton *BtnImportar;
    QPushButton *BtnNuevo;
    QPushButton *BtnAbrir;
    QPushButton *BtnSave;
    QPushButton *BtnSaveAs;
    QPushButton *BtnCerrar;
    QPushButton *BtnTraducir;
    QPushButton *BtnReportes;
    QPlainTextEdit *Consola;
    QLineEdit *LineaComandos;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PROYECTO1)
    {
        if (PROYECTO1->objectName().isEmpty())
            PROYECTO1->setObjectName(QStringLiteral("PROYECTO1"));
        PROYECTO1->resize(766, 553);
        centralWidget = new QWidget(PROYECTO1);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 571, 321));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        BtnLogin = new QPushButton(centralWidget);
        BtnLogin->setObjectName(QStringLiteral("BtnLogin"));
        BtnLogin->setGeometry(QRect(620, 10, 121, 23));
        BtnCrearProyecto = new QPushButton(centralWidget);
        BtnCrearProyecto->setObjectName(QStringLiteral("BtnCrearProyecto"));
        BtnCrearProyecto->setGeometry(QRect(620, 40, 121, 23));
        BtnPublicar = new QPushButton(centralWidget);
        BtnPublicar->setObjectName(QStringLiteral("BtnPublicar"));
        BtnPublicar->setGeometry(QRect(620, 70, 121, 23));
        BtnImportar = new QPushButton(centralWidget);
        BtnImportar->setObjectName(QStringLiteral("BtnImportar"));
        BtnImportar->setGeometry(QRect(620, 100, 121, 23));
        BtnNuevo = new QPushButton(centralWidget);
        BtnNuevo->setObjectName(QStringLiteral("BtnNuevo"));
        BtnNuevo->setGeometry(QRect(620, 130, 121, 23));
        BtnAbrir = new QPushButton(centralWidget);
        BtnAbrir->setObjectName(QStringLiteral("BtnAbrir"));
        BtnAbrir->setGeometry(QRect(620, 160, 121, 23));
        BtnSave = new QPushButton(centralWidget);
        BtnSave->setObjectName(QStringLiteral("BtnSave"));
        BtnSave->setGeometry(QRect(620, 190, 121, 23));
        BtnSaveAs = new QPushButton(centralWidget);
        BtnSaveAs->setObjectName(QStringLiteral("BtnSaveAs"));
        BtnSaveAs->setGeometry(QRect(620, 220, 121, 23));
        BtnCerrar = new QPushButton(centralWidget);
        BtnCerrar->setObjectName(QStringLiteral("BtnCerrar"));
        BtnCerrar->setGeometry(QRect(620, 250, 121, 23));
        BtnTraducir = new QPushButton(centralWidget);
        BtnTraducir->setObjectName(QStringLiteral("BtnTraducir"));
        BtnTraducir->setGeometry(QRect(620, 280, 121, 23));
        BtnReportes = new QPushButton(centralWidget);
        BtnReportes->setObjectName(QStringLiteral("BtnReportes"));
        BtnReportes->setGeometry(QRect(620, 310, 121, 23));
        Consola = new QPlainTextEdit(centralWidget);
        Consola->setObjectName(QStringLiteral("Consola"));
        Consola->setGeometry(QRect(30, 350, 711, 131));
        Consola->setReadOnly(true);
        LineaComandos = new QLineEdit(centralWidget);
        LineaComandos->setObjectName(QStringLiteral("LineaComandos"));
        LineaComandos->setGeometry(QRect(30, 490, 711, 23));
        PROYECTO1->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PROYECTO1);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 766, 20));
        PROYECTO1->setMenuBar(menuBar);
        statusBar = new QStatusBar(PROYECTO1);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PROYECTO1->setStatusBar(statusBar);

        retranslateUi(PROYECTO1);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PROYECTO1);
    } // setupUi

    void retranslateUi(QMainWindow *PROYECTO1)
    {
        PROYECTO1->setWindowTitle(QApplication::translate("PROYECTO1", "PROYECTO1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PROYECTO1", "Tab 1", 0));
        BtnLogin->setText(QApplication::translate("PROYECTO1", "Login", 0));
        BtnCrearProyecto->setText(QApplication::translate("PROYECTO1", "Crear Proyecto", 0));
        BtnPublicar->setText(QApplication::translate("PROYECTO1", "Publicar", 0));
        BtnImportar->setText(QApplication::translate("PROYECTO1", "Importar", 0));
        BtnNuevo->setText(QApplication::translate("PROYECTO1", "Nuevo", 0));
        BtnAbrir->setText(QApplication::translate("PROYECTO1", "Abrir", 0));
        BtnSave->setText(QApplication::translate("PROYECTO1", "Guardar", 0));
        BtnSaveAs->setText(QApplication::translate("PROYECTO1", "Guardar Como", 0));
        BtnCerrar->setText(QApplication::translate("PROYECTO1", "Cerrar", 0));
        BtnTraducir->setText(QApplication::translate("PROYECTO1", "Traducir", 0));
        BtnReportes->setText(QApplication::translate("PROYECTO1", "Reportes", 0));
    } // retranslateUi

};

namespace Ui {
    class PROYECTO1: public Ui_PROYECTO1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROYECTO1_H
