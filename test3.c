#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 void main() {

    setlocale(LC_ALL,"");

 printf("operações matematicas:");

       int a = 33, b = 4;

//soma
 printf("\n A soma de a e b = %d", a + b);

//soma com números aparentes
 printf("\n A soma de %d e %d = %d", a , b, a + b);

//subtração
 printf("\n A subtração de %d e %d = %d", a , b, a - b);

//divisão
 printf("\n A divisão de a e b = %d", a / b);

//multiplicação
 printf("\n A multiplicação de %d e %d = %d", a , b, a * b);

//resto da divisão
 printf("\n O resto da divisão entre %d e %d = %d", a , b, a % b);

//valor absoluto
 printf("\n O valor absoluto de 10-17 é = %d", abs(10-17));

// pausa o programa após executar
 system ("pause");

}
