// Question 1: Composition

// Create a Book class that has title, author, and a Date object for the publication date. Implement a method to display the book details.

#include<iostream>
#include<string>
using namespace std;
class Date {
private:
    int day, month, year;
public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }
};
    
class Book{
public:
    string title, author;
    Date publicationDate;
    Book(string t, string a, int day, int month, int year) : title(t), author(a), publicationDate(day, month, year) {}

    void displayDetails(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Published on: ";
        publicationDate.display();
        cout << endl;
    }
};
int main()
{
    Book b("DSA Made Easy", "John", 17, 5, 1988);
    b.displayDetails();
    return 0;
}