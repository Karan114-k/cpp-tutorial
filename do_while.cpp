#include <iostream>
using namespace std;
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
