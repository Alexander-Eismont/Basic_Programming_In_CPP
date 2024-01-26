/*
Write a program that asks the user for the month number and displays the name of the month entered by the user.
If the user entered an incorrect month number, inform him about it.
Prompt the user until he enters 0.
To solve the problem, use an enumeration.
*/


#include <iostream>

int getNumFromUser();
std::string chooseMonth(const int& num);
void printResult();

enum class Months
{
	kJanuary = 1,
	kFebruary = 2,
	kMarch = 3,
	kApril = 4,
	kMay = 5,
	kJune = 6,
	kJuly = 7,
	kAugust = 8,
	kSeptember = 9,
	kOctober = 10,
	kNovember = 11,
	kDecember = 12
};


int main()
{
	setlocale(LC_ALL, "rus");

	printResult();

	return 0;
}

int getNumFromUser()
{
	int num;
	std::cin >> num;

	return num;
}

std::string chooseMonth(const int& num)
{
	Months mon = static_cast<Months>(num);

	std::string month;

	switch (mon)
	{
	case Months::kJanuary:
		month = "Январь";
		break;
	case Months::kFebruary:
		month = "Февраль";
		break;
	case Months::kMarch:
		month = "Март";
		break;
	case Months::kApril:
		month = "Апрель";
		break;
	case Months::kMay:
		month = "Май";
		break;
	case Months::kJune:
		month = "Июнь";
		break;
	case Months::kJuly:
		month = "Июль";
		break;
	case Months::kAugust:
		month = "Август";
		break;
	case Months::kSeptember:
		month = "Сентябрь";
		break;
	case Months::kOctober:
		month = "Октябрь";
		break;
	case Months::kNovember:
		month = "Ноябрь";
		break;
	case Months::kDecember:
		month = "Декабрь";
		break;
	default:
		month = "Неверный номер";
		break;
	}

	return month;
}

void printResult()
{
	int numFromUser;

	do
	{
		std::cout << "Введите номер месяца или 0, чтобы выйти: ";

		numFromUser = getNumFromUser();

		if (numFromUser == 0)
			break;

		std::cout << chooseMonth(numFromUser) << "\n";

	} while (true);
}