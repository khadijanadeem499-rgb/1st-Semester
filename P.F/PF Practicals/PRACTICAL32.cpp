#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNo;
    string course;

public:
    void inputStudent() {
        inputPerson();   // calling base class function
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Course: ";
        cin >> course;
    }

    void displayStudent() {
        displayPerson(); // calling base class function
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s;
    s.inputStudent();
    cout << "\nStudent Details\n";
    s.displayStudent();

    return 0;
}
