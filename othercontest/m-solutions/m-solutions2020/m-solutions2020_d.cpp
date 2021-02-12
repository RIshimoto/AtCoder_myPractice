#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	ll n, money, now;
	cin >> n;
	ll a[n];
	rep(i, n) cin >> a[i];

	money = 1000;
	rep(i, n - 1)
	{
		now = 0;
		if (a[i] < a[i + 1]) 
			now = money / a[i];
		money += now * (a[i + 1] - a[i]);
	}
	cout << money << endl;
	return 0;
}
