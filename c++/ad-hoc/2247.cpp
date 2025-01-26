//Cofrinhos da Vó Vitória
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int num{}, cofre1{}, cofre2{}, cont{1};

    while (cin >> num)
    {
        if (num == 0) return 0;

        int aux{};
        cout << "Teste " << cont << '\n';
        for (int i = 0; i < num; i++)
        {
            cin >> cofre1 >> cofre2;
            int operacao = cofre1-(cofre2-aux);

            cout << operacao << '\n';
            aux = cofre1-(cofre2-aux);
        }
        cout << '\n';
        cont++;
    }
    
}

//Neste problema cada depósito depende do anterior.
//LINK: https://judge.beecrowd.com/pt/problems/view/2247
