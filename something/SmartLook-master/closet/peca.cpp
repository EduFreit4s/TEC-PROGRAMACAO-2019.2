#include "peca.h"

Peca::Peca(){}

void Peca::inserirRoupa(Closet a){
    roupas.push_back(a);
}

void Peca::ordenarPorNome()
{
    std::sort(roupas.begin(),roupas.end(),[](Closet a, Closet b)
    {
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
bool Peca::salvarDados(QString file)
{
    bool ok;
    QFile arquivo(file);

    arquivo.open(QIODevice::WriteOnly);

    if(arquivo.isOpen())
    {
        for(auto a : roupas)
        {
            QString linha = a.getNome() + "," + a.getCor() + "," + a.getTipo() + "," + a.getTamanho()+ "," + a.getImg()+ "," + "\n";
            arquivo.write(linha.toLocal8Bit());
        }

        ok = true;
        arquivo.close();

    }else{
        ok = false;
    }

    return ok;
}

void Peca::ordenarPorTipo()
{
    std::sort(roupas.begin(),roupas.end(),[](Closet a, Closet b)
    {
        return a.getTipo()<b.getTipo();
    });
}

void Peca::ordenarPorCor()
{
    std::sort(roupas.begin(),roupas.end(),[](Closet a, Closet b)
    {
        return a.getCor()<b.getCor();
    });
}

void Peca::ordenarPorTamanho()
{
    std::sort(roupas.begin(),roupas.end(),[](Closet a, Closet b)
    {
        return a.getTamanho()<b.getTamanho();
    });
}

bool Peca::carregarDados(QString file)
{
    bool ok;
    QFile arquivo(file);
    arquivo.open(QIODevice::ReadOnly);

    if(arquivo.isOpen())
    {

        QString linha;
        QStringList dados;
        while(!arquivo.atEnd())
        {
            Closet temp;
            linha = arquivo.readLine();
            dados = linha.split(",");
            temp.setNome(dados[0]);
            temp.setCor(dados[1]);
            temp.setTipo(dados[2]);
            temp.setTamanho(dados[3]);
            temp.setImg(dados[4]);
            inserirRoupa(temp);
        }
        arquivo.close();
        ok = true;
    }else{
        ok = false;
    }

    return ok;
}
