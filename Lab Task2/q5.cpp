#include<iostream>
using namespace std;

int main()
{
    int table_number;
    cout<<"Enter the table number: ";
    cin>>table_number;
    for (int i=1;i<=10;i++){
        cout<<table_number<<" x "<<i<<" = "<<table_number*i<<endl;
    }
    return 0;
}