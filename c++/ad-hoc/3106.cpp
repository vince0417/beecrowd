//Competição de Códigos
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, soma {}, cont {};
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;

        soma += x;
        if (x%3 != 0) cont += (x%3);
    }
    
    cout << (soma-cont) << endl;
    return 0;
}
