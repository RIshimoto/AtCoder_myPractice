#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0;i < (n); i++)
using namespace std;

signed main(void)
{
	int n, t, e;
	cin >> n >> t >> e;
	int x[n];
	rep(i, n) cin >> x[i];
	rep(i, n)
	{
		int v = x[i];
		while(v <= t + e)
		{
			if (v >= t - e && v <= t + e) 
			{
				cout << i + 1 << endl;
				return 0;
			}
			v += x[i];
		}
	}
	cout << -1 << endl;
	return 0;
}
