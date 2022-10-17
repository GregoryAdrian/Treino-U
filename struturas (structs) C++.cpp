#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <new>


using namespace std;

//struct para frutas
struct fruta{
 string cor;
 string nome;
};

int main(){

//Criando um ponteiro para o struct criado
  fruta *primeiraFruta = new fruta;

//modificando valores
primeiraFruta->cor = "Amarelo";
primeiraFruta->nome = "Banana\n";

cout << "Fruta:" << primeiraFruta->nome <<"cor: " << primeiraFruta->cor;

return 0;
}
