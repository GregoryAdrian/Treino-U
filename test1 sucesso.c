#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    //permite usar acento
    setlocale(LC_ALL,"");

    printf("olá \n");
       //Lendo valor inteiro
    int a = 50;
    int c = 10;
    printf("%d", a + c );
    printf("O valor de a é = %d", a);
    scanf("%d", &a);
    printf ("\n O valor de a mudou para = %d", a);

     //lendo valor quebrado
    float b = 5.6;
    printf("\n O valor de b é = %f", b);
    scanf("%f", &b);
    printf ("\n O valor de b mudou para = %f", b);

    //lendo letras
    char d = 's' ;
    printf("\n O valor de d é = %c", d);
    fflush(stdin);
    scanf("%c", &d);
    printf ("\n O valor de d mudou para = %c", d);
}

