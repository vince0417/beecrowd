//Montanha-Russa
#include <bits/stdc++.h>
using namespace std;

int main() {
    int pessoas, alturaMin, alturaMax;
    while (cin >> pessoas >> alturaMin >> alturaMax)
    {
        int pessoa{}, autorizados{};
        for (size_t i {}; i < pessoas; i++)
        {
            cin >> pessoa;
            if (pessoa >= alturaMin && pessoa <= alturaMax) ++autorizados;
        }
        cout << autorizados << "\n";
    }
    return 0;
}
