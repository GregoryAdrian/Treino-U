#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 void main () {

  setlocale (LC_ALL,"");

  int a = 3;
  char b = 'g';

  // switch COM IF E ELSE
  if(a == 1) {
    printf("Op��o escolhida foi a 1");
  } else if (a == 2) {
      printf("\nOp��o escolhida foi a 2");
  } else if (a == 3) {
  printf("\nOp��o escolhida foi a 3");
  }else{
   printf("\nOp��o invalida ");
  }

  // COM SWITCH CASE
  switch(a){
  case 1:
       printf("\nOp��o escolhida foi a 1");
  break;
  case 2:
       printf("\nOp��o escolhida foi a 2");
  break;
  case 3:
       printf("\nOp��o escolhida foi a 3");
  break;
 default:
       printf("\np��o escolhida invalida ");
  break;
}

 // switch COM CHAR
switch(b){
  case 'x':
       printf("\nOp��o escolhida foi a 1 letra X");
  break;
  case 'g':
       printf("\nOp��o escolhida foi a 2 letra G");
  break;
  case 'y':
       printf("\nOp��o escolhida foi a 3 letra Y");
  break;
 default:
       printf("\np��o escolhida invalida ");
  break;
}


system("pause");
 }

