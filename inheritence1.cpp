// WAP to perform General Inheritence
#include<iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    string brand = "Ford_";

    // Method to display the color
    void color()
    {
        cout << "Red!\n";
    }
};

// Derived class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    Car myCar;

    // Call the color method from the base class
    myCar.color();

    // Output the brand and model of the car
    cout << myCar.brand + " " + myCar.model;

    return 0;
}

/*Output
Red!
Ford_Mustang
*/