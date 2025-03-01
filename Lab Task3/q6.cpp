#include<iostream>
#include<string>
using namespace std;

struct Book{
string title,author,genre;
int yearOfPublication;

};

void EarliestPublicationYear(Book s[]){
    int year = s[0].yearOfPublication;
    for (int i=0;i<3;i++){
        if (s[i].yearOfPublication < year){
            year = s[i].yearOfPublication;
        }
    }
    cout<<"Earliest Publication is "<<year;
}

int main()
{
    Book b[3];
    // Initializing structure array
    for (int i=0;i<3;i++){
        cout<<"Enter Title : ";
        cin>>b[i].title;
        cout<<"Enter Author : ";
        cin>>b[i].author;
        cout<<"Enter Genre : ";
        cin>>b[i].genre;
        cout<<"Enter Year Of Publication : ";
        cin>>b[i].yearOfPublication;
    }

    // Displaying structure array
    for (int i=0;i<3;i++){
        cout<<"Book : "<<i+1<<endl;
        cout<<"Enter Title : "<<b[i].title<<endl;
        cout<<"Enter Author : "<<b[i].author<<endl;
        cout<<"Enter Genre : "<<b[i].genre<<endl;
        cout<<"Enter Year Of Publication : "<<b[i].yearOfPublication<<endl;
    }

    EarliestPublicationYear(b);
    return 0;
}

