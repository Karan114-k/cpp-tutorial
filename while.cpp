#include <iostream>
using namespace std;
// 📘 while.cpp
// This program demonstrates the use of the "while" loop in C++.
// A "while" loop is used when you want to repeat a block of code
// as long as a certain condition remains true.
// Example: Printing numbers from 1 to 10 using a while loop.
// Purpose: To show how iteration works in C++ when the number of
// repetitions is not fixed in advance but depends on a condition.
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = n;
    int factorial = 1;
    while (n != 0)
    {
        factorial *= n;
        n--;
    }
    cout << "Factorial of " << i << ": " << factorial << endl;
    cout << endl;
    return 0;
}
