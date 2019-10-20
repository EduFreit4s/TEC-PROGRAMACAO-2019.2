#include <iostream>
#include "fisica.h"

Fisica fisica_temp;


using namespace std;

bool Fisica::setCpf(string c){
    if(c.size() == 11){
        cpf = c;
        return 1;
    }else{
        cout << endl << "CPF invalido! Formato: 123.456.789-01. Tente novamente: ";
        cpf = "12345678901";
        return 0;
    }
}

bool Fisica::setRg(string r){
    if(r.size() == 7){
        rg = r;
        return 1;
    }else{
        cout << endl << "RG invalido! Formato: 1234567. Tente novamente: ";
        rg = "1234567";
        return 0;
    }
}

bool Fisica::setNascimento(int d, int m, int a){
    
    bool teste = true;

    if(d >= 1 and d <= 31){
        dia = d;
    }else{
        dia = 00;
        cout << endl << "Dia incorreto! Digite um dia no intervalo 1 a 31. Tente novamente: ";
        teste = false;
    }

    if(m >= 1 and m <= 12){
        mes = m;
    }else{
        mes = 00;
        cout << endl << "Mes incorreto! Digite um mes no intevalo 1 a 12. Tente novamente: ";
        teste = false;
    }

    if(a >= 1900 and a <= 2100){
        ano = a;
    }else{
        ano = 0000;
        cout << endl << "Ano incorreto! Experimente um ano > 1900 e < 2100. Tente novamente: ";
        teste = false;
    }

    return teste;
}

string Fisica::getCpf(){
    return cpf;
}

string Fisica::getRg(){
    return rg;
}

string Fisica::getNascimento(){
    
    string data;

    data += to_string(dia);
    data += " / ";
    data += to_string(mes);
    data += " / ";
    data += to_string(ano);

    return data; 
}

void coleta_fisica(){

    string temp;
    int temp_d, temp_m, temp_a;

    cout << "Digite o nome: ";
    do{
        getline(cin, temp);
    }while(!fisica_temp.setNome(temp));

    cout << "Digite o codigo: ";
    do{
        getline(cin, temp);
    }while(!fisica_temp.setCodigo(temp));

    cout << "Digite o telefone (apenas numeros): ";
    do{
        getline(cin, temp);
    }while(!fisica_temp.setTelefone(temp));

    cout << "Digite o cep (apenas numeros): ";
    do{
        getline(cin, temp);
    }while(!fisica_temp.setCep(temp));
        
    cout << "Digite o CPF (apenas numeros): ";
    do{
        getline(cin, temp);
    }while(!fisica_temp.setCpf(temp));

    cout << "Digite o RG (apenas numeros): ";
    do{
        getline(cin, temp);
    }while(!fisica_temp.setRg(temp));

    cout << "Digite a data de nascimento" << endl << endl;
    do{
        cout <<"Dia: ";
        cin >> temp_d;
        cin.ignore();
        cout <<"Mes: ";
        cin >> temp_m;
        cin.ignore();
        cout << "Ano: ";
        cin >> temp_a;

    }while(!fisica_temp.setNascimento(temp_d, temp_m, temp_a));

    ofstream fisica;
    fisica.open("pessoa_fisica.txt", ios::app);

    fisica << "Nome: " << fisica_temp.getNome() << endl;
    fisica << "Codigo: " << fisica_temp.getCodigo() << endl;
    fisica << "Telefone: " << fisica_temp.getTelefone() << endl;
    fisica << "Cep: " << fisica_temp.getCep() << endl << endl;

    fisica << "CPF: " << fisica_temp.getCpf() << endl;
    fisica << "RG: " << fisica_temp.getRg() << endl;
    fisica << "Data de nascimento: " << fisica_temp.getNascimento() << endl;
    fisica << "_________________________________________________" << endl << endl;

    fisica.close();
    system("cls");
    cin.ignore();

}