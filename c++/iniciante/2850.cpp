//Papagaio Poliglota
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string linguagem;

    while (getline(cin, linguagem))
    {
        if (linguagem == "esquerda") cout << "ingles\n";
        else if (linguagem == "direita") cout << "frances\n";
        else if (linguagem == "nenhuma") cout << "portugues\n";
        else cout << "caiu\n";
    }

    return 0;
}
