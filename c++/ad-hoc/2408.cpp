//Vice-Campeão
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (n1 > n2)
    {
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n3 > n2) cout << n2 << endl;
    else if (n3 > n1 and n3 < n2) cout << n3 << endl;
    else if (n3 < n1) cout << n1 << endl;
    return 0;
}
