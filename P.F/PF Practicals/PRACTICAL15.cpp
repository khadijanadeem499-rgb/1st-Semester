#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    Employee emp[5];

    // Input data for 5 employees
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details of employee " << i + 1 << ":\n";

        cout << "Name: ";
        cin.ignore();              // clear previous input
        getline(cin, emp[i].name);

        cout << "ID: ";
        cin >> emp[i].id;

        cout << "Salary: ";
        cin >> emp[i].salary;
    }

    // Display data
    cout << "\n\n--- Employee Information ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "Name: " << emp[i].name << endl;
        cout << "ID: " << emp[i].id << endl;
        cout << "Salary: " << emp[i].salary << endl;
    }
    return 0;
}
