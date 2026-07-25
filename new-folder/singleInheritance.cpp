#include <iostream>
using namespace std;
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
