#include<iostream>
using namespace std;

int factorial(int num) {
    if (num < 0){
        return 0;
    }
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = factorial(num);
    if (num < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << num << " is " << result << "." << endl;

    return 0;
}