#include "LinkedList.h"
#include <iostream>
using namespace std;
int main() {
    LinkedList list;
    int choice, value;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Print\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter a number to insert: ";
                cin >> value;
                list.insert(value);
                break;
            case 2:
                cout << "Enter a number to search: ";
                cin >> value;
                if (list.search(value))
                    cout << "That number was found!\n";
                else
                    cout << "Not Found.\n";
                break;
            case 3:
                list.print();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}