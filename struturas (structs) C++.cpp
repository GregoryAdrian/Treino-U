#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <new>


using namespace std;

//struct para frutas
struct Fruta{
 string cor;
 string nome;
};

int main(){

//Criando um ponteiro para o struct criado
  Fruta *primeiraFruta = new Fruta;

//modificando valores
primeiraFruta->cor = "Amarelo";
primeiraFruta->nome = "Banana\n";

cout << "Fruta:" << primeiraFruta->nome <<"cor: " << primeiraFruta->cor;

//criando uma lista de frutas

 Fruta *ponteiroListaDeFrutas = new Fruta[2];

 //modifcando ponteiro
 ponteiroListaDeFrutas[0].cor = "Vermelho";
 ponteiroListaDeFrutas[0].nome = "Morango";
 ponteiroListaDeFrutas[1].cor = "Verde";
 ponteiroListaDeFrutas[1].nome = "Melancia";

 //percorrendo e exibindo
 int cont;
 for(cont = 0; cont < 2; cont++){

cout << "\nFruta:" << ponteiroListaDeFrutas[cont].nome << "\ncor: " << ponteiroListaDeFrutas[cont].cor;

 }


return 0;
}
