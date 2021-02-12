#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x, y, ans;
	cin >> n;
	int v[n], c[n];
	vector<int> s(n);
	ans = 0;
	rep(i, n) cin >> v[i];
	rep(i, n) cin >> c[i];
	rep(i, n) s[i] = v[i] - c[i];
	rep(i, n)
	{
		if (s[i] > 0) ans += s[i];
	}
	cout << ans << endl;
	return 0;
}
