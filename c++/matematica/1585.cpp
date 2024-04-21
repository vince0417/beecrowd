//Fazendo Pandorgas
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int n1, n2, resultado = 0;
        cin >> n1 >> n2;

        resultado += (n1*n2)/2;

        cout << resultado << " cm2" << endl;
    }
    
    return 0;
}
