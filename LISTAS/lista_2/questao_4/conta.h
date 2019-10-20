#include <iostream>

using namespace std;


class Conta{

  public:
    
    Conta(); // <- CONSTRUTOR

    void fazerDeposito();
    void fazerSaque();
    void setSaque(float saq);
    void setDeposito(float dep);
    void setSaldo(float s);

    float mostraSaldo();

  protected:

  float saldo;

};