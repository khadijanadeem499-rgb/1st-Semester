#include <iostream>
using namespace std;

class Manager {
private:
    string name;
    int age;
    string department;

public:
    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Department: ";
        cin >> department;
    }

    void display() {
        cout << "Name: " << name << "\tAge: " << age << "\tDepartment: " << department << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of managers: ";
    cin >> n;

    Manager managers[n];  // Array of objects

    // Input details for each manager
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Manager " << i + 1 << ":\n";
        managers[i].input();
    }

    // Display details of all managers
    cout << "\nList of Managers:\n";
    for (int i = 0; i < n; i++) {
        managers[i].display();
    }

    return 0;
}
