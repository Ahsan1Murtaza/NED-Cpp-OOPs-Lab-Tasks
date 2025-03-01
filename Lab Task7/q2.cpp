// Question 2: Constructor in Derived Class

// Create a base class Person with attributes name and age. Create a derived class Student with an additional attribute studentID. Initialize these attributes using constructors.
#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}
};

class Student : public Person{
public:
    string studentID;
    Student(string n, int a, string stid) : Person(n, a), studentID(stid) {}
};

int main()
{
    Person p1("Aslam", 19);
    Student s1("Farhan",19,"1234");
    return 0;
}