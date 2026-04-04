#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int *ptr = arr;  // Pointer to the array

    // Input elements using pointer
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    // Calculate sum using pointer
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    cout << "\nSum of all elements: " << sum << endl;

    return 0;
}
