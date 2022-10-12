#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

  setlocale(LC_ALL, "");

  int a = 5, b = 12, c = 85;
  char d = 'G';

   //maior
   if (a > 2) {
    printf(" %d é maior que 2", a);
    }

    //maior ou igual
    if (b >= c) {
        printf("\n %d é maior ou igual %d + 30", b, c);
    } else (b <= c);
        printf("\n %d é menor ou igual %d", b, c);


        //diferente
         if (c != 10) {
            printf("\n %d não é 10", c);
        }

        if (d != 'L') {
            printf("\n %c não é L", d);

        }



}

