// Question 2: Aggregation 

// Create a Library class that can hold multiple Book objects. Implement methods to add books and display all books in the library.

#include<iostream>
#include<vector>
using namespace std;
class Book{
private:
    string title, author;
public:
    Book(string title, string author){
        this -> title = title;
        this -> author = author;
    }
    void displayDetails() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

class Library{
public:
    vector<Book> books;

    void addBook(Book book){
        books.push_back(book);
    }

    void displayAllBooks(){
        for (Book book : books){
            book.displayDetails();
        }
    }
};
int main()
{
    Library library;
    Book b1("DSA", "John");
    Book b2("Math", "Ali");
    library.addBook(b1);
    library.addBook(b2);

    library.displayAllBooks();
    return 0;
}