#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"");

 int opcao;

 while (opcao < 1 || opcao > 3) {

 printf("Escolha uma opcao:");
  printf("\nOpção 1");
  printf("\nOpção 2");
  printf("\nOpção 3");

  scanf("%d", &opcao);

  switch (opcao) {
   case 1:
       printf("\nOpcação 1 foi escolhida");
       break;

  case 2:
       printf("\nOpção 2 foi escolhida");
       break;

  case 3:
       printf("\nOpção 3 foi escolhida");
       break;

  default:
      printf("\nOpção invalida");
      break;
 }


 }

 printf("Escolha uma opcao:");
  printf("\nOpção 1");
  printf("\nOpção 2");
  printf("\nOpção 3");

  scanf("%d", &opcao);

  switch (opcao) {
   case 1:
       printf("\nOpcação 1 foi escolhida");
       break;

  case 2:
       printf("\nOpção 2 foi escolhida");
       break;

  case 3:
       printf("\nOpção 3 foi escolhida");
       break;

  default:
      printf("\nOpção invalida");
      break;





}



system("pause");
}
