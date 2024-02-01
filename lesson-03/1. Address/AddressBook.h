#ifndef ADDRESS_BOOK_H
#define ADDRESS_BOOK_H

#include <string>
#include <vector>
#include "Address.h"

class AddressBook
{
private:
	int m_size;
	std::vector <Address> m_addresses;

public:
	AddressBook(int size, const std::vector<Address>& address);

	void readFromFile(const std::string& filename);

	void writeToFile(const std::string& filename);
};

#endif