#include <iostream>
using namespace std;
// 📘 if_else_if_else.cpp
// This program demonstrates the use of "if-else if-else" conditional statements in C++.
// It checks multiple conditions step by step:
//   - If the first condition is true → executes the first block.
//   - Else if another condition is true → executes the second block.
//   - Else → executes the default block when none of the above are true.
// Purpose: To show how decision-making can branch into multiple paths
//          depending on different conditions.
int main()
{
    int marks;
    cout << "Enter your marks(In %): ";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "You have secured an A grade." << endl;
    }
    else if (marks >= 80)
    {
        cout << "You have secured a B grade." << endl;
    }
    else
    {
        cout << "You have secured a C grade." << endl;
    }
    return 0;
}
