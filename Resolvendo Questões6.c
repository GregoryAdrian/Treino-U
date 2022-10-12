#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

 setlocale(LC_ALL,"");

 int i = 10;

 while (i <= 20){
    printf("\n%d", i);
    i = i + 2;
 }

  do{

    printf("\n%d", i);
 f   i = i + 2;
 } while(i <= 30);

 for(i = 10; i <= 40; i = i + 2){
    printf("\n%d", i);
 }


system("pause");
}
