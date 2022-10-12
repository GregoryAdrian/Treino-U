#include <stdio.h>
#include <string.h>
#include <locale.h>

struct palavra{
   int ordem;
   char letra;
   char texto[255];

};


int main (){

    setlocale(LC_ALL,"");

//criar um palavra
struct palavra primeiraPalavra;

//modificando os campos
primeiraPalavra.ordem = 8;
primeiraPalavra.letra = 'g';
strcpy(primeiraPalavra.texto,"eu aprendo rápido");


//mostrando valores do struct
printf("Ordem: %d, Primeira Letra: %c, Palavra: %s",primeiraPalavra.ordem,primeiraPalavra.letra,primeiraPalavra.texto);

   struct palavra listaDePalavras[3];

//Fazendo uma lista de struct
listaDePalavras[0].ordem = 0;
listaDePalavras[1].ordem = 1;
listaDePalavras[2].ordem = 2;
listaDePalavras[0].letra = 'y';
listaDePalavras[1].letra = 'e';
listaDePalavras[2].letra = 's';
strcpy(listaDePalavras[0].texto,"sucesso");
strcpy(listaDePalavras[1].texto,"abundancia");
strcpy(listaDePalavras[2].texto,"prosperidade");

//Percorrendo o vetor
int cont;
for(cont = 0; cont < 3; cont++){
    printf("\nOrdem: %d, Primeira Letra: %c, Palavra: %s",listaDePalavras[cont].ordem,listaDePalavras[cont].letra,listaDePalavras[cont].texto);
}



return 0;

}
