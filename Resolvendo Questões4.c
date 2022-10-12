#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 void main () {

 setlocale(LC_ALL,"");

 float valor1, valor2;
 int opcao;

 printf("Digite o valor 1:");
 scanf("%f", &valor1);

 printf("\nDigite o valor 2:");
 scanf("%f", &valor2);

 printf("\n Selecione umas das opções seguinte:");
 printf("\n 1- Somar");
 printf("\n 2- Subtrair");
 printf("\n 3- Dividir");
 printf("\n 4- Multiplicar");
 scanf("%d", &opcao);

 switch (opcao) {
   case 1:
       printf("Resultado da soma: %f", valor1 + valor2);
       break;

   case 2:
       printf("Resultado da subtração: %f", valor1 - valor2);
       break;

   case 3:
       printf("Resultado da divisão: %f", valor1 / valor2);
       break;

   case 4:
       printf("Resultado da multiplicação: %f", valor1 * valor2);
       break;

   default:
    printf("Opção inválida");
    break;



 }

 }


