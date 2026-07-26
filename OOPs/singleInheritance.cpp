#include <iostream>
using namespace std;
// 📘 singleInheritance.cpp
// This program demonstrates the concept of Single Inheritance in C++.
// Inheritance allows one class (child/derived class) to acquire the properties
// and behaviors of another class (parent/base class).
// Single Inheritance means there is only one base class and one derived class.
// Benefits:
//   - Promotes code reusability (derived class can reuse base class code).
//   - Improves organization by modeling real-world relationships.
// Example: A "Student" class derived from a "Person" class,
//          where Student inherits attributes like name and age from Person.
// Purpose: To show how to define a base class and extend it with a derived class
//          using single inheritance in C++.
class Person
{
public:
    string name;
    int age;
    void introduce()
    {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }
};
class Student : public Person
{
public:
    string course;
    string collegename;
    void introduce()
    {
        cout << "My name is " << name << ", I am " << age << " years old and I study " << course << " at " << collegename << "." << endl;
    }
};
int main()
{
    Student student1; // Creating an object of the derived class
    student1.name = "Karan";
    student1.age = 20;
    student1.course = "B.Tech";
    student1.collegename = "XYZ University";
    student1.introduce();
    Person person1; // Creating an object of the base class
    person1.name = "John";
    person1.age = 30;
    person1.introduce();
    return 0;
}
