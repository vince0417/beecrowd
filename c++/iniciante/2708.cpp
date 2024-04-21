//Turistas no Parque Huacachina
#include <bits/stdc++.h>
using namespace std;

int main() {
    int turistas {0}, veiculos {0};

    while (true)
    {
        string passeio;
        int pessoas;
        cin >> passeio;
        if (passeio == "ABEND")
        {
            break;
        }
        cin >> pessoas;
        if (passeio == "SALIDA")
        {
            veiculos += 1;
            turistas += pessoas;
        }
        else if (passeio == "VUELTA")
        {
            veiculos -= 1;
            turistas -= pessoas;
        }

    }
    
    cout << turistas << endl << veiculos << endl;
    return 0;
}
