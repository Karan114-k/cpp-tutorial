#include <iostream>
using namespace std;
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
