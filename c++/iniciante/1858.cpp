//A Resposta de Theon
#include <iostream>
using namespace std;

int main() {
    int num, pessoa = 0, menor = 0;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        int n, aux = 0;
        cin >> n;
        aux += n;
        if (i == 1)
        {
            menor = aux;
            pessoa = i;
        }
        else if (aux < menor)
        {
            menor = aux;
            pessoa = i;
        }
        
        
    }
      
    cout << pessoa << endl;
    return 0;
}
