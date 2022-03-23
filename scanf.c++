#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    setlocale (LC_ALL, "Portuguese");

    int value13;
    int value2;
    int soma;

    printf ("Passe um valor: ");
    scanf("%i" , value1);
    printf ("Outro valor: ");
    scanf("%d" , value2);
    soma = value1 + value2;
    printf ("%i + %d = %i", value1, value2, soma);
    return 0;
}