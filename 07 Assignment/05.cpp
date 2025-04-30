#include <iostream>
#include <string>
using namespace std;

bool check_pal(string gula, int bame, int dane) {
    if (bame >= dane) return true;
    if (gula[bame] != gula[dane]) return false;
    return check_pal(gula, bame + 1, dane - 1);
}

int main() {
    string kotha = "madam";
    if (check_pal(kotha, 0, kotha.size() - 1)) cout << "The string is a palindrome" << endl;
    else cout << "The string is not a palindrome" << endl;

    kotha = "hello";
    if (check_pal(kotha, 0, kotha.size() - 1)) cout << "A palindrome" << endl;
    else cout << "Not a palindrome" << endl;

    return 0;
}