//O Escolhido
#include <bits/stdc++.h>
using namespace std;

// Esta função busca o aluno com a maior nota e exibe sua matrícula.
void oEscolhido(vector<int> &alunos, vector<float> &notas)
{
    vector<float> aux = notas;
    sort(aux.begin(), aux.end());

    if (aux.at(aux.size()-1) >= 8.00)
    {
        for (int i {}; i < notas.size(); i++)
        {
            if (aux.at(aux.size()-1) == notas.at(i)) cout << alunos.at(i) << '\n';
        }
    }
    else cout << "Minimum note not reached\n";
}

int main()
{
    int num;
    cin >> num;

    vector<int> alunos(num);
    vector<float> notas(num);
    for (int i {}; i < num; i++)
    {

        cin >> alunos.at(i) >> notas.at(i);
    }

    oEscolhido(alunos,notas);
    return 0;
}
