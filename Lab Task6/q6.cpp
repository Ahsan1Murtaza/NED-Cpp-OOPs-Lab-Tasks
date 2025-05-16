// 6.	 Question: Create a class Fraction with attributes numerator and denominator. Implement a method to simplify the fraction.

#include<iostream>
using namespace std;

class Fraction{
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom) {
        numerator = num;
        denominator = denom;
    }

    void simplify() {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    void display() {
        cout << "Fraction: " << numerator << "/" << denominator << endl;
    }

    int findGCD(int a, int b){
        if (b == 0)
            return a;
        return findGCD(b, a % b);
    }
};
int main()
{
    Fraction f1(4, 8);
    f1.simplify();
    f1.display();
    return 0;
}