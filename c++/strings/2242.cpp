//Huaauhahhuahau
#include <bits/stdc++.h>
using namespace std;

bool vogal(char l) // Verifica de o caractere é uma vogal;
{
    return (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u');
}

int main()
{
    string  aux1{}, aux2{}, risada{};
    cin >> risada;

    for (int i = 0; i < risada.size(); i++)
        if (vogal(risada.at(i))) aux1.push_back(risada.at(i)); // Se a função vogal retornar true, aux1 recebe o caractere;

    for (int i = aux1.size()-1; i >= 0; i--)
        aux2.push_back(aux1.at(i));
    
    if (aux1 == aux2) cout << "S\n";
    else cout << "N\n";
    return 0;
}
