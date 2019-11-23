#include "peca.h"


Peca::Peca(){}

void Peca::inserirRoupa(Closet a){
    roupas.push_back(a);
}

void Peca::ordenarPorNome()
{
    std::sort(roupas.begin(),roupas.end(),[](Closet a, Closet b){
        return a.getNome()<b.getNome();
    });
}

int Peca::size()
{
    return roupas.size();
}

Closet Peca::operator[](int indice)
{
    return roupas[indice];
}


void Peca::salvarDados(QString file)
{
    QFile arquivo(file);

    arquivo.open(QIODevice::WriteOnly);

    for(auto a : roupas){
        QString linha = a.getNome() + ";" + a.getCor() + ";" + a.getTipo() + ";" + a.getTamanho()+"\n";
        arquivo.write(linha.toLocal8Bit());
    }
    arquivo.close();
}





void Peca::ordenarPorTipo()
{
    std::sort(roupas.begin(),roupas.end(),[](Closet a, Closet b){
        return a.getTipo()<b.getTipo();
    });
}

void Peca::ordenarPorCor()
{
    std::sort(roupas.begin(),roupas.end(),[](Closet a, Closet b){
        return a.getCor()<b.getCor();
    });
}

void Peca::ordenarPorTamanho()
{
    std::sort(roupas.begin(),roupas.end(),[](Closet a, Closet b){
        return a.getTamanho()<b.getTamanho();
    });
}




void Peca::carregarDados(QString file)
{
    QFile arquivo(file);
    arquivo.open(QIODevice::ReadOnly);

    QString linha;
    QStringList dados;
    while(!arquivo.atEnd()){
        Closet temp;
        linha = arquivo.readLine();
        dados = linha.split(";");
        temp.setNome(dados[0]);
        temp.setCor(dados[1]);
        temp.setTipo(dados[2]);
        temp.setTamanho(dados[3]);
        inserirRoupa(temp);
    }
    arquivo.close();
}




