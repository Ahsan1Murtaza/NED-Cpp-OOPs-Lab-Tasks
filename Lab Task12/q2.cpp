// 2.	Implement a class Rectangle with private members length and width. Write a friend function to calculate the perimeter of the rectangle.
#include<iostream>
using namespace std;

class Rectangle{
private:
    int length, width;
public:
    Rectangle(int length, int width){
        this -> length = length;
        this -> width = width;
    }

    friend void perimeter(Rectangle r);
};

void perimeter(Rectangle r){
    cout << "The Perimeter is " << 2 * (r.length + r.width) << endl;
}

int main(){
    Rectangle rect1(10,10);
    Rectangle rect2(5,4);
    
    perimeter(rect1);
    perimeter(rect2);
}