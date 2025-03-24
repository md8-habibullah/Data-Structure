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
            cout << "Stack Overflow!" << endl;
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

string rS(string givenString) {
    Stack charStack;
    string revStr = "";
    // its called for each loop, lookup header <string>
    for (char character : givenString) {
        charStack.push(character);
    }

    while (!charStack.isEmpty()) {
        revStr += charStack.pop();
    }

    return revStr;
}

int main() {
    string ol = "I wanna go to ReVeRsEddddddddddd";
    string revStr = rS(ol);
    cout << "Reversed string: " << revStr << endl;
    return 0;
}
