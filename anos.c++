#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int mes1;
    int mes2;
    int ano1;
    int ano2;
    int calc1;
    int calc2;

    cout << "Digite um mês em número ";
    cin >> mes1;
    cout << "Novamente, um mês em número ";
    cin >> mes2;
    cout << "Agora um ano ";
    cin >> ano1;
    cout << "Novamente, mais um ano ";
    cin >> ano2;
    calc1 = mes1 - mes2;
    calc2 = ano1 - ano2;
    cout << "Distancia de " << calc2;
    cout << " anos e ";
    cout << calc1;
    cin >> " meses"
    
    return 0;
}