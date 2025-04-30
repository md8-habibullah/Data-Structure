#include <iostream>
using namespace std;

const int gula = 5;
int arr[gula], shuru = -1, shesh = -1;

bool pura() {
    return (shesh + 1) % gula == shuru;
}

bool khali() {
    return shuru == -1;
}

void dhukao(int x) {
    if(pura()) return;
    if(khali()) shuru = 0;
    shesh = (shesh + 1) % gula;
    arr[shesh] = x;
}

void berKoro() {
    if(khali()) return;
    if(shuru == shesh) shuru = shesh = -1;
    else shuru = (shuru + 1) % gula;
}

void dekhao() {
    if(khali()) return;
    int i = shuru;
    while(true) {
        cout << arr[i] << " ";
        if(i == shesh) break;
        i = (i + 1) % gula;
    }
    cout << endl;
}

int main() {
    dhukao(1);
    dhukao(2);
    berKoro();
    dhukao(3);
    berKoro();
    dhukao(4);
    cout << "Current Circular Queue: ";
    dekhao();
    return 0;
}