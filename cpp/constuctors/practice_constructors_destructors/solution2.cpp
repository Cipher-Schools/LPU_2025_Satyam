#include <iostream>
#include <cstring>
using namespace std;

class Book {
    string *title;

public:
    // Constructor
    Book(string t) {
        title = new string;
        *title=t;
        cout << "Constructor called for: " << *title << endl;
    }

    // Copy Constructor (Deep Copy)
    Book(const Book &b) {
        title = new string;
        *title= *b.title;
        cout << "Copy constructor called (Deep Copy) for: " << *title << endl;
    }

    // Destructor
    ~Book() {
        cout << "Destructor freeing memory for: " << *title << endl;
        delete title;
    }

    // Modify title
    void changeTitle(string new_title) {
        *title=new_title;
    }

    // Show
    void show() const {
        cout << "Book title: " << *title << endl;
    }
};

int main() {
    Book b1("C++ Fundamentals");
    Book b2 = b1; // Deep copy

    cout << "\n--- Original and Copy ---\n";
    b1.show();
    b2.show();

    cout << "\n--- Modify Copy Title ---\n";
    b2.changeTitle("Advanced C++");
    b1.show();
    b2.show();

    cout << "\n--- Program End ---\n";
    return 0;
}
