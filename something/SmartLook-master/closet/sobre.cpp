#include "sobre.h"
#include "ui_sobre.h"

Sobre::Sobre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sobre)
{
    ui->setupUi(this);
    delete ui;
}

Sobre::~Sobre(){}

void Sobre::carregaIdioma(int &i)
{
    idioma = i;
}

void Sobre::atualizaLabel()
{
    ui -> sobre -> setText(about[idioma]);
}

void Sobre::on_github_clicked()
{
    QUrl github = QUrl("https://github.com/EduFreit4s");
    QDesktopServices::openUrl(github);
}

void Sobre::on_email_clicked()
{
    QUrl email = QUrl("mailto:freitas.eduardo@academico.ifpb.edu.br");
    QDesktopServices::openUrl(email);
}
