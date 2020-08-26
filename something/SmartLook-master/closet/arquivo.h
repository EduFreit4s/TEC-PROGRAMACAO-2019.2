#ifndef ARQUIVO_H
#define ARQUIVO_H
#include <stdlib.h>
#include <time.h>
#include <QString>
#include "peca.h"
#include "closet.h"

#define RANGE 1000000000

QString random();

const QString question[3] = {
    "Quanto é π+e?",
    "How much is π+e?",
    "¿Cuánto cuesta π+e?"
};

const QString erase[3] = {
    "Você está prestes a deletar seu guarda roupa da galaxia. \nEstá ciente e deseja continuar?" ,
    "You are about to delete your closet from the galaxy. \nAre you aware and wish to continue?" ,
    "Estás a punto de eliminar tu guardarropa de la galaxia. \n¿Eres consciente y deseas continuar?"
};

const QString over[3] = {
    "Não é tempo de chorar! Agora não é tempo algum!",
    "Now is no time to mourn. Now, is no time at all!",
    "¡No es momento de llorar! ¡Ahora no es el momento!"
};

const QString about[3] = {
    "Oi, eu sou Eduardo Freitas! Um estudante de engenharia elétrica apaixonado por buracos negros, jogos e tecnologia",
    "Hi, I'm Eduardo Freitas! An electrical engineering student in love with black holes, games and technology",
    "¡Hola, soy Eduardo Freitas! Un estudiante de ingeniería eléctrica enamorado de los agujeros negros, los juegos y la tecnología"
};

const QString mainTutorial[1] = {
    "Bem vindo ao smartlook! Seu guarda roupa digital. \n"
    "Aqui você cadastrar novas peças, visualizar suas roupas e muitos... \n "
    ""
};

const QString novo[3] = {
    "Informações cadastradas com sucesso!",
    "Information successfully registered!",
    "Información registrada con éxito!"
};

const QString novoErro[3] = {
    "Preencha todos campos do formulário!",
    "Fill in all fields of the form!",
    "Rellene todos los campos del formulario!"
};

const QString getout[3]{
    "Deseja salvar antes de sair?",
    "Do you want to save before leaving?",
    "¿Quieres ahorrar antes de salir?"
};

#endif // ARQUIVO_H
