#include <iostream>
// Added a semicolon to the 'using namespace std' line
using namespace std;

// Added parentheses after 'main'
int main() {
    int num1, num2, sum; // Added a semicolon here
    
    // input two numbers
    cout << "Enter First Number= ";
    // Removed the "num1= " string literal from the input statement
    cin >> num1; 
    
    cout << "Enter Second Number= ";
    // The cin statement was missing here in the original code
    cin >> num2; 
    
    // calculate sum
    sum = num1 + num2; // Added a semicolon here
    
    // Output sum
    // Added stream insertion operators (<<) between the variables and strings
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    
    // You can also add 'return 0;' at the end of the main function if you wish
    return 0;
}

