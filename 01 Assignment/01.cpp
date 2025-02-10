#include <iostream>
#define SHIFT 7
using namespace std;

void shiftLeft(int arr[9], int n)
{
    for (int i = n - 1; i < SHIFT; i++)
    {
        arr[i - n] = arr[i];
    };
    for (int j = SHIFT - n - 1; j < 7; j++)
    {
        arr[j] = 0;
    }

    for (int i = 0; i < SHIFT; i++)
    {
        cout << arr[i] << " ";
    };
};

int main()
{
    int k = 3;
    // cin >> k;
    int source[SHIFT] = {245, 536, 47, 5636, 969, 573, 453};
    shiftLeft(source, k);
    return 0;
}

// #include<stdio.h>

// int main ()
// {
//     int  arr[]={10,20,30,40,50,60};

//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i< 3;i++){
//         for(int j=0;j< size-1;j++)
//         {
//             arr[j]=arr[j+1];
//         }
//     }
//     for(int j=0 ;j< size-3 ;j++)
//     {
//         printf("%d ",arr[j]);
//     }
//     arr[size-1]=0;
//     arr[size-2]=0;
//     arr[size-3]=0;
//     printf("%d %d %d",arr[size-1],arr[size-2],arr[size-3]);
//    return 0;
// }
