//Entrada e Saída Lendo e Pulando Nomes
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string nome{};
    for (int i {1}; i <= 10; i++)
    {
        cin >> nome;
        if (i == 3 || i == 7 || i == 9) cout << nome << "\n";
    }
    return 0;
}
