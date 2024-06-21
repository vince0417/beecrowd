//Domingo de Manhã
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string hora;

    while (cin >> hora)
    {
        int n1 = hora.at(0) - '0';
        string min {};
        min.push_back(hora.at(2));
        min.push_back(hora.at(3));
        int n2 = stoi(min);

        if (n1 >= 8)
        {
            if (n1 < 9) cout << "Atraso maximo: " << (n2+60) << endl;
            else cout << "Atraso maximo: " << 120 << endl;
        }
        else
        {
            if (n1 < 7) cout << "Atraso maximo: 0" << endl;
            else if (n1 <= 7 and n2 == 00) cout << "Atraso maximo: 0" << endl;
            else cout << "Atraso maximo: " << n2 << endl;
        }
    }
    
    return 0;
}
