#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpaTela(){
 system("CLS");
}



int main(){

setlocale(LC_ALL,"");

int a;

printf("Digite um valor para 'a':");

scanf("%d", &a);

//Limpa tela
limpaTela();

printf("O valor foi %d \n Fim do programa",a);



return 0;
}
