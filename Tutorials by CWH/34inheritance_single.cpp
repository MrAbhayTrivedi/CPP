/*
Types of inheritance in C++
Single Inheritance
Single inheritance is a type of inheritance in which a derived class is inherited with only one base class. 

For example, we have two classes ClassA and ClassB.  If ClassB is inherited from ClassA, it means that ClassB can now implement the functionalities of ClassA. This is single inheritance.

class ClassA
{
    //body of ClassA
};
 
//derived from ClassA
class ClassB : public ClassA
{
    //body of ClassB
};

*/

// C++ program to demonstrate how to inherit a class
#include <iostream>
using namespace std;

// Base class that is to be inherited
class Parent {
public:
    // base class members
    int id_p;
    void printID_p()
    {
        cout << "Base ID: " << id_p << endl;
    }
};

// Sub class or derived publicly inheriting from Base
// Class(Parent)
class Child : public Parent {
public:
    // derived class members
    int id_c;
    void printID_c()
    {
        cout << "Child ID: " << id_c << endl;
    }
};

// main function
int main()
{
    // creating a child class object
    Child obj1;

    // An object of class child has all data members
    // and member functions of class parent
    // so we try accessing the parents method and data from
    // the child class object.
    obj1.id_p = 7;
    obj1.printID_p();

    // finally accessing the child class methods and data
    // too
    obj1.id_c = 91;
    obj1.printID_c();

    return 0;
}
