#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int* alocaVetor(int tamanho){
  int *aux;

  //Aloca��o dinamica de memoria
  aux = (int*) malloc(tamanho * sizeof(int));

  //Retorna o ponteiro que aponta para a primeira posi��o da memoria do vetor alocado
  return aux;

}


int main(){

setlocale(LC_ALL,"");

int *vetor, tamanho, cont;


printf("Digite o tamanho do vetor:");
scanf("%d",&tamanho);

//Ponteiro recebe o endere�o de memoria que foi alocado para o vetor
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








