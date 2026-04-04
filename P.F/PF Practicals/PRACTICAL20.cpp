#include <iostream>
using namespace std;

// Function to swap two numbers
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nBefore swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call the swap function
    swapNumbers(num1, num2);

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

