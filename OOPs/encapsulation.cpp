// 📘 encapsulation.cpp
// This program demonstrates the concept of Encapsulation in C++ .
// Encapsulation means bundling data (variables) and methods (functions)
// together inside a class, while restricting direct access to the data.
// Instead, data is accessed and modified through public methods..
// Key points:
//   - Data members are declared private to protect them.
//   - Public methods (getters/setters) provide controlled access.
// Benefits:
//   - Improves security by hiding implementation details.
//   - Promotes modular and maintainable code.
// Example: A "Student" class with private data members like name and age..
// Purpose: To show how encapsulation works
//          to protect data and simplify object initialization.
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
int main()
{
    Student s1;
    s1.setName("Alice");
    s1.setAge(20);
    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    return 0;
}
