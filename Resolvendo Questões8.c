#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

setlocale(LC_ALL,"");
int tamanho;
printf("Qual será o tamnho do vetor?");
scanf("%d", &tamanho);

float vetor [tamanho], soma;

int i;
for(i = 0; i < tamanho; i++){
    printf("Digite um valor:");
    scanf("%f", &vetor[i]);
    soma = soma + vetor[i];
}

for(i = 0; i < tamanho; i++){
    printf("\nvetor [%d] = %f", i , vetor[i]);
}

printf("\nA média dos valores é: %f", soma/tamanho);


system ("pause");
}
