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

 int busca_binaria(int vetor[10], int valorProcurado, int *posicaoEncontrada){

  int esquerda = 0;         //limite da esquerda
  int direita = TAM -1 ;    //limite da direita
  int meio;                 // 0 meio onde fica o cursor

 while(esquerda <= direita){

 //Encontra o meio da analise
  meio = (esquerda + direita)/2;

  //quando o valor do meio é encontrado
  if(valorProcurado == vetor[meio]){
        *posicaoEncontrada = meio;
        return 1;
  }

  //ajustando os limites laterais
  if(vetor[meio] < valorProcurado){
    esquerda = meio + 1;
  }else{
  direita = meio - 1;
  }

 }
  return -1;

}

 int main(){

  //valor pre determinado
  int vetor[TAM] = {1,30,50,63,70,22,40,85,88};
  int valorProcurado;
  int posicao, posicaoEncontrada;

  //auxiliar contador
  int i;

  //Impime o vetor na tela
  imprime_vetor(vetor);


  //Lendo o numero buscado
  printf("\nQual numero deseja encontrar?");
  scanf("%d", &valorProcurado);

if(busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1){
   cout << "O valor foi encontrado na posicao:" << posicaoEncontrada;
}else{
    cout << "O valor nao foi encontrado";

}


  return 0;
 }
