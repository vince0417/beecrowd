//Corrida
#include <bits/stdc++.h>
using namespace std;

int  main()
{
    int distancia{}, eu{}, amigo{};

    cout.precision(2);
    cout.setf(ios::fixed);
    while (cin >> distancia  >> eu >> amigo)
    {
        if (eu <= amigo) cout << "impossivel\n";
        else{
            double tempo = (double)distancia/(eu-amigo);
            cout << tempo << "\n";
        }
        
    }
    
    return 0;
}
