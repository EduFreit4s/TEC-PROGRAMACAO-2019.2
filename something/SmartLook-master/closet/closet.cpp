 #include "closet.h"

Closet::Closet(){}
 
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

bool Closet::setNome(const QString &value)
{
    if(value.size() >= 3)
    {
        nome = value;
        return 1;
    }else{
        return 0;
    }
}

bool Closet::setCor(const QString &value)
{
    if(value.size() >= 3)
    {
        cor = value;
        return 1;
    }else{
        return 0;
    }
}

bool Closet::setTipo(const QString &value)
{
    if(value.size() >= 3)
    {
        tipo = value;
        return 1;
    }else{
        return 0;
    }
}

bool Closet::setTamanho(const QString &value)
{
    if(value.size() >= 0)
    {
        tamanho = value;
        return 1;
    }else{
        return 0;
    }
}

QString Closet::getImg() const
{
    return img;
}

bool Closet::setImg(const QString &value)
{
    if(value != "")
    {
        img = value;
        return 1;
    }else{
        return 0;
    }
}
