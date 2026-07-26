#include <iostream>
using namespace std;
// 📘 do_while.cpp
// This program demonstrates the use of the "do-while" loop in C++.
// A "do-while" loop always executes the block of code at least once,
// and then continues to repeat it as long as the condition remains true.
// Example: Printing numbers from 1 to 10 using a do-while loop.
// Purpose: To show how iteration works when you want the loop body
//          to run at least once regardless of the condition.
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    cout << "The first " << n << " natural numbers are: ";
    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);
    cout << endl;
    return 0;
}
