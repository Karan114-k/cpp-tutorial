#include <iostream>
using namespace std;
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
