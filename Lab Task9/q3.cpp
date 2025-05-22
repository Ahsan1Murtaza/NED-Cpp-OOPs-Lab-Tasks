// Question 3: Vehicle Fuel Efficiency

// Problem Statement:
// Create an abstract class Vehicle with a pure virtual function fuelEfficiency(). Derive two classes Car and Truck from Vehicle. Implement the fuelEfficiency() function in both derived classes. Write a program to calculate the fuel efficiency of a car and a truck.

#include <iostream>
#include <string>
using namespace std;
// Abstract class Vehicle
class Vehicle {
public:
    // Pure virtual function for fuel efficiency
    virtual float fuelEfficiency() = 0;
};
// Derived class Car
class Car : public Vehicle {
private:
    float distance; // in kilometers
    float fuel; // in liters
public:
    // Constructor to initialize distance and fuel
    Car(float d, float f) : distance(d), fuel(f) {}
    
    // Implementing fuelEfficiency() function for Car
    float fuelEfficiency() {
        return distance / fuel; // km/l
    }
};

// Derived class Truck
class Truck : public Vehicle {
private:
    float distance; // in kilometers
    float fuel; // in liters
public:
    // Constructor to initialize distance and fuel
    Truck(float d, float f) : distance(d), fuel(f) {}
    
    // Implementing fuelEfficiency() function for Truck
    float fuelEfficiency() {
        return distance / fuel; // km/l
    }
};

// Main function
int main() {
    // Creating objects of Car and Truck
    Car car(500, 25); // 500 km and 25 liters of fuel
    Truck truck(800, 50); // 800 km and 50 liters of fuel
    
    // Calculating and displaying fuel efficiencies
    cout << "Car Fuel Efficiency: " << car.fuelEfficiency() << " km/l" << endl;
    cout << "Truck Fuel Efficiency: " << truck.fuelEfficiency() << " km/l" << endl;
    
    return 0;
}