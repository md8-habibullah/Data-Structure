#include <iostream>
#define SHIFT 7
using namespace std;

void shiftRight(int arr[9], int n)
{
	int tempArr[n];
	{
		int lp = SHIFT - n;
		for (int i = 0; i < n; i++)
		{
			tempArr[i] = arr[lp];
			lp++;
		}
	}

	for (int j = SHIFT - n - 1; j >= 0; j--)
	{
		arr[j + n] = arr[j];
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = tempArr[i];
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
	shiftRight(source, k);
	return 0;
}