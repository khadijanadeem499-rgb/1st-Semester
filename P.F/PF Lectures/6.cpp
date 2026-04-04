#include <iostream>
using namespace std;

int glo = 3;

int sum (){
    cout << glo;
    return 0;
}
int main() {
    int a = 5;
    int b = 10;
    float pi = 3.14;
    char c = 'u';
    int glo = 9;
    glo = 55;
    sum ();
    cout << glo;
    cout <<"the value of pi is "<< pi << endl;   
    cout <<"the value of a is "<< a <<" .\nthe value of b is "<< b << endl;
    cout <<"the value of c is "<< c <<endl;
    return 0;
}