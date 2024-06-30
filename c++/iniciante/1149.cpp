//Somando Inteiros Consecutivos
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 <= 0 or n2 <= 0)
    {
        if (n1 <= 0) while (n1 <= 0) cin >> n1;
        if (n2 <= 0) while (n2 <= 0) cin >> n2;
    }

    int soma = (n2*n1)+((n2*(n2-1))/2);//Utilizado PA
    cout << soma << endl;
    return 0;
}
