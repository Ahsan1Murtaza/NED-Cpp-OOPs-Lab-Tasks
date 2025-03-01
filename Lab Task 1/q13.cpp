#include<iostream>
using namespace std;

int main()
{
    int money;
    cout<<"Enter Money : ";
    cin>>money;

    int notes[9]={1000,500,200,100,50,10,5,2,1};
    for (int i:notes){
        cout<<i<<" : "<<money/i<<endl;
        money=money%i;
    }
    return 0;
}