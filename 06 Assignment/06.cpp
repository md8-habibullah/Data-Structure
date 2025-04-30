#include <iostream>
using namespace std;

const int big = 100;
int line[big], stack[big], up = -1;
int start = 0, endd = 0;

void dhukao(int x) {
    line[endd++] = x;
}

void ultaKoro(int k) {
    for (int i = 0; i < k; i++) stack[++up] = line[start + i];
    for (int i = 0; i < k; i++) line[start + i] = stack[up--];
}

void dekhao() {
    for (int i = start; i < endd; i++) cout << line[i] << " ";
    cout << endl;
}

int main() {
    dhukao(1);
    dhukao(2);
    dhukao(3);
    dhukao(4);
    dhukao(5);
    ultaKoro(3);
    cout << "Modified Queue: ";
    dekhao();
    return 0;
}