#include <iostream>

using namespace std;

int main() {
    int number_gulo[] = {64, 25, 12, 22, 11};
    int koyta_number = 5;

    for (int i = 0; i < koyta_number - 1; i = i + 1) {
        int shobcheye_choto_index = i;
        for (int j = i + 1; j < koyta_number; j = j + 1) {
            if (number_gulo[j] < number_gulo[shobcheye_choto_index]) {
                shobcheye_choto_index = j; // Aro choto paichi
            }
        }

        // Bodlabodli kori choto ta ke shamne ani
        if (shobcheye_choto_index != i) {
           int temp_rakhi = number_gulo[i];
           number_gulo[i] = number_gulo[shobcheye_choto_index];
           number_gulo[shobcheye_choto_index] = temp_rakhi;
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