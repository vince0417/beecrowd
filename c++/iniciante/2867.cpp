//Dígitos
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num{};
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int base{}, expoente{};
        cin >> base >> expoente;

        stringstream digitos;
        digitos << pow(base,expoente);
        string temp = digitos.str();
 
        int saida = static_cast<int>(floor(log10(stod(temp)))) + 1;
        cout << saida << "\n";
    }
    
    return 0;
}

//A combinação de floor(log10(n)) + 1 é usada para contar o número de dígitos n;
//Como temp se trata de uma string, convertemos para double usando a função stod(), uma vez que, o número pode ser grande e estar em notação científica;