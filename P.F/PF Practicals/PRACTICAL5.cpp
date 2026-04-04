#include <iostream>
using namespace std;

int main() {
int n;
unsigned long long factorial = 1;  // Use long long for large factorials
cout << "Enter a number: ";
cin >> n;
if (n < 0) {
cout << "Factorial is not defined for negative numbers." << endl;
} 
else {
int i = 1;
while (i <= n) {
factorial *= i;
i++;
}
cout << "Factorial of " << n << " is: " << factorial << endl;
}
return 0;
}
