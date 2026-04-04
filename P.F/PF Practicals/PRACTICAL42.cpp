#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Friend function declaration
    friend Complex addComplex(Complex c1, Complex c2);
};

// Friend function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1, c2, sum;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    // Add complex numbers using friend function
    sum = addComplex(c1, c2);

    cout << "\nSum of two complex numbers: ";
    sum.display();

    return 0;
}
