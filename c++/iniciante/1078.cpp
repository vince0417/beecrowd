//Tabuada
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x;

    for (int i = 0; i <= 10; i++)
    {
        y = i*x;
        cout << i << " x " << x << " = " << y << endl;
    }
    
    return 0;
}
