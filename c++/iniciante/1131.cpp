//Grenais
#include <bits/stdc++.h>
using namespace std;


int main() {
    int inter, gremio, vetor[4];
    cin >> inter >> gremio;

    vetor[0] += 1;
    if (inter > gremio)
    {
        vetor[1] += 1;
    }
    else if(inter < gremio){
        vetor[2] += 1;
    }
    else
        vetor[3] += 1;

    while (true)
    {
        int novo;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> novo;

        if (novo == 1)
        {
            cin >> inter >> gremio;

            vetor[0] += 1;
            if (inter > gremio)
            {
                vetor[1] += 1;
            }
            else
                vetor[2] += 1;
        }
        else
            break;
        
    }
    cout << vetor[0] << " grenais\n";
    cout << "Inter:" << vetor[1] << endl;
    cout << "Gremio:" << vetor[2] << endl;
    cout << "Empates:" << vetor[3] << endl;
    if (vetor[1] > vetor[2])
    {
        cout << "Inter venceu mais\n";
    }
    else if (vetor[1] < vetor[2])
    {
        cout << "Gremio venceu mais\n";
    }
    
    return 0;
}
