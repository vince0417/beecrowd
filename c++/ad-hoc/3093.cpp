//Truco da Galera 1.0
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (size_t i {}; i < num; ++i)
    {
        int cont{};
        string cartas;
        cin >> cartas;
        if (cartas.find('A') != string::npos) cont++;
        if (cartas.find('J') != string::npos) cont++;
        if (cartas.find('K') != string::npos) cont++;
        if (cartas.find('Q') != string::npos) cont++;

        if (cont == 4) cout << "Aaah muleke\n";
        else cout << "Ooo raca viu\n";
    }
    return 0;
}
