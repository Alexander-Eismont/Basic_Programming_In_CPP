#include <iostream>

int getStringLength(std::string str, int forbiddenLength)
{
    if (str.length() == forbiddenLength)
        throw std::string{"You have entered a word of prohibited length! "
                          "Goodbye"};

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
            std::cout << "The length of the string \"" << str << "\" is " << str.length() << "\n";
        }
    }
    catch (std::string errorMessage)
    {
        std::cerr << errorMessage << "\n";
    }

    return 0;
}
