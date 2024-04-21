//Linha na Matriz
#include <iostream>
using namespace std;

int main() {
    int num, l, c;
    float matriz[12][12], soma = 0;
    char op;
    cin >> num >> op;

    for ( l = 0; l < 12; l++)
    {
        for ( c = 0; c < 12; c++)
        {
            cin >> matriz[l][c];

            if (l == num)
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
        cout << soma/12 << endl;
    }
    
    return 0;
}
