#include <bits/stdc++.h>
using namespace std;



void bin(int x)
{
	bitset<16> xbit(x);
	cout << xbit << endl;

	string ss = "";
	while(x > 0)
	{
		ss = (x&1 ? "1" : "0") + ss;
		x = x >> 1;
	}

	cout << ss;
}

void mainFunc()
{


	long long int x = 1;
	cout << bitset<32>(x) << endl;
	cout << (int)log2(x);
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