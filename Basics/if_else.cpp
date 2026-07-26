#include <iostream>
using namespace std;
// 📘 if_else.cpp
// This program demonstrates the use of the "if-else" conditional statement in C++.
// It asks the user to enter their age and then checks:
//   - If the age is greater than 18 → prints "You are eligible to vote."
//   - Otherwise → prints "You are not eligible to vote."
// Purpose: To show how decision-making works in C++ using simple conditions.
int main()
{
    int age;
    cout << "Enter your Age: ";
    cin >> age;
    if (age > 18)
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }
    return 0;
}
