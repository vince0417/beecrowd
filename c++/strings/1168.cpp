//LED
#include <bits/stdc++.h>
using namespace std;

int v[] = {6,2,5,5,4,5,6,3,7,6};

int q_leds(string number) {
    int soma = 0;
    for (int i = 0; i < number.size(); i++)
    {
        int index = number[i] - '0';
        soma += v[index];
    }
    return soma;
}

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        string number;
        cin >> number;
        int soma = q_leds(number);
        cout << soma << " leds\n";
    }
    
    return 0;
}
