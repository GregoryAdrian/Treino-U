#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"");


 int a = 1, b = 10;

  while (a <= 10) {
    printf("\n%d", a);

          //incremento
    a++; // a++ = a = a + 1;
}

a = 1;

   // testando "do"
    do{

    printf("\n%d", a);

     a++;

    } while (a <= 10);


    while (b >= 0) {
      printf("\n%d", b);

      b--;
    }


}
