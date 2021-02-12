#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const int MAX_N = 10010;
const int MAX_A = 1000010;

vector<ll> ft_lcm(MAX_A, 0); 
void f(ll n)
{
	ll x = n;
	for(ll i = 2; i * i <= n; i++)
	{
		ll cnt = 0;
		while (x % i == 0)
		{
			cnt++;
			x /= i;
		}
		ft_lcm[i] = max(ft_lcm[i], cnt);
	}
	if (x != 0)
		ft_lcm[x] = max(ft_lcm[x], 1ll); 
}

signed main(void)
{
	ll n, ans;
	cin >> n;
	for(int i = 0; i <= n; i++)f(i);
	ans = 1;
	rep(i, MAX_A) ans *= pow(i, ft_lcm[i]);
	cout << ans + 1 << endl;;
	return 0;
}
