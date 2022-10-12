#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

setlocale(LC_ALL,"");


int linhas = 3, colunas = 3, i, j;
int **matriz;

//Lendo o Tamanho pelo usuario
printf("Digite o numero de linhas:");
scanf("%d", &linhas);
printf("Digite o numero de colunas:");
scanf("%d", &colunas);

// Alocando as linhas
matriz = (int **) malloc(linhas * sizeof(int *));


//Alocando memoria para as cada colunas de cada linha
for(i = 0; i < linhas; i++){
    matriz[i] = (int *) malloc(colunas * sizeof(int ));

}

//Preenchendo vlore e exibin a matriz
for(i = 0; i < linhas; i++){
    for(j = 0; j < colunas; j++){
        matriz[i][j] = i;
        printf("%d", matriz[i][j]);
    }
    printf("\n");
}

printf("fim do comando");
printf("fim do comando");
printf("fim do comando");
printf("fim do comando");




free (matriz);
return 0;
}
