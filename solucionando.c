#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

 setlocale(LC_ALL, "");
 // algoritimo que le 2 notas e mostra a média entre elas.

 //definindo variáveis
 float nota1, nota2, resultado;

 // lendo primeiro valor
printf("Digite a primeira nota:");
 scanf("%f", &nota1);

 // lendo segundo valor
 printf("digite a segunda nota:");
 scanf("%f", &nota2);

 // calculando e mostrando resultado final
resultado = (nota1 + nota2) /2;
printf("a media é: %f", resultado);


 }

