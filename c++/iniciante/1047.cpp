//Tempo de Jogo com Minutos
#include <bits/stdc++.h>
using namespace std;

int main() {
    int hI, mI, hF, mF;
    cin >> hI >> mI >> hF >> mF;

    if (hI == hF and mI == mF)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
        return 0;
    }
    
    int hora {0}, minuto {0};
    while (true)
    {
        if (hI == hF and mI == mF)
        {
            break;
        }
        
        if (hI == 24)
        {
            hI = 0;
        }
        
        if (mI == 60)
        {
            hI += 1;
            mI = 0;
        }

        if (minuto == 60)
        {
            hora += 1;
            minuto = 0;
        }
        minuto++;
        mI++;
        
    }
    
    cout << "O JOGO DUROU " << hora << " HORA(S) E " << minuto << " MINUTO(S)\n";
    return 0;
}
