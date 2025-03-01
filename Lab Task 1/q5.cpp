#include<iostream>
#include<string>
using namespace std;

void Reverse(string phrase){
    cout<<"The reversed of "<<phrase<<"is ";
    for (int i=phrase.length()-1;i>=0;i--){
        cout<<phrase[i];
    }
}
int main(){
    string phrase;
    cout<<"Enter phrase : ";
    getline(cin,phrase);
    Reverse(phrase);

    return 0;
}