#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"");

 int opcao;

 while (opcao < 1 || opcao > 3) {

 printf("Escolha uma opcao:");
  printf("\nOp��o 1");
  printf("\nOp��o 2");
  printf("\nOp��o 3");

  scanf("%d", &opcao);

  switch (opcao) {
   case 1:
       printf("\nOpca��o 1 foi escolhida");
       break;

  case 2:
       printf("\nOp��o 2 foi escolhida");
       break;

  case 3:
       printf("\nOp��o 3 foi escolhida");
       break;

  default:
      printf("\nOp��o invalida");
      break;
 }


 }

 printf("Escolha uma opcao:");
  printf("\nOp��o 1");
  printf("\nOp��o 2");
  printf("\nOp��o 3");

  scanf("%d", &opcao);

  switch (opcao) {
   case 1:
       printf("\nOpca��o 1 foi escolhida");
       break;

  case 2:
       printf("\nOp��o 2 foi escolhida");
       break;

  case 3:
       printf("\nOp��o 3 foi escolhida");
       break;

  default:
      printf("\nOp��o invalida");
      break;





}



system("pause");
}
