#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

 //Para utilizar o cout
 using namespace std;

 void imprime_vetor(int vetor[10]){

      //auxiliar contador
     int i;

 //imprimi o vetor
  for(i = 0; i < TAM; i++){
    cout << vetor[i] << " - ";
  }
 }

 int busca_simples(int vetor[10], int valorProcurado, int *posicaoEncontrada){

    int i;
    // verifica se o valor foi encontrado
    bool valorFoiEncontrado;

 for(i = 0; i < TAM; i++){
    if(vetor[i] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = i;
    }
  }



  if(valorFoiEncontrado){
      return 1;
    }else{
    return -1;
    }

 }

 int main(){

  //valor pre determinado
  int vetor[TAM] = {1,30,50,63,70,22,40,85,88,12};
  int valorProcurado;
  int posicao, posicaoEncontrada;

  //auxiliar contador
  int i;

  imprime_vetor(vetor);

  printf("\nQual numero deseja encontrar?");
  scanf("%d", &valorProcurado);

if(busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1){
   cout << "O valor foi encontrado na posicao:" << posicaoEncontrada;
}else{
    cout << "O valor nao foi encontrado";

}


  return 0;
 }
