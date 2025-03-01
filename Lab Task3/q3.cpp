#include<iostream>
using namespace std;

struct Number{
    int num;
};

void Swap(Number &num1, Number &num2){
    int temp = num1.num;
    num1.num = num2.num;
    num2.num = temp;
}

int main()
{
    int value1, value2;
    
    cout<<"Enter the first number: ";
    cin>>value1;
    cout<<"Enter the second number: ";
    cin>>value2;

    Number n1;
    n1.num = value1;
    Number n2;
    n2.num = value2;

    Swap(n1, n2);

    cout<<"The first number is: "<<n1.num<<endl;
    cout<<"The second number is: "<<n2.num<<endl;


    return 0;
}