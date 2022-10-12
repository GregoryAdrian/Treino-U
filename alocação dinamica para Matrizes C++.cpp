#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;

int main () {

setlocale(LC_ALL,"");

//Definindo variaveis
int linhas = 3, colunas = 3, i, j;
int **matriz;

//Lendo ;o tamanho pelo o usuario
printf("digite o numero de linhas:");
scanf("%d", &linhas);
printf("\nDigite o numero de colunas:");
scanf("%d", &colunas);

matriz = (int **) new int[linhas];

for(i = 0; i < linhas; i++){
    matriz[i] = (int *) new int[colunas];
    }

    for (i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d",matriz[i][j]);
        }
        printf("\n");
    }
    free(matriz);

return 0;
}
