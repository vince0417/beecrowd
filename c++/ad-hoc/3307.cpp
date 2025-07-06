//Decora o Rolê!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int casosT{};
    cin >> casosT;

    cout.precision(2);
    cout.setf(ios::fixed);
    for (int i {}; i < casosT; i++)
    {
        int esfera{};
        cin >> esfera;

        double raio = sqrt(esfera/3.14)/2;
        if (raio < 12.0) cout << "vermelho = R$ " << (esfera*0.09) << "\n";
        else if (raio >= 12.0 and raio <= 15.0) cout << "azul = R$ " << (esfera*0.07) << "\n";
        else cout << "amarelo = R$ " << (esfera*0.05) << "\n";
    }
    
    return 0;
}
