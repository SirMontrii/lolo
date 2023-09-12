#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Insertion at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insertion at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Insertion at a specific position (0-based index)
    void insertAtPosition(int value, int position) {
        if (position < 0) {
            cout << "Invalid position." << endl;
            return;
        }

        if (position == 0) {
            insertAtBeginning(value);
        } else {
            Node* newNode = new Node(value);
            Node* current = head;
            int currentPosition = 0;

            while (current && currentPosition < position - 1) {
                current = current->next;
                currentPosition++;
            }

            if (!current) {
                cout << "Invalid position." << endl;
                return;
            }

            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Deletion at the beginning of the list
    void deleteAtBeginning() {
        if (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Deletion at the end of the list
    void deleteAtEnd() {
        if (!head) {
            return;
        }

        if (!head->next) {
            delete head;
            head = nullptr;
        } else {
            Node* current = head;
            while (current->next->next) {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }
    }

    // Display the linked list
    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList myList;

    myList.insertAtBeginning(1);
    myList.insertAtEnd(3);
    myList.insertAtBeginning(0);
    myList.insertAtPosition(2, 2);

    cout << "Linked List: ";
    myList.display();

    myList.deleteAtEnd();
    myList.deleteAtBeginning();

    cout << "Linked List after deletion: ";
    myList.display();

    return 0;
}
