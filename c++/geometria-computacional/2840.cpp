//Balão++
#include <bits/stdc++.h>
using namespace std;

int main() {
    double pi = 3.1415;
    long raio{}, gas{}; //Raio de cada balão e gás hélio disponível, respectivamente;
    cin >> raio >> gas;

    double volume = (1.33333333333)*(pi*(pow(raio,3))); //Volume de cada balão;
    cout << (int)(gas/volume) << "\n"; //Total de balões que é possível encher;
    return 0;
}
