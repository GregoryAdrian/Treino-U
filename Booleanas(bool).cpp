#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

bool retornaBooleano(){
 return false;

}

int main(){

    setlocale(LC_ALL,"");

bool variavelBooleana;

variavelBooleana = retornaBooleano();

//Se for verdadeiro imprimi primeiro bloco
if(variavelBooleana){
    printf("É verdadeiro");
}

//imprimi o segundo bloco
else {
    printf("É falso");
}



return 0;
}
