#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int n, k;
	cin >> n >> k;
	ll a[n];
	rep(i, n) cin >> a[i];
	ll tmp = a[0];
	for (int i = k; i < n; i++)
	{
		if (tmp < a[i])
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		tmp = a[i - k + 1];
	}
	return 0;
}
