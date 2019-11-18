 #include "closet.h"

Closet::Closet(){

}
 


QString Closet::getNome() const
{
    return nome;
}

QString Closet::getCor() const
{
    return cor;
}

QString Closet::getTipo() const
{
    return tipo;
}

QString Closet::getTamanho() const
{
    return tamanho;
}



void Closet::setNome(const QString &value)
{
    nome = value;
}

void Closet::setCor(const QString &value)
{
    cor = value;
}

void Closet::setTipo(const QString &value)
{
    tipo = value;
}

void Closet::setTamanho(const QString &value)
{
    tamanho = value;
}

