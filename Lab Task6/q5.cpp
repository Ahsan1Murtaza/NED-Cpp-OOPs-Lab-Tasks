// 5.	 Question: Create a class Car with attributes brand, model, and year. Implement a method to display the details of the car.
#include<iostream>
#include<string>
using namespace std;

class Car{
public:
    int year;
    string model, brand;

    Car( int year, string model, string brand) : year(year), model(model), brand(brand){}

    void showDetails(){
        cout << "Car Model" << model << endl;
        cout << "Car Brand" << brand << endl;
        cout << "Car Year" << year << endl;
    }

};

int main()
{
    Car c1(2021, "Audi", "A4");
    c1.showDetails();
    Car c2(2020, "BMW", "X5");
    c2.showDetails();
    
    return 0;
}