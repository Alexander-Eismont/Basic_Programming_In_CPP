#include <iostream>

int getStringLength(std::string str, int forbiddenLength)
{
    if (str.length() == forbiddenLength)
        throw std::length_error(
            "You have entered a word of prohibited length! Goodbye!");

    return str.length();
}

int main()
{
    std::cout << "Enter prohibited length: ";
    int stringLength;
    std::cin >> stringLength;

    try
    {
        while (true)
        {
            std::cout << "Enter word: ";
            std::string str;
            std::cin >> str;

            getStringLength(str, stringLength);
            std::cout << "The length of the string \"" << str << "\" is "
                      << str.length() << "\n";
        }
    }
    catch (std::exception& error)
    {
        std::cerr << error.what() << "\n";
    }

    return 0;
}
