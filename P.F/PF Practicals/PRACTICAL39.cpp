#include <iostream>
#include <vector>
using namespace std;

class Item {
public:
    int code;
    string name;
    float price;
    Item(int c, string n, float p) {
        code = c;
        name = n;
        price = p;
    }
};

class ShoppingList {
private:
    vector<Item> items;
public:
    // Add item to list
    void addItem(int code, string name, float price) {
        Item newItem(code, name, price);
        items.push_back(newItem);
        cout << "Item added successfully.\n";
    }
    // Delete item by code
    void deleteItem(int code) {
        bool found = false;
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->code == code) {
                items.erase(it);
                found = true;
                cout << "Item deleted successfully.\n";
                break;
            }
        }
        if (!found) {
            cout << "Item with code " << code << " not found.\n";
        }
    }

    // Print total value of order
    void printTotal() {
        float total = 0;
        cout << "\nShopping List:\n";
        cout << "Code\tName\tPrice\n";
        for (auto &item : items) {
            cout << item.code << "\t" << item.name << "\t" << item.price << endl;
            total += item.price;
        }
        cout << "Total Value: " << total << endl;
    }
};
int main() {
    ShoppingList store;
    int choice;
    do {
        cout << "\n--- Departmental Store Menu ---\n";
        cout << "1. Add Item\n";
        cout << "2. Delete Item\n";
        cout << "3. Print Total\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            int code;
            string name;
            float price;
            cout << "Enter Item Code: ";
            cin >> code;
            cout << "Enter Item Name: ";
            cin >> name;
            cout << "Enter Item Price: ";
            cin >> price;
            store.addItem(code, name, price);
            break;
        }
        case 2: {
            int code;
            cout << "Enter Item Code to delete: ";
            cin >> code;
            store.deleteItem(code);
            break;
        }
        case 3:
            store.printTotal();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);
    return 0;
}
