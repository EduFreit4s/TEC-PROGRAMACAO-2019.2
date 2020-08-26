#include "cadastro.h"
#include "ui_cadastro.h"

cadastro::cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro)
{
    ui->setupUi(this);
}

cadastro::~cadastro()
{
    delete ui;
}

void cadastro::on_btnCadastrar_clicked()
{
    roupa.setNome(ui->btnNome->text());

    if(
        roupa.setTipo(ui->btnPeca->currentText()) and
        roupa.setCor(ui->btnCor->currentText()) and
        roupa.setTamanho(ui->btnTamanho->text()) and
        roupa.setImg(img)
        )
    {
        if(roupa.getNome() == "") roupa.setNome(random());
        temp.inserirRoupa(roupa);

        QMessageBox::information(this, "Sucesso", novo[idioma]);
        hide();

    }else{
        QMessageBox::critical(this, "404", novoErro[idioma]);
    }

    ui->btnNome -> clear();
    ui->btnTamanho -> clear();
}

void cadastro::on_btnImagem_clicked()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Abrir Arquivo","","*.jpg *.png");
    roupa.setImg(filename);
    img = roupa.getImg();
}

void cadastro::carregarVetor(Peca &copia)
{
    temp = copia;
}

void cadastro::uploadVetor(Peca &copia)
{
    copia = temp;
}

void cadastro::uploadTemp(Closet &copia)
{
    copia = roupa;
}

void cadastro::carregaIdioma(int &a)
{
    idioma = a;
}
