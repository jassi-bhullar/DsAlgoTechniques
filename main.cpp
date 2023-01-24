#include <bits/stdc++.h>
using namespace std;


void mainFunc()
{
	unsigned int x = 2;

	bitset<8> xBit(x);

	xBit = xBit << 2;

	cout << xBit << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// START
	
	mainFunc();
	

	// END

	return 0;
}