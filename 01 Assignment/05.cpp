#include <iostream>
using namespace std;

void remove(int arr[5], int size, int pos)
{

    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size-1] = 0;
}

int main()
{
    int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    remove(arr, size, 2);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
