//Soma de Ímpares Consecutivos III
#include<bits/stdc++.h>
using namespace std;

int main() {
    long num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        long x, y;
        cin >> x >> y;

        long cont {0}, soma {0};
        while (cont < y)
        {
            if (abs(x)%2 == 1)
            {
                cont++;
                soma += x;
            }
            x++;
        }
        cout << soma << endl;
    }

    return 0;
}
