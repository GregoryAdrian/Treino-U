#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Data{
      int dia;
      int mes;
      int ano;

}Data;

struct Aluno{
  int id ;
  Data nascimento

};

int main () {

setlocale(LC_ALL,"");

//criando um aluno
struct Aluno aluno1;

//modificando valores
aluno1.id = 19;
aluno1.nascimento.ano = 2003;
aluno1.nascimento.mes = 8;
aluno1.nascimento.dia = 8;

//imprimindo valores
printf("Nascido em: %d/%d/%d",aluno1.nascimento.dia = 8, aluno1.nascimento.mes = 8, aluno1.nascimento.ano = 2003);


return 0;
}
