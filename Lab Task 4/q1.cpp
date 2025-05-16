#include<iostream>
using namespace std;

void SWAP(int *a, int *b){
    int temp= *b;
    *b=*a;
    *a=temp;

}

int main()
{
    int num1=5;
    int num2=10;
    cout<<num1<< "and "<<num2<<endl;
    SWAP(&num1, &num2);
    cout<<num1<< "and "<<num2<<endl;

    return 0;
}