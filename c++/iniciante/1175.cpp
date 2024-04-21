//Troca em Vetor I
#include <iostream>
using namespace std;

int main() {
    int vetor[20];

    for (int i = 0; i < 20; i++)
    {
        cin >> vetor[i];
    }

    for (int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << vetor[19-i] << endl;
    }

    return 0;
}
