// A year is a leap year if it is divisible by 4.
// However, if the year is also divisible by 100, it is not a leap year unless it is also divisible by 400.
#include<iostream>
using namespace std;

bool IsLeap(int year){
    if (year % 4 ==0){
        if (year % 100!=0 || year % 400==0){
        return true;
        }
    }
    return false;
}

int main()
{
    int year;
    cout<<"Enter Year : ";
    cin>>year;
    int result;
    result=IsLeap(year);
    if (result){
        cout<<year<<" is a leap year";
    }
    else{
        cout<<year<<" is not a leap year";
    }
    return 0;
}