#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

signed main(void)
{
	int n;
	cin >> n;

	ll x, r;
	vector<ll> p(n + 1, 0), q(n + 1, -1e18);
	rep(i, n) 
	{
		int a;
		cin >> a;
		p[i + 1] = a + p[i];
		q[i + 1] = max(q[i], p[i + 1]);
	}
	x = r = 0;
	for (int i = 1; i <= n; i++)
	{
		r = max(r, x + q[i]);
		x += p[i];
	}
	cout << r << endl;
	return 0;
}
