#include "bank1.h"

int main() {

    string managerUser = "admin";
    string managerPass = "admin123";

    string inputUser, inputPass;

    cout << "Enter Manager Username: ";
    cin >> inputUser;

    cout << "Enter Manager Password: ";
    cin >> inputPass;

    if(inputUser == managerUser && inputPass == managerPass) {

        Bank c1("Ali", "123", "11101", 1001, 5000);
        Bank c2("Sara", "456", "22202", 1002, 7000);
        Bank c3("Ahmed", "789", "33303", 1003, 10000);

        cout << "\nAll Clients Data:\n";
        c1.viewAccount();
        c2.viewAccount();
        c3.viewAccount();

    } else {
        cout << "Access Denied\n";
    }

    return 0;
}