#include <iostream>

using namespace std;

int main() {
    setlocale (LC_ALL, "Portuguese");
    float a;
    float b;
    float x;
    cout << "Digite um valor ";
    cin >> a;
    cout << "Agora digite outro valor ";
    cin >> b;
    x = a/b;
    cout << "A raiz é " << x;
    return 0;
}