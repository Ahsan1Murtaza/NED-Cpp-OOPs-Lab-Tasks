#include<iostream>
#include<string>
using namespace std;
bool CheckPassword(string password){
    int size=password.length();
    if (size>=8){
        int upper=0,lower=0,digit=0,special=0;
        for (int i=0;i<size;i++){
            if (password[i]>='A' && password[i]<='Z'){
                upper++;
            }
            else if (password[i]>='a' && password[i]<='z'){
                lower++;
            }
            else if (password[i]>='0' && password[i]<='9'){
                digit++;
            }
            else{
                special++;
            }
        }
        if (upper>=1 && lower>=1 && digit>=1 && special>=1){
            return true;
        }
    }
    return false;
}

int main()
{
    string password;
    cout<<"Enter the password: ";
    cin>>password;
    if (CheckPassword(password)){
        cout<<"The password is strong."<<endl;
    }
    else{
        cout<<"The password is weak."<<endl;
    }

    return 0;
}