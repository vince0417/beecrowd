//Link Bolado
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string nome;
    cin >> nome;
    transform(nome.begin(), nome.end(), nome.begin(), [](unsigned char c){ return tolower(c); });
    if (nome.find("zelda") != string::npos) cout << "Link Bolado\n";
    else cout << "Link Tranquilo\n";
    return 0;
}

/*
    Usei a função transform com uma lambda para converter a string nome em minúsculo por completo.
    Assim, facilitando a consulta com a função find().
*/