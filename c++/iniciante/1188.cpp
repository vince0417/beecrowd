//Área Inferior
#include <iostream>

using namespace std;

int main() {
    double matriz[12][12], soma = 0.0;
    char op;
    cin >> op;

    for (int l = 0; l < 12; l++)
    {
        for (int c = 0; c < 12; c++)
        {
            cin >> matriz[l][c];

            if (l > c and l+c > (12-1))
            {
                soma += matriz[l][c];
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
        cout << soma/(((12*12)-24)/4) << endl;
    }
    
    return 0;
}
