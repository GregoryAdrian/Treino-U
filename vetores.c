#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

void main (){

 setlocale(LC_ALL,"");


 int vetor[TAM], cont;

 //passando valors para o vetor
 vetor[0] = 5;
 vetor[1] = 10;
 vetor[2] = 15;

//adicionando 1 para cada posi��o
 for(cont = 0; cont < TAM; cont++){
    vetor[cont] = vetor [cont] + 1;
 }

 //exibir valores dos vetores
printf("\nPosi��o 0: %d", vetor[0] );
printf("\nPosi��o 1: %d", vetor[1] );
printf("\nPosi��o 2: %d", vetor[2] );

// imprimindo vetores em um la�o de repeti��o
  for (cont = 0; cont < 3; cont++){
        printf("\nPosi��o %d : %d", cont, vetor[cont] );

}

//Lendo 3 valores para o vetor
  for(cont = 0; cont < TAM; cont++){
    printf("\nPosi��o %d : %d", cont, vetor[cont] );
e  }



system("pause");
}
