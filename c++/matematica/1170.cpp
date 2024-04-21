//Blobs
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    cout.precision(1);
    cout.setf(ios::fixed);
    for (int i = 0; i < num; i++)
    {
        float supri;
        int dias = 0;
        cin >> supri;

        while (supri > 1.0)
        {
            supri /= 2;
            dias += 1; 
        }
    
        cout << dias << " dias\n";
    }
    
    return 0;
}
