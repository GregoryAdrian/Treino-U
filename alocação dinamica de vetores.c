#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int* alocaVetor(int tamanho){
  int *aux;

  //Alocação dinamica de memoria
  aux = (int*) malloc(tamanho * sizeof(int));

  //Retorna o ponteiro que aponta para a primeira posição da memoria do vetor alocado
  return aux;

}


int main(){

setlocale(LC_ALL,"");

int *vetor, tamanho, cont;


printf("Digite o tamanho do vetor:");
scanf("%d",&tamanho);

//Ponteiro recebe o endereço de memoria que foi alocado para o vetor
 vetor = alocaVetor(tamanho);

 //Coloca valores no vetor
 for(cont = 0; cont < tamanho; cont++){
    vetor[cont] = 120;
 }


 for(cont = 0; cont < tamanho; cont++){

    printf("%d\n", vetor[cont]);
}

free (vetor);

return 0;
 }








