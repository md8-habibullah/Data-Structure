#include <iostream>

using namespace std;

// Simple linear search, easiest for a beginner in this case
int main() {
    int ghure_jawa_number[] = {15, 18, 2, 3, 6, 12};
    int koyta_number = 6;
    int khujar_jonno_number = 3;
    int khuje_paisi_index = -1;

    for (int i = 0; i < koyta_number; i = i + 1) {
        if (ghure_jawa_number[i] == khujar_jonno_number) {
            khuje_paisi_index = i;
            break; // Paichi
        }
    }

    if (khuje_paisi_index != -1) {
        cout << "Index: " << khuje_paisi_index << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}