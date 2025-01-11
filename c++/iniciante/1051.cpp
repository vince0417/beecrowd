//Imposto de Renda
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float salario{}, contador{};
    cin >> salario;

    cout.precision(2);
    cout.setf(ios::fixed);
    if (salario > 4500.00)
    {
        contador = salario-4500.00;
        float imposto = 350.00; //Se salário é maior que R$ 4500.00, o imposto a baixo disso é 350.
        imposto += (28*contador)/100; //Assim só é preciso calcular o imposto a cima de 4500 e somar a 350.
        cout << "R$ " << imposto << '\n';
    }
    else{
        if (salario <= 2000.00) cout << "Isento\n";
        else if (salario-2000.00 > 1000.00) 
        {
            salario -= 3000.00;
            float imposto = (18*salario)/100 + 80;
            cout << "R$ " << imposto << '\n';
        }
        else{
            salario -= 2000.00;
            float imposto = (8*salario)/100;
            cout << "R$ " << imposto << '\n';
        }
    }

    return 0;
}
