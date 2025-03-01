// Question 4: Access Specifiers

// Create a base class Base with a private attribute privateVar, a protected attribute protectedVar, and a public attribute publicVar. Create a derived class Derived and demonstrate access to these attributes. Write your observations.
#include<iostream>
using namespace std;

class Base{
private:
    int privateVar = 10;
protected:
    int protectedVar = 5;
public:
    int publicVar = 20;

    void ShowBaseValues(){
        cout << "Base class - privateVar: " << privateVar <<endl;
        cout << "Base class - protectedVar: " << protectedVar << endl;
        cout << "Base class - publicVar: " << publicVar << endl;
    }
};

class Derived : public Base{
public:

    void ShowDerivedValues(){
        // privateVar = 20; cant changes it
        protectedVar = 10; //  Allowed (protected members are inherited)
        publicVar = 50; //  Allowed (protected members are inherited)

        cout << "Derived class - protectedVar: " << protectedVar << endl;
        cout << "Derived class - publicVar: " << publicVar << endl;
    }
};


int main()
{
    Base b1;
    b1.ShowBaseValues();
    Derived d1;
    d1.ShowDerivedValues();
    d1.ShowBaseValues();
    
    d1.publicVar = 100;
    d1.ShowBaseValues();
    return 0;
}