// Question 3: Method Overriding

// Create a base class Shape with a method draw() that prints "Drawing Shape". Create derived classes Circle and Square that override the draw() method to print "Drawing Circle" and "Drawing Square", respectively.

#include<iostream>
using namespace std;

class Shape{
public:
    virtual void Draw() {
        cout<<"Drawing Shape"<<endl;
    }
};

class Circle : public Shape{
public:
    void Draw() override {
        cout<<"Drawing Circle"<<endl;
    }
};

class Square : public Shape{
public:
    void Draw() override {
        cout<<"Drawing Sqaure"<<endl;
    }
};

int main()
{
    
    return 0;
}