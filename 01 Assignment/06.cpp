#include <iostream>
using namespace std;

void removeAll(int arr[9], int size, int idx)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 2)
        {
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            if (arr[i] == 2)
            {
                arr[i] = 0;
            }
        }
    }
}

int main()
{
    int size = 9;

    int source[9] = {10, 2, 30, 2, 50, 2, 2, 0, 0};

    removeAll(source, 7, 2);

    for (int i = 0; i < size; i++)
    {
        cout << source[i] << " ";
    }
    cout << endl;
}