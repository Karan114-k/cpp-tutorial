#include <iostream>
using namespace std;
class Car
{

public: // public access specifier
    string brand;
    string model;
    int year;

protected: // protected access specifier
    string color = "Red";

private: // private access specifier
    int price;
    string ownername;

public:
    void start()
    {
        cout << "Car is starting..." << endl;
    }
    void stop()
    {
        cout << "Car is stopping..." << endl;
    }
    void setPrice(int p)
    {
        price = p;
    }
    void setOwnerName(string name)
    {
        ownername = name;
    }
    void getdetails()
    {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
        cout << "Car Color: " << color << endl;
        cout << "Car Price: " << price << endl;
        cout << "Car Owner Name: " << ownername << endl;
    }
};
int main()
{
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Fortuner";
    car1.year = 2020;
    car1.start();
    car1.setPrice(25000);
    car1.setOwnerName("Karan");
    car1.getdetails();
    car1.stop();
    return 0;
}
