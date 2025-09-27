//Detector de Falhas
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num{}, anterior{}, cont{}, encontrado{};
    while (cin >> num)
    {
        if (cont >= 1 && num < anterior) {
            if (encontrado == 0) {
                cout << (anterior+1) << "\n";
                ++encontrado;
            }
        }
        anterior = num;
        cont++;
    }
    if (encontrado == 0) cout << (num+1) << "\n"; //A máquina não apresentou problema;
    return 0;
}
