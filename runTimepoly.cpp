#include <iostream>
using namespace std;
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
