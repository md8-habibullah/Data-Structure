#include <iostream>
using namespace std;

void dekha(int shongkha) {
    if(shongkha == 0) return;
    dekha(shongkha / 2);
    cout << shongkha % 2;
}

int main() {
    int amarShongkha = 10;
    cout << "Binary >> " << amarShongkha << " = ";
    if(amarShongkha == 0) cout << "0";
    else dekha(amarShongkha);
    cout << endl;
    return 0;
}