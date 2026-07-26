#include <iostream>
using namespace std;
// 📘 multipleInheritance.cpp
// This program demonstrates the concept of Multiple Inheritance in C++.
// Inheritance allows one class (child/derived class) to acquire the properties
// and behaviors of another class (parent/base class).
// Multiple Inheritance means a derived class can inherit from more than one base class.
// Benefits:
//   - Enables combining features from multiple classes into one.
//   - Useful for modeling complex real-world relationships.
// Example: A "Car" class that inherits from both "Vehicle" and "Engine".
// Purpose: To show how to define a derived class with multiple base classes
//          and how to resolve ambiguity when base classes have overlapping members.
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
