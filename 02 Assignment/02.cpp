#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    void insertAfterValue(int value, int newData) {
        Node* current = head;
        while (current != nullptr && current->data != value) {
            current = current->next;
        }
        if (current != nullptr) {
            Node* newNode = new Node{newData, current->next};
            current->next = newNode;
        }
    }

    void insertAtPosition(int position, int newData) {
        if (position < 1) return;
        Node* newNode = new Node{newData, nullptr};
        if (position == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* current = head;
        for (int i = 1; current != nullptr && i < position - 1; ++i) {
            current = current->next;
        }
        if (current != nullptr) {
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void deleteByValue(int value) {
        if (head == nullptr) return;
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }
        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    void deleteAtPosition(int position) {
        if (position < 1 || head == nullptr) return;
        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        for (int i = 1; current != nullptr && i < position - 1; ++i) {
            current = current->next;
        }
        if (current != nullptr && current->next != nullptr) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    void printList() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};

int main() {
    LinkedList list;
    list.insertAtPosition(1, 10);
    list.insertAtPosition(2, 20);
    list.insertAtPosition(3, 30);
    list.printList();

    list.insertAfterValue(10, 25);
    list.printList();

    list.deleteByValue(10);
    list.printList();

    list.insertAtPosition(2, 20);
    list.printList();

    list.deleteAtPosition(3);
    list.printList();

    return 0;
}