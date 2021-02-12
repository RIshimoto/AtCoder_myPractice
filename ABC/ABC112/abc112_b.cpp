#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n, T, ans;
	cin >> n >> T;
	ans = (int)1e9;
	rep(i, n)
	{
		int c, t;
		cin >> c >> t;
		if (t <= T)
			ans = min(ans, c);
	}
	if (ans == (int)1e9)
		cout << "TLE" << endl;
	else
		cout << ans << endl;
	return 0;
}
