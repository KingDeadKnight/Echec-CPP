#include <iostream>
#include "Pion.cpp"
#include "Tour.cpp"
#include "Fou.cpp"
#include "Cavalier.cpp"


int main()
{
    Pion pion(1, 1);

    std::cout << pion.setDeplacement(3, 1) << std::endl;
    std::cout << pion.setDeplacement(5, 1) << std::endl;

    return 0;
}
