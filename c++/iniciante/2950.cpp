//As Duas Torres
#include <bits/stdc++.h>
using namespace std;

int main() {
    int dist, sarumanP, sauronP;
    cin >> dist >> sauronP >> sarumanP;

    float icm = ((float)dist/(sauronP+sarumanP));
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << icm << '\n';
    return 0;
}
