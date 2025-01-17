//O jogo Matemático de Paula
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num{};
    cin >> num;

    string jogo;
    for (int i = 0; i < num; i++)
    {
        cin >> jogo;

        int n1 = jogo.at(0) - '0', n2 = jogo.at(2) - '0'; // Converte char para int.
        if (n1 == n2) cout << (n1*n2) << '\n';
        else{
            // A condição verifica se jogo.at(1) é maiúscula.
            ('A' <= jogo.at(1) and jogo.at(1) <= 'Z') ? cout << (n2-n1) << '\n' : cout << (n2+n1) << '\n';
        }

    }
    
    return 0;
}
