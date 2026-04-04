#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;
    int temp = num;
    // Reverse the number using do-while loop
    do {
        int digit = temp % 10;    // Get last digit
        reversed = reversed * 10 + digit;
        temp /= 10;               // Remove last digit
    } while (temp != 0);
    cout << "Reversed number: " << reversed << endl;
    return 0;
}
