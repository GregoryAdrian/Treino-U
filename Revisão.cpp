#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main () {

setlocale(LC_ALL,"");


int a;
float b;
char c;
bool d;

//Passando valores
a = 10;
b = 2.8;
c = 'x';
d = true;

printf("valor :%d", a);
printf("\nvalor :%.2f", b);
printf("\nvalor :%c", c);
printf("\nvalor :%d", d);


//imprimindo com C++

cout << "\nvalor:" << a <<"!";

cin >> a;

cout << "Valor:" << a;


return 0;
system("pause");
}
