//CPF 2
#include <bits/stdc++.h>
using namespace std;

int main() {
    string cpf{};
    while (cin >> cpf) {

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
        cpf.push_back(b1 + '0');
        cpf.push_back(b2 + '0');
        cpf.insert(3,1,'.');
        cpf.insert(7,1,'.');
        cpf.insert(11,1,'-');
        cout << cpf << "\n";
    }
    return 0;
}

//OBSERVE: Leia enunciado do problema para entender o código;