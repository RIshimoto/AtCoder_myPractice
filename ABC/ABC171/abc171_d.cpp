#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n);  i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	int n, q;
	cin >> n;
	ll sum;
	map<ll, ll> mp;
	sum = 0;

	rep(i, n) 
	{
		ll a;
		cin >> a;
		mp[a]++;
		sum += a;
	}
	cin >> q;
	rep (i, q)
	{
		int b, c;
		cin >> b >> c; 
		sum -= b * mp[b];
		sum += c * mp[b];
		mp[c] += mp[b];
		mp[b] = 0;
		cout << sum << endl;
	}
	return 0;
}
