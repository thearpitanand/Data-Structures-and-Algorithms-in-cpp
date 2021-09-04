#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    int real, imaginary;

public:
    ComplexNumber(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void print()
    {
        cout << real << " + i" << imaginary << endl;
    }
    void add(ComplexNumber const &cn2)
    {
        this->real = this->real + cn2.real;
        this->imaginary = this->imaginary + cn2.imaginary;
    }
    void multi(ComplexNumber const &cn2)
    {
        int realPart = (this->real * cn2.real) - (this->imaginary * cn2.imaginary);
        int imaginaryPart = (this->real * cn2.imaginary) + (cn2.real * this->imaginary);
        this->real = realPart;
        this->imaginary = imaginaryPart;
    }
};

int main()
{
    ComplexNumber cn1(21, 29);
    ComplexNumber cn2(61, 49);
    cn1.print();
    cn2.print();

    cn1.add(cn2);
    cn1.print();
    cn2.print();

    cn1.multi(cn2);
    cn1.print();
    cn2.print();

    return 0;
}