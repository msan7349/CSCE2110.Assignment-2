#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() {
    LinkedList list;
    int choice, value;
    
    do {
        cout << "\nMenu:\n1. Insert\n2. Search\n3. Print\n4. Sort (Bubble Sort)\n5. Exit\nEnter your choice: ";
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
                    cout << "Found!\n";
                else
                    cout << "Not Found.\n";
                break;
            case 3:
                cout << "Linked List: ";
                list.print();
                break;
            case 4:
                cout << "Unsorted List: ";
                list.print();
                list.bubbleSort();                
                cout << "Sorted List: ";
                list.print();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);
    
    return 0;
}