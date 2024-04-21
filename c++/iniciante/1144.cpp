//Sequência Lógica
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        int x = i*i;
        cout << i << " " << x << " " << i*x << endl;
        cout << i << " " << x+1 << " " << (i*x)+1 << endl;
    }
    
    return 0;
}
