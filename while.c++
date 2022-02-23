#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

setlocale (LC_ALL, "Portuguese");

int i = 1;
int j;

cout << "Digite um valor de 1 a 10: ";
cin >> j;

if(j >= 1 && i <= 10){
   while (i <= 10){
       cout << i * j <<endl; 
       i++;
   }
}else{
    cout << "Valor inválido";
}
return 0;
}