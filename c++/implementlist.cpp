#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at end
void insert(Node*& head, int value) {
    Node* newNode = new Node();   // dynamic memory allocation
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
}

// Display list
void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    cout << "List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Delete a node from list
void deleteNode(Node*& head, int value) {
    if (head == nullptr) return;

    Node* temp = head;

    // If first node is to be deleted
    if (temp->data == value) {
        head = temp->next;
        delete temp;
        return;
    }

    // Find previous node
    while (temp->next != nullptr && temp->next->data != value)
        temp = temp->next;

    if (temp->next == nullptr) return;

    Node* del = temp->next;
    temp->next = temp->next->next;
    delete del;
}

int main() {
    Node* head = nullptr;
    int choice, value;

    while (true) {
        cout << "\n1. Insert\n2. Display\n3. Delete\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insert(head, value);
                break;

            case 2:
                display(head);
                break;

            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteNode(head, value);
                break;

            case 4:
                exit(0);

            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}
