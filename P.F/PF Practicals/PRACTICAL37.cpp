#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;

    // Open file in append mode
    file.open("data.txt", ios::app);

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string data;
    cout << "Enter data to append: ";
    cin.ignore(); // to ignore any leftover newline
    getline(cin, data);

    file << data << endl; // append data to file
    file.close();

    cout << "Data appended successfully!" << endl;

    return 0;
}
