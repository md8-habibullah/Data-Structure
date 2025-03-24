#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

class LinkedList {
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void addToFirst(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void reverse() {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;

        while (current) {
            next = current->next; 
            current->next = prev; 
            prev = current; 
            current = next;
        }
        head = prev;

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->value;
            if (temp->next) cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.addToFirst(5);
    list.addToFirst(25);
    list.addToFirst(20);

    cout << "Original listtt: ";
    list.display();

    list.reverse();
    cout << "iam reversed listttttttttttttttttttttt: ";
    list.display();

    return 0;
}
