#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

Node* createList(bool makeCircular) {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    
    if (n <= 0) return nullptr;
    
    Node* head = nullptr;
    Node* tail = nullptr;
    
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        
        Node* newNode = new Node{value, nullptr};
        
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    if (makeCircular && tail) {
        cout << "Make the list circular? (1 for yes, 0 for no): ";
        int choice;
        cin >> choice;
        if (choice == 1) tail->next = head;
    }
    
    return head;
}

bool isCircular(Node* head) {
    if (!head) return false;
    
    Node* slow = head;
    Node* fast = head;
    
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true; 

    }
    
    return false;
}
int main() {
    
    cout << "Creating Linked List...\n";
    Node* head = createList(true);
    
    if (isCircular(head)) {
        cout << "The list is a Circular Linked List\n";
    } else {
        cout << "The list is not a Circular Linked List\n";
    }
    
    // Clean up memory
    if (head && !isCircular(head)) {
        Node* current = head;
        while (current) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    } else if (head) {
        Node* current = head->next;
        while (current != head) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        delete head;
    }
    
    return 0;
}