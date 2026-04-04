// Q2. Input two values, add and multiply
 #include <iostream>
using namespace std;

int main() {
    double num1, num2;
    
    // Ask user to input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Calculate sum and product
    double sum = num1 + num2;
    double product = num1 * num2;

    // Display results
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;

    return 0;
} 
