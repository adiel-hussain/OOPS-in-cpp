#include <iostream>
#include <string>
using namespace std;
class Book
{
    int bookID;
    string bookName;
    float price;
    static int totalBooks;
public:
    Book(int id, string name, float p)
    {
        bookID = id;
        bookName = name;
        price = p;
        totalBooks++;
    }
    inline float discountPrice()
    {
        return price - (price * 10 / 100);
    }
    bool operator>(Book b)
    {
        return price > b.price;
    }
    static void displayTotalBooks()
    {
        cout << "Total Books = " << totalBooks << endl;
    }
    friend void displayCostlier(Book b);
};
int Book::totalBooks = 0;
void displayCostlier(Book b)
{
    cout << "\nCostlier Book:" << endl;
    cout << "ID: " << b.bookID << endl;
    cout << "Name: " << b.bookName << endl;
    cout << "Price: " << b.price << endl;
}
int main()
{
    Book b1(101, "OOP in C++", 500);
    Book b2(102, "C++ Programming", 700);
    cout << "Book 1 Price = 500" << endl;
    cout << "Book 2 Price = 700" << endl;
    if (b1 > b2)
    {
        displayCostlier(b1);
    }
    else
    {
        displayCostlier(b2);
    }
    Book::displayTotalBooks();
    if (b1 > b2)
    {
        cout << "Discounted Price = " << b1.discountPrice() << endl;
    }
    else
    {
        cout << "Discounted Price = " << b2.discountPrice() << endl;
    }
    return 0;
}