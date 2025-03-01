#include<iostream>
#include<string>
using namespace std;

struct Student{

    int rollNumber;
    string name;
    int age;
    float marks;
};

float highest_marks(Student s[]){
    float max = s[0].marks;
    for (int i = 1; i < 3; i++){
        if (s[i].marks > max){
            max = s[i].marks;
        }
    }
    return max;
    
}
int main()
{
    Student s[3];
    for (int i = 0; i < 3; i++){
        cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter roll number: ";
        cin>>s[i].rollNumber;
        cout<<"Enter age: ";
        cin>>s[i].age;
        cout<<"Enter marks: ";
        cin>>s[i].marks;
    }
    for (int i = 0; i < 3; i++){
        cout<<"Student # "<<i+1<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Roll number: "<<s[i].rollNumber<<endl;
        cout<<"Age: "<<s[i].age<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
    }

    cout<<"The Highest Marks : "<<highest_marks(s)<<endl;

    return 0;
}