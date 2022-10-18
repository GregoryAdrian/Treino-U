#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main () {

//Cria um objeto de arquivo
ofstream arquivoDeSaida;

//Abre o arquivo ou cria caso não exista
arquivoDeSaida.open("texto.txt", std::ios_base::app);

//escrevendo algo
arquivoDeSaida << "Sucesso";

//Fecha o arquivo
arquivoDeSaida.close();

return 0;
}
