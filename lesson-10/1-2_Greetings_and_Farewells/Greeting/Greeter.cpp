#include "Greeter.h"

Greeter::Greeter() {}

std::string Greeter::greet(std::string name)
{
	return "Hello, " + name + "!\n";
}