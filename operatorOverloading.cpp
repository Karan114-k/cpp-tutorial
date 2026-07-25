#include <iostream>
using namespace std;
class Complex
{
public:
    double real;
    double imag;
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }
};
int main()
{
    Complex c1(2.5, 3.5), c2(1.5, 2.5);
    Complex c3 = c1 + c2;
    cout << "Sum: " << c3.real << " + " << c3.imag << "i" << endl;
    return 0;
}
