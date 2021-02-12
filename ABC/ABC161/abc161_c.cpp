#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	long long n, k, x, y;
	cin >> n >> k;
	
	if (k == 0)
		cout << n << endl;
	else
	{
		x = n % k; 
		y = abs(x - k);
		if (x > y)
			cout << y << endl;
		else
			cout << x << endl;
	}
	return 0;
}
