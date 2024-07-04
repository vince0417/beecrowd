//Eu Quero Cafééé
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int aux = (1000*n2);
    int total = (n1*n3);

    if ((aux/n1) >= n3) cout << n2 << endl;
    else 
    {
        int aux1 = (int) ceil( double(total) / aux);
        int cafeL = (aux1*n2);
        cout << cafeL << endl;
    }
    
    return 0;
}
