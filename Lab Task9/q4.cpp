// Question 4: Payment Processing System

// Problem Statement:
// Create an abstract class Payment with a pure virtual function processPayment(). Derive two classes CreditCardPayment and PaypalPayment from Payment. Implement the processPayment() function in both derived classes. Write a program to process a payment through credit card and PayPal.


#include <iostream>
#include <string>
using namespace std;
// Abstract class Payment
class Payment {
public:
    // Pure virtual function for processing payment
    virtual void processPayment(float amount) = 0;
};
// Derived class CreditCardPayment
class CreditCardPayment : public Payment {
public:
    // Implementing processPayment() function for Credit Card
    void processPayment(float amount) override {
        cout << "Processing Credit Card payment of $" << amount << endl;
    }
};

// Derived class PaypalPayment
class PaypalPayment : public Payment {
public:
    // Implementing processPayment() function for PayPal
    void processPayment(float amount) override {
        cout << "Processing PayPal payment of $" << amount << endl;
    }
};

// Main function
int main() {
    // Creating objects of CreditCardPayment and PaypalPayment
    Payment* payment1 = new CreditCardPayment();
    Payment* payment2 = new PaypalPayment();
    
    // Processing payments
    payment1->processPayment(100.50);
    payment2->processPayment(75.25);
    
    // Clean up dynamically allocated memory
    delete payment1;
    delete payment2;
    
    return 0;
}