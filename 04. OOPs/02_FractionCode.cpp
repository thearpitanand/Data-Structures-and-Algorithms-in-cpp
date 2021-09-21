#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    // Constructors
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    Fraction()
    {
        this->numerator = 0;
        this->denominator = 0;
    }

    // Getter and setter functions
    int getNumerator() const // <- Constant Functions
    {
        return numerator;
    }
    int getDenominator() const // <- Constant Functions
    {
        return denominator;
    }
    void setNumerator(int num)
    {
        this->numerator = num;
    }
    void setDenominator(int de)
    {
        this->denominator = de;
    }

    // Data printing functions
    void print() const // <- Constant Functions
    {
        cout << this->numerator << " / " << this->denominator << endl;
    }

    // Manipulation functions
    Fraction operator+(Fraction const &f2) const // <-- Operator Overloading
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int num = ((x * this->numerator) + (y * f2.numerator));
        Fraction fNew(num, lcm);
        fNew.simplify();
        return fNew;
    }
    Fraction &operator+=(Fraction const &f2) const // <-- Operator Overloading
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int num = ((x * this->numerator) + (y * f2.numerator));
        this->numerator = num;
        this->denominator = lcm;
        this->simplify();
        return *this;
    }
    Fraction operator*(Fraction const &f2) const // <-- Operator Overloading
    {
        int num, deno;
        num = this->numerator * f2.numerator;
        deno = this->denominator * f2.denominator;
        Fraction fMulti(num, deno);
        fMulti.simplify();
        return fMulti;
    }
    bool operator==(Fraction const &f2) const // <-- Operator Overloading
    {
        return (this->numerator == f2.numerator && this->denominator == f2.denominator);
    }
    // Pre-Increment Operator
    Fraction &operator++() // <-- Operator Overloading
    {
        this->numerator = this->numerator + this->denominator;
        simplify();
        return *this;
    }
    // Post-Increment Operator
    Fraction operator++(int) // <-- Operator Overloading
    {
        Fraction fNew(this->numerator, this->denominator);
        this->numerator = this->numerator + this->denominator;
        this->simplify();
        return fNew;
    }

    void multi(Fraction const &f2)
    {
        this->numerator = this->numerator * f2.numerator;
        this->denominator = this->denominator * f2.denominator;
        simplify();
    }
    void add(Fraction const &f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / this->denominator;
        int y = lcm / f2.denominator;
        int num = ((x * this->numerator) + (y * f2.numerator));
        this->numerator = num;
        this->denominator = lcm;
        simplify();
    }

    void simplify()
    {
        int gcd = 1;
        int gcdMax = min(this->numerator, this->denominator);
        for (int i = 1; i <= gcdMax; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                gcd = i;
            }
        }
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }
};

int main()
{
    Fraction f1(10, 10);
    cout << "f1: ";
    f1.print();

    Fraction f2(11, 5);
    cout << "f2: ";
    f2.print();

    f1.add(f2);
    cout << "The sum of f1 and f2: ";
    f1.print();

    f1.multi(f2);
    cout << "The multiply of f1 and f2: ";
    f1.print();

    // Constant functions -> Function which does not change any property of the current object.
    Fraction const func(21, 29);
    func.print();

    // + Operator
    Fraction f21;
    f21 = f1 + f2;
    cout << "f21: ";
    f21.print();

    // * Operator
    Fraction f22;
    f22 = f1 * f2;
    cout << "f22: ";
    f22.print();

    // == Operator
    Fraction f23(2, 2);
    Fraction f24(2, 3);
    cout << (f23 == f24) << endl;

    // Pre Increment
    ++f24;
    cout << "f24: ";
    f24.print();

    // ++ Function return by refrance in Pre Increment.
    ++(++f24);
    cout << "f24: ";
    f24.print();

    // Post Increment
    f24++;
    cout << "f24: ";
    f24.print();

    return 0;
}