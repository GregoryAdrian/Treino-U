#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

 setlocale(LC_ALL,"");

 int ladoA, ladoB, ladoC;
 printf("Digite 3 valores:\n");
 scanf("%d %d %d", &ladoA, &ladoB, ladoC);

 //analisando se é equilatero
 if ( (ladoA == ladoB) && (ladoB == ladoC) ) {
    printf("\nO triângulo é equilátero");
 } else {
     printf("\nTriàngulo não é equilátero");
 }

       //analisando se existe pelo menos 2 lados iguais
     if( (ladoA == ladoB ) || (ladoB == ladoC) || (ladoA == ladoC)){
        printf("\n triângulo é isóceles");
     } else {
        printf("\nO triâgulo é escaleno");
     }

system("pause");
}
