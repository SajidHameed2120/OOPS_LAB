#include <iostream>
using namespace std;

class Library {
public:
    void formatCatalog() {
        cout << "Formatting library catalog..." << endl;
    }
};

class Book : public Library {
public:
    void displayBook() {
        cout << "Physical Book: C++ Programming" << endl;
    }
};

class EBook : public Library {
public:
    void displayEBook() {
        cout << "Digital E-Book: Object Oriented Programming" << endl;
    }
};

int main() {
    Book b;
    EBook e;

    b.formatCatalog();
    b.displayBook();

    e.formatCatalog();
    e.displayEBook();

    return 0;
}