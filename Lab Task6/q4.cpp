// 4.	Question: Create a class BankAccount with attributes accountNumber, accountHolder, and balance. Implement methods to deposit and withdraw money from the account.
#include<iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    float balance;

public:
    // Constructor to initialize account details
    BankAccount(string accNumber, string accHolder) {
        accountNumber = accNumber;
        accountHolder = accHolder;
        balance = 0.0;
    }

    // Method to deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw money
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Method to display account details
    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount("123456789", "John Doe");

    // Displaying initial account details
    myAccount.displayAccountDetails();

    // Depositing money
    myAccount.deposit(1000);

    // Withdrawing money
    myAccount.withdraw(500);

    // Displaying final account details
    myAccount.displayAccountDetails();

    return 0;
}
