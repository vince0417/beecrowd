//Entrada e Saída CPF
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cpf {};
    cin >> cpf;

    for (int i {}; i < cpf.size(); i++)
    {
        if (cpf.at(i) == '.' or cpf.at(i) == '-') cout << endl;
        else cout << cpf.at(i);
    }
    
    cout << endl;
    return 0;
}
