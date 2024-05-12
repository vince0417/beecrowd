//Soma de Fatoriais
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    while (cin >> m >> n)
    {
        long s1 {1}, s2 {1};
        for (int i = 1; i <= m; i++) s1 *= i;
        for (int i = 1; i <= n; i++) s2 *= i;
        cout << s1+s2 << endl;
    }
    
    return 0;
}
