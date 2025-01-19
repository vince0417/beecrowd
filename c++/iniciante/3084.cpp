//Relógio Antigo
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hora{}, minuto{};
    while (cin >> hora >> minuto)
    {
        hora /= 30;
        minuto /= 6;

        if (hora < 10 and minuto < 10)
            cout << '0' << hora << ":0" << minuto << '\n';
        else if (hora < 10)
            cout << '0' << hora << ':' << minuto << '\n';
        else if (minuto < 10 )
            cout << hora << ":0" << minuto << '\n';
        else cout << hora << ":" << minuto << '\n';
    }
    return 0;
}
