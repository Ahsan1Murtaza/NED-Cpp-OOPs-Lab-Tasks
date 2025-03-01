#include<iostream>
#include<cmath>
using namespace std;
bool IsArmstrong(int number){
    int original_number=number;
    int sum=0;
    while(number!=0){
        sum += pow((number % 10),3);
        number=number/10;
    }
    return (sum==original_number);
}
int main()
{
    int number=153;
    int result;
    result=IsArmstrong(number);
    if (result){
        cout<<number<<" is an Arm strong number"<<endl;
    }
    else{
        cout<<number<<" is not an Arm strong number"<<endl;
    }
    return 0;
}