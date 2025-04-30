#include <iostream>
#include <string>
using namespace std;

bool palinCheck(string shobdo) {
    int suru = 0, shesh = shobdo.size() - 1;
    while (suru < shesh) {
        if (shobdo[suru] != shobdo[shesh]) return false;
        suru++;
        shesh--;
    }
    return true;
}

int main() {
    string amarShobdo = "radar";
    if (palinCheck(amarShobdo)) cout << "Is palindrome: Yes" << endl;
    else cout << "Is palindrome: No" << endl;
    return 0;
}