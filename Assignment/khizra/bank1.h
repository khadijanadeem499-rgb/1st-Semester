#ifndef BANK1_H
#define BANK1_H

#include <iostream>
using namespace std;

class Bank {
private:
    string clientName;
    string password;
    string cnic;
    int accountNumber;
    double balance;

public:
    Bank(string name, string pass, string id, int accNo, double bal);

    void viewAccount();
    void deposit(double amount);
    void withdraw(double amount, string pass);
    void changeName(string newName, string id);

    double getBalance();
    int getAccountNumber();
};

#endif