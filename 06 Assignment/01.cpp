#include <iostream>
using namespace std;

const int maxSize = 100;
int line[maxSize], shuru = 0, shesh = 0;

void boshao(int item) {
    line[shesh++] = item;
}

int uthao() {
    if (shuru == shesh) return -1;
    return line[shuru++];
}

void dekhao() {
    for (int i = shuru; i < shesh; i++) cout << line[i] << " ";
    cout << endl;
}

int main() {
    boshao(5);
    boshao(10);
    int item = uthao();
    if (item != -1) cout << "Shuru element uthano: " << item << endl;
    else cout << "Line khali" << endl;

    cout << "Ekhon Line: ";
    dekhao();
    return 0;
}