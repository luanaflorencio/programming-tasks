# include <stdio.h>
# include <iostream>

int calc(int a, int b){
    return a * b;
};
int main() {
    setlocale(LC_ALL, "Portuguese");
    int value;
    int result;
    printf("Informe um número para calcular o quadrado dele: ");
    scanf("%i" , &value);
    result = calc(value,value);
    printf("O quadrado %i é igual a %d", value,result);
    return 0;
}