//Média 2
#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    float media = ((n1*2)+(n2*3)+(n3*5))/10;
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << "MEDIA = " << media << endl;

    return 0;
}
