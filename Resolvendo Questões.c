#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

 setlocale(LC_ALL,"");

 float a = 76;
 printf (" O valor de a é = %f", a);
 scanf("%f", &a);
 printf (" O valor de a mudou para = %f", a);


 float b = 25;
printf(" O valor de b é = %f", b);
scanf("%f", &b);
printf(" O valor de b mudou para = %f", b);

printf(" O valor de %f mais %f dividido por 2 vai dar a média = %f", a , b, a+b/2);



}
