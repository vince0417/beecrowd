//Getline Two - Frutas
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int num{};

    cin >> num;
    float valorDia{}, totalGasto{}, totalFrutas{};
    string frutas{};
    for (int i = 1; i <= num; i++)
    {
        cin >> valorDia; // Recebe valor gasto nesse dia.
        cin.ignore();
        getline(cin, frutas); // Recebe as frutas compradas nesse dia.

        int cont{1}; // Contas as frutas que estão na mesma string separadas por ' '.
        for (int x = 1; x < frutas.size(); x++) // Passa pela string para cont pegar as frutas.
            if (frutas.at(x-1) == ' ' && frutas.at(x) != ' ') cont++;

        cout << "day " << i << ": " << cont << " kg\n";
        totalFrutas += cont;
        totalGasto += valorDia;
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << (totalFrutas/num) << " kg by day\n";
    cout << "R$ " << (totalGasto/num) << " by day\n";
    return 0;
}
