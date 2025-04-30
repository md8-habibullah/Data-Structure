#include <iostream>
using namespace std;

int fibo_ber_koro(int x) {
    if (x <= 1) return x;
    return fibo_ber_koro(x - 1) + fibo_ber_koro(x - 2);
}

int main() {
    int amar_number = 6;
    cout << "Fibo (" << amar_number << ") = " << fibo_ber_koro(amar_number) << endl;
    return 0;
}