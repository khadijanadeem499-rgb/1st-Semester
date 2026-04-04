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

    // Function to input a complex number
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Operator overloading for addition
    Complex operator + (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Operator overloading for multiplication
    Complex operator * (Complex c) {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }
};

int main() {
    Complex c1, c2, sum, product;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    // Perform addition
    sum = c1 + c2;

    // Perform multiplication
    product = c1 * c2;

    cout << "\nSum of complex numbers: ";
    sum.display();

    cout << "Product of complex numbers: ";
    product.display();

    return 0;
}
