#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));

    QMessageBox::information(this, "Sucesso", "Bem vindo ao seu Closet virtual!");
    menu();
}

MainWindow::~MainWindow()
{
    roupas.salvarDados(getSaveData()+"_closet" +".csv");
    delete ui;
}

void MainWindow::inserirNaTabela(Closet a, int linha)
{
    ui->tabela->setItem(linha,0, new QTableWidgetItem(a.getNome()));
    ui->tabela->setItem(linha,1, new QTableWidgetItem(a.getTipo()));
    ui->tabela->setItem(linha,2, new QTableWidgetItem(a.getCor()));
    ui->tabela->setItem(linha,3, new QTableWidgetItem(a.getTamanho()));
}

/* Botões do menu principal  */

void MainWindow::on_btnCloset_clicked()
{
    ui->stackedWidget ->setCurrentIndex(1);

    if(pecas.t.size() > 0){
        QPixmap tronco(pecas.t[0].getImg());
        ui -> labelTronco -> setPixmap(tronco.scaled(1280,1280,Qt::KeepAspectRatio));
    }

    if(pecas.p.size() > 0){
        QPixmap perna(pecas.p[0].getImg());
        ui -> labelPernas -> setPixmap(perna.scaled(1280,1280,Qt::KeepAspectRatio));
    }

    if(pecas.c.size() > 0){
        QPixmap calcado(pecas.c[0].getImg());
        ui -> labelCalcado -> setPixmap(calcado.scaled(1280,1280,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_btnNovo_clicked()
{  
    cadastro novo;
    novo.carregarVetor(roupas);
    novo.carregaIdioma(idioma);
    novo.exec();
    novo.uploadVetor(roupas);
    pecas.separa(roupas);
    novo.uploadTemp(roupa);

    int quantidade_linhas = ui->tabela->rowCount();
    inserirNaTabela(roupa,quantidade_linhas);
}

void MainWindow::on_btnEstatistica_clicked()
{
    atualizaTabela();
    ui->stackedWidget ->setCurrentIndex(2);
}

void MainWindow::on_btnMatch_clicked()
{
    match();
    ui-> stackedWidget ->setCurrentIndex(3);
}

void MainWindow::on_btnSair_clicked()
{
    QMessageBox::StandardButton txt = QMessageBox::question(this, "bye", getout[idioma]);
    if(QMessageBox::Yes == txt)
    {
        on_actionSalvar_triggered();
        close();
    }else{
        close();
    }
}

/* Fim dos botões do menu principal | Início dos botões action */

void MainWindow::on_actionSalvar_triggered()
{
    QString filename;
    filename = QFileDialog::getSaveFileName(this,"Salvar Arquivo","","*.csv");
    roupas.salvarDados(filename);
}

void MainWindow::on_actionCarregar_triggered()
{
    roupas.roupas.clear();

    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Abrir Arquivo","","*.csv");

    roupas.carregarDados(filename);
    pecas.separa(roupas);
    atualizaTabela();
}

void MainWindow::on_actionpt_BR_triggered()
{
    ui -> btnCloset -> setText("Guarda Roupa");
    ui-> btnNovo -> setText("Novo");
    ui-> btnSair -> setText("Sair");
    ui -> btnEstatistica -> setText("Estatísticas");
    ui -> btnMatch -> setText("Combine!");

    idioma = 0;
}

void MainWindow::on_actionen_US_triggered()
{
    ui -> btnCloset -> setText("Closet");
    ui-> btnNovo -> setText("New");
    ui-> btnSair -> setText("Exit");
    ui -> btnEstatistica -> setText("Statistics");
    ui -> btnMatch -> setText("Match!");

    idioma = 1;
}

void MainWindow::on_actiones_ES_triggered()
{
    ui -> btnCloset -> setText("Guarda ropa");
    ui-> btnNovo -> setText("Nuevo");
    ui-> btnSair -> setText("Dejar");
    ui -> btnEstatistica -> setText("Estadísticas");
    ui -> btnMatch -> setText("Partido!");

    idioma = 2;
}

void MainWindow::on_actionApagar_Tudo_triggered()
{
    QMessageBox::StandardButton txt = QMessageBox::question(this, "?", erase[idioma]);
    if(QMessageBox::Yes == txt)
    {
        bool i;
        QString resposta = QInputDialog::getText(this, "?", question[idioma], QLineEdit::Normal, "", &i);
        if(resposta.toInt() == 5)
        {
            roupas.roupas.clear();
            ui -> tabela -> clearContents();
            ui -> tabelaStats -> clearContents();
            pecas.t.clear();
            pecas.p.clear();
            pecas.c.clear();
            QMessageBox::critical(this, "", over[idioma]);
        }
    }
}

void MainWindow::on_actionSobre_triggered()
{
    Sobre edu;
    edu.carregaIdioma(idioma);
    edu.atualizaLabel();
    edu.exec();
    menu();
}

/* Fim dos botões action | Ínicio outros botões */

void MainWindow::on_btnTroncoRight_clicked()
{
    if(pecas.t.size()>0){
        if((troncoPage < pecas.t.size()-1)){
            troncoPage++;
        }else{
            troncoPage = 0;
        }
        QPixmap tronco(pecas.t[troncoPage].getImg());
        ui -> labelTronco -> setPixmap(tronco.scaled(1280,1280,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_btnTronco_clicked()
{
    QString estado = select();

    if (estado == "editar")
    {
        if(pecas.t.size()>0)
        {
            QMessageBox::StandardButton txt = QMessageBox::question(this, "Tronco", "Você tem certeza que deseja editar essa peça?");

            if(QMessageBox::Yes == txt)
            {
                Editar edit;
                edit.carregarVetor(roupas);
                edit.carregaIdioma(idioma);
                edit.carregaFlag(pecas.t[troncoPage].getNome());
                edit.exec();

                edit.uploadVetor(roupas);
                pecas.separa(roupas);
                atualizaTabela();
                edit.close();
             }
        }else{
            QMessageBox::critical(this, "", "Closet está vazio!");
        }
    }

    if (estado == "apagar")
    {
        if(pecas.t.size()>0)
        {
            QMessageBox::StandardButton txt = QMessageBox::question(this, "Camisa, Blusa, etc", "Você tem certeza que deseja apagar essa peça?");
            if(QMessageBox::Yes == txt)
            {
                for(int i = 0; i < roupas.roupas.size();i++)
                {
                    if(pecas.t[troncoPage].getNome() == roupas.roupas[i].getNome())
                    {
                        roupas.roupas.erase(roupas.roupas.begin()+i);
                        pecas.separa(roupas);
                        atualizaTabela();
                        troncoPage = 0;
                        if(pecas.t.size() > 0)
                        {
                            QPixmap tronco(pecas.t[troncoPage].getImg());
                            ui -> labelTronco -> setPixmap(tronco.scaled(1280,1280,Qt::KeepAspectRatio));
                        }
                    }
                }
            }

            if(pecas.t.size() == 0)
            {
                QPixmap tronco(":/img/img/t.png");
                ui -> labelTronco -> setPixmap(tronco.scaled(1280,1280,Qt::KeepAspectRatio));
            }

        }else{
            QMessageBox::critical(this, "", "Closet está vazio!");
        }
    }
}

void MainWindow::on_btnTroncoLeft_clicked()
{

    if(pecas.t.size()>0){
        if( troncoPage != 0) troncoPage--;
        QPixmap tronco(pecas.t[troncoPage].getImg());
        ui -> labelTronco -> setPixmap(tronco.scaled(1280,1280,Qt::KeepAspectRatio));
    }
}

void MainWindow::on_btnPernasRight_clicked()
{
    if(pecas.p.size()>0){
        if((pernasPage < pecas.p.size()-1)){
            pernasPage++;
        }else{
            pernasPage = 0;
        }
        QPixmap perna(pecas.p[pernasPage].getImg());
        ui -> labelPernas -> setPixmap(perna.scaled(1280,1280,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_btnPernas_clicked()
{
    QString estado = select();

    if (estado == "editar")
    {
        if(pecas.p.size()>0)
        {
            QMessageBox::StandardButton txt = QMessageBox::question(this, "Pernas", "Você tem certeza que deseja editar essa peça?");

            if(QMessageBox::Yes == txt)
            {
                QMessageBox::warning(this, "Aviso", "Prencha apenas os campos que deseja alterar!");

                Editar edit;
                edit.carregarVetor(roupas);
                edit.carregaIdioma(idioma);
                edit.carregaFlag(pecas.p[pernasPage].getNome());
                edit.exec();

                edit.uploadVetor(roupas);
                pecas.separa(roupas);
                atualizaTabela();
                edit.close();
            }

        }else{
            QMessageBox::critical(this, "", "Closet está vazio!");
        }
    }


    if (estado == "apagar")
    {
        if(pecas.p.size()>0)
        {
            QMessageBox::StandardButton txt = QMessageBox::question(this, "Calça, Jeans, etc", "Você tem certeza que deseja apagar essa peça?");
            if(QMessageBox::Yes == txt)
            {
                for(int i = 0; i < roupas.roupas.size();i++)
                {
                    if(pecas.p[pernasPage].getNome() == roupas.roupas[i].getNome())
                    {
                        roupas.roupas.erase(roupas.roupas.begin()+i);
                        pecas.separa(roupas);
                        atualizaTabela();
                        pernasPage = 0;
                        if(pecas.p.size() > 0)
                        {
                            QPixmap perna(pecas.p[pernasPage].getImg());
                            ui -> labelPernas -> setPixmap(perna.scaled(1280,1280,Qt::KeepAspectRatio));
                        }
                    }
                }
            }

            if(pecas.t.size() == 0)
            {
                QPixmap tronco(":/img/img/p.png");
                ui -> labelTronco -> setPixmap(tronco.scaled(1280,1280,Qt::KeepAspectRatio));
            }
        }else{
            QMessageBox::critical(this, "", "Closet está vazio!");
        }
    }
}

void MainWindow::on_btnPernasLeft_clicked()
{   if(pecas.p.size()>0){
        if( pernasPage != 0) pernasPage--;
        QPixmap perna(pecas.p[pernasPage].getImg());
        ui -> labelPernas -> setPixmap(perna.scaled(1280,1280,Qt::KeepAspectRatio));
    }
}


void MainWindow::on_btnCalcadoRight_clicked()
{
    if(pecas.c.size()>0){
        if((calcadoPage < pecas.c.size()-1)){
            calcadoPage++;
        }else{
            calcadoPage = 0;
        }
        QPixmap calcado(pecas.c[calcadoPage].getImg());
        ui -> labelCalcado -> setPixmap(calcado.scaled(1280,1280,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_btnCalcado_clicked()
{
    QString estado = select();

    if (estado == "editar")
    {
        if(pecas.c.size()>0)
        {
            QMessageBox::StandardButton txt = QMessageBox::question(this, "Calçado", "Você tem certeza que deseja editar essa peça?");

            if(QMessageBox::Yes == txt)
            {
                QMessageBox::warning(this, "Aviso", "Prencha apenas os campos que deseja alterar!");

                Editar edit;
                edit.carregarVetor(roupas);
                edit.carregaIdioma(idioma);
                edit.carregaFlag(pecas.c[calcadoPage].getNome());
                edit.exec();

                edit.uploadVetor(roupas);
                pecas.separa(roupas);
                atualizaTabela();
                edit.close();
            }

        }else{
            QMessageBox::critical(this, "", "Closet está vazio!");
        }
    }


    if (estado == "apagar")
    {
        if(pecas.p.size()>0)
        {

            QMessageBox::StandardButton txt = QMessageBox::question(this, "Tênis, Chinelo, etc", "Você tem certeza que deseja apagar essa peça?");
            if(QMessageBox::Yes == txt){
                for(int i = 0; i < roupas.roupas.size();i++){
                    if(pecas.c[calcadoPage].getNome() == roupas.roupas[i].getNome()){
                        roupas.roupas.erase(roupas.roupas.begin()+i);
                        pecas.separa(roupas);
                        atualizaTabela();
                        calcadoPage = 0;
                        if(pecas.c.size() > 0){
                            QPixmap calcado(pecas.c[calcadoPage].getImg());
                            ui -> labelCalcado -> setPixmap(calcado.scaled(1280,1280,Qt::KeepAspectRatio));
                        }
                    }
                }
            }

            if(pecas.t.size() == 0)
            {
                QPixmap tronco(":/img/img/c.png");
                ui -> labelTronco -> setPixmap(tronco.scaled(1280,1280,Qt::KeepAspectRatio));
            }
        }else{
            QMessageBox::critical(this, "", "Closet está vazio!");
        }
    }
}

void MainWindow::on_btnCalcadoLeft_clicked()
{
    if(pecas.c.size()>0){
        if( calcadoPage != 0) calcadoPage--;
        QPixmap calcado(pecas.c[calcadoPage].getImg());
        ui -> labelCalcado -> setPixmap(calcado.scaled(1280,1280,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_btnMatch_2_clicked()
{
    QSound::play(":/img/smb_coin.wav");
    match();
}

void MainWindow::on_btnOrdenar_activated(const QString &arg1)
{
    ui->tabela->clearContents();

    if( arg1 == "Peça"){
        roupas.ordenarPorTipo();
        atualizaTabela();
    }else if(arg1 == "Cor"){
        roupas.ordenarPorCor();
        atualizaTabela();
    }
}

/* Fim outros botões */


std::tuple<int, int, QString, int, int, int> MainWindow::calculaStats(Peca a)
{
    int t_pecas;
    int comb_poss;
    QString c_abun;
    int t_tronco = 0;
    int t_pernas = 0;
    int t_calcados = 0;

    std::map <QString, int> cores;
    t_pecas = a.roupas.size();

    for(auto i : a.roupas)
    {
        if(i.getTipo() == "Camisa" or i.getTipo() == "Camiseta" or i.getTipo() == "Blusa") t_tronco++;

        if(i.getTipo() == "Saia" or i.getTipo() == "Jeans" or i.getTipo() == "Bermuda" or i.getTipo() == "Shortinho") t_pernas++;

        if(i.getTipo() == "Tenis" or i.getTipo() == "Sapatenis" or i.getTipo() == "Chinelo") t_calcados++;

        cores[i.getCor()]++;

    }

    int maiorV = 0;

    for(auto& cor : cores)
    {
        if(cor.second > maiorV)
        {
            maiorV = cor.second;
            c_abun = cor.first;
        }
    }

    comb_poss = t_tronco*t_pernas*t_calcados;

    return std::make_tuple(t_pecas, comb_poss, c_abun, t_tronco, t_pernas, t_calcados);
}

void MainWindow::menu()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::atualizaTabela()
{
    int t_pecas = 0;
    int comb_poss = 0;
    QString c_abun = "";
    int t_tronco = 0;
    int t_pernas = 0;
    int t_calcados = 0;

    ui -> tabela -> clearContents();

    for(int i=0;i<roupas.size();i++)
    {
        ui->tabela->insertRow(i);
        inserirNaTabela(roupas[i],i);
    }

    std::tie(t_pecas, comb_poss, c_abun, t_tronco, t_pernas, t_calcados) = calculaStats(roupas);

    ui -> tabelaStats -> clearContents();

    ui->tabelaStats->setItem(-1,1, new QTableWidgetItem(QString::number(t_pecas)));
    ui->tabelaStats->setItem(0,1, new QTableWidgetItem(QString::number(comb_poss)));
    ui->tabelaStats->setItem(1,1, new QTableWidgetItem(c_abun));
    ui->tabelaStats->setItem(2,1, new QTableWidgetItem(QString::number(t_tronco)));
    ui->tabelaStats->setItem(3,1, new QTableWidgetItem(QString::number(t_pernas)));
    ui->tabelaStats->setItem(4,1, new QTableWidgetItem(QString::number(t_calcados)));
}

void MainWindow::match()
{
    int troncoRandom = 0;
    int pernasRandom = 0;
    int calcadoRandom = 0;

    if(pecas.t.size()>0)
    {
        troncoRandom = rand()%pecas.t.size();
        QPixmap tronco(pecas.t[troncoRandom].getImg());
        ui -> labelMatchT -> setPixmap(tronco.scaled(1280,1280,Qt::KeepAspectRatio));
    }

    if(pecas.p.size()>0)
    {
        pernasRandom = rand()%pecas.p.size();
        QPixmap pernas(pecas.p[pernasRandom].getImg());
        ui -> labelMatchP -> setPixmap(pernas.scaled(1280,1280,Qt::KeepAspectRatio));
    }

    if(pecas.c.size()>0)
    {
        calcadoRandom = rand()%pecas.c.size();
        QPixmap calcado(pecas.c[calcadoRandom].getImg());
        ui -> labelMatchC -> setPixmap(calcado.scaled(1280,1280,Qt::KeepAspectRatio));
    }
}

QString MainWindow::select()
{
    QString r;

    QMessageBox messageBox(this);
    messageBox.setText("O que você desejar fazer com essa peça?");
    //messageBox.setInformativeText("O que você desejar fazer com essa peça?");
    QAbstractButton *editar = messageBox.addButton(tr("Editar"), QMessageBox::ActionRole);
    QAbstractButton *apagar = messageBox.addButton(tr("Apagar"), QMessageBox::ActionRole);
    QAbstractButton *sair = messageBox.addButton(tr("Cancelar"), QMessageBox::ActionRole);

    messageBox.exec();

    if (messageBox.clickedButton() == editar) r = "editar";
    if (messageBox.clickedButton() == apagar) r = "apagar";
    if (messageBox.clickedButton() == sair) r = "sair";

    return r;
}


void MainWindow::on_actionHome_triggered()
{
    menu();
}

void MainWindow::on_actionCloset_triggered()
{
    on_btnCloset_clicked();
}

void MainWindow::on_actionNovo_triggered()
{
    on_btnNovo_clicked();
}

void MainWindow::on_actionEstatisticas_triggered()
{
    on_btnEstatistica_clicked();
}

void MainWindow::on_actionCombine_triggered()
{
    on_btnMatch_clicked();
}

void MainWindow::on_actionSair_triggered()
{
    on_btnSair_clicked();
}
