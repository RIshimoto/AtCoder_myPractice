#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int ans;
	vector<int> a(7), b(7);
	ans = 0;
	rep(i, 7) cin >> a[i];
	rep(i, 7) cin >> b[i];
	rep(i, 7) ans += max(a[i], b[i]);
	cout << ans << endl;
	return 0;
}
