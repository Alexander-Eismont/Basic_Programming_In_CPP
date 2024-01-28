#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Address.h"
#include "AddressBook.h"

AddressBook::AddressBook(int size, const std::vector<Address>& address)
	:m_size{ size }, m_addresses{ address } {}

void AddressBook::readFromFile(const std::string& filename)
{
	std::ifstream input_file(filename);

	if (!input_file.is_open())
	{
		std::cout << "The input file cannot be opened!";
		return;
	}

	input_file >> m_size;

	m_addresses.resize(m_size);

	for (int i{ 0 }; i < m_size; i++)
	{
		std::string city, street;
		int house, flat;

		input_file >> city >> street >> house >> flat;

		m_addresses[i] = Address(city, street, house, flat);
	}

	input_file.close();
}

void AddressBook::writeToFile(const std::string& filename)
{
	std::ofstream output_file(filename);

	if (!output_file.is_open())
	{
		std::cout << "The output file cannot bt opened!";
		return;
	}

	output_file << m_size << "\n";

	for (int i{ m_size - 1 }; i >= 0; i--)
		m_addresses[i].printAddress(output_file);

	output_file.close();
}