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

//adicionando 1 para cada posição
 for(cont = 0; cont < TAM; cont++){
    vetor[cont] = vetor [cont] + 1;
 }

 //exibir valores dos vetores
printf("\nPosição 0: %d", vetor[0] );
printf("\nPosição 1: %d", vetor[1] );
printf("\nPosição 2: %d", vetor[2] );

// imprimindo vetores em um laço de repetição
  for (cont = 0; cont < 3; cont++){
        printf("\nPosição %d : %d", cont, vetor[cont] );

}

//Lendo 3 valores para o vetor
  for(cont = 0; cont < TAM; cont++){
    printf("\nPosição %d : %d", cont, vetor[cont] );
e  }



system("pause");
}
