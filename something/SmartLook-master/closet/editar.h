#ifndef EDITAR_H
#define EDITAR_H

#include <QDialog>

#include "closet.h"
#include "peca.h"
#include "arquivo.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QString>
#include <QVector>

namespace Ui {
class Editar;
}

class Editar : public QDialog
{
    Q_OBJECT

public:
    explicit Editar(QWidget *parent = nullptr);
    ~Editar();

    void carregarVetor(Peca &copia);
    void uploadVetor(Peca & copia);
    void uploadTemp(Closet &copia);
    void carregaIdioma(int &a);
    void carregaIndex(int a);
    void carregaFlag(QString a);

private slots:
    void on_btnCadastrar_clicked();
    void on_btnImagem_clicked();

private:
    Ui::Editar *ui;
    QString img;
    Peca temp;
    Closet roupa;
    int idioma;
    int index;
    QString flag;
};

#endif // EDITAR_H
