//Entrada e Saída de Carácter
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a{}, b{}, c{};
	cin >> a >> b >> c;
	
	cout << "A = " << a << ", B = " << b << ", C = " << c << "\n";
	cout << "A = " << b << ", B = " << c << ", C = " << a << "\n";
	cout << "A = " << c << ", B = " << a << ", C = " << b << "\n";
	
	return 0;
}
