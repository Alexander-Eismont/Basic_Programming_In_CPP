#include <iostream>

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

    Fraction operator+(const Fraction& frac)
    {
        return Fraction((numerator_ * frac.denominator_)
                            + (frac.numerator_ * denominator_),
                        denominator_ * frac.denominator_);
    }

    Fraction operator-(const Fraction& frac)
    {
        return Fraction((numerator_ * frac.denominator_)
                            - (frac.numerator_ * denominator_),
                        denominator_ * frac.denominator_);
    }

    Fraction operator*(const Fraction& frac)
    {
        return Fraction(numerator_ * frac.numerator_,
                        denominator_ * frac.denominator_);
    }

    Fraction operator/(const Fraction& frac)
    {
        return Fraction(numerator_ * frac.denominator_,
                        denominator_ * frac.numerator_);
    }

    Fraction operator++()
    {
        return Fraction(numerator_ + denominator_, denominator_);
    }

    Fraction& operator--(int)
    {
        numerator_ -= denominator_;
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& out, const Fraction& frac);
};

std::ostream& operator<<(std::ostream& out, const Fraction& frac)
{
    out << frac.numerator_ << "/" << frac.denominator_;

    return out;
}

int getFractionFromUser();
Fraction fraction();

int main()
{
    Fraction frac1 = fraction();
    Fraction frac2 = fraction();

    Fraction fAdd = frac1 + frac2;
    std::cout << frac1 << " + " << frac2 << " = " << fAdd << "\n";

    Fraction fSub = frac1 - frac2;
    std::cout << frac1 << " - " << frac2 << " = " << fSub << "\n";

    Fraction fMult = frac1 * frac2;
    std::cout << frac1 << " * " << frac2 << " = " << fMult << "\n";

    Fraction fDiv = frac1 / frac2;
    std::cout << frac1 << " / " << frac2 << " = " << fDiv << "\n";

    Fraction fMultPrefIncr = ++frac1 * frac2;
    std::cout << "++" << frac1 << " * " << frac2 << " = " << fMultPrefIncr
              << "\n";

    frac1 = ++frac1;
    std::cout << "The value of the first fraction " << frac1 << "\n";

    Fraction fPostDecr = frac1-- * frac2;
    std::cout << ++frac1 << "--"
              << " * " << frac2 << " = " << fPostDecr << "\n";
    std::cout << "The value of the first fraction " << frac1 << "\n";

    return 0;
}

int getFractionFromUser()
{
    int num;
    std::cin >> num;

    return num;
}

Fraction fraction()
{
    std::cout << "Input numerator: ";
    int numer = getFractionFromUser();
    std::cout << "Input denominator: ";
    int denom = getFractionFromUser();

    Fraction frac(numer, denom);

    return frac;
}
