//Maior e Posição
#include <iostream>
using namespace std;

int main() {
    int vetor[100], maior = 0, posicao;

    for (int i = 0; i < 100; i++)
    {
        cin >> vetor[i];
        
    }

    for (int i = 0; i < 100; i++)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
            posicao = i+1;
        }
           
    }
    
    cout << maior << endl << posicao << endl;

    return 0;
}
