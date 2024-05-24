//Lista de Treinamento
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int candidatos, cont {};
    cin >> candidatos;

    for (int i = 0; i < candidatos; i++)
    {
        int n;
        cin >> n;

        if (n == 1) cont++;
    }

    cout << cont << endl;
    return 0;
}
