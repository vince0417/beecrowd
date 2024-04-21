//Área
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double triangulo, circulo, trapezio, quadrado, retangulo;
    triangulo = a * c / 2;
    circulo = 3.14159 * c * c;
    trapezio = (a + b) * c / 2;
    quadrado = b * b;
    retangulo = a * b;

    cout.precision(3);
    cout.setf(ios::fixed);
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;
    return 0;
}
