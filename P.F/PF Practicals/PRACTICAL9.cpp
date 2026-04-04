#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter number of elements: ";
cin >> n;
int arr[n];
// Input elements
cout << "Enter the elements of the array:\n";
for (int i = 0; i < n; i++) {
cin >> arr[i];
}
// Display elements
cout << "The elements in the array are:\n";
for (int i = 0; i < n; i++) {
cout << arr[i] << " ";
}
cout << endl;
return 0;
}
