//Alarme Despertador
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> horas(4);
    while (cin >> horas[0] >> horas[1] >> horas[2] >> horas[3])
    {
        if (horas[0] == 0 and horas[1] == 0 and
            horas[2] == 0 and horas[3] == 0) return 0;

        int cont {0};
        while (true)
        {
            if (horas[0] == horas[2] and horas[1] == horas[3]) break;
            horas.at(1)++;
            if (horas.at(1) == 60) horas.at(0)++, horas.at(1) = 0;
            if (horas.at(0) == 24) horas.at(0) = 0;
            cont++;
        }
        cout << cont << endl;
    }

}
