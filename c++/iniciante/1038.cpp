//Lanche
#include <bits/stdc++.h>
using namespace std;

int main() {
    int cod, quant;
    float preco[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    cin >> cod >> quant;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout << "Total: R$ " << quant * preco[cod-1] << endl;
    return 0;
}
