//Tipo de Combustível
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x {}, n1 {}, n2 {}, n3 {};

    while (x != 4)
    {
        cin >> x;

        if (x == 1) n1 += 1;
        else if (x == 2) n2 += 1;
        else if (x == 3) n3 += 1;
    }

    cout << "MUITO OBRIGADO\nAlcool: " << n1 << "\n"; 
    cout << "Gasolina: " << n2 << endl;
    cout << "Diesel: " << n3 << endl;

    return 0;
}
