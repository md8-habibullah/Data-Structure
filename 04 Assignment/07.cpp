#include <iostream>
#include <string>
using namespace std;

struct boring_Stack_but_Easier_so_Much {
    int items[100];
    int top;

    boring_Stack_but_Easier_so_Much() {
        top = -1;
    }

    void push(int newElement) {
        if (top >= 99) {
            cout << "boring_Stack_but_Easier_so_Much Overflow!" << endl;
            return;
        }
        items[++top] = newElement;
    }

    int pop() {
        if (top < 0) {
            cout << "boring_Stack_but_Easier_so_Much Underflow!" << endl;
            return -1;
        }
        return items[top--];
    }

    bool isEmpty() {
        return (top == -1);
    }

    int peek() {
        if (top < 0) {
            return -1;
        }
        return items[top];
    }
};

void sortboring_Stack_but_Easier_so_Much(boring_Stack_but_Easier_so_Much& mainboring_Stack_but_Easier_so_Much) {
    boring_Stack_but_Easier_so_Much tempboring_Stack_but_Easier_so_Much;

    while (!mainboring_Stack_but_Easier_so_Much.isEmpty()) {
        int tmpElement = mainboring_Stack_but_Easier_so_Much.pop();

        while (!tempboring_Stack_but_Easier_so_Much.isEmpty() && tempboring_Stack_but_Easier_so_Much.peek() > tmpElement) {
            mainboring_Stack_but_Easier_so_Much.push(tempboring_Stack_but_Easier_so_Much.pop());
        }

        tempboring_Stack_but_Easier_so_Much.push(tmpElement);
    }

    while (!tempboring_Stack_but_Easier_so_Much.isEmpty()) {
        mainboring_Stack_but_Easier_so_Much.push(tempboring_Stack_but_Easier_so_Much.pop());
    }
}

int main() {
    boring_Stack_but_Easier_so_Much unsortedboring_Stack_but_Easier_so_Much;
    unsortedboring_Stack_but_Easier_so_Much.push(3);
    unsortedboring_Stack_but_Easier_so_Much.push(1);
    unsortedboring_Stack_but_Easier_so_Much.push(4);
    unsortedboring_Stack_but_Easier_so_Much.push(2);

    sortboring_Stack_but_Easier_so_Much(unsortedboring_Stack_but_Easier_so_Much);

    cout << "Sorted boring_Stack_but_Easier_so_Much: ";
    while (!unsortedboring_Stack_but_Easier_so_Much.isEmpty()) {
        cout << unsortedboring_Stack_but_Easier_so_Much.pop() << " ";
    }
    cout << endl;

    return 0;
}
