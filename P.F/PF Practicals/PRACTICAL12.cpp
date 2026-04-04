#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter number of elements: ";
cin >> n;
int arr[n];
cout << "Enter elements of the array:\n";
for (int i = 0; i < n; i++) {
cin >> arr[i];}
// Reverse the array
for (int i = 0; i < n / 2; i++) {
int temp = arr[i];
arr[i] = arr[n - i - 1];
arr[n - i - 1] = temp;}
cout << "Reversed array:\n";
for (int i = 0; i < n; i++) {
cout << arr[i] << " ";}
return 0;
}
