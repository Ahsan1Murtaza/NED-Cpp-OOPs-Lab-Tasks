#include<iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;

    cout << "Enter time in seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds/3600;
    totalSeconds%=3600;
    minutes=totalSeconds/60;
    totalSeconds%=60;
    seconds=totalSeconds;

    cout<<"Hour : "<<hours<<endl;
    cout<<"Minutes : "<<minutes<<endl;
    cout<<"Seconds : "<<seconds<<endl;

    return 0;
}