#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	ll n, tmp;
	cin >> n;
	pair<ll, ll> p[n];
	rep(i, n) cin >> p[i].first >> p[i].second;
	tmp = 0;
	for(ll i = 1; i < n; i++)
	{
		ll a = p[i].first / p[tmp].second;
		if (p[i].first % p[tmp].second != 0) a++;
		ll b = p[tmp].first / p[i].second;
		if (p[tmp].first % p[i].second != 0) b++;
		if(a > b) 
			tmp = i;
	}
	rep(i, n)
	{
		if (tmp == i) continue;
		ll a = p[i].first / p[tmp].second;
		if (p[i].first % p[tmp].second != 0) a++;
		ll b = p[tmp].first / p[i].second;
		if (p[tmp].first % p[i].second != 0) b++;
		if (a >= b)
		{
			cout << -1 << endl;
			return 0;
		}
	}
	tmp++;
	cout << tmp << endl;
	return 0;
}
