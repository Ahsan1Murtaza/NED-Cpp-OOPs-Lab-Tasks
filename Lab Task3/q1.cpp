#include<iostream>
#include<string>
using namespace std;

struct Person{
    string name;
    int age;
};
int main()
{
    Person p;
    p.name = "Aslam";
    p.age = 20;
    cout<<"The Person "<<p.name<<" is "<<p.age<<" years old."<<endl;
    
    return 0;
}