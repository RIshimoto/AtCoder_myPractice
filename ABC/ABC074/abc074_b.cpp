#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, ans;
	cin >> n >> k;
	int x[n];
	rep(i, n) cin >> x[i];
	ans = 0;
	rep(i, n)
		ans += min(x[i] * 2, abs(k - x[i]) * 2);
	cout << ans << endl;
	return 0;
}
