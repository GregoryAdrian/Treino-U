#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void main () {

setlocale(LC_ALL,"");

printf("%d", TAM);

 int i = 1;

for(i = 1 ; i <= TAM; i++){
    printf("\n%d", i);
}

system("pause");
}
