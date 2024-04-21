//Fibonacci em Vetor
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int n;
        cin >> n;
        __int64_t vetor[n];
        
        if (n < 3)
        {
            if (n == 0)
            {
                cout << "Fib(" << n << ") = " << n << endl;
            }
            
            else{
                cout << "Fib(" << n << ") = " << 1 << endl;
            }
        }
        else{            
            for (int id = 0; id <= n; id++)
            {
                vetor[id] = id;
                if (id >= 2)
                {
                    vetor[id] = vetor[id-1]+vetor[id-2];
                    if (id == n)
                    {
                        cout << "Fib(" << n << ") = " << vetor[id] << endl;
                    }
                }
            }
        }
    }

    return 0;
}
