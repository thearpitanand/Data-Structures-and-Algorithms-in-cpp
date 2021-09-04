#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print()
    {
        cout << this->numerator << " / " << this->denominator << endl;
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
    void multi(Fraction const &f2)
    {
        this->numerator = this->numerator * f2.numerator;
        this->denominator = this->denominator * f2.denominator;
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

    return 0;
}