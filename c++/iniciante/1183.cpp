//Acima da Diagonal Principal
#include <iostream>
using namespace std;

int main() {
    int cont = 0;
    float matriz[12][12], soma = 0;
    char op;
    cin >> op;
    
    for (int l = 0; l < 12; l++)
    {
        for (int c = 0; c < 12; c++)
        {
            cin >> matriz[l][c];

            if (c > l)
            {
                soma += matriz[l][c];
                cont += 1;
            }
            
        }
        
    }

    cout.precision(1);
    cout.setf(ios::fixed);
    if (op == 'S')
    {
        cout << soma << endl;
    }
    else{
        cout << soma/cont << endl; 
    }
    
    return 0;
}
