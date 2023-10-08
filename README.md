# inheritence
1)Aim:
The aim of this program is to demonstrate inheritance in C++ by creating a base class Vehicle and a derived class Car. It shows how the derived class inherits properties and methods from the base class and adds its own properties.

Program Description:

In this program, a base class Vehicle is defined with a member variable brand initialized to "Ford_" and a method color() that prints "Red!" when called.

A derived class Car is defined, which publicly inherits from the base class Vehicle. The derived class Car adds its own member variable model initialized to "Mustang."

In the main() function, an object myCar of the Car class is created.

The color() method from the base class is called using the myCar object, demonstrating how the derived class inherits the method from the base class.

Finally, the program outputs the brand and model of the car by accessing the brand and model members of the myCar object.

Conclusion:

This program showcases the concept of inheritance in C++. The Car class inherits properties and methods from the Vehicle base class, demonstrating code reusability and the ability to create specialized classes with additional features. The program successfully displays the brand, model, and color of the car, illustrating how inheritance can be used to model real-world relationships between classes.

![image](https://github.com/reetikasinghh/inheritence/assets/139485681/c42bb39c-c3dd-46f3-9afb-64d8c73b3b0e)


2)Aim:
The aim of this program is to demonstrate single inheritance in C++. It consists of a base class name and a derived class Firstname, which inherits from the base class.

Program Description:

In this program, a base class name is defined with a constructor that prints "My name is xyz" when an object of the name class is created.

A derived class Firstname is defined, which publicly inherits from the base class name.

In the main() function, an object obj of the Firstname class is created. Since Firstname is derived from name, it inherits the constructor of the base class.

When the object obj of the derived class is created, the constructor of the base class is automatically called, and "My name is xyz" is printed.

Conclusion:

This program demonstrates single inheritance in C++. The Firstname class inherits the properties (in this case, the constructor) of the name base class. When an object of the derived class is created, the constructor of the base class is executed, resulting in the message "My name is xyz" being printed. This illustrates the concept of code reuse through inheritance.

![image](https://github.com/reetikasinghh/inheritence/assets/139485681/f0682ad9-f3e7-4225-b019-c846302f7ac4)







