//Refrigerante
#include <bits/stdc++.h>
using namespace std;

int main(){
    int jaTem{}, encontradas{}, refri{}; // Garrafas vazias que ja tenho, encontradas e quantas vazias preciso para um novo refri;
    cin >> jaTem >> encontradas >> refri;

    int total = (jaTem+encontradas), consumido{}; // Total de garrafas e quantos refri irei consumir no dia;
    while(total >= refri){
        total -= refri; 
        total++; // Garrafa do refri que consumi;
        consumido++;
    }
    cout << consumido << '\n';
    return 0;
}
