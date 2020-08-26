#ifndef CADASTRO_H
#define CADASTRO_H

#include <QDialog>
#include "closet.h"
#include "peca.h"
#include "arquivo.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QString>
#include <QVector>

namespace Ui {
class cadastro;
}

class cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit cadastro(QWidget *parent = nullptr);
    ~cadastro();

    void carregarVetor(Peca &copia);
    void uploadVetor(Peca & copia);
    void uploadTemp(Closet &copia);
    void carregaIdioma(int &a);

private slots:

    void on_btnCadastrar_clicked();
    void on_btnImagem_clicked();

private:
    Ui::cadastro *ui;
    QString img;
    Peca temp;
    Closet roupa;
    int idioma;
};

#endif // CADASTRO_H
