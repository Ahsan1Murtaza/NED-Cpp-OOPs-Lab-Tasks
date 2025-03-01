#include<iostream>
using namespace std;

int main()
{
    int amount,rate,time,SimpleInterest;
    cout << "Enter principal amount: ";
    cin >> amount;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;

    SimpleInterest=(amount * rate * time)/100;
    cout<<"The Simple Interest is "<<SimpleInterest;

    return 0;
}