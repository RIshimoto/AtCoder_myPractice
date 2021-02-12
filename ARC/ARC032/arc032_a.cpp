#include <bits/stdc++.h>
#define rep(i, n) for(int i = 2; i <= (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	n = (n + 1) * n / 2;
	if (n == 1)
	{
		cout << "BOWWOW" << endl;
		return 0;
	}
	rep(i, sqrt(n))
	{
		if (n % i == 0)
		{
			cout << "BOWWOW" << endl;
			return 0;
		}
	}
	cout << "WANWAN" << endl;
	return 0;
}
