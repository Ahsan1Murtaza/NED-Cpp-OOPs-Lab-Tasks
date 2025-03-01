#include<iostream>
using namespace std;
void Fibonacci(int num){
    cout<<"The Fibonacci Series is" ;
    int first=0,second=1,temp;
    for (int i=0;i<num;i++){
        cout<<first<<" ";
        temp=first;
        first=second;
        second=temp + second;
    }
}

int main()
{
    int number;
    cout<<"Enter number : ";
    cin>>number;
    Fibonacci(number);
    return 0;
}