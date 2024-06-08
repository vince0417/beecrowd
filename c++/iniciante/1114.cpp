//Senha Fixa
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x {2002}, y;
    cin >> y;

    if (y == 2002) cout << "Acesso Permitido\n";
    else if (y != 2002)
    {
        while (y != 2002)
        {
            cout << "Senha Invalida\n";
            cin >> y;
            if (y == 2002) cout << "Acesso Permitido\n";
        }
    }

    return 0;
}
