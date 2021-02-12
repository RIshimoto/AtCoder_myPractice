#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	ll n, m, l;
	ll i, j;
	map<ll, ll> mp;
	
	cin >> n;
	i = 0;
	m = 1;
	while (m <= n)
	{
		mp[m] = i;
		m *= 3;
		i++;
	}
	j = 0;
	l = 1;
	while(l <= n)
	{
		if (mp.count(n - l) == 1)
		{
			cout << mp[n - l] << " " << j << endl;
			return 0;
		}
		j++;
		l *= 5;
	}
	cout << -1 << endl;
	return 0;
}

