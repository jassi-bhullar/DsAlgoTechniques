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