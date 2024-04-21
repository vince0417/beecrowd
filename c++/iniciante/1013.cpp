//O Maior
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int aux = (n1+n2+abs(n1-n2))/2;
    if (aux > n3)
    {
        cout << aux << " eh o maior\n";
    }
    else
        cout << n3 << " eh o maior\n";
    
    return 0;
}
