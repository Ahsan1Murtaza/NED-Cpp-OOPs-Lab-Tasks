#include<iostream>
#include<string>
using namespace std;

struct Employee{
    int employee_id;
    string name;
    string department;
    double salary;
};

void AverageSalary(Employee e[]){
    double total_salary = 0;
    for (int i = 0; i < 5; i++){
        total_salary += e[i].salary;
    }
    double average_salary = total_salary / 5;
    cout<<"Average Salary: "<<average_salary<<endl;
}

int main()
{
    Employee e[5];
    for (int i = 0; i < 5; i++){
        cout<<"Enter the employee id: ";
        cin>>e[i].employee_id;
        cout<<"Enter the name: ";
        cin.ignore();
        getline(cin, e[i].name);
        cout<<"Enter the department: ";
        cin>>e[i].department;
        cout<<"Enter the salary: ";
        cin>>e[i].salary;
    }
    
    // Displaying details
    for (int i = 0; i < 5; i++){
        cout<<"Employee # "<<i+1<<endl;
        cout<<"Employee ID: "<<e[i].employee_id<<endl;
        cout<<"Name: "<<e[i].name<<endl;
        cout<<"Department: "<<e[i].department<<endl;
        cout<<"Salary: "<<e[i].salary<<endl;
    }
    AverageSalary(e);
    return 0;
}