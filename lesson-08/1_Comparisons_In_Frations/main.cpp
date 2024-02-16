#include <iostream>

/*
To compare two fractions, they must be reduced to a common denominator.
To do this, you need to multiply the numerator and denominator of the first
fraction by the denominator of the second, and multiply the numerator and
denominator of the second by the denominator of the first.
Since the denominators are the same, then only the numerators will need to be
compared.
To do this, we can only multiply the numerator of the first fraction and
the denominator of the second, and vice versa, the numerator of the second
and the denominator of the first.
*/

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }

    friend bool operator<=>(const Fraction& f1, const Fraction& f2);
    friend bool operator==(const Fraction& f1, const Fraction& f2);
};

bool operator<=>(const Fraction& f1, const Fraction& f2)
{
    return f1.numerator_ * f2.denominator_ > f2.numerator_ * f1.denominator_;
}

bool operator==(const Fraction& f1, const Fraction& f2)
{
    return f1.numerator_ * f2.denominator_ == f2.numerator_ * f1.denominator_;
}

int main()
{
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}
