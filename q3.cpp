#include <iostream>
using namespace std;

struct DoublyNode {
    int data;
    DoublyNode* prev;
    DoublyNode* next;
};
struct CircularNode {
    int data;
    CircularNode* next;
};
DoublyNode* createDoublyList() {
    DoublyNode* head = nullptr;
    DoublyNode* tail = nullptr;
    
    int n;
    cout << "Enter number of nodes for Doubly Linked List: ";
    cin >> n;
    
    if (n <= 0) return nullptr;
    
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        
        DoublyNode* newNode = new DoublyNode{value, nullptr, nullptr};
        
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    
    return head;
}
CircularNode* createCircularList() {
    CircularNode* head = nullptr;
    CircularNode* tail = nullptr;
    
    int n;
    cout << "Enter number of nodes for Circular Linked List: ";
    cin >> n;
    
    if (n <= 0) return nullptr;
    
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        
        CircularNode* newNode = new CircularNode{value, nullptr};
        
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    if (tail) tail->next = head;
    
    return head;
}

// size of Doubly Linked List
int getDoublyListSize(DoublyNode* head) {
    int size = 0;
    DoublyNode* current = head;
    
    while (current) {
        size++;
        current = current->next;
    }
    
    return size;
}

// size of Circular Linked List
int getCircularListSize(CircularNode* head) {
    if (!head) return 0;
    
    int size = 0;
    CircularNode* current = head;
    
    do {
        size++;
        current = current->next;
    } while (current != head);
    
    return size;
}

int main() {
    cout << "Creating Doubly Linked List...\n";
    DoublyNode* doublyHead = createDoublyList();
    cout << "Size of Doubly Linked List: " << getDoublyListSize(doublyHead) << endl;
    
    cout << "\nCreating Circular Linked List...\n";
    CircularNode* circularHead = createCircularList();
    cout << "Size of Circular Linked List: " << getCircularListSize(circularHead) << endl;
    

    DoublyNode* currentD = doublyHead;
    while (currentD) {
        DoublyNode* temp = currentD;
        currentD = currentD->next;
        delete temp;
    }

    /*if (circularHead) {
        CircularNode* currentC = circularHead->next;
        CircularNode* temp;
        while (currentC != circularHead) {
            temp = currentC;
            currentC = currentC->next;
            delete temp;
        }
        delete circularHead;
    }*/
    
    return 0;
}