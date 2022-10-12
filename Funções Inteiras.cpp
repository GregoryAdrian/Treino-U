#include <stdio.h>
#include <stdlib.h>


int RetornaDez();
float retornaQuebrado();

int main(){

 int a;


 a = RetornaDez();

 printf("\n%d", a);

 float b;

 b = retornaQuebrado();

 printf("\n%f", b);



return 0;
}


int RetornaDez(){
    printf("Retorna:");
    int numero = 100;
   return numero *2;
}

float retornaQuebrado(){
   return 5.5;

}
