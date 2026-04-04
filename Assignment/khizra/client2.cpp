#include "bank1.h"

int main() {

    Bank client2("Sara", "456", "22202", 1002, 7000);

    client2.viewAccount();
    client2.deposit(1000);
    client2.withdraw(2000, "456");
    client2.viewAccount();

    return 0;
}