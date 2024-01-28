#include <fstream>
#include "Address.h"

Address::Address(const std::string& city, const std::string& street, int house, int flat)
	: m_city{ city }, m_street{ street }, m_house{ house }, m_flat{ flat } {}

Address::Address() {}

void Address::printAddress(std::ofstream& output_line)
{
	output_line << m_city << ", " << m_street << ", " << m_house << ", " << m_flat << "\n";
}

std::string Address::getCity() { return m_city; }
std::string Address::getStreet() { return m_street; }
int Address::getHouse() { return m_house; }
int Address::getFlat() { return m_flat; }