#include <iostream>
#include <string>
using namespace std;

void ulta(string kotha, int shesh) {
    if (shesh < 0) return;
    cout << kotha[shesh];
    ulta(kotha, shesh - 1);
}

int main() {
    string kotha = "tui beta manus naki bati ?";
    cout << "Reversed String = ";
    ulta(kotha, kotha.size() - 1);
    cout << endl;
    return 0;
}