#include <iostream>
#define SHIFT 7
using namespace std;

void shiftLeft(int arr[SHIFT], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < SHIFT - n; i++)
    {
        arr[i] = arr[i + n];
    }

    for (int i = 0; i < n; i++)
    {
        arr[SHIFT - n + i] = temp[i];
    }

    for (int i = 0; i < SHIFT; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int k = 3;
    int source[SHIFT] = {245, 536, 47, 5636, 969, 573, 453};
    shiftLeft(source, k);
    return 0;
}