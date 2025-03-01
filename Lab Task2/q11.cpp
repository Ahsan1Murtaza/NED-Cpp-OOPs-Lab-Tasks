#include<iostream>
using namespace std;

int main()
{
    // First
    // Upper triangle
    for (int i=1;i<=5;i++){
        // for giving spaces
        for (int j=5-i;j>0;j--){
            cout<<" ";
        }
        // for giving stars
        for (int k=1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower triangle
    for (int i=5-1;i>0;i--){
        // for giving spaces
        for (int j=1;j<5-i+1;j++){
            cout<<" ";
        }
        // for giving stars
        for (int k=1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }


    // Second
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (i==0 || i==4 || j==0 || j==4){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    // Third
    for (int i=1;i<=5;i++){
        // pehle spaces print karenge
        for (int s=i;s<=5-1;s++){
            cout<<" ";
        }
        // phir decreasing print karenge
        for (int j=i;j>1;j--){
            cout<<j;
        }
        // ab increasing print karenge
        for (int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }

    // Fourth
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Fifth
    // Printing upper side with one full line
    for (int i=1;i<=5;i++){
        // printing left triangle
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        // printing spaces
        for (int s=9-(2*i);s>=0;s--){
            cout<<" ";
        }
        // printing right triangle
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Printing lower side with one full line
    for (int i=5;i>=1;i--){
        // printing left triangle
        for (int j=i;j>=1;j--){
            cout<<"*";
        }
        //printing spaces
        for (int s=9-(2*i);s>=0;s--){
            cout<<" ";
        }
        // printing right triangle
        for (int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}