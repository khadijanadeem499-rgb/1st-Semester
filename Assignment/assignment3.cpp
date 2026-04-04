#include <iostream>
#include <cmath> // For pow()
using namespace std;

int main() {
    double x, a, b, c;

    // Equation 1: y = x^2 + 2x + 1
    cout << "Equation 1: y = x^2 + 2x + 1" << endl;
    cout << "Enter value of x: ";
    cin >> x;
    double y = pow(x, 2) + 2*x + 1;
    cout << "Result of y = " << y << endl << endl;

    // Equation 2: z = (a+b)/c
    cout << "Equation 2: z = (a + b)/c" << endl;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c (cannot be 0): ";
    cin >> c;

    if(c != 0){
        double z = (a + b)/c;
        cout << "Result of z = " << z << endl;
    } else {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    return 0;
}

// Q3. Evaluate two mathematical equations