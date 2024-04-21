//Sort Simples
#include <iostream>
using namespace std;

int main() {
    int num, vetor1[3], vetor2[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> num;
        vetor1[i] = num;
        vetor2[i] = num;

    }
    
    int aux;
    for (int x = 0; x < 3; x++)
    {
        for (int y = x; y < 3; y++)
        {
            if (vetor1[x] > vetor1[y])
            {
                aux = vetor1[x];
                vetor1[x] = vetor1[y];
                vetor1[y] = aux;
            }
            
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        cout << vetor1[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << vetor2[i] << endl;
    }
    
    return 0;
}
