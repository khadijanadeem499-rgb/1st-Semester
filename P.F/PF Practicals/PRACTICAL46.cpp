#include <iostream>
using namespace std;

class Vector {
private:
    int size;
    int *arr;

public:
    // Constructor
    Vector(int s = 3) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++)
            arr[i] = 0;
    }

    // Destructor
    ~Vector() {
        delete[] arr;
    }

    // Friend function to overload >> for input
    friend istream& operator >> (istream &in, Vector &v);

    // Friend function to overload << for output
    friend ostream& operator << (ostream &out, Vector &v);

    // Friend function to overload * for dot product
    friend int operator * (Vector &v1, Vector &v2);
};

// Overload >> operator for input
istream& operator >> (istream &in, Vector &v) {
    cout << "Enter " << v.size << " elements of vector: ";
    for (int i = 0; i < v.size; i++) {
        in >> v.arr[i];
    }
    return in;
}

// Overload << operator for output
ostream& operator << (ostream &out, Vector &v) {
    out << "(";
    for (int i = 0; i < v.size; i++) {
        out << v.arr[i];
        if (i != v.size - 1)
            out << ", ";
    }
    out << ")";
    return out;
}
// Overload * operator for dot product
int operator * (Vector &v1, Vector &v2) {
    int result = 0;
    if (v1.size != v2.size) {
        cout << "Vectors must be of same size for dot product!\n";
        return 0;
    }
    for (int i = 0; i < v1.size; i++) {
        result += v1.arr[i] * v2.arr[i];
    }
    return result;
}

int main() {
    Vector v1, v2;

    cout << "Input for vector 1:\n";
    cin >> v1;

    cout << "Input for vector 2:\n";
    cin >> v2;

    cout << "\nVector 1: " << v1 << endl;
    cout << "Vector 2: " << v2 << endl;

    int dotProduct = v1 * v2;
    cout << "Dot product of vectors: " << dotProduct << endl;

    return 0;
}
