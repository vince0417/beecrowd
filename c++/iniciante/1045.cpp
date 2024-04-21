//Tipos de Triângulos
#include <bits/stdc++.h>
using namespace std;

int main() {
    float a = 0, b = 0, c = 0;

    for (int i = 0; i < 3; i++)
    {
        float num;
        cin >> num;
        if (num>=a)
        {  
            c = b;
            b = a;
            a = num;
        }
        else if (num>=b)
        {
            c = b;
            b = num;
        }
        else
            c = num;
        
    }
    
    if (a >= b+c)
    {
        cout << "NAO FORMA TRIANGULO\n";
        return 0;
    }
    if (pow(a,2) == pow(b,2)+pow(c,2))
    {
       cout << "TRIANGULO RETANGULO\n"; 
    }
    if (pow(a,2) > pow(b,2)+pow(c,2))
    {
        cout << "TRIANGULO OBTUSANGULO\n";
    }
    if (pow(a,2) < pow(b,2)+pow(c,2))
    {
        cout << "TRIANGULO ACUTANGULO\n";
    }
    if (a == b and a == c)
    {
        cout << "TRIANGULO EQUILATERO\n";
    }
    if (a == b and a != c or a == c and a != b or c == b and c != a)
    {
       cout << "TRIANGULO ISOSCELES\n"; 
    }

    return 0;
}
