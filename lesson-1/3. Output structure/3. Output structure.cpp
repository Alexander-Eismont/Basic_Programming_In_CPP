/*
Создайте структуру для хранения адреса. Структура должна содержать название города, улицы, номер дома, номер квартиры и индекс.
Создайте функцию для вывода структуры на консоль.
Протестируйте созданную функцию. Создайте в коде экземпляры структуры, передайте их в функцию и выведите на консоль получившиеся экземпляры структуры.
*/

#include <iostream>

struct Address
{
	std::string city;
	std::string street;
	int house_num;
	int flat_num;
	int index;
};

void printAddress(Address* address);

int main()
{
	setlocale(LC_ALL, "rus");

	Address address_1 = { "Москва", "Арбат", 12, 8, 123456 };
	Address address_2 = { "Ижевск", "Пушкина", 123, 123, 987654 };
	Address address_3 = { "Минск", "Рокоссовского", 19, 91, 220000 };

	printAddress(&address_1);
	printAddress(&address_2);
	printAddress(&address_3);

	return 0;
}

void printAddress(Address* address)
{
	std::cout << "Город: " << address->city << "\n";
	std::cout << "Улица: " << address->street << "\n";
	std::cout << "Номер дома: " << address->house_num << "\n";
	std::cout << "Номер квартиры: " << address->flat_num << "\n";
	std::cout << "Индекс: " << address->index << "\n\n";
}