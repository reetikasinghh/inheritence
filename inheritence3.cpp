
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