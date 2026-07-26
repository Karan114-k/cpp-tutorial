#include <iostream>
using namespace std;
// 📘 runTimepoly.cpp
// This program demonstrates Run-Time Polymorphism in C++.
// Run-time polymorphism is achieved using **virtual functions** and **function overriding**.
//   - A base class defines a virtual function.
//   - Derived classes override that function with their own implementation.
//   - At run time, the function call is resolved based on the actual object type.
// Benefits:
//   - Enables dynamic behavior (different outputs depending on the object).
//   - Promotes flexibility and extensibility in object-oriented design.
// Purpose: To show how polymorphism works at run time,
//          allowing the same interface to be used for different behaviors.
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound";
    }
};
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Bark";
    }
};
int main()
{
    Animal *a = new Dog();
    a->sound();
    Animal d1;
    d1.sound();
}
