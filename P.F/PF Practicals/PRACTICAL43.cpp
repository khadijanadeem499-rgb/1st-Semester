#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    string n;
    int a;

    cout << "Enter name of student: ";
    cin >> n;
    cout << "Enter age of student: ";
    cin >> a;

    // Dynamically allocate memory for Student object using constructor
    Student* ptr = new Student(n, a);

    // Access object using pointer
    ptr->display();

    // Free dynamically allocated memory
    delete ptr;

    return 0;
}
