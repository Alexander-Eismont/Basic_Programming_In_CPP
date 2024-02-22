#include <iostream>
#include "Leaver.h"

std::string getName()
{
    std::cout << "Input your name: ";
    std::string name;
    std::cin >> name;

    return name;
}

int main()
{
    Leaver le;

    std::cout << le.leave(getName()) << "\n";
    

    return 0;
}