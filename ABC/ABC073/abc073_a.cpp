#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	while(n)
	{
		if (n % 10 == 9)
		{
			cout << "Yes" << endl;
			return 0;
		}
		n /= 10;
	}
	cout << "No" << endl;
	return 0;
}
