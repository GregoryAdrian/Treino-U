#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 void main() {

    setlocale(LC_ALL,"");

 printf("opera��es matematicas:");

       int a = 33, b = 4;

//soma
 printf("\n A soma de a e b = %d", a + b);

//soma com n�meros aparentes
 printf("\n A soma de %d e %d = %d", a , b, a + b);

//subtra��o
 printf("\n A subtra��o de %d e %d = %d", a , b, a - b);

//divis�o
 printf("\n A divis�o de a e b = %d", a / b);

//multiplica��o
 printf("\n A multiplica��o de %d e %d = %d", a , b, a * b);

//resto da divis�o
 printf("\n O resto da divis�o entre %d e %d = %d", a , b, a % b);

//valor absoluto
 printf("\n O valor absoluto de 10-17 � = %d", abs(10-17));

// pausa o programa ap�s executar
 system ("pause");

}
