#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int **arr;

public:
    // Constructor to create matrix of given size
    Matrix(int r = 2, int c = 2) {
        rows = r;
        cols = c;

        // Allocate memory
        arr = new int*[rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[cols];
            for (int j = 0; j < cols; j++)
                arr[i][j] = 0;
        }
    }

    // Destructor to free memory
    ~Matrix() {
        for (int i = 0; i < rows; i++)
            delete[] arr[i];
        delete[] arr;
    }

    // Function to input elements
    void input() {
        cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> arr[i][j];
    }

    // Function to display matrix
    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }

    // Overload + operator for addition
    Matrix operator + (Matrix &m) {
        if (rows != m.rows || cols != m.cols) {
            cout << "Matrix dimensions do not match for addition!\n";
            return Matrix(0,0);
        }
        Matrix temp(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                temp.arr[i][j] = arr[i][j] + m.arr[i][j];
        return temp;
    }
    // Overload * operator for multiplication
    Matrix operator * (Matrix &m) {
        if (cols != m.rows) {
            cout << "Matrix dimensions do not match for multiplication!\n";
            return Matrix(0,0);
        }
        Matrix temp(rows, m.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                temp.arr[i][j] = 0;
                for (int k = 0; k < cols; k++)
                    temp.arr[i][j] += arr[i][k] * m.arr[k][j];
            }
        }
        return temp;
    }
    // Overload == operator for comparison
    bool operator == (Matrix &m) {
        if (rows != m.rows || cols != m.cols)
            return false;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (arr[i][j] != m.arr[i][j])
                    return false;
        return true;
    }
};

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for Matrix 1: ";
    cin >> r1 >> c1;
    Matrix m1(r1, c1);
    m1.input();
    cout << "Enter rows and columns for Matrix 2: ";
    cin >> r2 >> c2;
    Matrix m2(r2, c2);
    m2.input();
    cout << "\nMatrix 1:\n";
    m1.display();
    cout << "Matrix 2:\n";
    m2.display();
    // Addition
    cout << "\nMatrix Addition:\n";
    Matrix sum = m1 + m2;
    sum.display();
    // Multiplication
    cout << "\nMatrix Multiplication:\n";
    Matrix product = m1 * m2;
    product.display();

    // Comparison
    if (m1 == m2)
        cout << "\nMatrices are equal.\n";
    else
        cout << "\nMatrices are not equal.\n";

    return 0;
}
