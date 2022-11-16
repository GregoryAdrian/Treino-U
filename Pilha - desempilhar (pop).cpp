#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10


using namespace std;

void imprime_vetor(int vetor[TAM]){

    int cont;
    cout << "\n";

 //Imprime vetor
 for(cont = 0; cont < TAM; cont++){
    cout << vetor[cont] << " - ";
 }

}


void pilha_push(int pilha[TAM],int valor, int *topo){

   // caso não de para colocar mais valores
   if(*topo == TAM - 1){
    cout << "Pilha cheia";
 }else{
   *topo = *topo + 1;
    pilha[*topo] = valor;
 }


}

void pilha_pop(int pilha[TAM],int *topo){

 if(*topo == -1){
    cout << "A pilha ja esta vazia;";
 }else{
    cout << "Valor Removido;"  << pilha[*topo];
    pilha[*topo] = 0;
    *topo = *topo -1;
 }


}

int main() {

 int pilha [TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,};
 int topo = -1, valorRetirado;

 imprime_vetor(pilha);

 pilha_push(pilha, 5, &topo);
 imprime_vetor(pilha);

 pilha_push(pilha, 7, &topo);
 imprime_vetor(pilha);

 pilha_pop(pilha, &topo);
  imprime_vetor(pilha);


 //Caso não possa colocar mais valores
 if(topo == TAM -1){
    cout << "Pilha cheia";
 }else{
    topo = topo + 1;
    pilha[topo] = 5;
 }

imprime_vetor(pilha);



return 0;
}

