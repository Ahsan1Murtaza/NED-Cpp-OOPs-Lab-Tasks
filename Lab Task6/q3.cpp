// Question: Create a class Employee with attributes name and salary. Implement a method to display the details of the employee.

#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    float salary;

public:
    
    Employee(string empName, float empSalary) {
        name = empName;
        salary = empSalary;
    }

    // Method to display employee details
    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Creating an object of Employee
    Employee emp("John", 50000);

    // Displaying details
    emp.displayDetails();

    return 0;
}
