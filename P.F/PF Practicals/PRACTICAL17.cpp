#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
};

int main() {
    Book b;

    // Input
    cout << "Enter book title: ";
    getline(cin, b.title);

    cout << "Enter author name: ";
    getline(cin, b.author);

    cout << "Enter price: ";
    cin >> b.price;

    // Display
    cout << "\n--- Book Information ---\n";
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Price: " << b.price << endl;

    return 0;
}
