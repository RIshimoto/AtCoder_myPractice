#include <bits/stdc++.h>
#define rep(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	int h[n];

	cin >> h[0];
	rep (i, 1, n)
	{
		cin >> h[i];
		if (h[i - 1] <= h[i] - 1)
			h[i]--;
	}
	rep(i, 1, n)
	{
		if (!(h[i - 1] <= h[i]))
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
