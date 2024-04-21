//Números Ímpares
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i%2 == 1)
        {
            cout << i << endl;
        }
    }

    return 0;
}
