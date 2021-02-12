#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<int, int>;

const int mod = 1e9 + 7;
ll exp(int n, int m)
{
	ll tmp;

	tmp = 1;
	rep(i, n)
		tmp = tmp * m % mod;
	return (tmp);
}

signed main(void)
{
	ll n, ans;

	cin >> n;
	ans = 0;
	ans += exp(n, 10) - exp(n, 9) - exp(n, 9) + exp(n, 8);
	ans %= mod;
	ans = (ans + mod) % mod;
	cout << ans << endl;
	return 0;
}
