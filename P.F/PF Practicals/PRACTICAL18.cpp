#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle rect;
    float area;

    // Input
    cout << "Enter length of the rectangle: ";
    cin >> rect.length;

    cout << "Enter width of the rectangle: ";
    cin >> rect.width;

    // Calculate area
    area = rect.length * rect.width;

    // Display
    cout << "\nArea of the rectangle: " << area << endl;

    return 0;
}







