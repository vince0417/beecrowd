//Frequência de Números
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numeros;
    map<int, int> frequencia;
    int num{};
    cin >> num;
    for (int it {}; it < num; it++)
    {
        int temp{};
        cin >> temp;
        numeros.push_back(temp);
    }
    //for_each percorre o vetor numeros sem a necessidade de um loop for explícito.
    /*
        [&] { contagem[num]++; } é uma expressão lambda. Para cada elemento n no vetor, 
        ela incrementa a contagem correspondente no mapa frequencia. 
        Se a chave n ainda não existir no mapa, ela será criada com o valor inicial de 1.
    */
    for_each(numeros.begin(), numeros.end(), [&](int n) {frequencia[n]++; });
    for (auto it : frequencia)
        cout << it.first << " aparece " << it.second << " vez(es)\n";
    return 0;
}
