#include <stdio.h>
#include <stdlib.h>

char retornaLetra(){
  return 103;

}

int main (){

//Definindo variaveis
char letra;

//Char recebendo valor de uma função
letra = retornaLetra();


//imprimindo novo valor
printf("%c",letra);


return 0;
}
