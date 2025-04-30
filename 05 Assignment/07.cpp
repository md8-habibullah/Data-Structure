#include <iostream>

using namespace std;

int main() {
    // Assuming a larger array for the example, like the problem statement
    // int score_gulo[] = { .... lots of scores .... };
    // For simplicity, using the sample input provided:
    int score_gulo[] = {65, 85, 90, 100, 70, 80}; // Add more scores if you want
    int koyta_score = 6; // Change this if you add more scores

    // Simple Bubble Sort (descending order this time)
     for (int i = 0; i < koyta_score - 1; i = i + 1) {
        for (int j = 0; j < koyta_score - i - 1; j = j + 1) {
            // Shudhu ei condition ta ulta (boro theke choto)
            if (score_gulo[j] < score_gulo[j + 1]) {
                int temp_rakhi = score_gulo[j];
                score_gulo[j] = score_gulo[j + 1];
                score_gulo[j + 1] = temp_rakhi;
            }
        }
    }

    cout << "Top 5 Scores: [";
    // Koyta dekhabo (max 5 or total score count if less than 5)
    int koyta_dekhabo = 5;
    if (koyta_score < 5) {
        koyta_dekhabo = koyta_score;
    }

    for (int i = 0; i < koyta_dekhabo; i = i + 1) {
        cout << score_gulo[i];
        if (i < koyta_dekhabo - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}