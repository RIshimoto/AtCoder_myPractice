#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

bool ok[1010];
ll f[1010];
signed main(void)
{
	ll x, n;
	set<ll> st;
	cin >> n;
	x = n;
	for(ll i = 2; i * i <= n; i++)
	{
		ll cnt = 0;
		while (x % i == 0)
		{
			cnt++;
			x /= i;
		}
		for(int j = 1; j <= cnt; j++)
		{
			st.insert(pow(i, j));
			cnt -= j;
		}
	}
	if (x != 1) st.insert(x); 
	ll ans = st.size();
	cout << ans << endl;
	return 0;
}
