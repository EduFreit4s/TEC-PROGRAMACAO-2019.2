#include "juridica.h"

Juridica juridica_temp;

bool Juridica::setCnpj(string c){
    if(c.size() == 14){
        cnpj = c;
        return 1;
    }else{
        cout << endl << "CNPJ invalido! Formato: 12.345.678/9123-45. Tente novamente: ";
        cnpj = "12345678901234";
        return 0;
    }
}

bool Juridica::setInscricao_estadual(string r){
    if(r.size() == 10){
        inscricao_estadual = r;
        return 1;
    }else{
        cout << endl << "Inscricao estadual invalida! Formato: 123.456.789-0. Tente novamente: ";
        inscricao_estadual = "1234567890";
        return 0;
    }
}

bool Juridica::setNome_fantasia(string n){
    
    if(n.size() >= 10){
        nome_fantasia = n;
        return 1;
    }else{
        nome_fantasia = "nome_fantasia";
        cout << endl << "Nome invalido! O nome precisa de 10 letras ou mais. Tente novamente: ";
        return 0;
    }
}

string Juridica::getCnpj(){
    return cnpj;
}

string Juridica::getInscricao_estadual(){
    return inscricao_estadual;
}

string Juridica::getNome_fantasia(){
    return nome_fantasia;
}

void coleta_juridica(){

    string temp;

    cout << "Digite o nome: ";
    do{
        getline(cin, temp);
    }while(!juridica_temp.setNome(temp));

    cout << "Digite o codigo: ";
    do{
        getline(cin, temp);
    }while(!juridica_temp.setCodigo(temp));

    cout << "Digite o telefone (apenas numeros): ";
    do{
        getline(cin, temp);
    }while(!juridica_temp.setTelefone(temp));

    cout << "Digite o cep: ";
    do{
        getline(cin, temp);
    }while(!juridica_temp.setCep(temp));

    cout << "Digite o CNPJ (apenas numeros): ";
    do{
        getline(cin, temp);
    }while(!juridica_temp.setCnpj(temp));

    cout << "Digite a Inscricao estadual (apenas nuemros): ";
    do{
        getline(cin, temp);
    }while(!juridica_temp.setInscricao_estadual(temp));

    cout << "Digite o nome fantasia: ";
    do{
        getline(cin, temp);
    }while(!juridica_temp.setNome_fantasia(temp));



    ofstream juridica;
    juridica.open("pessoa_juridica.txt", ios::app);

    juridica << "Nome: " << juridica_temp.getNome() << endl;
    juridica << "Codigo: " << juridica_temp.getCodigo() << endl;
    juridica << "Telefone: " << juridica_temp.getTelefone() << endl;
    juridica << "Cep: " << juridica_temp.getCep() << endl << endl;

    juridica << "CNPJ: " << juridica_temp.getCnpj() << endl;
    juridica << "Inscricao estadual: " << juridica_temp.getInscricao_estadual() << endl;
    juridica << "Nome fantasia: " << juridica_temp.getNome_fantasia() << endl;
    juridica << "_________________________________________________" << endl << endl;

    juridica.close();
    system("cls");
}