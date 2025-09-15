//Atrasadinhos
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alunos, necessarias, qtd{};
    cin >> alunos >> necessarias;
    for (size_t i {}; i < alunos; ++i)
    {
        int horario;
        cin >> horario;
        if (horario <= 0) qtd++;
    }
    if (qtd >= necessarias) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
