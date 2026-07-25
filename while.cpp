#include <iostream>
using namespace std;
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
