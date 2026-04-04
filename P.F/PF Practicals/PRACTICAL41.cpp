#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
private:
    int num1;
public:
    void setData(int n) {
        num1 = n;
    }

    friend void findMax(A, B); // Friend function declaration
};

class B {
private:
    int num2;
public:
    void setData(int n) {
        num2 = n;
    }

    friend void findMax(A, B); // Friend function declaration
};

// Friend function definition
void findMax(A a, B b) {
    if (a.num1 > b.num2)
        cout << "Maximum number is: " << a.num1 << endl;
    else
        cout << "Maximum number is: " << b.num2 << endl;
}

int main() {
    A objA;
    B objB;
    int n1, n2;

    cout << "Enter number for class A: ";
    cin >> n1;
    objA.setData(n1);

    cout << "Enter number for class B: ";
    cin >> n2;
    objB.setData(n2);

    findMax(objA, objB);

    return 0;
}
