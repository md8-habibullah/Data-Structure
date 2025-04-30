#include <iostream>
using namespace std;

int jogKoro(int number) {
    if (number == 0) return 0;
    return number % 10 + jogKoro(number / 10);
}

int main() {
    int amarNumber = 1234;
    cout << jogKoro(amarNumber) << endl;
    return 0;
}