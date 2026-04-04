#include <iostream>
using namespace std;

// Base class
class Teacher {
protected:
    string name;
    string subject;

public:
    void inputTeacher() {
        cout << "Enter Teacher Name: ";
        cin >> name;
        cout << "Enter Subject: ";
        cin >> subject;
    }

    void displayTeacher() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

// Derived class from Teacher
class Researcher : public Teacher {
protected:
    string researchArea;

public:
    void inputResearcher() {
        inputTeacher();   // call base class function
        cout << "Enter Research Area: ";
        cin >> researchArea;
    }

    void displayResearcher() {
        displayTeacher(); // call base class function
        cout << "Research Area: " << researchArea << endl;
    }
};

// Derived class from Researcher
class Professor : public Researcher {
private:
    int experience;

public:
    void inputProfessor() {
        inputResearcher();  // call parent class function
        cout << "Enter Years of Experience: ";
        cin >> experience;
    }

    void displayProfessor() {
        displayResearcher(); // call parent class function
        cout << "Experience: " << experience << " years" << endl;
    }
};

int main() {
    Professor p;
    p.inputProfessor();

    cout << "\nProfessor Details\n";
    p.displayProfessor();

    return 0;
}
