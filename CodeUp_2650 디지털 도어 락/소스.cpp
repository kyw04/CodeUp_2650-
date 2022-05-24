#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[3];
	int i, j, result = 1;
	for (int i = 0; i < 3; i++)
		cin >> arr[i];
	
	sort(arr, arr + 3);
	for (i = arr[0]; i > 0; i--)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr[j] % i)
				break;
		}
		if (j == 3)
		{
			result = i;
			break;
		}
	}
	cout << result;
	return 0;
}