#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "arquivo.h"

#include "closet.h"
#include "peca.h"

#include <QSound>

#include <QString>
#include "tempo.h"
#include <QMessageBox>
#include <stdlib.h>
#include <QFileDialog>
#include <QPixmap>

#include <QVector>
#include <QFile>
#include <QInputDialog>

#include <QMainWindow>
#include <fstream>
#include <tuple>
#include <map>

#include <QDebug>
#include "cadastro.h"

#include "sobre.h"
#include "separapeca.h"
#include "editar.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    /* Botões do Menu */
    void on_btnCloset_clicked();
    void on_btnNovo_clicked();
    void on_btnEstatistica_clicked();
    void on_btnMatch_clicked();
    void on_btnSair_clicked();

    /* Botões Opções */
    void on_actionSalvar_triggered();
    void on_actionCarregar_triggered();
    void on_actionpt_BR_triggered();
    void on_actionen_US_triggered();
    void on_actiones_ES_triggered();
    void on_actionApagar_Tudo_triggered();
    void on_actionSobre_triggered();


    /* Botões aba Closet */
    void on_btnTroncoRight_clicked();
    void on_btnTronco_clicked();
    void on_btnTroncoLeft_clicked();

    void on_btnPernasRight_clicked();
    void on_btnPernas_clicked();
    void on_btnPernasLeft_clicked();

    void on_btnCalcadoRight_clicked();
    void on_btnCalcado_clicked();
    void on_btnCalcadoLeft_clicked();

    /* Botões aba Match */
    void on_btnMatch_2_clicked();

    /* Botões aba Stat */
    void on_btnOrdenar_activated(const QString &arg1);

    void menu();
    void atualizaTabela();

    QString select();


    void on_actionHome_triggered();

    void on_actionCloset_triggered();

    void on_actionNovo_triggered();

    void on_actionEstatisticas_triggered();

    void on_actionCombine_triggered();

    void on_actionSair_triggered();

private:

    Ui::MainWindow *ui;
    Peca roupas;
    Closet roupa;
    separaPeca pecas;

    void inserirNaTabela(Closet a, int linha);
    std::tuple <int, int, QString, int, int, int> calculaStats(Peca a);
    void match();

    cadastro *novo;
    Sobre *edu;
    Editar *edit;

    int idioma = 0;

    int troncoPage = 0;
    int pernasPage = 0;
    int calcadoPage = 0;
};
#endif // MAINWINDOW_H
