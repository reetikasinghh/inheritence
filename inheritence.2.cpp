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

