//CPF 1
#include <bits/stdc++.h>
using namespace std;

int main() {
    string cpf{};
    while (cin >> cpf) {
        //Retiramos os pontos(.) para deixar os primeiros nove numeros livres;
        cpf.erase(cpf.begin() + 3);
        cpf.erase(cpf.begin() + 6);
        int b1{}, b2{};
        for (size_t i {1}; i <= 9; i++)
        {
            b1 += (cpf.at(i-1) - '0')*i;
        }
        b1 = (b1%11);
        if (b1 >= 10) b1 = 0;
        for (size_t i {}; i < 9; i++)
        {
            b2 += (cpf.at(i) - '0')*(9-i);
        }
        b2 = (b2%11);
        if (b2 >= 10) b2 = 0;
        if (b1 == cpf.at(10) - '0' && b2 == cpf.at(11) - '0') {
            cout << "CPF valido\n";
        }
        else cout << "CPF invalido\n";
    }
    return 0;
}

//OBSERVE: Leia enunciado do problema para entender o código;