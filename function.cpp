#include <iostream>
using namespace std;
// 📘 function.cpp
// This program demonstrates the use of functions in C++.
// A function is a block of code that performs a specific task.
// Benefits of using functions:
//   - Makes code reusable (write once, use many times).
//   - Improves readability and organization.
//   - Helps break complex problems into smaller parts.
// Example: An addition function that takes two numbers as input
//          and returns their sum.
// Purpose: To show how to define, call, and use functions in C++.
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;
    return 0;
}
