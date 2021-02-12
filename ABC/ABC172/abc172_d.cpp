#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;
#define MAX_N 10000010
vector<ll> f(MAX_N, 2); 
signed main(void)
{
	ll n, ans;
	cin >> n;
	f[1] = 1;
	for(ll i = 2; i <= MAX_N; i++)
	{
		for (ll j = 2; i * j <= MAX_N; j++)
			f[i * j]++;
	}
	ans = 0;
	for(int i = 1; i <= n; i++)
	{
		ans += i * f[i];
	}
	cout << ans << endl;
	return 0;
}
