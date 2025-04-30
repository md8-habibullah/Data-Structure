#include <iostream>

using namespace std;

int main() {
    int shajano_number[] = {3, 6, 9, 12, 15, 18};
    int koyta_number = 6;
    int khujar_jonno_number = 12;
    int khuje_paisi_index = -1;

    int prothom_index = 0;
    int shesh_index = koyta_number - 1;

    while (prothom_index <= shesh_index) {
        int majhkhaner_index = prothom_index + (shesh_index - prothom_index) / 2;

        if (shajano_number[majhkhaner_index] == khujar_jonno_number) {
            khuje_paisi_index = majhkhaner_index;
            break; // Paichi, ber hoye jai
        }

        if (shajano_number[majhkhaner_index] < khujar_jonno_number) {
            prothom_index = majhkhaner_index + 1; // Dan dike khuji
        } else {
            shesh_index = majhkhaner_index - 1; // Bam dike khuji
        }
    }

    if (khuje_paisi_index != -1) {
        cout << "Index: " << khuje_paisi_index << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}