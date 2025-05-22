// Question 1: Shape Area Calculation

// Problem Statement:
// Create an abstract class Shape with a pure virtual function area(). Derive two classes Circle and Rectangle from Shape. Implement the area() function in both derived classes. Write a program to calculate the area of a circle and a rectangle.

#include <iostream>
#include <cmath>
using namespace std;
// Abstract class Shape
class Shape {
public:
    // Pure virtual function for area
    virtual float area() = 0;
};
// Derived class Circle
class Circle : public Shape {
private:
    float radius;
public:
    // Constructor to initialize radius
    Circle(float r) : radius(r) {}
    
    // Implementing area() function for Circle
    float area() {
        return 3.14 * radius * radius; // Using M_PI for better precision
    }
};
// Derived class Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;
public:

    // Constructor to initialize length and width
    Rectangle(float l, float w) : length(l), width(w) {}
    
    // Implementing area() function for Rectangle
    float area() {
        return length * width;
    }
};
// Main function
int main() {
    // Creating objects of Circle and Rectangle
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    
    // Calculating and displaying areas
    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Area of Rectangle: " << rectangle.area() << endl;
    
    return 0;
}
