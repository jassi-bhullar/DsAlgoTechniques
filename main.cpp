#include <bits/stdc++.h>
using namespace std;


int getNumber(int arr[], int n)
{
	int x, sum;
	int result = 0;

	int bit_size = 32;
	for (int i = 0; i < bit_size; ++i)
	{
		sum = 0;
		x = (1 << i);
		for (int j = 0; j < n; ++j)
		{
			if(arr[j] & x)
			{
				sum++;
			}
		}

		if((sum % 3) != 0)
		{
			result |= x;
		}
	}

	return result;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// START
	
	int arr[] = { 12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The element with single occurrence is " << getNumber(arr, n);
	

	// END

	return 0;
}