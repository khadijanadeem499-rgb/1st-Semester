#include <iostream>
using namespace std;

class Employee {
private:
    int emp_id;
    string emp_name;
    float salary;

public:
    // Function to input employee details
    void input() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Employee Name: ";
        cin >> emp_name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display employee details
    void display() {
        cout << "\nEmployee Details\n";
        cout << "ID: " << emp_id << endl;
        cout << "Name: " << emp_name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();

    return 0;
}
