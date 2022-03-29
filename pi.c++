#include <iostream>

using namespace std;

int main() {
    setlocale (LC_ALL, "Portuguese");
    float v;
    float pi = 3.14;
    float r;
    float h;
    cout << "Dê a altura: ";
    cin >> h;
    cout << "Dê o valor do raio: "
    cin >> r;
    v = pi*r*r*h;
    cout << "O resultado é: " << v;
}