// Question 2: Employee Salary Calculation

// Problem Statement:
// Create an abstract class Employee with a pure virtual function calculateSalary(). Derive two classes PermanentEmployee and ContractEmployee from Employee. Implement the calculateSalary() function in both derived classes. Write a program to calculate the salary of a permanent employee and a contract employee.

#include <iostream>
#include <string>
using namespace std;
// Abstract class Employee
class Employee {
public:
    // Pure virtual function for calculating salary
    virtual float calculateSalary() = 0;
};

// Derived class for Permanent Employee
class PermanentEmployee : public Employee {
private:
    float monthlySalary;
public:
    PermanentEmployee(float salary) : monthlySalary(salary) {}
    float calculateSalary() override {
        return monthlySalary;
    }
};

// Derived class for Contract Employee
class ContractEmployee : public Employee { // Contract employee salary is calculated based on hourly rate and hours worked
private:
    float hourlyRate;
    int hoursWorked;
public:
    ContractEmployee(float rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}
    float calculateSalary() override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Employee* emp1 = new PermanentEmployee(5000);
    Employee* emp2 = new ContractEmployee(20, 160);

    cout << "Permanent Employee Salary: " << emp1->calculateSalary() << endl;
    cout << "Contract Employee Salary: " << emp2->calculateSalary() << endl;

    // Clean up dynamically allocated memory
    delete emp1;
    delete emp2;

    return 0;
}