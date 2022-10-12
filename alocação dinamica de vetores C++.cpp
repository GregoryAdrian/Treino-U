#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <new>


int main(){

setlocale(LC_ALL,"");

int tamanho, cont;

printf("Digite o tamanho:");
scanf("%d", &tamanho);

//Criando um ponteiro que recebe o novo vetor azul
int *vetor = new int(tamanho);


for(cont = 0; cont < tamanho; cont++){

    vetor[cont] = cont;
    printf("\n%d", vetor[cont]);
}

free(vetor);

return 0;
}
