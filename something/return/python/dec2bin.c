#include <stdio.h>
#include <stdlib.h>
  
// Função Main
int main() {
 int n; // Número de entrada
 int r; // Resultado do deslocamento
 int i; // Contador
  
 // Lê o número
 printf("Digite um numero: ");
 scanf("%d", &n);
 printf("Desconsidere os digitos a esquerda!\n\n");
  
 // Utiliza um número de 32 bits como base para a conversão.
 for(i = 31; i >= 0; i--) {
    // Executa a operação shift right até a 
    // última posição da direita para cada bit.
    r = n >> i; 
    // Por meio do "e" lógico ele compara se o valor 
    // na posição mais à direita é 1 ou 0 
    // e imprime na tela até reproduzir o número binário.
    if(r & 1) {
     printf("1");
    } else {
      printf("0");
    }
 }
  
 printf("\n");
  
return 0;
