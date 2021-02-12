#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0;  i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	ll n, cnt;
	cin >> n;
	ll a[n];
	rep(i, n) cin >> a[i];
	cnt = 0;
	for (int i = 1; i < n; i++)
	{
		cnt += max(a[i - 1] - a[i], (ll)0);
		a[i] += max(a[i - 1] - a[i], (ll)0);
	}
	cout << cnt << endl;
	return 0;
}
