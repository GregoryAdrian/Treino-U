#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

   setlocale(LC_ALL,"");
    //lendo 3 valores de uma vez
   int num1, num2 , num3, resultado;

   //lendo os 3 valores de uma vez
   printf("Digite três valores inteiros:\n");
   scanf("%d%d%d", &num1, &num2, &num3);

   resultado = num1 * num2 * num3;
   printf("o valor final da multiplicação é = %d", resultado);











}
