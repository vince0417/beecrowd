//Vamos Fechar
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int valorTotal, gastoDiario;
    cin >> valorTotal >> gastoDiario;

    int dias = (valorTotal/gastoDiario);

    if (dias <= 9){
        dias += 21;
        cout << "A UFSC fecha dia " << dias << " de setembro.\n";
    }else{
        dias -= 9;
        cout << "A UFSC fecha dia " << dias << " de outubro.\n";
    }
    return 0;
}
