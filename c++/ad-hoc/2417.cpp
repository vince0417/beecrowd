//Campeonato
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vetor[6];
    int s1 {0}, s2 {0};
    for (int i = 0; i < 6; i++)
    {
        cin >> vetor[i]; 
    }
    s1 += (vetor[0]*3)+vetor[1];
    s2 += (vetor[3]*3)+vetor[4];
    if (s1 > s2)
    {
        cout << "C\n";
    }
    else if (s1 < s2)
    {
        cout << "F\n";
    }
    else
    {
        if (vetor[2] > vetor[5])
        {
            cout << "C\n";
        }
        else if (vetor[2] < vetor[5])
        {
            cout << "F\n";
        }
        else
            cout << "=\n";
           
    }
        
    return 0;
}
