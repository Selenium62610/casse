// changeCasse.cpp
// g++ -std=c++11 -Wall -Wextra -o changeCasse.out changeCasse.cpp
#include <cctype>
#include <iostream>
int main()
{
    std::string texte;
    while(std::getline(std::cin, texte)){
    // change les minuscules par des majuscules et réciproquement
    for (char & c : texte)
    {
        if (std::islower(c))
            std::cout << char(std::toupper(c));
        else if (std::isupper(c))
            std::cout << char(std::tolower(c));
        else 
            std::cout << c;
    }
    std::cout << std::endl;
    }
    return 0;
}
