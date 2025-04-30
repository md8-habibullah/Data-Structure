#include <iostream>
using namespace std;

const int maxSize = 100;
int arrData[maxSize], arrPriority[maxSize], total = 0;

void addToQueue(int value, int priority) {
    int i = total - 1;
    while (i >= 0 && arrPriority[i] > priority) {
        arrData[i + 1] = arrData[i];
        arrPriority[i + 1] = arrPriority[i];
        i--;
    }
    arrData[i + 1] = value;
    arrPriority[i + 1] = priority;
    total++;
}

int removeFromQueue() {
    if (total == 0) return -1;
    return arrData[--total];
}

int main() {
    addToQueue(3, 1);
    addToQueue(5, 3);
    addToQueue(2, 2);
    int result = removeFromQueue();
    cout << "Dequeued Element: (" << result << ", High Priority)" << endl;
    return 0;
}