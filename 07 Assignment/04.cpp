#include <iostream>
using namespace std;

int uthao(int gula, int bar) {
    if (bar == 0) return 1;
    return gula * uthao(gula, bar - 1);
}

int main() {
    int gula = 2, bar = 3;
    cout << gula << " ^ " << bar << " = " << uthao(gula, bar) << endl;

    gula = 5, bar = 0;
    cout << gula << " ^ " << bar << " = " << uthao(gula, bar) << endl;
    return 0;
}