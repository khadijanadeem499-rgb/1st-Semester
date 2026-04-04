#include <iostream>
using namespace std;
int main() {
int rows, cols;
cout << "Enter number of rows: ";
cin >> rows;
cout << "Enter number of columns: ";
cin >> cols;
int arr[rows][cols];
cout << "Enter elements of the array:\n";
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
cin >> arr[i][j];}}
int sum = 0;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
sum += arr[i][j];}}
cout << "Sum of all elements = " << sum << endl;
return 0;
}
