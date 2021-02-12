#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.rbegin(), a.rend());
	ll ans = n + a[n - 1] + a[0];
	rep(i, n - 1)
	{
		ans += max(a[i], a[i + 1]);
	}
	cout << ans << endl;
	return 0;
}
