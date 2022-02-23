#include <iostream>

using namespace std;

int main() {
    setlocale (LC_ALL, "Portuguese");

    int v1;
    int v2;

    cout << "Digite um valor: ";
    cin >> v1;
    cout << "Agora digite outro valor: ";
    cin >> v2;
    if(v1<v2) {
        cout << "O resultado em ordem crescente é: " <<v1 <<endl <<v2;
    }else if (v2<v1){
        cout << "O resultado em ordem crescente é: " <<v2 <<endl <<v1;
    }else if (v1 == v2){
        cout << "Os valores são iguais";
    }
    return 0;
}
