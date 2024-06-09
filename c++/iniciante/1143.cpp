//Quadrado e ao Cubo
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        int a, b;
        a = i * i;
        b = i * a;
        cout << i << " " << a << " " << b << endl;
    }

    return 0;
}
