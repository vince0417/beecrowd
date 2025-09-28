//Digitador Gago
#include <bits/stdc++.h>
using namespace std;

int main() {
    string frase;
    getline(cin, frase);
    for (size_t i {3}; i < frase.length(); i++)
    {
        if (frase.at(i-3) == frase.at(i-1) && frase.at(i-2) == frase.at(i)) {
            frase.erase(frase.begin() + i-3, frase.begin() + i-1);
        }
    }
    
    cout << frase << "\n";
    return 0;
}
