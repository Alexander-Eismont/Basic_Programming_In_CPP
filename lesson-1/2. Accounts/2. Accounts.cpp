/*
Create a structure to store bank account information. It should store the account number (integer), owner name (string) and the amount of money in the account (fractional number).
Create a function to change the account balance. The function should accept an instance of the bank account structure and the new amount.
Ask the user to fill in the fields of the structure instance, report the new account balance, and output the updated structure instance to the console.
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