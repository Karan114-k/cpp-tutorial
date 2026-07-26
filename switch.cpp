#include <iostream>
using namespace std;
// 📘 switch.cpp
// This program demonstrates the use of the "switch" statement in C++.
// A switch statement allows you to choose one block of code to execute
// based on the value of an expression (usually an integer or character).
// Example: Checking a number and printing the corresponding day of the week.
// Purpose: To show how multi-way branching works in C++,
//          making code cleaner than writing multiple if-else statements.
int main()
{
    int day;
    cout << "Enter a number (1-7) to represent a day of the week: ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }
    return 0;
}
