// 1.	Question: Create a class Rectangle with attributes length and width. Implement methods to calculate the area and perimeter of the rectangle.
#include<iostream>
using namespace std;

class Rectangle{
public: 
    int length, width;

    Rectangle(int length, int width){
        this-> length = length;
        this-> width = width;
    }

    void Area(){
        cout<< length * width << endl;
    }
    void Perimeter(){
        cout<< 2 * (length + width) << endl;
    }
};
int main()
{
    Rectangle rect1(10,10);
    rect1.Area();
    rect1.Perimeter();

    return 0;
}