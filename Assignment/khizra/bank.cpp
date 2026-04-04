#include "bank1.h"

Bank::Bank(string name, string pass, string id, int accNo, double bal) {
    clientName = name;
    password = pass;
    cnic = id;
    accountNumber = accNo;
    balance = bal;
}

void Bank::viewAccount() {
    cout << "\nName: " << clientName;
    cout << "\nAccount No: " << accountNumber;
    cout << "\nBalance: " << balance << endl;
}

void Bank::deposit(double amount) {
    balance += amount;
    cout << "Amount Deposited Successfully\n";
}

void Bank::withdraw(double amount, string pass) {
    if(pass == password) {
        if(amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful\n";
        } else {
            cout << "Invalid Operation: Not Enough Balance\n";
        }
    } else {
        cout << "Wrong Password\n";
    }
}

void Bank::changeName(string newName, string id) {
    if(id == cnic) {
        clientName = newName;
        cout << "Name Changed Successfully\n";
    } else {
        cout << "Invalid CNIC\n";
    }
}

double Bank::getBalance() {
    return balance;
}

int Bank::getAccountNumber() {
    return accountNumber;
}