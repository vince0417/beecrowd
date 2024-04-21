//Torre
#include <iostream>
using namespace std;

int main() {
    int num;
    float matriz[12][12], soma = 0;
    char conta;
    cin >> num >> conta;

    int l, c;
    for ( l = 0; l < 12; l++)
    {
        for ( c = 0; c < 12; c++)
        {
            cin >> matriz[l][c];
        }
        
    }

    for ( c = 0; c < 12; c++)
    {
        if (c == num)
        {
            for ( l = 0; l < 12; l++)
            {
                soma += matriz[l][c];
            }
            
        }
        
    }

    cout.precision(1);
    cout.setf(ios::fixed);
    if (conta == 'S')
    {
        cout << soma << endl;
    }
    else if (conta == 'M')
    {
        cout << soma/12 << endl;
    }
        
    return 0;
}
