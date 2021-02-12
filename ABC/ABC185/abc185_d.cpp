#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, m, k, now;
	cin >> n >> m;
	vector<int> a(m);
	rep(i, m) cin >> a[i];
	sort(a.begin(), a.end());

	if (m == 0)
	{
		cout << 1 << endl;
		return 0;
	}
	now = 0;
	k = 1e9;
	rep(i, m)
	{
		if (a[i] - now - 1 != 0)
		k = min(k, a[i] - now - 1);
		now = a[i];
	}
	if (now != n)
	k = min(k, n - now);
	if (k == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	now = 0;
	ll ans = 0, tmp;
	rep(i, m)
	{
		tmp = (a[i] - now - 1) / k;
		if ((a[i] - now - 1) % k != 0)
			tmp++;
		ans += tmp;
		now = a[i];
	}
	tmp = (n - now) / k;
	if ((n - now) % k != 0)
		tmp++;
	ans += tmp;
	cout << ans << endl;
	return 0;
}
