//Língua do Computador
#include <bits/stdc++.h>
using namespace std;

void paraBinario(int &maior)
{
    vector<char> numbers{'0','1'};
    vector<int> restos;
    cout << maior << " = ";
    while (maior >= 2)
    {
        restos.push_back(maior%2); 
        maior /= 2;
        if (maior < 2) restos.push_back(maior);
    }

    reverse(restos.begin(), restos.end());
    for (int i : restos)
        cout << numbers.at(i);
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int maior{};
    for (int i = 0; i < 4; i++)
    {
        int num{}, soma{};
        for (int it = 0; it < 7; it++)
        {
            cin >> num;
            soma += num;
        }
        if (soma > maior) maior = soma;
    }
    paraBinario(maior);
    return 0;
}
