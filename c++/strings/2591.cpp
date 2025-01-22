//HameKameKa
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num{};
    string poder{};
    cin >> num;

    for (int i {}; i < num; i++)
    {
        int n1{1}, n2{1}, aux{};
        string finalizacao{"k"}; // Finalização do hamekameka.
        cin >> poder;

        for (int x = 2; x < poder.size(); x++)
        {
            if (poder.at(x) == 'k') aux++;
            
            if (poder.at(x) == 'a' and poder.at(x-1) == 'a')
            {
                if (aux == 0) n1++; // Capturar a primeira sequência de 'a'.
                else n2++; // Capturar a segunda sequência de 'a'.
            }
        }
        
        aux = (n1*n2); // A finalização estará correta multiplicando a primeira sequência de 'a' pela segunda.
        for (int x = 0; x < aux; x++)
            finalizacao.push_back('a'); // Adiciona 'a' no último índice da finalizaçâo.

        cout << finalizacao << '\n';
    }
    
    return 0;
}

// Link do Problema: https://judge.beecrowd.com/pt/problems/view/2591