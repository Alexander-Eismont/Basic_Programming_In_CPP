#ifndef ADDRESS_H
#define ADDRESS_H

#include <fstream>
#include <string>

class Address
{
private:
	std::string m_city;
	std::string m_street;
	int m_house;
	int m_flat;

public:
	Address(const std::string& city, const std::string& street, int house, int flat);

	Address();

	void printAddress(std::ostream& output_line);

	std::string getCity();
	std::string getStreet();
	int getHouse();
	int getFlat();
};

#endif