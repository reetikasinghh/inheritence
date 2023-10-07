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

// wap to perform single inheritence
#include<iostream>
using namespace std;

// Base class 'name'
class name {
public:
    // Constructor for the 'name' class
    name() {
        cout << "My name is xyz\n";
    }
};

// Derived class 'Firstname' inherits from 'name'
class Firstname : public name {
};

int main() {
    Firstname obj; // Create an instance of the 'Firstname' class

    return 0;
}

// output
//my name is xyz

//WAP TO PERFORM MULTIPLE INHERITENCE
#include<iostream>
using namespace std;
class mammal
{
    public:
mammal(){
    cout<<"mammal is a animal"<<endl;
}

};
class wingedanimal{
    public:
    wingedanimal()
    {
        cout<<"winged animal can fly";
    }
};
class bat: public mammal,public wingedanimal{};
int main()
{
    bat b1;
    return 0;
}

///mammal is a animal   
///winged animal can fly


//WAP TO PERFORM MULTILEVEL INHERITENCE 
#include<iostream>
using namespace std;

// Base class 'REETIKA'
class REETIKA {
public:
    // Constructor for the 'Purvansha' class
    REETIKA() {
        cout << "MY NAME IS REETIKA SINGH";
    }
};

// Derived class 'name' inherits from 'REETIKA'
class name : public REETIKA {

};

// Derived class 'Fullname' inherits from 'name'
class Fullname : public name {

};

int main() {
    Fullname obj; // Create an instance of the 'Fullname' class

    return 0;
}

//OUTPUT 
//MY NAME IS REETIKA SINGH

//WAP TO PERFORM HEIRARCHIEL INHERITENCE 
#include<iostream>
using namespace std;

class colour
{
public:
void show_colour() {
	cout<<"class colour"<<endl;
}
};
class Blue : public colour
{
public:
void show_Blue() {
	cout<<"class Blue"<<endl;
}
};

class Orange : public colour
{
public:
void show_Orange() {
	cout<<"class Orange"<<endl;
}
};

int main() {
Blue b; 
cout<<"calling from Blue: "<<endl;
b.show_Blue();
b.show_colour();
	
Orange c; 
cout<<"calling from Orange: "<<endl;
c.show_Orange();
c.show_colour();
return 0;
}
/*Output
calling from Blue:
class Blue
class colour
calling from Orange:
class Orange
class colour
*/
