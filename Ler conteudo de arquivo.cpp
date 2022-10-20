#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main () {

//Dizer qualarquivo será lido
ifstream input("texto.txt");

//String que recebera o texto lido
string textoLido;

 //Passa o texto do arquivo para a string
 for(string line; getline(input, line);){

    textoLido += line;
 }

 //Mostrar o conteudo
 cout << textoLido;


return 0;
}
