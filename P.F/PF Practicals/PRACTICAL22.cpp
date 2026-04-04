#include <iostream>
using namespace std;

// Recursive function to calculate power
double power(double base, int exponent) {
    if (exponent == 0)
        return 1; // base^0 = 1
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else // for negative exponents
        return 1 / power(base, -exponent);
}

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << " raised to the power " << exponent << " is: " << power(base, exponent) << endl;

    return 0;
}




