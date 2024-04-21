//Pares, Ímpares, Positivos e Negativos
#include <iostream>
using namespace std;

int main () {
    int total = 5, num;
    int impar = 0, par = 0, negativo = 0, positivo = 0;

    for (int i = 0; i < total; i++)
    {
        cin >> num;
        if (num > 0)
        {
            positivo = positivo + 1;
        }
        else if (num < 0)
        {
            negativo = negativo + 1;
        }
        
        
        if (num%2 == 0)
        {
            par = par + 1;
        }
        else
            impar = impar + 1;
        
    }

    cout << par << " valor(es) par(es)\n" << impar << " valor(es) impar(es)\n";
    cout << positivo << " valor(es) positivo(s)\n" << negativo << " valor(es) negativo(s)\n";

    return 0;
}
