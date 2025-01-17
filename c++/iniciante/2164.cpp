//Fibonacci Rápido
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num{};
    cin >> num;

    cout.precision(2);
    cout.setf(ios::fixed);

    double fib = (pow((1 + sqrt(5)) / 2, num) - pow((1 - sqrt(5)) / 2, num)) / sqrt(5);
    
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << fib << '\n';
    return 0;
}

/*
    A tarefa é, dado um natural n, calcular o valor de Fibonacci(n) usando a fórmula acima (fórmula Binet).
*/