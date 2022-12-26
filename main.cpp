#include <bits/stdc++.h>
using namespace std;


bool IsEven(int x)
{
	return (x & 1) == 0;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// START
	
	int x = 11231278;

	if(IsEven(x))
	{
		cout << "Even\n";
	}
	else
	{
		cout << "Odd\n";
	}

	// END

	return 0;
}