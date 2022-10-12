#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

 setlocale (LC_ALL,"");

 //unindo variaveis
 int a = 20;

 //conectivo logico E (and) = &&
 if (a > 5 && a > 15){
    printf("A variavel a está entre 5 e 15");
 }

    //conectivo logico OU (OR)
    if (a > 5 || a > 15){
    printf("A variavel A é maior que 5 ou 15\n");
 }


    //misturando conectivo
    if  (a > 5 && a < 15 || a == 20) {
    printf("A variavel a está entre 5 e 15 ou ela vale 20");
 }


system("pause");
}
