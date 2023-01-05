#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

void limpaTela(){
 system("CLS");
}

int main (){

int funcaoDesejada = 1;


while(funcaoDesejada < 10 && funcaoDesejada > 0){

        //Mostrando o menu
 cout << " Operacoes \n";
 cout << " 1 - Insercao de um node no inicio da lista \n";
 cout << " 2 - Insercao de um node no fim da lista \n";
 cout << " 3 - Insercao de um node na posição N \n";
 cout << " 4 - retirar  um node no inicio da lista";
 cout << " 5 - Retirar  um node no fim da lista \n";
 cout << " 6 - Retirar  um node na posição N \n";
 cout << " 7 - procurar um node com o campo RG \n";
 cout << " 8 - Imprimir a Lista. \n";
 cout << " 9 - Imprimir do sistema. \n";
 cout << " \n Escolha um numero e pressione ENTER: \n";

     // Lendo a opção do usuario
  cin >> funcaoDesejada;

  limpaTela();

  //Chama a função desejada
  switch(funcaoDesejada){
      case 1:
           cout << "Funcao escolhida: 1 \n";
        break;

         case 2:
           cout << "Funcao escolhida: 2 \n";
        break;


  }

}

return 0;
}
