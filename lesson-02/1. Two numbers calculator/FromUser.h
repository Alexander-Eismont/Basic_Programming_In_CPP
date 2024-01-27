#ifndef FROMUSER_H
#define FROUSER_H

class FromUser
{
private:
	double m_double_num;
	char m_symb;

public:
	

	double getDoubleFromUser();

	char getSymbFromUser();

	bool setContinue();
};

#endif