#include <iostream>
using namespace std;
// 📘 hybridInheritance.cpp
// This program demonstrates the concept of Hybrid Inheritance in C++.
// Hybrid Inheritance is a combination of two or more types of inheritance
// (e.g., single, multiple, multilevel, hierarchical).
// In this example:
//   - A base class "Person" defines a common behavior (eat).
//   - "Student" and "Teacher" both inherit from "Person" (hierarchical inheritance).
//   - Together, this forms a hybrid structure since multiple inheritance
//     styles are combined in one program.
// Benefits:
//   - Shows how different inheritance models can be mixed.
//   - Promotes code reusability and models real-world relationships.
// Example: A "Person" base class with derived classes "Student" and "Teacher"
//          that share common features but also have their own specific behaviors.
// Purpose: To illustrate how hybrid inheritance works by combining
//          hierarchical and single inheritance in one program.
class Person
{
public:
    void eat()
    {
        cout << "Person is eating" << endl;
    }
};
class Student : public Person
{
public:
    void study()
    {
        cout << "Student is studying" << endl;
    }
};
class Teacher : public Person
{
public:
    void teach()
    {
        cout << "Teacher is teaching" << endl;
    }
};
int main()
{
    Student student1;
    student1.eat();
    student1.study();
    Teacher teacher1;
    // teacher1.eat();
    teacher1.teach();
    return 0;
}
