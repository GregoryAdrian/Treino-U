#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

 setlocale(LC_ALL,"");

 int ladoA, ladoB, ladoC;
 printf("Digite 3 valores:\n");
 scanf("%d %d %d", &ladoA, &ladoB, ladoC);

 //analisando se � equilatero
 if ( (ladoA == ladoB) && (ladoB == ladoC) ) {
    printf("\nO tri�ngulo � equil�tero");
 } else {
     printf("\nTri�ngulo n�o � equil�tero");
 }

       //analisando se existe pelo menos 2 lados iguais
     if( (ladoA == ladoB ) || (ladoB == ladoC) || (ladoA == ladoC)){
        printf("\n tri�ngulo � is�celes");
     } else {
        printf("\nO tri�gulo � escaleno");
     }

system("pause");
}
