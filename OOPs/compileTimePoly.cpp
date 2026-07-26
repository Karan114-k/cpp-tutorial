#include <iostream>
using namespace std;
// 📘 compileTimePoly.cpp
// This program demonstrates Compile-Time Polymorphism in C++.
// Compile-time polymorphism is achieved using **function overloading** 
// and **operator overloading**.
//   - Function overloading: Multiple functions with the same name but 
//     different parameter lists.
//   - Operator overloading: Redefining operators (like +, -, *) to work 
//     with user-defined types.
// Benefits:
//   - Makes code more intuitive and readable.
//   - Allows the same function/operator name to handle different data types.
// Example: Overloading an "add" function to work with both integers and floats,
//          or overloading the "+" operator for a custom class.
// Purpose: To show how polymorphism can be resolved at compile time,
//          improving flexibility while keeping performance efficient.
// Function Overloading
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }
};
int main()
{
    Calculator calc;
    cout << "Sum of 5 and 10: " << calc.add(5, 10) << endl;
    cout << "Sum of 5.5 and 10.5: " << calc.add(5.5, 10.5) << endl;
    return 0;
}
