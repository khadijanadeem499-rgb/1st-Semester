#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int *ptr = arr;  // Pointer to the array

    // Input elements using pointer
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    // Display elements using pointer
    cout << "\nThe elements of the array are:\n";
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}
