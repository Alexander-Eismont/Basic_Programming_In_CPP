/*
Описание
Напишите программу, которая спрашивает у пользователя номер месяца и выводит на экран название месяца, введённого пользователем.
Если пользователь ввёл некорректный номер месяца, сообщите ему об этом.
Спрашивайте пользователя до тех пор, пока он не введёт 0.
Для решения задачи воспользуйтесь перечислением.
*/


#include <iostream>

int getNumFromUser();
std::string chooseMonth(const int& num);
void printResult();

enum class months
{
	JANUARY = 1,
	FEBRUARY = 2,
	MARCH = 3,
	APRIL = 4,
	MAY = 5,
	JUNE = 6,
	JULY = 7,
	AUGUST = 8,
	SEPTEMBER = 9,
	OCTOBER = 10,
	NOVEMBER = 11,
	DECEMBER = 12
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
	std::string month;

	switch (num)
	{
	case static_cast<int>(months::JANUARY):
		month = "Январь";
		break;
	case static_cast<int>(months::FEBRUARY):
		month = "Февраль";
		break;
	case static_cast<int>(months::MARCH):
		month = "Март";
		break;
	case static_cast<int>(months::APRIL):
		month = "Апрель";
		break;
	case static_cast<int>(months::MAY):
		month = "Май";
		break;
	case static_cast<int>(months::JUNE):
		month = "Июнь";
		break;
	case static_cast<int>(months::JULY):
		month = "Июль";
		break;
	case static_cast<int>(months::AUGUST):
		month = "Август";
		break;
	case static_cast<int>(months::SEPTEMBER):
		month = "Сентябрь";
		break;
	case static_cast<int>(months::OCTOBER):
		month = "Октябрь";
		break;
	case static_cast<int>(months::NOVEMBER):
		month = "Ноябрь";
		break;
	case static_cast<int>(months::DECEMBER):
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