//Kage Bunshin no Jutsu
#include <iostream>
using namespace std;

int main() {
    long num;
    while (cin >> num)
    {
        int cont = 0, aux = 1;
        while (aux < num) {
            aux *= 2;
            ++cont;
        }
        cout << cont << "\n";
    }
    
    return 0;
}
