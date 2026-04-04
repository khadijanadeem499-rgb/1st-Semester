#include "bank1.h"

int main() {

    Bank client1("Ali", "123", "11101", 1001, 5000);

    client1.viewAccount();

    client1.deposit(2000);
    client1.viewAccount();

    client1.withdraw(8000, "123");  // invalid
    client1.withdraw(3000, "123");  // valid

    client1.viewAccount();

    return 0;
}