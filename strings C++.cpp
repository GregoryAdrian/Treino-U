#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main(){

   setlocale(LC_ALL,"");

 // Definindo uma Strings
  string palavra;

 // Imprimindo na tela
  cout << "Digite uma palavra";

// Lendo uma String
  cin >> palavra;

// imprimindo uma variavel
  cout << "\nA palavra é" << palavra;

system("pause");

return 0;

}
