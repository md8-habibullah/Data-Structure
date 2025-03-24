#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) : value(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void addToLast(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

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

LinkedList mergeSortedLists(LinkedList listA, LinkedList listB) {
    LinkedList mergedList;
    Node* headA = listA.head;
    Node* headB = listB.head;
    Node* tail = nullptr;

    if (!headA) {
        mergedList.head = headB;
        return mergedList;
    }
    if (!headB) {
        mergedList.head = headA;
        return mergedList;
    }

    if (headA->value <= headB->value) {
        mergedList.head = headA;
        headA = headA->next;
    } else {
        mergedList.head = headB;
        headB = headB->next;
    }
    tail = mergedList.head;

    while (headA && headB) {
        if (headA->value <= headB->value) {
            tail->next = headA;
            headA = headA->next;
        } else {
            tail->next = headB;
            headB = headB->next;
        }
        tail = tail->next;
    }

    if (headA) {
        tail->next = headA;
    }
    if (headB) {
        tail->next = headB;
    }

    return mergedList;
}

int main() {
    LinkedList listA, listB;

    listA.addToLast(5);
    listA.addToLast(10);

    listB.addToLast(7);
    listB.addToLast(12);

    cout << "List A: ";
    listA.display();
    cout << "List B: ";
    listB.display();

    LinkedList mergedList = mergeSortedLists(listA, listB);

    cout << "Merged List: ";
    mergedList.display();

    return 0;
}
