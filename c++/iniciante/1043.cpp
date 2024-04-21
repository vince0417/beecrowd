//Triângulo
#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, resultado = 0;

    cin >> n1 >> n2 >> n3;

    cout.precision(1);
    cout.setf(ios::fixed);

    if (n1 + n2 > n3 and n1 + n3 > n2 and n2 + n3 > n1)
    {
        resultado += n1+n2+n3;
        cout << "Perimetro = " << resultado << endl;
    }
    else{
        resultado += (n1+n2)*n3/2;
        cout << "Area = " << resultado << endl;
    }
    
    return 0;
}
