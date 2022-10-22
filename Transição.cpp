#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

 void limpaTela(){
      system("CLS");

 }

int main () {

 int a = 10;

   char palavra[4];
   palavra[0] = 'f';
   palavra[1] = 'a';
   palavra[2] = 's';
   palavra[3] = 't';

   printf(" %c%c%c%c ", palavra[0], palavra[1], palavra[2],  palavra[3]);



 printf("\nO valor %d eh maior que 0", a);

 //limpaTela();

 string outraPalavra = "\n facilita muito a vida";
 cout << outraPalavra;
 cout << "\nO valor de " << a << " eh maior que 0";


return 0;
}
