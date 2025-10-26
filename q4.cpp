#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* prev;
    Node* next;
};
Node* createDoublyList() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;
    
    if (n <= 0) return nullptr;
    
    Node* head = nullptr;
    Node* tail = nullptr;
    
    for (int i = 0; i < n; i++) {
        char value;
        cout << "Enter character for node " << i + 1 << ": ";
        cin >> value;
        
        Node* newNode = new Node{value, nullptr, nullptr};
        
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


bool isPalindrome(Node* head) {
    if (!head) return true; 
    
    Node* tail = head;
    while (tail->next) {
        tail = tail->next;
    }
    
    Node* front = head;
    while (front != tail && front->prev != tail) {
        if (front->data != tail->data) return false;
        front = front->next;
        tail = tail->prev;
    }
    
    return true;
}

int main() {
    cout << "Creating Doubly Linked List of characters...\n";
    Node* head = createDoublyList();
    
    // Check if palindrome
    if (isPalindrome(head)) {
        cout << "The list is a palindrome\n";
    } else {
        cout << "The list is not a palindrome\n";
    }
    
    /*Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }*/
    
    return 0;
}