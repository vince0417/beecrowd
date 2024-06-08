//Par ou Ímpar
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x;
    int sinal;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x == 0)
        {
            cout << "NULL\n";
            continue;
        }

        if (x < 0)
        {
            sinal = 0;
            x *= -1;
        }
        else sinal = 1;

        if (x % 2 == 0)
        {
            if (sinal == 0) cout << "EVEN NEGATIVE\n";
            else cout << "EVEN POSITIVE\n";
        }
        else
        {
            if (sinal == 0) cout << "ODD NEGATIVE\n";
            else cout << "ODD POSITIVE\n";
        }
    }

    return 0;
}
