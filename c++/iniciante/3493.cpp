//Copos empilhados
#include <iostream>
using namespace std;

int main(){
    int recordAtual{}, tentativa{};
    while(cin >> recordAtual >> tentativa){
        if(tentativa > recordAtual) cout << "ok\n";
        else cout << "no\n";
    }
    return 0;
}
