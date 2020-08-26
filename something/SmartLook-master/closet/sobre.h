#ifndef SOBRE_H
#define SOBRE_H

#include <QDialog>
#include "arquivo.h"
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class Sobre;
}

class Sobre : public QDialog
{
    Q_OBJECT

public:
    explicit Sobre(QWidget *parent = nullptr);
    ~Sobre();

    void carregaIdioma(int &i);
    void atualizaLabel();

private slots:
    void on_github_clicked();

    void on_email_clicked();

private:
    Ui::Sobre *ui;
    int idioma;
};

#endif // SOBRE_H
