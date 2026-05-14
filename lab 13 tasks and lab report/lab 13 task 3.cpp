#include <iostream>   // Library for input and output
#include <string>     // Library for using string

using namespace std;

// Declaring a structure called Book
struct Book
{
    string title;
    string author;
    float price;
    int pages;
};

int main()
{
    // Declaring two variables of type Book
    Book book1, book2;

    // Initializing book1
    book1.title = "C++ Basics";
    book1.author = "Bjarne Stroustrup";
    book1.price = 500.50;
    book1.pages = 300;

    // Initializing book2
    book2.title = "Data Structures";
    book2.author = "Mark Allen Weiss";
    book2.price = 750.75;
    book2.pages = 450;

    // Displaying book1 details
    cout << "Book 1 Details:" << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Price: " << book1.price << endl;
    cout << "Pages: " << book1.pages << endl;

    cout << endl;

    // Displaying book2 details
    cout << "Book 2 Details:" << endl;
    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Price: " << book2.price << endl;
    cout << "Pages: " << book2.pages << endl;

    return 0;
}
