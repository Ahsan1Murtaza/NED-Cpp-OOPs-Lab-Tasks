#include<iostream>
using namespace std;

int main() // SOME ERROR TO BE FIXED
{
    int number1,number2;
    while(true){
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter the first number: ";
        cin>>number1;
        cout<<"Enter the second number: ";
        cin>>number2;

        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        if (choice==5){
            break;
        }
        switch (choice)
        {
        case 1:
            cout<<"The sum is: "<<number1+number2<<endl;
            break;
        case 2:
            cout<<"The difference is: "<<number1-number2<<endl;
            break;
        case 3:
            cout<<"The product is: "<<number1*number2<<endl;
            break;
        case 4:
            cout<<"The division is: "<<number1/number2<<endl;
            break; 

        default:
            cout<<"Invalid choice."<<endl;
            break;
        }

    return 0;
}
}