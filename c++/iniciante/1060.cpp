//Números Positivos
#include <bits/stdc++.h>
using namespace std;

int main() {
    int total {0};

    for (int i = 0; i < 6; i++)
    {
        float num;
        cin >> num;

        if (num > 0)
        {
            total += 1;
        }
        
    }
    
    cout << total << " valores positivos\n";
    return 0;
}
