/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdicionar;
    QAction *actionSalvar;
    QAction *actionCarregar;
    QWidget *centralwidget;
    QTabWidget *telas;
    QWidget *tab;
    QLabel *teste;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *inputNome;
    QLabel *label_2;
    QComboBox *inputTipo;
    QLabel *label_3;
    QComboBox *inputCor;
    QLabel *label_4;
    QLineEdit *inputTamanho;
    QPushButton *btnCadastro;
    QTableWidget *tabela;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *btnOrdenar;
    QWidget *tab_5;
    QWidget *tab_4;
    QWidget *tab_3;
    QMenuBar *menubar;
    QMenu *menuSobre;
    QMenu *menuTeste;
    QMenu *menuArquivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(475, 456);
        actionAdicionar = new QAction(MainWindow);
        actionAdicionar->setObjectName(QString::fromUtf8("actionAdicionar"));
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionCarregar = new QAction(MainWindow);
        actionCarregar->setObjectName(QString::fromUtf8("actionCarregar"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        telas = new QTabWidget(centralwidget);
        telas->setObjectName(QString::fromUtf8("telas"));
        telas->setGeometry(QRect(0, 0, 461, 451));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        teste = new QLabel(tab);
        teste->setObjectName(QString::fromUtf8("teste"));
        teste->setGeometry(QRect(170, 100, 121, 51));
        telas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 411, 351));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        inputNome = new QLineEdit(layoutWidget);
        inputNome->setObjectName(QString::fromUtf8("inputNome"));

        verticalLayout->addWidget(inputNome);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        inputTipo = new QComboBox(layoutWidget);
        inputTipo->addItem(QString());
        inputTipo->addItem(QString());
        inputTipo->addItem(QString());
        inputTipo->addItem(QString());
        inputTipo->addItem(QString());
        inputTipo->setObjectName(QString::fromUtf8("inputTipo"));

        verticalLayout->addWidget(inputTipo);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        inputCor = new QComboBox(layoutWidget);
        inputCor->addItem(QString());
        inputCor->addItem(QString());
        inputCor->addItem(QString());
        inputCor->addItem(QString());
        inputCor->setObjectName(QString::fromUtf8("inputCor"));

        verticalLayout->addWidget(inputCor);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        inputTamanho = new QLineEdit(layoutWidget);
        inputTamanho->setObjectName(QString::fromUtf8("inputTamanho"));

        verticalLayout->addWidget(inputTamanho);

        btnCadastro = new QPushButton(layoutWidget);
        btnCadastro->setObjectName(QString::fromUtf8("btnCadastro"));

        verticalLayout->addWidget(btnCadastro);

        tabela = new QTableWidget(layoutWidget);
        if (tabela->columnCount() < 4)
            tabela->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tabela->setObjectName(QString::fromUtf8("tabela"));

        verticalLayout->addWidget(tabela);

        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(13, 370, 181, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        btnOrdenar = new QComboBox(layoutWidget1);
        btnOrdenar->addItem(QString());
        btnOrdenar->addItem(QString());
        btnOrdenar->addItem(QString());
        btnOrdenar->addItem(QString());
        btnOrdenar->addItem(QString());
        btnOrdenar->setObjectName(QString::fromUtf8("btnOrdenar"));

        horizontalLayout->addWidget(btnOrdenar);

        telas->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        telas->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        telas->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        telas->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 475, 21));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        menuTeste = new QMenu(menubar);
        menuTeste->setObjectName(QString::fromUtf8("menuTeste"));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSobre->menuAction());
        menubar->addAction(menuTeste->menuAction());
        menubar->addAction(menuArquivo->menuAction());
        menuTeste->addAction(actionAdicionar);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionCarregar);

        retranslateUi(MainWindow);

        telas->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdicionar->setText(QApplication::translate("MainWindow", "Adicionar", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSalvar->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionCarregar->setText(QApplication::translate("MainWindow", "Carregar", nullptr));
        teste->setText(QString());
        telas->setTabText(telas->indexOf(tab), QApplication::translate("MainWindow", "Closet", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nome: ", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Tipo de pe\303\247a: ", nullptr));
        inputTipo->setItemText(0, QApplication::translate("MainWindow", "Camisa", nullptr));
        inputTipo->setItemText(1, QApplication::translate("MainWindow", "Cal\303\247a", nullptr));
        inputTipo->setItemText(2, QApplication::translate("MainWindow", "Cal\303\247ado", nullptr));
        inputTipo->setItemText(3, QApplication::translate("MainWindow", "Bermuda", nullptr));
        inputTipo->setItemText(4, QApplication::translate("MainWindow", "Shortinho", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "Cor: ", nullptr));
        inputCor->setItemText(0, QApplication::translate("MainWindow", "Preto", nullptr));
        inputCor->setItemText(1, QApplication::translate("MainWindow", "Azul", nullptr));
        inputCor->setItemText(2, QApplication::translate("MainWindow", "Branco", nullptr));
        inputCor->setItemText(3, QApplication::translate("MainWindow", "Vermelho", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "Tamanho: ", nullptr));
        btnCadastro->setText(QApplication::translate("MainWindow", "Cadastrar nova pe\303\247a", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Tipo", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Cor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabela->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Tamanho", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Ordenar por:", nullptr));
        btnOrdenar->setItemText(0, QString());
        btnOrdenar->setItemText(1, QApplication::translate("MainWindow", "Nome", nullptr));
        btnOrdenar->setItemText(2, QApplication::translate("MainWindow", "Tipo", nullptr));
        btnOrdenar->setItemText(3, QApplication::translate("MainWindow", "Cor", nullptr));
        btnOrdenar->setItemText(4, QApplication::translate("MainWindow", "Tamanho", nullptr));

        telas->setTabText(telas->indexOf(tab_2), QApplication::translate("MainWindow", "Novo", nullptr));
        telas->setTabText(telas->indexOf(tab_5), QApplication::translate("MainWindow", "Match", nullptr));
        telas->setTabText(telas->indexOf(tab_4), QApplication::translate("MainWindow", "Historico", nullptr));
        telas->setTabText(telas->indexOf(tab_3), QApplication::translate("MainWindow", "Estatisticas", nullptr));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Sobre", nullptr));
        menuTeste->setTitle(QApplication::translate("MainWindow", "Teste", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
