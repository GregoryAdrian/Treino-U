#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){

setlocale(LC_ALL,"");

char palavra[10];


printf("Digite uma palavra:");

//limpar o Buffer
 setbuf(stdin, 0);

 //lê a strings
 fgets(palavra, 10, stdin);


printf("Vou dar oi hoje não");


system ("pause");
}
