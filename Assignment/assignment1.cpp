    // Q1. Display formatted output using <iomanip> 
#include <iostream>
#include <iomanip> // For setiosflags
using namespace std;

int main() {
    // Output using iomanip
    cout << setiosflags(ios::left) << setw(12) << "Name" << ": " << "MyName" << endl;
    cout << setiosflags(ios::left) << setw(12) << "FName" << ": " << "MyFatherName" << endl;
    cout << setiosflags(ios::left) << setw(12) << "RollNo" << ": " << "#######"
         << setiosflags(ios::right) << setw(15) << "Semester" << " : ###" << endl;

    return 0;
}