#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	vector<int> a(n), b(n), c(n);
	ll memo_b[n];

	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];
	rep(i, n) cin >> c[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());
	rep(i, n)
	{
		auto Iter2 = lower_bound(c.begin(), c.end(), b[i] + 1);
		memo_b[i] = c.end() - Iter2;
	}
	for (int i = n - 1; i >= 1; i--)
		memo_b[i - 1] += memo_b[i];
	ll ans = 0;
	rep(i, n)
	{
		auto Iter3 = lower_bound(b.begin(), b.end(), a[i] + 1);
		if (Iter3 - b.begin() >= n) continue;
		ans += memo_b[Iter3 - b.begin()];
	}
	cout << ans << endl;
	return 0;
}
