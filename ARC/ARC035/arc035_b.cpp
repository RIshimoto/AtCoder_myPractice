#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const int mod = 1000000007;

ll dp[10010];
signed main(void)
{
	int n;
	cin >> n;
	map<ll, ll> mp;
	vector<ll> s(n);
	ll sum;

	dp[0] = 1;
	for(int i = 1; i <= 10000; i++)
	{
		dp[i] = i * dp[i - 1];
		dp[i] %= mod;
	}
	rep(i, n)
	{
		ll t;
		cin >> t;
		mp[t]++;
		s[i] = t;
	}
	sort(s.begin(), s.end());
	rep(i, n - 1) s[i + 1] += s[i];
	sum = 0;
	rep(i, n) sum += s[i];
	cout << sum << endl;

	ll ans = 1;
	for(auto p: mp)
	{
		auto v = p.second;
		ans *= dp[v];
		ans %= mod;
	}
	cout << ans << endl;
	return 0;
}
