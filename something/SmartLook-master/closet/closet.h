#ifndef CLOSET_H
#define CLOSET_H

#include <QString>

class Closet{

    public:
        
        Closet();

        QString getNome() const;
        QString getCor() const;
        QString getTipo() const;
        QString getTamanho() const;

        QString getImg() const;

        bool setNome(const QString &value);
        bool setCor(const QString &value);
        bool setTipo(const QString &value);
        bool setTamanho(const QString &value);
        bool setImg(const QString &value);

protected:

        QString nome;
        QString cor;
        QString tipo;
        QString tamanho;
        QString img;
};

#endif
