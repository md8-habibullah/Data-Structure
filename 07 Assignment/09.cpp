#include <iostream>
using namespace std;

int boroKoto(int shob[], int koyta) {
    if(koyta == 1) return shob[0];
    int agerBoro = boroKoto(shob, koyta - 1);
    return shob[koyta - 1] > agerBoro ? shob[koyta - 1] : agerBoro;
}

int main() {
    int shob[] = {2, 9, 4, 7, 1};
    int koyta = 5;
    cout << "Boro Songkha = " << boroKoto(shob, koyta) << endl;
    return 0;
}