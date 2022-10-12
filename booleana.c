#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){

setlocale(LC_ALL,"");

 bool a = true, b = false;

 if(a){
    printf ("A é verdadeiro");
 } else {
    printf("A é falso");
 }

 // Comparando uma falsidade
 if (!a){
    printf("\nB é falso");
 }

}
