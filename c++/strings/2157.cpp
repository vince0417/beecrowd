//Sequência Espelho
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casos{}, n1{}, n2{};
    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        string sequencia{}, sequenciaEspelhada{};
        cin >> n1 >> n2;
        for (int n = n1; n <= n2; n++)
            sequencia += to_string(n);
        
        sequenciaEspelhada = sequencia;
        for (int n = sequencia.size()-1; n >= 0; n--)
            sequenciaEspelhada.push_back(sequencia.at(n));
        
            cout << sequenciaEspelhada << "\n";
    }
    
    return 0;
}
