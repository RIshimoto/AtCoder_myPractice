#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

vector<ll> imos(100010, 0);
signed main(void)
{
	int n, m;
	int x, y;
	int from, to;

	cin >> n >> m;
	int a[n], b[n], c[n];
	cin >> from;
	rep(i, m - 1)
	{
		cin >> to;
		x = from;
		y = to;
		if (x > y) swap(x, y);
		imos[x]++; imos[y]--;
		from = to;
	}
	rep(i, n) imos[i + 1] += imos[i];
	for(int i = 1; i < n; i++)
		cin >> a[i] >> b[i] >> c[i];
	ll ans = 0;
	for(int i = 1; i < n; i++)
		ans += min(a[i] * imos[i], b[i] * imos[i] + c[i]);
	cout << ans << endl;
	return 0;
}
