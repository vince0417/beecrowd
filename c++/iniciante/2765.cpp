//Entrada e Saída com Virgula
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string frase{};
    getline(cin, frase);

    for (int i = 0; i < frase.size(); i++)
    {
        if (frase.at(i) == ',') cout << '\n';
        else cout << frase.at(i);
    }
    
    cout << '\n';
    return 0;
}
