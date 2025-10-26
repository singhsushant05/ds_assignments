#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* createCircularList() {
    Node* head = nullptr;
    Node* tail = nullptr;
    
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    
    if (n <= 0) return nullptr;
    
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
    if (tail) tail->next = head;
    
    return head;
}
void printCircularList(Node* head) {
    if (!head) {
        cout << "List is empty" << endl;
        return;
    }

    Node* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    
    cout << head->data << endl;
}

int main() {
    
    Node* head = createCircularList();
    printCircularList(head);
    
    /*if (head) {
        Node* current = head->next;
        Node* temp;
        while (current != head) {
            temp = current;
            current = current->next;
            delete temp;
        }
        delete head;
    }*/
    return 0;
}