#include <iostream>

using namespace std;

int main() {
    int number_gulo[] = {3, 8, 12, 15, 6, 20};
    int koyta_number = 6;

    for (int i = 1; i < koyta_number; i = i + 1) {
        int ei_number_ta_shajabo = number_gulo[i];
        int j = i - 1;

        // Shothik jaigai boshai
        while (j >= 0 && number_gulo[j] > ei_number_ta_shajabo) {
            number_gulo[j + 1] = number_gulo[j];
            j = j - 1;
        }
        number_gulo[j + 1] = ei_number_ta_shajabo;
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