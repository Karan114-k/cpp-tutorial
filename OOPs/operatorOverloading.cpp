#include <iostream>
using namespace std;
// 📘 operatorOverloading.cpp
// This program demonstrates Operator Overloading in C++.
// Operator overloading allows you to redefine how operators (like +, -, *, ==)
// work with user-defined types (classes/objects).
// Benefits:
//   - Makes code more intuitive and readable.
//   - Allows objects to interact using natural operators instead of function calls.
// Example: Overloading the "+" operator for a "Complex" class so that
//          two complex numbers can be added using `c1 + c2`.
// Purpose: To show how operator overloading provides polymorphism,
//          making custom classes behave like built-in types.
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
