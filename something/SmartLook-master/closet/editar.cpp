#include "editar.h"
#include "ui_editar.h"

Editar::Editar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editar)
{
    ui->setupUi(this);
}

Editar::~Editar()
{
    delete ui;
}

void Editar::carregarVetor(Peca &copia)
{
    temp = copia;
}

void Editar::carregaIndex(int a)
{
    index = a;
}

void Editar::carregaFlag(QString a)
{
    flag = a;
}

void Editar::on_btnCadastrar_clicked()
{
    roupa.setNome(ui->btnNome->text());
    if(ui->btnCor->currentText() != "Selecione uma cor") roupa.setCor(ui->btnCor->currentText());
    roupa.setTamanho(ui->btnTamanho->text());
    roupa.setImg(img);

    if(roupa.getNome() != ""){
        for(int i = 0; i < temp.roupas.size();i++)
        {
            if(temp.roupas[i].getNome() == flag)
            {
                temp.roupas[i].setNome(roupa.getNome());
            }
        }
    }

    if(roupa.getCor() != ""){
        for(int i = 0; i < temp.roupas.size();i++)
        {
            if(temp.roupas[i].getNome() == flag)
            {
                temp.roupas[i].setCor(roupa.getCor());
            }
        }
    }

    if(roupa.getTamanho() != ""){
        for(int i = 0; i < temp.roupas.size();i++)
        {
            if(temp.roupas[i].getNome() == flag)
            {
                temp.roupas[i].setTamanho(roupa.getTamanho());
            }
        }
    }

    if(roupa.getImg() != ""){
        for(int i = 0; i < temp.roupas.size();i++)
        {
            if(temp.roupas[i].getNome() == flag)
            {
                temp.roupas[i].setImg(roupa.getImg());
            }
        }
    }

    ui->btnNome -> clear();
    ui->btnTamanho -> clear();

    close();
}

void Editar::on_btnImagem_clicked()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Abrir Arquivo","","*.jpg *.png");
    roupa.setImg(filename);
    img = roupa.getImg();
}


void Editar::uploadVetor(Peca &copia)
{
    copia = temp;
}

void Editar::uploadTemp(Closet &copia)
{
    copia = roupa;
}

void Editar::carregaIdioma(int &a)
{
    idioma = a;
}
