#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll f(ll x)
{
	ll ans = 0;
	while(x)
	{
		ans += x % 10;
		x /= 10;
	}
	return ans;
}

signed main(void)
{
	ll n;
	vector<ll> out;
	cin >> n;
	for(int i = 1; i <= 153; i++)
	{
		ll x = n - i;
		if (f(x) == i)
			out.push_back(x);
	}
	cout << out.size() << endl;
	sort(out.begin(), out.end());
	rep(i, out.size())
		cout << out[i] << endl;
	return 0;
}
