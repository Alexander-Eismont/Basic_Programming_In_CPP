#ifndef MATH_H
#define MATH_H

class Math
{
private:
    double m_num1;
    double m_num2;
    char m_symbol;

public:
    Math(double num1, double num2, char symbol);

    double addition() const;
    double subtraction() const;
    double multiplication() const;
    double division() const;
    double exponentiation() const;
    void calculateResult() const;
};

#endif // MATH_H
