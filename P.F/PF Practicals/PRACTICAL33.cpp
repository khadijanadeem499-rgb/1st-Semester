#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    void inputAnimal() {
        cout << "Enter Animal Name: ";
        cin >> name;
    }

    void displayAnimal() {
        cout << "Animal Name: " << name << endl;
    }
};

// Derived class from Animal
class Mammal : public Animal {
protected:
    string type;

public:
    void inputMammal() {
        inputAnimal();  // calling Animal function
        cout << "Enter Mammal Type: ";
        cin >> type;
    }

    void displayMammal() {
        displayAnimal(); // calling Animal function
        cout << "Mammal Type: " << type << endl;
    }
};

// Derived class from Mammal
class Dog : public Mammal {
private:
    string breed;

public:
    void inputDog() {
        inputMammal();  // calling Mammal function
        cout << "Enter Dog Breed: ";
        cin >> breed;
    }

    void displayDog() {
        displayMammal(); // calling Mammal function
        cout << "Dog Breed: " << breed << endl;
    }
};

int main() {
    Dog d;
    d.inputDog();

    cout << "\nDog Details\n";
    d.displayDog();

    return 0;
}
