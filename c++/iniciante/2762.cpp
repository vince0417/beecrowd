//Entrada e Saída 6
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string numero{};
    getline(cin, numero);
    int ponto{};
    string part1{}, part2{};
    for (int i {}; i < numero.size(); i++)
    {
        if (numero.at(i) == '.') ponto++;
        if (ponto == 0 && numero.at(i) != '.') part2.push_back(numero.at(i));
        else if (numero.at(i) != '.') part1.push_back(numero.at(i));
    }
    
    if (part1.at(0) == '0') part1.erase(0,1);
    cout << part1 << "." << part2 << "\n";
    return 0;
}
