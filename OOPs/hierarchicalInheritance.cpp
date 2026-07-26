#include <iostream>
using namespace std;
// 📘 hierarchicalInheritance.cpp
// This program demonstrates the concept of Hierarchical Inheritance in C++.
// Inheritance allows one class (child/derived class) to acquire the properties
// and behaviors of another class (parent/base class).
// Hierarchical Inheritance means multiple derived classes inherit
// from a single base class.
// Benefits:
//   - Promotes code reusability (common features in base class are shared).
//   - Models real-world relationships where different entities share
//     common characteristics.
// Purpose: To show how multiple classes can share a common foundation
//          while still having their own unique behaviors.
class Shape
{
public:
    void draw()
    {
        cout << "Drawing a shape" << endl;
    }
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle" << endl;
    }
};
class Square : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a square" << endl;
    }
};
int main()
{
    Circle circle1;
    circle1.draw();
    Square square1;
    square1.draw();
    return 0;
}
