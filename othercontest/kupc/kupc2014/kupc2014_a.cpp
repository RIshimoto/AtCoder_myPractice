#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int ans = 0;
	vector<int> a(3), b(3);
	rep(i, 3) cin >> a[i];
	rep(i, 3) cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	rep(i, 3) ans += abs(a[i] - b[i]);
	cout << ans << endl;
	return 0;
}
