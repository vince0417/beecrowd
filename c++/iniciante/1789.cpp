//A Corrida de Lesmas
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;

    while (cin >> num)
    {
        int vetor[num];
        for (int i = 0; i < num; i++)
        {
            cin >> vetor[i];
        }
        int maior = vetor[0];
        for (int i = 1; i < num; i++)
        {
            if (vetor[i] > maior)
            {
                maior = vetor[i];
            }
            
        }
        if (maior < 10)
        {
            cout << 1 << endl;
        }
        else if (maior >= 10 and maior < 20)
        {
            cout << 2 << endl;
        }
        else
            cout << 3 << endl;
              
    }
    
}
