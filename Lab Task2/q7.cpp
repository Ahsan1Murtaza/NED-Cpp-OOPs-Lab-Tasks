#include<iostream>
using namespace std;
void Fibonacci(int n){
    int first=0;
    int second=1;
    int temp;
    for (int i=0;i<n/2;i++){
        cout<<first<<" ";
        cout<<second<<" ";
        temp=first+second;
        second=second+temp;
        first=temp;

    }
}

int main()
{
    int number;
    cout<<"Enter number till you want Fibonacci Series : ";
    cin>>number;
    Fibonacci(number);
    return 0;
}