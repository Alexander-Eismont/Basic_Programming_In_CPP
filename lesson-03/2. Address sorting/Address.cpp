#include <fstream>
#include <string>
#include "Address.h"

Address::Address(const std::string& city, const std::string& street, int house, int flat)
	: m_city{ city }, m_street{ street }, m_house{ house }, m_flat{ flat } {}

Address::Address()
	:m_house{0}, m_flat{0} {}

void Address::printAddress(std::ostream& output_line)
{
	output_line << m_city << ", " << m_street << ", " << m_house << ", " << m_flat << "\n";
}

std::string Address::getCity() { return m_city; }
std::string Address::getStreet() { return m_street; }
int Address::getHouse() { return m_house; }
int Address::getFlat() { return m_flat; }