//Xadrez
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int linhas, colunas;
    cin >> linhas >> colunas;

    linhas = linhas%2;
    colunas = colunas%2;

    if (linhas == 0 and colunas == 1) cout << 0 << '\n';
    else if (linhas == 1 and colunas == 1) cout << 1 << '\n';
    else if (linhas == 0 and colunas == 0) cout << 1 << '\n';
    else cout << 0 << '\n';

    return 0;
}
