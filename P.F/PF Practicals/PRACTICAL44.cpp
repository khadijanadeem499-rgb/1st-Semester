#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int **arr;

public:
    // Constructor to create matrix of given size
    Matrix(int r, int c) {
        rows = r;
        cols = c;

        // Allocate memory dynamically
        arr = new int*[rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[cols];
        }
    }
    // Function to insert elements
    void insertElements() {
        cout << "Enter elements of the matrix 
        (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> arr[i][j];
            }
        }
    }

    // Function to display elements
    void displayMatrix() {
        cout << "Matrix elements:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    // Destructor to free memory
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] arr[i];
        }
        delete[] arr;
    }
};

int main() {
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    Matrix m(r, c);

    m.insertElements();
    m.displayMatrix();

    return 0;
}
