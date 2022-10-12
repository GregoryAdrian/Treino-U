#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {

  setlocale(LC_ALL,"");

  float nota1, nota2 , nota3, media;

  printf("Averiguando notas:\n");
  scanf("%f %f ;%f", &nota1, &nota2 , &nota3);

   printf("A media para ser aprovado é 7");

  media = (nota1+nota2+nota3)/3;
   printf("\nMedia do aluno %f", media);

   if( media > 7){
    printf("\nAluno aprovado!");
 } else {
    printf("\nAluno reprovado");
 }

}
