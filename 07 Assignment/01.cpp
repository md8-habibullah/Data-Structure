#include <iostream>
using namespace std;

int kajerFactorial(int x) {
    if (x == 0) return 1;
    return x * kajerFactorial(x - 1);
}

int main() {
    int amarNumber = 5;
    cout << amarNumber << "! = " << kajerFactorial(amarNumber) << endl;
    return 0;
}