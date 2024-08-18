//Baú Danificado
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int hipo, catetoOp, catetoAj;
    cin >> hipo >> catetoOp >> catetoAj;

    int aux1 = (hipo*hipo);
    int aux2 = (catetoOp*catetoOp) + (catetoAj*catetoAj);

    if (aux1 != aux2) cout << "Nao eh retangulo!" << endl;
    else {
        double semiRaio = (double)catetoAj/2.0;
        double semiCircu = 3.0*(semiRaio*semiRaio);
        cout << "AREA = " << static_cast<int>(semiCircu + (catetoAj*catetoOp))/2 << endl;
    }
    return 0;
}
