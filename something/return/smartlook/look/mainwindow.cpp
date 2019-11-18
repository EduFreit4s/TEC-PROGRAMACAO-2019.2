#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVector>

#include "tempo.h"
#include "peca.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCadastro_clicked()
{
    Closet roupa;

    roupa.setNome(ui->inputNome->text());
    roupa.setTipo(ui->inputTipo->currentText());
    roupa.setCor(ui->inputCor->currentText());
    roupa.setTamanho(ui->inputTamanho->text());


    int quantidade_linhas = ui->tabela->rowCount();

    if(roupa.getNome().size() != 0){

        criaCloset(roupa);
        ui->tabela->insertRow(quantidade_linhas);
        inserirNaTabela(roupa,quantidade_linhas);
    }

    ui->inputNome -> clear();


    ui->inputTamanho -> clear();


}

void MainWindow::inserirNaTabela(Closet a, int linha)
{
    ui->tabela->setItem(linha,0, new QTableWidgetItem(a.getNome()));
    ui->tabela->setItem(linha,1, new QTableWidgetItem(a.getTipo()));
    ui->tabela->setItem(linha,2, new QTableWidgetItem(a.getCor()));
    ui->tabela->setItem(linha,3, new QTableWidgetItem(a.getTamanho()));
}

void MainWindow::on_btnOrdenar_activated(const QString &arg1)
{

    ui->tabela->clearContents();

    if(arg1 == "Nome"){

        ordenarPorNome();

        for(int i=0; i<Peca.size();i++) inserirNaTabela(Peca[i],i);

    }else if( arg1 == "Tipo"){

        ordenarPorTipo();
        for(int i=0; i<Peca.size();i++) inserirNaTabela(Peca[i],i);

    }else if( arg1 == "Cor"){

        ordenarPorCor();
        for(int i=0; i<Peca.size();i++) inserirNaTabela(Peca[i],i);
    }else{
        ordenarPorTamanho();
        for(int i=0; i<Peca.size();i++) inserirNaTabela(Peca[i],i);
    }

}
