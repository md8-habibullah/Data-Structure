#include <iostream>

using namespace std;

int main() {
    int number_gulo[] = {29, 10, 14, 37, 14};
    int koyta_number = 5;

    for (int i = 0; i < koyta_number - 1; i = i + 1) {
        for (int j = 0; j < koyta_number - i - 1; j = j + 1) {
            if (number_gulo[j] > number_gulo[j + 1]) {
                // Bodlabodli kori
                int temp_rakhi = number_gulo[j];
                number_gulo[j] = number_gulo[j + 1];
                number_gulo[j + 1] = temp_rakhi;
            }
        }
    }

    cout << "Sorted Array: [";
    for (int i = 0; i < koyta_number; i = i + 1) {
        cout << number_gulo[i];
        if (i < koyta_number - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}