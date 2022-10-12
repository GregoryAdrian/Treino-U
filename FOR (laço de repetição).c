#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"");

int cont;

for(cont = 1; cont <= 10; cont++){
  printf("\n 5 X %d = %d",cont, 5 * cont);
}

// 2 em 2
 for (cont = 0; cont <= 10; cont = cont + 2){
    printf("\n%d", cont);
 }

 for (cont = 10; cont >= 0; cont--) {
    printf("\n%d",cont);u
 }

system("pause");

}
