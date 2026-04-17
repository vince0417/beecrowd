//Ache a senha!
#include <iostream>
using namespace std;

int main(){
    int n1{}, n2{}, n3{}, n4{};

    while(cin >> n1 >> n2 >> n3 >> n4){
        cout << n1 << n2 << n3 << n4 << '\n';
       if((n1+n2+n3+n4) == 0) break;
    }
    return 0;
}
