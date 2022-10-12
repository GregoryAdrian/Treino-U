#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main () {

setlocale(LC_ALL,"");

 //RESPONSALVEL POR ALIMENTAR O RANG DE FORMA DIFERENTE
srand((unsigned) time(NULL));

//variavel que recebe o reso da divisao do numero "3" (aleatorio entre 0 e 2
int aleatorio = rand()  % 3;

 //imprime o valor
 printf("%d", aleatorio);

 //variavel que recebe o reso da divisao do numero "5" (aleatorio entre 1 e 5
   int aleatoriosegundo = (rand() % 5) + 1;

   printf("%d", aleatoriosegundo);





system("pausado");

}
