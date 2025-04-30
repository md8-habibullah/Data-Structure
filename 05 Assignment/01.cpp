#include <iostream>

using namespace std;

int main() {
    int shob_number[] = {22, 13, 45, 67, 13, 89, 76};
    int koyta_number = 7;
    int khujar_jonno_number = 13;
    int khuje_paisi_index = -1;

    for (int i = 0; i < koyta_number; i = i + 1) {
        if (shob_number[i] == khujar_jonno_number) {
            khuje_paisi_index = i;
            break; // Prothom ta pailei theme jabo
        }
    }

    if (khuje_paisi_index != -1) {
        cout << "Index: " << khuje_paisi_index << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}