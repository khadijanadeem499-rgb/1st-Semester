#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks1, marks2, marks3;   // 3 subjects
};

int main() {
    Student s;
    float average;

    // Input
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter marks of 3 subjects:\n";
    cin >> s.marks1 >> s.marks2 >> s.marks3;

    // Calculate average
    average = (s.marks1 + s.marks2 + s.marks3) / 3;

    // Output
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}

