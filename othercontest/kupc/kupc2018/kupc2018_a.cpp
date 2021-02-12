#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans;
	cin >> n;
	int s[n], a[n];

	ans = 0;
	rep(i, n) cin >> s[i];
	rep(i, n) cin >> a[i];
	rep(i, n)
	{
		ans = max(ans, s[i] * a[i]);
	}
	cout << ans << endl;
	return 0;
}
