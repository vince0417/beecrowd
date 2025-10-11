//Entrada e Saída de String
#include <bits/stdc++.h>
using namespace std;

int main() {
    string frase1{}, frase2{}, frase3{};
    getline(cin,frase1);
    getline(cin,frase2);
    getline(cin,frase3);

    cout << frase1 << frase2 << frase3 << "\n";
    cout << frase2 << frase3 << frase1 << "\n";
    cout << frase3 << frase1 << frase2 << "\n";
    cout << frase1.substr(0,10) << frase2.substr(0,10) << frase3.substr(0,10) << "\n";
    return 0;
}
