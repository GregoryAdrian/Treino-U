#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){

setlocale(LC_ALL,"");

 bool a = true, b = false;

 if(a){
    printf ("A � verdadeiro");
 } else {
    printf("A � falso");
 }

 // Comparando uma falsidade
 if (!a){
    printf("\nB � falso");
 }

}
