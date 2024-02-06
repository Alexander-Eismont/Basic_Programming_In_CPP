#ifndef FROMUSER_H
#define FROMUSER_H

class FromUser
{
private:
    double m_num;
    char m_symbol;

public:
    FromUser();

    double getNumFromUser();
    char getSymbolFromUser();
};

#endif // FROMUSER_H
