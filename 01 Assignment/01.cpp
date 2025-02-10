#include <iostream>
using namespace std;

void shiftLeft (int arr[9], int n){
    for (int i = n-1;i < 7; i++){
        arr[i-n] = arr[i];
    };
    for (int j = 7 -n -1; j < 7; j++){
        arr[j] =0;
    }
    
    for(int i = 0; i < 7; i++){
        cout << arr[i] <<" ";
    };
};

int main()
{
    int k = 3;
    // cin >> k;
    int source[7] = {245,536,47,5636,969,573,453};
    shiftLeft(source,k);
    return 0;
}