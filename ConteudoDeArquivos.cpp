#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;


int main () {

//Cursor que ira percorrer cada letra
 int c;
 char conteudoTexto[255];
 int cont = 0;

 //Aequivo a ser lido
 FILE *file;

 //Abre o arquivo no diretório escolhido
 file = fopen("texto.txt", "r");

 //Se o arquivo foi encontrado
 if(file)

  //Enquanto encontra letras(até o fim do arquivo)
    while ((c = getc(file)) != EOF){


    //Imprimi na tela
     printf("%c", c);

     //Vetor de char recebe a letra atual
     conteudoTexto[cont] = c;

     //Aumenta a contagem de letras
     cont ++;

 }

   fclose(file);

 //Imprimido conteudo lido
 for(cont = 0; cont < strlen(conteudoTexto) - 0 ; cont++){

    printf("%c",conteudoTexto[cont] );
 }

return 0;
}
