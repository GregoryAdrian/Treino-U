#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"");

int i = 10;

 while (i >= 0){

    printf("\n%d",i);
    i--;
}


for(i = 10; i >= 0; i--){
    printf("\n%d", i);
}

 i = 20; // test

 do {

printf("\n%d", i);
    i--;
} while (i >= 0);

 system("pause");
}
