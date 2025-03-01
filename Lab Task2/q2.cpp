#include<iostream>
using namespace std;

float CalculateBill(int calls){
    float bill=200;
    if (calls<=100){
        return bill;
    }
    else if (calls>100 && calls<=150){
        return (bill+ (calls-100)*0.60);
    }
    else if (calls>150 && calls<=200){
        return (bill + 50*0.60 + (calls-150)*0.50);
    }
    else if (calls>200){
        return (bill + 50*0.60 + 50*0.50 + (calls-200)*0.40);
    }
    return 0;
}

int main()
{
    int calls;

    cout<<"Enter the number of calls: ";
    cin>>calls;
    float bill;
    bill=CalculateBill(calls);
    cout<<"The bill is: "<<bill<<endl;
    return 0;
}