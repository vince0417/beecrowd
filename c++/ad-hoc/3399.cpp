//Meu nome é Enésimo!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3, enesimo;
    cin >> n1 >> n2 >> n3 >> enesimo;
    
    int cont {3}, aux = (n2-n1);
    while (cont < enesimo)
    {
        n3 += aux;
        cont++;
    }
    
    cout << n3 << '\n';
    return 0;
}
