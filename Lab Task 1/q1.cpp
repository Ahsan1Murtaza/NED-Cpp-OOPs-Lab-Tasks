#include<iostream>
using namespace std;
int Area(int l, int w){
    return l*w;
}
int main(){
    int length,width;
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter width : ";
    cin>>width;

    cout<<"The Area of rectangle is "<<Area(length,width);

    return 0;
}