//Inversão de Número
#include <iostream>

int main(){
    std::string num;
    std::cin >> num;

    std::cout << "Invertido = ";
    for(int i = num.size()-1; i >= 0; i--) std::cout << num.at(i);
    std::cout << '\n';
    return 0; 
}
