#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insertion at the beginning
    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Deletion of a specific value
    void remove(int value) {
        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            std::cout << "Value not found in the list." << std::endl;
            return;
        }

        if (prev == nullptr) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }

        delete temp;
    }

    // Search for a value
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Traverse and display the list
    void traverse() {
        Node* temp = head;
        std::cout << "List elements: ";
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList myList;

    myList.insert(10);
    myList.insert(20);
    myList.insert(30);

    myList.traverse();

    if (myList.search(20)) {
        std::cout << "Value 20 found in the list." << std::endl;
    } else {
        std::cout << "Value 20 not found in the list." << std::endl;
    }

    myList.remove(20);
    myList.traverse();

    return 0;
}
