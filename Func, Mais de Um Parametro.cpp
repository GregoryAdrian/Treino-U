#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostraSoma(int primeiroValor, int segundoValor){
     printf("\nA soma entre %d e %d � %d", primeiroValor, segundoValor, primeiroValor + segundoValor);

}
int retornaSoma(int primeiroValor, int segundoValor){
  return primeiroValor + segundoValor;

}


 int main(){

 setlocale(LC_ALL,"");

  int a = 5, b = 7;

  //fu��o que mostra a soma
  mostraSoma(a,b+34);


  //Exibe o resultado da soma retonado pela fun��o
  printf("\nA soma entre %d e %d � %d", a, b, retornaSoma(a,b));

return 0;
system("Pause");
 }
