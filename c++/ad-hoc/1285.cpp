//Dígitos Diferentes
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casa{}, casaN{};
    while (cin >> casa >> casaN)
    {
        int total{}; // Número de casas que não possui dígitos repetidos;
        for (int i = casa; i <= casaN; i++)
        {
            set<char> digitos; // Guarda os dígitos de determinada casa sem repetições;
            string temp = to_string(i); // Para facilitar o acesso aos dígitos de cada casa;
            for (int x {}; x < temp.size(); x++)
            {
                digitos.insert(temp.at(x)); // Insere os dígitos, caso ainda não tenha;
            }
            if (digitos.size() == temp.length()) total++;
        }
        cout << total << "\n";
    }
    
    return 0;
}
