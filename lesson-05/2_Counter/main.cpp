#include <iostream>
#include "counter.h"
#include "fromUser.h"

void actionWithNum(Counter& counter, char& command);

int main()
{
	std::cout << "Do you want to specify the initial value of the counter? (yes or no): ";
	FromUser fromUser;
	std::string answer = fromUser.yesNo();

	Counter counter;
	int num;

	if (answer == "yes")
	{
		std::cout << "Enter the initial counter value: ";
		std::cin >> num;
		counter = Counter(num);
	}

	do
	{
		std::cout << "Input command ('+', '-', '=' or 'x'): ";
		char command = fromUser.getCommand();

		if (command == 'x')
		{
			std::cout << "Goodbye!" << "\n";
			break;
		}

		actionWithNum(counter, command);

	} while (true);

	return 0;
}

void actionWithNum(Counter& counter, char& command)
{
	switch (command)
	{
	case '+':
		counter.increaseByOne();
		break;
	case '-':
		counter.decreaseByOne();
		break;
	case '=':
		counter.print();
		break;
	}
}