#include <iostream>
#include <string>
using namespace std;

class Library {
protected:
    void formatCatalog(const string& title) {
        cout << "Book Title: " << title << endl;
    }
};

class Ebook : public Library {
public:
    void displayEbook(const string& title, const string& format) {
        formatCatalog(title);   // accessible because Ebook inherits from Library
        cout << "E-book Format: " << format << endl;
    }
};

int main() {
    Ebook e;
    e.displayEbook("C++ Programming", "PDF");
    return 0;
}