#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void LinkedList::insert(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void LinkedList::print() {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

bool LinkedList::search(int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value)
            return true;
        current = current->next;
    }
    return false;
}

void LinkedList::bubbleSort() {
    if (!head || !head->next) return;
    
    bool swapped;
    Node* ptr;
    Node* last = nullptr;
    
    do {
        swapped = false;
        ptr = head;
        
        while (ptr->next != last) {
            if (ptr->data > ptr->next->data) {
                swap(ptr->data, ptr->next->data);
                swapped = true;
            }
            ptr = ptr->next;
        }
        last = ptr;
    } while (swapped);
}
