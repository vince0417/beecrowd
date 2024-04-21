//Aumento de Salário
#include <iostream>
using namespace std;

int main() {
    float salario, novo = 0, ganho = 0;

    cin >> salario;

    cout.precision(2);
    cout.setf(ios::fixed);

    if (salario >= 0 and salario <= 400.00)
    {

        novo += salario + (15*salario)/100;
        cout << "Novo salario: " << novo << endl;
        ganho += (15*salario)/100;
        cout << "Reajuste ganho: " << ganho << endl;
        cout << "Em percentual: 15 %" << endl;      
    }
    else if (salario >= 400.01 and salario <= 800.00)
    {
        novo += salario + (12*salario)/100;
        cout << "Novo salario: " << novo << endl;
        ganho += (12*salario)/100;
        cout << "Reajuste ganho: " << ganho << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (salario >= 800.01 and salario <= 1200.00)
    {
        novo += salario + (10*salario)/100;
        cout << "Novo salario: " << novo << endl;
        ganho += (10*salario)/100;
        cout << "Reajuste ganho: " << ganho << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (salario >= 1200.01 and salario <= 2000.00)
    {
        novo += salario + (7*salario)/100;
        cout << "Novo salario: " << novo << endl;
        ganho += (7*salario)/100;
        cout << "Reajuste ganho: " << ganho << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if (salario > 2000.00)
    {
        novo += salario + (4*salario)/100;
        cout << "Novo salario: " << novo << endl;
        ganho += (4*salario)/100;
        cout << "Reajuste ganho: " << ganho << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    
    return 0;
}
