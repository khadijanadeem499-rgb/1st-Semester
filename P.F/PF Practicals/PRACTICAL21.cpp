#include<iostream>
using namespace std;

int main() {
    int num, i; // Added 'i' for the loop counter
    bool isPrime = true; // Use a boolean variable to track status

    cout << "Enter a number: ";
    cin >> num;

    // 0, 1, and negative numbers are not prime numbers
    if (num <= 1) {
        isPrime = false;
    } else {
        // Check for factors from 2 up to half of the number
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                // If a factor is found, it's not prime
                isPrime = false;
                break; // Exit the loop early
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
