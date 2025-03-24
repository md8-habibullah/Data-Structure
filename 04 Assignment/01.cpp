#include <iostream>
#include <string>
using namespace std;

struct Ami_Holam_Stack {
    int items[100];
    int top;

    Ami_Holam_Stack() {
        top = -1;
    }

    void push(int newElement) {
        if (top >= 99) {
            cout << "Ami_Holam_Stack is runninggggggggggggg Overflow !!!" << endl;
            return;
        }
        items[++top] = newElement;
    }

    int pop() {
        if (top < 0) {
            cout << "Ami_Holam_Stack is runningggggggggggg Underflow !!!!!" << endl;
            return -1;
        }
        return items[top--];
    }
};

int main() {
    Ami_Holam_Stack tor_Ami_Holam_Stack_naki_amer;
    tor_Ami_Holam_Stack_naki_amer.push(5);
    tor_Ami_Holam_Stack_naki_amer.push(10);

    int poppedElement = tor_Ami_Holam_Stack_naki_amer.pop();
    cout << "popped: " << poppedElement << endl;
    cout << "Current Ami_Holam_Stack: " << tor_Ami_Holam_Stack_naki_amer.items[tor_Ami_Holam_Stack_naki_amer.top] << endl;

    return 0;
}
