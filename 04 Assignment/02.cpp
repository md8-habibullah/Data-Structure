#include <iostream>
#include <string>
using namespace std;

struct Stack {
    char items[100];
    int top;

    Stack() {
        top = -1;
    }

    void push(char newElement) {
        if (top >= 99) {
            cout << "Stack is Overflow!" << endl;
            return;
        }
        items[++top] = newElement;
    }

    char pop() {
        if (top < 0) {
            return '\0';
        }
        return items[top--];
    }

    bool isEmpty() {
        return (top == -1);
    }
};

bool isBalanced(string exprrr) {
    Stack parenStack;
    for (char character : exprrr) {
        if (character == '(') {
            parenStack.push(character);
        } else if (character == ')') {
            if (parenStack.isEmpty()) {
                return false;
            }
            parenStack.pop();
        }
    }
    return parenStack.isEmpty();
}

int main() {
    string exprrr = "(()())";
    if (isBalanced(exprrr)) {
        cout << "Is balanced: Yes" << endl;
    } else {
        cout << "Is balanced: No" << endl;
    }
    return 0;
}
