#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<int> v1(4), v2(2);
	int ans;
	ans = 0;
	rep(i, 4) cin >> v1[i];
	rep(i, 2) cin >> v2[i];
	sort(v1.rbegin(), v1.rend());
	sort(v2.rbegin(), v2.rend());
	rep(i, 3) ans += v1[i];
	ans += v2[0];
	cout << ans << endl;
	return 0;
}
