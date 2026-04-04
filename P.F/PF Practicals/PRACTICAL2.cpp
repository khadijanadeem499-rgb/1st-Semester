32#include <iostream>
using namespace std;

int main() {
double principal, rate, time, simpleInterest;

// Input principal, rate, and time
cout << "Enter principal amount: ";
cin >> principal;
cout << "Enter rate of interest (in %): ";
cin >> rate;
cout << "Enter time (in years): ";
cin >> time;
// Calculate simple interest
simpleInterest = (principal * rate * time) / 100;
// Display result
cout << "Simple Interest is: " << simpleInterest << endl;
return 0;
}

