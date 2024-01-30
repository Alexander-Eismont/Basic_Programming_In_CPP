#include <iostream>

class Counter
{
private:
	int m_num;

public:
	Counter() { m_num = 1; }

	Counter(int num) :m_num{ num } {}

	int increaseByOne() { return m_num++; }

	int decreaseByOne() { return m_num--; }

	void print() { std::cout << m_num << "\n"; }

	void setNum(int num) { m_num = num; }
};

std::string yesNo();
char getCommand();
void actionWithNum(Counter& counter, char& command);

int main()
{
	std::cout << "Do you want to specify the initial value of the counter? (yes or no): ";
	std::string answer = yesNo();

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
		char command = getCommand();

		if (command == 'x')
		{
			std::cout << "Goodbye!" << "\n";
			break;
		}

		actionWithNum(counter, command);

	} while (true);

	return 0;
}

std::string yesNo()
{
	std::string answer;
	std::cin >> answer;

	return answer;
}

char getCommand()
{
	char command;
	std::cin >> command;

	return command;
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