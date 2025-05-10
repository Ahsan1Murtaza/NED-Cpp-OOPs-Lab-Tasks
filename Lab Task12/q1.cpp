// 1.	Write a class Circle with a private member radius. Write a friend function to calculate the area of the circle.
#include<iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle(int radius){
        this -> radius = radius;
    }
    friend void Area(Circle c);
};

void Area(Circle c){
    cout << "The Area is " << 3.14 * c.radius * c.radius << endl;
}

int main(){
    Circle circle1(10);
    Circle circle2(5);
    
    Area(circle1);
    Area(circle2);
}