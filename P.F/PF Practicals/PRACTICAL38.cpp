#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // static data member

public:
    // Constructor
    Counter() {
        count++;  // increment count whenever object is created
    }

    // Static member function to display count
    static void showCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

// Initialize static member
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;

    // Call static function
    Counter::showCount();

    return 0;
}
