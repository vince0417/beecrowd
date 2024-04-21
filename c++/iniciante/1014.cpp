//Consumo
#include <iostream>
using namespace std;

int main() {
    int distancia;
    float combustivel;
    cin >> distancia >> combustivel;
     
    cout.precision(3);
    cout.setf(ios::fixed);
    cout << distancia/combustivel << " km/l" << endl;

    return 0;
}
