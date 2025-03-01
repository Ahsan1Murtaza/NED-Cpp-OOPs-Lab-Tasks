#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    float ftemp;
    cout<<"Enter Fahrenheit Temperature : ";
    cin>>ftemp;
    float ctemp=(ftemp-32)*5/9;
    cout<<"Celsius Temperature : "<<ctemp;
    return 0;
}