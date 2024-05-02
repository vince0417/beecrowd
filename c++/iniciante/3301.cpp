//Sobrinho do Meio
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 and n1 < n3 or n1 < n2 and n1 > n3) cout << "huguinho\n";
    else if (n2 > n1 and n2 < n3 or n2 < n1 and n2 > n3) cout << "zezinho\n";
    else cout << "luisinho\n";
    return 0;
}
