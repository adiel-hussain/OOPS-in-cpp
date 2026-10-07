#include <iostream>
using namespace std;
class Book {
public:
    string title;
    string author;

public:
    Book(string t, string a) {
        title = t;
        author = a;
    }
};

class Ebook : public Book {
public:
    float fileSize;
    string fileFormat;

public:
    Ebook(string t, string a, float fs, string ff)
        : Book(t, a) {
        fileSize = fs;
        fileFormat = ff;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "File Size: " << fileSize << " MB" << endl;
        cout << "File Format: " << fileFormat << endl;
    }
};

int main() {
    Ebook ebooks[3] = {
        Ebook("C++ Programming", "Bjarne Stroustrup", 5.5, "PDF"),
        Ebook("Data Structures", "Mark Allen", 4.2, "EPUB"),
        Ebook("Computer Networks", "Andrew Tanenbaum", 6.8, "PDF")
    };
    for (int i = 0; i < 3; i++) {
        ebooks[i].display();
    }

    return 0;
}