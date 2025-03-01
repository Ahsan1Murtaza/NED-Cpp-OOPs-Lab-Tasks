// Question 5
// You are required to create a C++ program that demonstrates the concept of inheritance.Consider the following requirements:

// Base Class - Shape:
// Attributes:
// •	color (string)
// •	Constructor that initializes color.
// •	A pure virtual function area() which will return the area of the shape.
// •	A virtual function display() that prints the color of the shape.

// Derived Classes:
// Rectangle:
// •	Attributes:width (double),height (double)
// •	Constructor that initializes color, width, and height.
// •	Override area() to calculate and return the area of the rectangle.
// •	Override display() to print the color, width, height, and area of the rectangle.


// Circle:
// Attributes:
// •	radius (double)
// •	Constructor that initializes color and radius.
// •	Override area() to calculate and return the area of the circle.
// •	Override display() to print the color, radius, and area of the circle.

// Main Function:
// •	Create instances of Rectangle and Circle with different attributes.
// •	Use a pointer to Shape to store the addresses of these instances and call their display() method.
#include<iostream>
#include<string>
using namespace std;

class Shape{
public:
    string color;

    Shape(string c){
        color = c;
    }

    virtual double Area() = 0;
    virtual void Display() = 0;
};

class Rectangle : public Shape{
public:
    double width, height;

    Rectangle(string c, double w, double h) : Shape(c){
        width = w;
        height = h;
    }

    double Area() override{
        return width * height;
    }

    void Display() override{
        cout << "Rectangle Details:" << endl;
        cout << "Color: " << color << endl;
        cout << "Width: " << width << " Height: " << height << endl;
        cout << "Area: " << Area() << endl;
    }
};

class Circle : public Shape{
public:
    double radius;

    Circle(string c, double r) : Shape(c),radius(r) {}

    double Area() override{
        return 3.14 * radius * radius;
    }

    void Display() override{
        cout << "Circle Details:" << endl;
        cout << "Color: " << color << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << Area() << endl;
    }
};

int main()
{
    Rectangle rect("Blue",10,10);
    Circle cir("White",5);

    Shape* shape1 = &rect;
    Shape* shape2 = &cir;

    shape1->Display();
    shape2->Display();
    return 0;
}