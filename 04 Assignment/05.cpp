#include <iostream>
#include <string>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* head;

    Stack() {
        head = nullptr;
    }

    void push(int newElement) {
        Node* amiHolamNewNode_kochi_babu = new Node;
        amiHolamNewNode_kochi_babu->data = newElement;
        amiHolamNewNode_kochi_babu->next = head;
        head = amiHolamNewNode_kochi_babu;
    }

    int pop() {
        if (head == nullptr) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        int poppedValue = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return poppedValue;
    }
};

int main() {
    Stack s1;
    s1.push(1);
    s1.push(2);

    int poppedElement = s1.pop();
    cout << "popped: " << poppedElement << endl;
    cout << "Current Stack: " << s1.head->data << endl;

    return 0;
}
