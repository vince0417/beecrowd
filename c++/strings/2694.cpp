//Problema com a Calculadora
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casost{};
    cin >> casost;
    for (int i {}; i < casost; i++)
    {
        string erro;
        cin >> erro;
        
        ostringstream n1, n2, n3;
        n1 << erro.at(2) << erro.at(3);
        n2 << erro.at(5) << erro.at(6) << erro.at(7);
        n3 << erro.at(11) << erro.at(12);

        int num = stoi(n1.str()); 
        num += stoi(n2.str());
        num += stoi(n3.str());
        cout << num << "\n";
    }
    return 0;
}

/*
    ostringstream é uma classe que permite escrever dados em um buffer de string.
    << é usado para adicionar dados (neste caso, estamos concatenando os indices de "erro" à n1, n2 e n3).
    .str() retorna a string construída no ostringstream.
    stoi converte string em inteiro, caro, se se tratar de dígitos.
*/