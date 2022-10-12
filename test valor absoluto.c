#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

  setlocale(LC_ALL, "");
    //lendo 2 notas e mostrando o valor absoluto
  int nota1, nota2, resultado, abs();

  printf("Digite o valor da nota1:");
  scanf("%d", &nota1);

  printf("Digite o valor da nota2");
  scanf("%d", &nota2);

  resultado = (nota1 - nota2);
  printf("O valor absoluto de: %d", abs(resultado));
  }
