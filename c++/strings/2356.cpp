//Bactéria I
#include <bits/stdc++.h>

int main()
{
    std::string dna, codigo;

    while (std::cin >> dna >> codigo)
    {
        if(dna.find(codigo) != std::string::npos) std::cout << "Resistente\n";
        else std::cout << "Nao resistente\n";
    }
    
    return 0;
}
