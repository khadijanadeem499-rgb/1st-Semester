5#include <iostream>
using namespace std;
int main() {
int num1, num2;
cout << "Enter two numbers: ";
cin >> num1 >> num2;

if (num1 > num2) {

cout << "The maximum number is: " << num1 << endl;
} else if (num2 > num1) {
cout << "The maximum number is: " << num2 << endl;
} else {
cout << "Both numbers are equal: " << num1 << endl;
}
return 0;
}
