#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	bool b[n + 1];

	rep(i, n + 1) b[i] = false;
	for (int i = 2; i <= n; i*=2)
	{
		b[i] = true;
	}
	for (int i = n; i > 0; i--)
	{
		if (b[i])
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << n << endl;
	return 0;
}
