#include <iostream>
using namespace std;
// 📘 multilevelInheritance.cpp
// This program demonstrates the concept of Multilevel Inheritance in C++.
// Inheritance allows one class (child/derived class) to acquire the properties
// and behaviors of another class (parent/base class).
// Multilevel Inheritance means a chain of inheritance where:
//   - Class B inherits from Class A (base class).
//   - Class C inherits from Class B (derived class).
//   - Thus, Class C indirectly inherits from Class A as well.
// Benefits:
//   - Models hierarchical relationships (like Grandparent → Parent → Child).
//   - Promotes code reusability across multiple levels.
// Purpose: To show how properties and methods are passed down
//          through multiple levels of inheritance in C++.
class Animal{
    public:
    void eat(){
        cout << "Animal is eating" << endl;
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout << "Dog is barking" << endl;
    }
};
class Puppy : public Dog{
    public:
    void weep(){
        cout << "Puppy is weeping" << endl;
    }
};
int main(){
    Puppy puppy1;
    puppy1.eat();
    puppy1.bark();
    puppy1.weep();
    return 0;
}
