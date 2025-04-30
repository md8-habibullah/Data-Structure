#include <iostream>
using namespace std;

const int bigSize = 100;
int queueArr[bigSize], stackArr[bigSize];
int queueStart = 0, queueEnd = 0, stackTop = -1;

void putInQueue(int item) {
    queueArr[queueEnd++] = item;
}

void ultaQueue() {
    for (int i = queueStart; i < queueEnd; i++) stackArr[++stackTop] = queueArr[i];
    queueEnd = 0;
    while (stackTop != -1) queueArr[queueEnd++] = stackArr[stackTop--];
}

void dekhaoQueue() {
    for (int i = queueStart; i < queueEnd; i++) cout << queueArr[i] << " ";
    cout << endl;
}

int main() {
    putInQueue(1);
    putInQueue(2);
    putInQueue(3);
    putInQueue(4);
    ultaQueue();
    cout << "Reversed Queue: ";
    dekhaoQueue();
    return 0;
}