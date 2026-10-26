import java.util.ArrayList;
class Book {
    private String isbn;
    private String title;
    private String author;
    private double price;

    public Book(String isbn, String title, String author, double price) {
        this.isbn = isbn;
        this.title = title;
        this.author = author;
        this.price = price;
    }

    public String getIsbn() {
        return isbn;
    }

    public void display() {
        System.out.println("ISBN: " + isbn + " | Title: " + title + " | Author: " + author + " | Price: " + price);
    }
}

class Library {
    private ArrayList<Book> books = new ArrayList<>();

    public boolean addBook(Book book) {
        for (Book b : books) {
            if (b.getIsbn().equals(book.getIsbn())) {
                return false;
            }
        }
        books.add(book);
        return true;
    }

    public Book searchBook(String isbn) {
        for (Book b : books) {
            if (b.getIsbn().equals(isbn)) {
                return b;
            }
        }
        return null;
    }

    public boolean removeBook(String isbn) {
        Book b = searchBook(isbn);
        if (b != null) {
            books.remove(b);
            return true;
        }
        return false;
    }

    public void displayAll() {
        for (Book b : books) {
            b.display();
        }
    }
}

public class LibraryBookInventoryusingArrayList {
    public static void main(String[] args) {
        Library lib = new Library();
        lib.addBook(new Book("B101", "Java Basics", "Author A", 500));
        lib.addBook(new Book("B102", "Advanced Java", "Author B", 700));
        lib.addBook(new Book("B101", "Duplicate Book", "Author C", 300));

        System.out.println("All Books:");
        lib.displayAll();

        System.out.println("\nSearching B102:");
        Book found = lib.searchBook("B102");
        if (found != null) found.display();

        lib.removeBook("B101");
        System.out.println("\nAfter Removing B101:");
        lib.displayAll();
    }
}