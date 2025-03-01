#include<iostream>
#include<string>
using namespace std;

struct Product{
    string product_name;
    int price,quantity;
};
void total_price(int price, int quantity){
    cout<<"The total price is: "<<price*quantity<<endl;
}
int main()
{
    Product p;
    cout<<"Enter the product name: ";
    cin>>p.product_name;
    cout<<"Enter the price: ";
    cin>>p.price;
    cout<<"Enter the quantity: ";
    cin>>p.quantity;
    total_price(p.price, p.quantity);
    
    return 0;
}