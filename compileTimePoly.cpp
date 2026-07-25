#include <iostream>
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }
};
int main()
{
    Calculator calc;
    cout << "Sum of 5 and 10: " << calc.add(5, 10) << endl;
    cout << "Sum of 5.5 and 10.5: " << calc.add(5.5, 10.5) << endl;
    return 0;
}
