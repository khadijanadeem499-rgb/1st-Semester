#include "bank1.h"

int main() {

    Bank client3("Ahmed", "789", "33303", 1003, 10000);

    client3.viewAccount();
    client3.withdraw(5000, "789");
    client3.changeName("Ahmad Khan", "33303");
    client3.viewAccount();

    return 0;
}