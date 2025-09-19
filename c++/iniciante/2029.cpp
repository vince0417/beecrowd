//Reservatório de Mel
#include <bits/stdc++.h>
using namespace std;

void cilindro(double volume, double diametro) {
    double area = 3.14*(diametro*diametro);
    double altura = (volume/area);
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << "ALTURA = " << altura << "\n";
    cout << "AREA = " << area << "\n";
}

int main() {
    double volume{}, diametro{}; //De um cilindro;
    while (cin >> volume >> diametro)
    {
        diametro = (diametro/2);
        cilindro(volume,diametro);
    }
    return 0;
}
