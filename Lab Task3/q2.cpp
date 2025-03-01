#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int width;;
};
int Area(int x, int y)
{
    return x*y;
}
int main()
{
    Rectangle r;
    r.length = 10;
    r.width = 5;
    cout<<"The area of the rectangle is "<<Area(r.length, r.width)<<endl;
    return 0;
}