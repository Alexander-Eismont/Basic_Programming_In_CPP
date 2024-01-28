#include <iostream>
#include <vector>
#include "AddressBook.h"

int main()
{
	std::string filename_in{ "in.txt" };
	std::string filename_out{ "out.txt" };

	AddressBook address_book(0, std::vector<Address>());

	address_book.readFromFile(filename_in);

	address_book.writeToFile(filename_out);

	return 0;
}