#include <iostream>
#include <string>
using namespace std;

struct MinStack {
    int items[100];
    int babyItem[100];
    int top;

    MinStack() {
        top = -1;
    }

    void push(int newElement) {
        if (top >= 99) {
            cout << "Stack gone Overflow!" << endl;
            return;
        }
        items[++top] = newElement;
        if (top == 0 || newElement <= babyItem[top - 1]) {
            babyItem[top] = newElement;
        } else {
            babyItem[top] = babyItem[top - 1];
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack is Underflow!" << endl;
            return -1;
        }
        return items[top--];
    }

    int getMin() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return babyItem[top];
    }
};

int main() {
    MinStack speStk;
    speStk.push(5);
    speStk.push(3);
    speStk.push(10);

    cout << "Minimum : " << speStk.getMin() << endl;

    speStk.pop();
    cout << "Minimum after PoooooooooP: " << speStk.getMin() << endl;

    return 0;
}
