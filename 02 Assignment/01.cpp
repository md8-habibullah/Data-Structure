#include <iostream>

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
public:
    SinglyLinkedList() : head(nullptr) {}

    void addAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void addAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data;
            if (temp->next != nullptr) {
                std::cout << " -> ";
            }
            temp = temp->next;
        }
        std::cout << std::endl;
    }

private:
    Node* head;
};

int main() {
    SinglyLinkedList list;
    list.addAtBeginning(5);
    list.addAtEnd(10);
    list.addAtEnd(15);

    std::cout << "Linked List: ";
    list.printList();

    return 0;
}