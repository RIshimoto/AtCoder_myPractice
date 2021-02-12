#include <bits/stdc++.h>
#define rep(i, n) for(int i = 1; i <= (n); i++)
using namespace std;

signed main(void)
{
	int n, m;

	cin >> n;
	rep(i, n)
	{
		m = i * 1.08;
		if (n == m)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << ":(" << endl;
	return 0;
}
