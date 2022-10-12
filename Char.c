#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {

setlocale(LC_ALL,"");

char letra = 'x';

if(letra == 'x') {
    printf("\n A letra é x");

}

printf("\nCódigo da letra = a %d", letra);

if (letra == 120) {
    printf("\nA letra é x");
}

system("pause");

}
