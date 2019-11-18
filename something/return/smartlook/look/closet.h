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



        void setNome(const QString &value);

        void setCor(const QString &value);

        void setTipo(const QString &value);

        void setTamanho(const QString &value);

protected:

        QString nome;
        QString cor;
        QString tipo;
        QString tamanho;
};






#endif
