#include <iostream>
#include <string>
using namespace std;

struct easyStack {
    int items[100];
    int top;

    easyStack() {
        top = -1;
    }

    void ball_push(int newElement) {
        if (top >= 99) {
            cout << "easyStack Overflow!" << endl;
            return;
        }
        items[++top] = newElement;
    }

    int pop() {
        if (top < 0) {
            cout << "easyStack Underflow!" << endl;
            return -1;
        }
        return items[top--];
    }

    void increment(int k, int val) {
        for (int i = 0; i <= min(k - 1, top); ++i) {
            items[i] += val;
        }
    }
};

int main() {
    easyStack increeeeeeeee;
    increeeeeeeee.ball_push(5);
    increeeeeeeee.ball_push(2);
    increeeeeeeee.ball_push(3);

    increeeeeeeee.increment(2, 1);

    for (int i = 0; i <= increeeeeeeee.top; ++i) {
        cout << increeeeeeeee.items[i] << (i == increeeeeeeee.top ? "" : ", ");
    }
    cout << endl;

    int poppedElement = increeeeeeeee.pop();
    cout << "popped: " << poppedElement << endl;

    cout << "Current easyStack: " << increeeeeeeee.items[increeeeeeeee.top] << endl;

    return 0;
}
