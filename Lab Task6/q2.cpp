// 2.	 Question: Create a class Circle with attribute radius. Implement methods to calculate the area and circumference of the circle.
#include<iostream>
using namespace std;

class Circle{
    private:
        float radius;
    public:
        Circle(int radius){
            this-> radius = radius;
        }
        void Area(){
            cout << "The radius is " << radius * radius << endl;
        }
        void Circumference(){
            cout << "The radius is " << 2 * 3.14 * radius << endl;
        }
};

int main(){
    Circle c1(10);
    c1.Area();
    c1.Circumference();
}