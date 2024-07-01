//Frequencia na Aula
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    vector<int> alunos(num);
    for (int i {}; i < num; i++) cin >> alunos.at(i);

    sort(alunos.begin(), alunos.end());
    
    int frequencia {num};
    for (int i {1}; i < num; i++)
    {
        if (alunos.at(i) == alunos.at(i-1)) frequencia--;
    }
    
    cout << frequencia << endl;
    return 0;
}

/*
    Neste problema foi utilizado a função Sort para ordenar o vetor(alunos) e assim o processo ficar mais simples no segundo laço.
 */