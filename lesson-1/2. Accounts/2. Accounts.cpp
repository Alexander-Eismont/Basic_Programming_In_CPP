/*
—оздайте структуру дл€ хранени€ информации о банковском счЄте. ќна должна хранить номер счЄта (целое число), им€ владельца (строка) и количество денег на счету (дробное число).
—оздайте функцию дл€ изменени€ баланса счЄта. ‘ункци€ должна принимать экземпл€р структуры банковского счЄта и новую сумму.
ѕопросите пользовател€ заполнить пол€ экземпл€ра структуры, сообщить новый баланс счЄта и выведите обновлЄнный экземпл€р структуры на консоль.
*/

#include <iostream>
#include <windows.h>

struct Account
{
    int account_number;
    std::string owner;
    double amount_of_money;
};

Account getInfoFromUser();
void newBalance(Account* account);
void printInfo(Account account);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Account account = getInfoFromUser();

    newBalance(&account);

    printInfo(account);
    
    return 0;
}

Account getInfoFromUser()
{
    Account information = {};

    std::cout << "¬ведите номер счета: ";
    std::cin >> information.account_number;

    std::cout << "¬ведите им€ владельца счета: ";
    std::cin >> information.owner;

    std::cout << "¬ведите баланс: ";
    std::cin >> information.amount_of_money;

    return information;
}

void newBalance(Account* account)
{
    std::cout << "¬ведите новый баланс: ";
    std::cin >> account->amount_of_money;
}

void printInfo(Account account)
{
    std::cout << "¬аш счет: " << account.owner << ", " << account.account_number << ", " << account.amount_of_money;
}