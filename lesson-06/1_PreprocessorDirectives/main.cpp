#include <iostream>

#define MODE 1

#ifndef MODE
#error It is necessary to define a constant;
#endif

#if MODE == 1
int add(int num1, int num2)
{
    return num1 + num2;
}

int getNumFromUser()
{
    int num;
    std::cin >> num;

    return num;
}
#endif

int main()
{
#if MODE == 0
    std::cout << "I'm working in training mode\n";
#elif MODE == 1
    std::cout << "I'm working in combat mode\n";
    int num1 = 0;
    int num2 = 0;
    std::cout << "Введите первое число: ";
    num1 = getNumFromUser();
    std::cout << "Введите второе число: ";
    num2 = getNumFromUser();
    std::cout << "Addition result: " << add(num1, num2) << "\n";
#else
    std::cout << "Unknown mode. Shutdown\n";
#endif

    return 0;
}
