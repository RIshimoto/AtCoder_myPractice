#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int a, b, x;
	a = b = 0;
	rep(i, 4)
	{
		cin >> x;
		a += x;
	}
	rep(i, 4)
	{
		cin >> x;
		b += x;
	}
	cout << max(a, b) << endl;
	return 0;
}
