#include <iostream>
using namespace std;
class Vehicle
{
public:
    int no_of_wheels;
    void display_wheels()
    {
        cout << "Number of wheels: " << no_of_wheels << endl;
    }
};
class Engine
{
public:
    int engine_capacity;
    void display_engine()
    {
        cout << "Engine capacity: " << engine_capacity << " cc" << endl;
    }
};
class Car : public Vehicle, public Engine
{
public:
    string brand;
    void display_details()
    {
        cout << "Car brand: " << brand << endl;
        display_wheels();
        display_engine();
    }
};
int main()
{
    Car car1;
    car1.brand = "Toyota";
    car1.no_of_wheels = 4;
    car1.engine_capacity = 2000;
    car1.display_details();
    return 0;
}
