#include <iostream>
using namespace std;
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
