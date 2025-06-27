//Fila do Recreio
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int casos{};
    cin >> casos;

    for (int i = 0; i < casos; i++)
    {
        int alunos{}, nota{};
        vector<int> notas{}, aux{};

        cin >> alunos;
        for (int n = 0; n < alunos; n++)
        {
            cin >> nota;
            notas.push_back(nota);
            aux.push_back(nota);
        }
        
        sort(notas.begin(), notas.end(), greater<int>()); // Ordena notas em ordem decrescente;
        int cont{};
        for (int x = 0; x < notas.size(); x++)
            if (notas.at(x) == aux.at(x)) cont++;
        
        cout << cont << "\n";
    }

    return 0;
}
