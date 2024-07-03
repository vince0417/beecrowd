//Cimba
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;

    double semiP = (l1+l2+l3)/2.0;
    double aux = semiP*(semiP-l1)*(semiP-l2)*(semiP-l3);
    double area = sqrt(aux);

    cout.precision(3);
    cout.setf(ios::fixed);
    cout << area << " m2" << endl;
    return 0;
}

//O algoritmo calcula a área de um triângulo qualquer. 