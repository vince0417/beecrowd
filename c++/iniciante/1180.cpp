//Menor e Posição
#include <iostream>
using namespace std;

int main () {
    int total, menor, posicao;
    cin >> total;

    int vetor[total];
    for (int i = 0; i < total; i++)
    {
        cin >> vetor[i];
    }
    
    menor = vetor[0];

    for (int i = 0; i < total; i++)
    {
        if (menor > vetor[i])
        {
            menor = vetor[i];
            posicao = i;
        }
        
    }
    
    cout << "Menor valor: " << menor << endl << "Posicao: " << posicao << endl;
    return 0;
}
