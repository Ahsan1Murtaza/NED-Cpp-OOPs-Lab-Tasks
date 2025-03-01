#include<iostream>
using namespace std;

bool IsEven(int num){
    if (num%2==0){
        return true;
    }
    return false;
}
int main(){
    int number;
    cout<<"Enter number : ";
    cin>>number;

    int ans=IsEven(number);
    if (ans){
        cout<<"It is Even"<<endl;
    }
    else{
        cout<<"It is Odd"<<endl;
    }

    return 0;
}