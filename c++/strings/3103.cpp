//Número da Sorte
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casos{};
    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        string numeros{}, saida{};
        vector<int> numerosOrdenados{};

        cin >> numeros;
        for (int n = 0; n < numeros.size(); n++) // Percorre a string numeros;
            numerosOrdenados.push_back(numeros.at(n) - '0'); // Converte para int e adiciona a numerosOrdenados;

        sort(numerosOrdenados.begin(), numerosOrdenados.end()); // Organiza em ordem crescente;
        
        for (int n = 0; n < numerosOrdenados.size(); n++) // Percorre numerosOrdenados;
            saida.push_back('0' + numerosOrdenados.at(n)); // Converte novamente para char e adiciona a string saida;
        
        if(saida.at(0) == '0')
        {
            for (int n = 1; n < saida.size(); n++)
            {
                if (saida.at(n) != '0'){
                    char aux = '0';
                    saida.at(0) = saida.at(n);
                    saida.at(n) = aux;
                    break;
                }
            }
        }
       cout << saida << "\n";
    }
    
    return 0;
}
