#include <iostream>
using namespace std;
class Book
{
public:
    int bookID;
    string title;
    int copies;
    Book(int id, string t, int c)
    {
        bookID = id;
        title = t;
        copies = c;
    }
    void exchange(Book &other)
    {
        swap(bookID, other.bookID);
        swap(title, other.title);
        swap(copies, other.copies);
    }
};
Book moreCopies(Book b1, Book b2)
{
    if (b1.copies > b2.copies)
        {return b1;}
    else
        {return b2;}
}

int main()
{
    Book b1(101, "C++ Programming", 5);
    Book b2(102, "Data Structures", 8);
    cout << "Before Exchange:" << endl;
    cout << b1.bookID << " " << b1.title << " " << b1.copies << endl;
    cout << b2.bookID << " " << b2.title << " " << b2.copies << endl;
    b1.exchange(b2);
    cout << "\nAfter Exchange:" << endl;
    cout << b1.bookID << " " << b1.title << " " << b1.copies << endl;
    cout << b2.bookID << " " << b2.title << " " << b2.copies << endl;
    Book result = moreCopies(b1, b2);
    cout << "\nBook with More Copies:" << endl;
    cout << "Book ID: " << result.bookID << endl;
    cout << "Title: " << result.title << endl;
    cout << "Copies: " << result.copies << endl;
    return 0;
}