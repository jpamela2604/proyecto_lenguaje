#ifndef PROYECTO1_H
#define PROYECTO1_H

#include <QMainWindow>

namespace Ui {
class PROYECTO1;
}

class PROYECTO1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PROYECTO1(QWidget *parent = 0);
    ~PROYECTO1();

private slots:
    void on_BtnCerrar_clicked();

    void on_BtnNuevo_clicked();


    void on_BtnAbrir_clicked();

    void on_BtnSave_clicked();

    void on_BtnSaveAs_clicked();

    void on_BtnTraducir_clicked();
    void crearArchivo(QString texto);

    void on_LineaComandos_returnPressed();

private:
    Ui::PROYECTO1 *ui;
};

#endif // PROYECTO1_H
