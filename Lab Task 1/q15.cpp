#include<iostream>
using namespace std;

int main()
{
    int digit;
    int reverse=0;
    cout<<"Enter a digit : ";
    cin>>digit;
    while(digit != 0){
        reverse=reverse*10 + digit%10;
        digit=digit/10;
    }
    cout<<"Reverse : "<<reverse;
    return 0;
}