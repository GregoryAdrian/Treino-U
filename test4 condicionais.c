#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 void main () {

   setlocale(LC_ALL, "");

     int a = 15,opcao =15;
     float b = 3.6;
     char c = 'x';

  if (a == 15) {
     printf("A variavel a = 15");
  }

  if ( b == 3,6) {
     printf("\nA variavel b = 3,6");
  }

  if (c == 'x') {
     printf("\nA variavel c = letra x ");
  }

  // numero par ou impar
  if(a % 47 == 15) {
    printf("\nA variavel a é impar ");
  } else {
    printf("\nA variavel a é par ");
  }

   // condicional composta
if (opcao == 1) {
    printf("\nA opcao = 1");
   } else if(opcao == 2) {
    printf("\n A opcao = 2 ");
   } else {
    printf("\nA opcao não é igual a 1 e nem 2");
   }
 system ("pause");

}

