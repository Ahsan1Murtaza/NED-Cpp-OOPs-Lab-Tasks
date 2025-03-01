// Question 1: Basic Inheritance

// Create a base class Vehicle with a method move() that prints "Vehicle is moving". Derive a class Car from Vehicle and override the move() method to print "Car is moving".


#include<iostream>
using namespace std;

class Vehicle{
public:
    virtual void move(){
        cout<<"Vehicle is moving"<<endl;
    }
};

class Car : public Vehicle{
public:
    void move() override{
        cout<<"Car is moving"<<endl;
    }
};
int main()
{ 
    Vehicle v1;
    v1.move();

    Car c1;
    c1.move();
    
    return 0;
}