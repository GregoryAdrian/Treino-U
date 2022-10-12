#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int retornaComDez(int numero){
  return numero + 10;

}

float retornaComMenos(float menos){
  return menos - 5;

}

 void aumentaDez(int *numero){
  *numero = *numero + 10;

}

void DiminuiCinco(float *menos){
*menos = *menos - 5;
}

int main () {

setlocale(LC_ALL,"");


int a = 5;
printf("%d",a);

float b = 20.8;

printf("\n%f",b);


a = retornaComDez(a);
printf("\n%d",a);


aumentaDez(&a);
printf("\n%d",a);


b = retornaComMenos(b);
printf("\n%f",b);


DiminuiCinco(&b);
printf("\n%f",b);




return 0;
system("pause");
}
