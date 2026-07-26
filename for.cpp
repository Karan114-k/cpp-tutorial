#include <iostream>
using namespace std;
// 📘 for.cpp
// This program demonstrates the use of the "for" loop in C++.
// A "for" loop is used when you know in advance how many times
// you want to repeat a block of code.
// Example: Printing numbers from 1 to 10 using a loop.
// Purpose: To show how iteration
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The first " << n << " natural numbers are: ";
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
